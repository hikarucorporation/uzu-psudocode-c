cmake_minimum_required(VERSION 3.25)
project(UZUReimpl VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_C_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

include(FetchContent)

# ---------------------------------------------------------------------------
# JUCE
# ---------------------------------------------------------------------------
FetchContent_Declare(JUCE
    GIT_REPOSITORY https://github.com/juce-framework/JUCE.git
    GIT_TAG        8.0.6
    GIT_SHALLOW    TRUE
)
FetchContent_MakeAvailable(JUCE)

# ---------------------------------------------------------------------------
# libpd
# ---------------------------------------------------------------------------
# PD_MULTI gives us one independent Pd instance per plugin instance, which is
# what the original UZU does (it calls libpd_set_instance()).
set(PD_MULTI        ON  CACHE BOOL "libpd multi-instance" FORCE)
set(PD_UTILS        OFF CACHE BOOL "libpd utils"          FORCE)
set(PD_EXTRA        ON  CACHE BOOL "libpd extra objects" FORCE)
set(LIBPD_STATIC    ON  CACHE BOOL "libpd static"         FORCE)
set(LIBPD_SHARED    OFF CACHE BOOL "libpd shared"         FORCE)
set(LIBPD_NO_NUMERIC OFF CACHE BOOL "libpd locale"        FORCE)

FetchContent_Declare(libpd
    GIT_REPOSITORY      https://github.com/libpd/libpd.git
    GIT_TAG             master
    GIT_SHALLOW         TRUE
    GIT_SUBMODULES      pure-data
    GIT_SUBMODULES_RECURSE TRUE
)
FetchContent_MakeAvailable(libpd)

# ---------------------------------------------------------------------------
# The four ELSE objects used by the extracted patches.  They are compiled into
# the plugin, so no .pd_linux files have to be installed alongside it.
# ---------------------------------------------------------------------------
add_library(uzu_else STATIC
    "${CMAKE_CURRENT_SOURCE_DIR}/third_party/else/biquads~.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/third_party/else/nyquist~.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/third_party/else/blocksize~.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/third_party/else/loop.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/third_party/else/car2pol~.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/third_party/else/pol2car~.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/third_party/else/round~.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/third_party/else/scale.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/third_party/else/scale~.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/third_party/else/delay~.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/third_party/else/message.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/third_party/else/insert.c"
    "/tmp/opencode/pd-else/Source/Shared/buffer.c"
    "/tmp/opencode/pd-else/Source/Shared/magic.c"
    "/tmp/opencode/pd-else/Source/Shared/nlist.c"
    "/tmp/opencode/pd-else/Source/Shared/elsefile.c"
)
target_link_libraries(uzu_else PUBLIC libpd_static)
target_include_directories(uzu_else PRIVATE
    "${libpd_SOURCE_DIR}/pure-data/src"
    "${libpd_SOURCE_DIR}/libpd_wrapper"
    "/tmp/opencode/pd-else/Source/Shared"
)
if (NOT MSVC)
    target_compile_options(uzu_else PRIVATE -w)
endif()

# ---------------------------------------------------------------------------
# Embedded Pd resources
# ---------------------------------------------------------------------------
juce_add_binary_data(UZUAssets
    SOURCES
        Resources/EBPhaselock.pd
        Resources/abstractions/HipBW.pd
        Resources/abstractions/LopBW.pd
        Resources/abstractions/hann.pd
)

# ---------------------------------------------------------------------------
# Plugin
# ---------------------------------------------------------------------------
juce_add_plugin(UZUReimpl
    COMPANY_NAME                "Hikaru"
    BUNDLE_ID                   "com.hikaru.uzu-reimpl"
    PLUGIN_MANUFACTURER_CODE    Hkru
    PLUGIN_CODE                 UzuR
    PRODUCT_NAME                "UZU Reimpl"
    DESCRIPTION                 "Spectral phaser reimplementation based on the extracted UZU Pd patch"
    IS_SYNTH                    FALSE
    NEEDS_MIDI_INPUT            FALSE
    NEEDS_MIDI_OUTPUT           FALSE
    IS_MIDI_EFFECT              FALSE
    EDITOR_WANTS_KEYBOARD_FOCUS FALSE
    COPY_PLUGIN_AFTER_BUILD     FALSE
    FORMATS                     VST3 Standalone
)

target_sources(UZUReimpl PRIVATE
    Source/PluginProcessor.cpp
    Source/PdEngine.cpp
)

target_compile_definitions(UZUReimpl PRIVATE
    JUCE_WEB_BROWSER=0
    JUCE_USE_CURL=0
    JUCE_VST3_CAN_REPLACE_VST2=0
    JUCE_DISPLAY_SPLASH_SCREEN=0
    JUCE_REPORT_APP_USAGE=0
)

target_link_libraries(UZUReimpl PRIVATE
    juce::juce_audio_utils
    juce::juce_dsp
    juce::juce_recommended_config_flags
    juce::juce_recommended_lto_flags
    juce::juce_recommended_warning_flags
    UZUAssets
    uzu_else
)

# Keep the exact command line handy for debugging libpd/patch issues.
target_compile_options(UZUReimpl PRIVATE
    $<$<CXX_COMPILER_ID:GNU,Clang>:-Wno-unused-parameter>
)
