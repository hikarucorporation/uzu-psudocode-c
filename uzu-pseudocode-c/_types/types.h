/* Tipos ANSI-C exportados de Ghidra para UZU.so */
#ifndef UZU_TYPES_H
#define UZU_TYPES_H

#include <stdint.h>
#include <stddef.h>

typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined3;
typedef unsigned int    undefined4;
typedef unsigned long    undefined7;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    wchar16;
typedef int    wchar_t;
typedef unsigned short    word;
typedef struct $_1 $_1, *P$_1;

struct $_1 { // PlaceHolder Class Structure
};

typedef struct $_14 $_14, *P$_14;

struct $_14 { // PlaceHolder Structure
};

typedef struct $_15 $_15, *P$_15;

struct $_15 { // PlaceHolder Structure
};

typedef struct $_157 $_157, *P$_157;

struct $_157 { // PlaceHolder Structure
};

typedef struct $_159 $_159, *P$_159;

struct $_159 { // PlaceHolder Structure
};

typedef struct $_16 $_16, *P$_16;

struct $_16 { // PlaceHolder Structure
};

typedef struct $_19 $_19, *P$_19;

struct $_19 { // PlaceHolder Structure
};

typedef struct $_25 $_25, *P$_25;

struct $_25 { // PlaceHolder Structure
};

typedef struct $_49 $_49, *P$_49;

struct $_49 { // PlaceHolder Structure
};

typedef struct $_64 $_64, *P$_64;

struct $_64 { // PlaceHolder Structure
};

typedef struct $_65 $_65, *P$_65;

struct $_65 { // PlaceHolder Structure
};

typedef struct $_70 $_70, *P$_70;

struct $_70 { // PlaceHolder Structure
};

typedef struct (anonymous_namespace) (anonymous_namespace), *P(anonymous_namespace);

struct (anonymous_namespace) { // PlaceHolder Class Structure
};

typedef long __blkcnt64_t;

typedef long __blkcnt_t;

typedef long __blksize_t;

typedef long __clock_t;

typedef int __clockid_t;

typedef struct __codecvt_utf8_utf16_base<char16_t> __codecvt_utf8_utf16_base<char16_t>, *P__codecvt_utf8_utf16_base<char16_t>;

struct __codecvt_utf8_utf16_base<char16_t> { // PlaceHolder Structure
};

typedef int (*__compar_fn_t)(void *, void *);

typedef ulong __cpu_mask;

typedef ulong __dev_t;

typedef struct __dirstream __dirstream, *P__dirstream;

struct __dirstream {
};

typedef long __fd_mask;

typedef uint __gid_t;

typedef void *__gnuc_va_list;

typedef ulong __ino64_t;

typedef ulong __ino_t;

typedef int __int32_t;

typedef undefined __invoke_other;

typedef enum __itimer_which {
    ITIMER_REAL=0,
    ITIMER_VIRTUAL=1,
    ITIMER_PROF=2
} __itimer_which;

typedef enum __itimer_which __itimer_which_t;

typedef long __jmp_buf[8];

typedef struct __jmp_buf_tag __jmp_buf_tag, *P__jmp_buf_tag;

typedef struct __sigset_t __sigset_t, *P__sigset_t;

struct __sigset_t {
    ulong __val[16];
};

struct __jmp_buf_tag {
    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    struct __sigset_t __saved_mask;
};

typedef int __key_t;

typedef struct __locale_data __locale_data, *P__locale_data;

struct __locale_data {
};

typedef struct __locale_struct __locale_struct, *P__locale_struct;

struct __locale_struct {
    struct __locale_data *__locales[13];
    ushort *__ctype_b;
    int *__ctype_tolower;
    int *__ctype_toupper;
    char *__names[13];
};

typedef struct __locale_struct *__locale_t;

typedef struct __mbstate_t __mbstate_t, *P__mbstate_t;

struct __mbstate_t { // PlaceHolder Structure
};

typedef uint __mode_t;

typedef struct stat stat, *Pstat;

typedef struct FTW FTW, *PFTW;

typedef int (*__nftw_func_t)(char *, struct stat *, int, struct FTW *);

typedef ulong __nlink_t;

typedef uint __uid_t;

typedef long __off_t;

typedef struct timespec timespec, *Ptimespec;

typedef long __time_t;

struct timespec {
    __time_t tv_sec;
    long tv_nsec;
};

struct FTW {
    int base;
    int level;
};

struct stat {
    __dev_t st_dev;
    __ino_t st_ino;
    __nlink_t st_nlink;
    __mode_t st_mode;
    __uid_t st_uid;
    __gid_t st_gid;
    int __pad0;
    __dev_t st_rdev;
    __off_t st_size;
    __blksize_t st_blksize;
    __blkcnt_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    long __unused[3];
};

typedef undefined __normal_iterator;

typedef long __off64_t;

typedef int __pid_t;

typedef struct __pthread_internal_list __pthread_internal_list, *P__pthread_internal_list;

struct __pthread_internal_list {
    struct __pthread_internal_list *__prev;
    struct __pthread_internal_list *__next;
};

typedef struct __pthread_internal_list __pthread_list_t;

typedef struct __pthread_mutex_s __pthread_mutex_s, *P__pthread_mutex_s;

struct __pthread_mutex_s {
    int __lock;
    uint __count;
    int __owner;
    uint __nusers;
    int __kind;
    int __spins;
    __pthread_list_t __list;
};

typedef ulong __rlim_t;

typedef enum __rlimit_resource {
    RLIMIT_CPU=0,
    RLIMIT_FSIZE=1,
    RLIMIT_DATA=2,
    RLIMIT_STACK=3,
    RLIMIT_CORE=4,
    __RLIMIT_RSS=5,
    __RLIMIT_NPROC=6,
    RLIMIT_NOFILE=7,
    __RLIMIT_MEMLOCK=8,
    __RLIMIT_OFILE=8,
    RLIMIT_AS=9,
    __RLIMIT_LOCKS=10,
    __RLIMIT_SIGPENDING=11,
    __RLIMIT_MSGQUEUE=12,
    __RLIMIT_NICE=13,
    __RLIMIT_RTPRIO=14,
    __RLIMIT_NLIMITS=15,
    __RLIM_NLIMITS=16
} __rlimit_resource;

typedef enum __rlimit_resource __rlimit_resource_t;

typedef struct __shared_ptr<juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>,(__gnu_cxx::_Lock_policy)2> __shared_ptr<juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>,(__gnu_cxx::_Lock_policy)2>, *P__shared_ptr<juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>,(__gnu_cxx::_Lock_policy)2>;

struct __shared_ptr<juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct __shared_ptr<juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>,(__gnu_cxx::_Lock_policy)2> __shared_ptr<juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>,(__gnu_cxx::_Lock_policy)2>, *P__shared_ptr<juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>,(__gnu_cxx::_Lock_policy)2>;

struct __shared_ptr<juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct __shared_ptr<juce::Array<juce::ComponentPeer::ScaleFactorListener*,juce::DummyCriticalSection,0>,(__gnu_cxx::_Lock_policy)2> __shared_ptr<juce::Array<juce::ComponentPeer::ScaleFactorListener*,juce::DummyCriticalSection,0>,(__gnu_cxx::_Lock_policy)2>, *P__shared_ptr<juce::Array<juce::ComponentPeer::ScaleFactorListener*,juce::DummyCriticalSection,0>,(__gnu_cxx::_Lock_policy)2>;

struct __shared_ptr<juce::Array<juce::ComponentPeer::ScaleFactorListener*,juce::DummyCriticalSection,0>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct __shared_ptr<juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>,(__gnu_cxx::_Lock_policy)2> __shared_ptr<juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>,(__gnu_cxx::_Lock_policy)2>, *P__shared_ptr<juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>,(__gnu_cxx::_Lock_policy)2>;

struct __shared_ptr<juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct __shared_ptr<juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>,(__gnu_cxx::_Lock_policy)2> __shared_ptr<juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>,(__gnu_cxx::_Lock_policy)2>, *P__shared_ptr<juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>,(__gnu_cxx::_Lock_policy)2>;

struct __shared_ptr<juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct __shared_ptr<juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>,(__gnu_cxx::_Lock_policy)2> __shared_ptr<juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>,(__gnu_cxx::_Lock_policy)2>, *P__shared_ptr<juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>,(__gnu_cxx::_Lock_policy)2>;

struct __shared_ptr<juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct __shared_ptr<juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>,(__gnu_cxx::_Lock_policy)2> __shared_ptr<juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>,(__gnu_cxx::_Lock_policy)2>, *P__shared_ptr<juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>,(__gnu_cxx::_Lock_policy)2>;

struct __shared_ptr<juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct __shared_ptr<juce::detail::ShapedText::Impl,(__gnu_cxx::_Lock_policy)2> __shared_ptr<juce::detail::ShapedText::Impl,(__gnu_cxx::_Lock_policy)2>, *P__shared_ptr<juce::detail::ShapedText::Impl,(__gnu_cxx::_Lock_policy)2>;

struct __shared_ptr<juce::detail::ShapedText::Impl,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct __shared_ptr<juce::DirectoryIterator,(__gnu_cxx::_Lock_policy)2> __shared_ptr<juce::DirectoryIterator,(__gnu_cxx::_Lock_policy)2>, *P__shared_ptr<juce::DirectoryIterator,(__gnu_cxx::_Lock_policy)2>;

struct __shared_ptr<juce::DirectoryIterator,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct __shared_ptr<std::function<void()>,(__gnu_cxx::_Lock_policy)2> __shared_ptr<std::function<void()>,(__gnu_cxx::_Lock_policy)2>, *P__shared_ptr<std::function<void()>,(__gnu_cxx::_Lock_policy)2>;

struct __shared_ptr<std::function<void()>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef void (*__sighandler_t)(int);

typedef undefined __single_object;

typedef uint __socklen_t;

typedef long __ssize_t;

typedef long __suseconds_t;

typedef struct timezone timezone, *Ptimezone;

typedef struct timezone *__timezone_ptr_t;

struct timezone {
    int tz_minuteswest;
    int tz_dsttime;
};

typedef uint __useconds_t;

typedef struct __va_list_tag __va_list_tag, *P__va_list_tag;

struct __va_list_tag { // PlaceHolder Structure
};

typedef struct _Alloc_node _Alloc_node, *P_Alloc_node;

struct _Alloc_node { // PlaceHolder Structure
};

typedef struct _Any_data _Any_data, *P_Any_data;

struct _Any_data { // PlaceHolder Structure
};

typedef struct _Auto_node _Auto_node, *P_Auto_node;

struct _Auto_node { // PlaceHolder Structure
};

typedef struct _Deque_base<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>> _Deque_base<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>>, *P_Deque_base<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>>;

struct _Deque_base<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>> { // PlaceHolder Class Structure
};

typedef struct _Deque_base<Steinberg::Update::UpdateData,std::allocator<Steinberg::Update::UpdateData>> _Deque_base<Steinberg::Update::UpdateData,std::allocator<Steinberg::Update::UpdateData>>, *P_Deque_base<Steinberg::Update::UpdateData,std::allocator<Steinberg::Update::UpdateData>>;

struct _Deque_base<Steinberg::Update::UpdateData,std::allocator<Steinberg::Update::UpdateData>> { // PlaceHolder Class Structure
};

typedef undefined _Deque_iterator;

typedef struct _FcPattern _FcPattern, *P_FcPattern;

struct _FcPattern { // PlaceHolder Structure
};

typedef struct _Function_base _Function_base, *P_Function_base;

struct _Function_base { // PlaceHolder Structure
};

typedef struct _Function_handler<juce::String(double),juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)::$_13> _Function_handler<juce::String(double),juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)::$_13>, *P_Function_handler<juce::String(double),juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)::$_13>;

struct _Function_handler<juce::String(double),juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)::$_13> { // PlaceHolder Class Structure
};

typedef struct _Function_handler<juce::String(float,int),juce::AudioParameterFloat::AudioParameterFloat(juce::ParameterID_const&,juce::String_const&,juce::NormalisableRange<float>,float,juce::AudioParameterFloatAttributes_const&)::$_5> _Function_handler<juce::String(float,int),juce::AudioParameterFloat::AudioParameterFloat(juce::ParameterID_const&,juce::String_const&,juce::NormalisableRange<float>,float,juce::AudioParameterFloatAttributes_const&)::$_5>, *P_Function_handler<juce::String(float,int),juce::AudioParameterFloat::AudioParameterFloat(juce::ParameterID_const&,juce::String_const&,juce::NormalisableRange<float>,float,juce::AudioParameterFloatAttributes_const&)::$_5>;

struct _Function_handler<juce::String(float,int),juce::AudioParameterFloat::AudioParameterFloat(juce::ParameterID_const&,juce::String_const&,juce::NormalisableRange<float>,float,juce::AudioParameterFloatAttributes_const&)::$_5> { // PlaceHolder Class Structure
};

typedef struct _Hashtable<juce::String,std::pair<juce::String_const,juce::XWindowSystemUtilities::XSetting>,std::allocator<std::pair<juce::String_const,juce::XWindowSystemUtilities::XSetting>>,std::__detail::_Select1st,std::equal_to<juce::String>,std::hash<juce::String>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>> _Hashtable<juce::String,std::pair<juce::String_const,juce::XWindowSystemUtilities::XSetting>,std::allocator<std::pair<juce::String_const,juce::XWindowSystemUtilities::XSetting>>,std::__detail::_Select1st,std::equal_to<juce::String>,std::hash<juce::String>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>, *P_Hashtable<juce::String,std::pair<juce::String_const,juce::XWindowSystemUtilities::XSetting>,std::allocator<std::pair<juce::String_const,juce::XWindowSystemUtilities::XSetting>>,std::__detail::_Select1st,std::equal_to<juce::String>,std::hash<juce::String>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>;

struct _Hashtable<juce::String,std::pair<juce::String_const,juce::XWindowSystemUtilities::XSetting>,std::allocator<std::pair<juce::String_const,juce::XWindowSystemUtilities::XSetting>>,std::__detail::_Select1st,std::equal_to<juce::String>,std::hash<juce::String>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>> { // PlaceHolder Class Structure
};

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef void _IO_lock_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    char *_IO_read_ptr;
    char *_IO_read_end;
    char *_IO_read_base;
    char *_IO_write_base;
    char *_IO_write_ptr;
    char *_IO_write_end;
    char *_IO_buf_base;
    char *_IO_buf_end;
    char *_IO_save_base;
    char *_IO_backup_base;
    char *_IO_save_end;
    struct _IO_marker *_markers;
    struct _IO_FILE *_chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t *_lock;
    __off64_t _offset;
    void *__pad1;
    void *__pad2;
    void *__pad3;
    void *__pad4;
    size_t __pad5;
    int _mode;
    char _unused2[20];
};

struct _IO_marker {
    struct _IO_marker *_next;
    struct _IO_FILE *_sbuf;
    int _pos;
};

typedef undefined _Ios_Iostate;

typedef undefined _Ios_Openmode;

typedef undefined _Ios_Seekdir;

typedef undefined _Iter_comp_iter;

typedef undefined _Iter_equals_val;

typedef undefined _Iter_less_iter;

typedef struct _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3> _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>, *P_Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>;

struct _Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3> { // PlaceHolder Structure
};

typedef struct _List_node_base _List_node_base, *P_List_node_base;

struct _List_node_base { // PlaceHolder Structure
};

typedef undefined _Manager_operation;

typedef struct _Optional_base<juce::Array<juce::AudioChannelSet,juce::DummyCriticalSection,0>,false,false> _Optional_base<juce::Array<juce::AudioChannelSet,juce::DummyCriticalSection,0>,false,false>, *P_Optional_base<juce::Array<juce::AudioChannelSet,juce::DummyCriticalSection,0>,false,false>;

struct _Optional_base<juce::Array<juce::AudioChannelSet,juce::DummyCriticalSection,0>,false,false> { // PlaceHolder Structure
};

typedef struct _Optional_base<juce::AudioProcessor::BusesLayout,false,false> _Optional_base<juce::AudioProcessor::BusesLayout,false,false>, *P_Optional_base<juce::AudioProcessor::BusesLayout,false,false>;

struct _Optional_base<juce::AudioProcessor::BusesLayout,false,false> { // PlaceHolder Structure
};

typedef struct _Optional_base<juce::detail::ShapedText,false,false> _Optional_base<juce::detail::ShapedText,false,false>, *P_Optional_base<juce::detail::ShapedText,false,false>;

struct _Optional_base<juce::detail::ShapedText,false,false> { // PlaceHolder Structure
};

typedef struct _Optional_base<juce::SharedResourcePointer<juce::Timer::TimerThread>,false,false> _Optional_base<juce::SharedResourcePointer<juce::Timer::TimerThread>,false,false>, *P_Optional_base<juce::SharedResourcePointer<juce::Timer::TimerThread>,false,false>;

struct _Optional_base<juce::SharedResourcePointer<juce::Timer::TimerThread>,false,false> { // PlaceHolder Structure
};

typedef struct _pdinstance _pdinstance, *P_pdinstance;

struct _pdinstance { // PlaceHolder Structure
};

typedef struct _Rb_tree<char_const*,std::pair<char_const*const,char16_t*>,std::_Select1st<std::pair<char_const*const,char16_t*>>,std::less<char_const*>,std::allocator<std::pair<char_const*const,char16_t*>>> _Rb_tree<char_const*,std::pair<char_const*const,char16_t*>,std::_Select1st<std::pair<char_const*const,char16_t*>>,std::less<char_const*>,std::allocator<std::pair<char_const*const,char16_t*>>>, *P_Rb_tree<char_const*,std::pair<char_const*const,char16_t*>,std::_Select1st<std::pair<char_const*const,char16_t*>>,std::less<char_const*>,std::allocator<std::pair<char_const*const,char16_t*>>>;

struct _Rb_tree<char_const*,std::pair<char_const*const,char16_t*>,std::_Select1st<std::pair<char_const*const,char16_t*>>,std::less<char_const*>,std::allocator<std::pair<char_const*const,char16_t*>>> { // PlaceHolder Class Structure
};

typedef struct _Rb_tree<char_const,std::pair<char_const,char16_t>,std::_Select1st<std::pair<char_const,char16_t>>,std::less<char_const>,std::allocator<std::pair<char_const,char16_t>>> _Rb_tree<char_const,std::pair<char_const,char16_t>,std::_Select1st<std::pair<char_const,char16_t>>,std::less<char_const>,std::allocator<std::pair<char_const,char16_t>>>, *P_Rb_tree<char_const,std::pair<char_const,char16_t>,std::_Select1st<std::pair<char_const,char16_t>>,std::less<char_const>,std::allocator<std::pair<char_const,char16_t>>>;

struct _Rb_tree<char_const,std::pair<char_const,char16_t>,std::_Select1st<std::pair<char_const,char16_t>>,std::less<char_const>,std::allocator<std::pair<char_const,char16_t>>> { // PlaceHolder Class Structure
};

typedef struct _Rb_tree<int,std::pair<int_const,unsigned_long>,std::_Select1st<std::pair<int_const,unsigned_long>>,std::less<int>,std::allocator<std::pair<int_const,unsigned_long>>> _Rb_tree<int,std::pair<int_const,unsigned_long>,std::_Select1st<std::pair<int_const,unsigned_long>>,std::less<int>,std::allocator<std::pair<int_const,unsigned_long>>>, *P_Rb_tree<int,std::pair<int_const,unsigned_long>,std::_Select1st<std::pair<int_const,unsigned_long>>,std::less<int>,std::allocator<std::pair<int_const,unsigned_long>>>;

struct _Rb_tree<int,std::pair<int_const,unsigned_long>,std::_Select1st<std::pair<int_const,unsigned_long>>,std::less<int>,std::allocator<std::pair<int_const,unsigned_long>>> { // PlaceHolder Class Structure
};

typedef struct _Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>> _Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>>, *P_Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>>;

struct _Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>> { // PlaceHolder Class Structure
};

typedef struct _Rb_tree<juce::String,std::pair<juce::String_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<juce::String_const,juce::AudioProcessorParameter*>>,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>> _Rb_tree<juce::String,std::pair<juce::String_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<juce::String_const,juce::AudioProcessorParameter*>>,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>>, *P_Rb_tree<juce::String,std::pair<juce::String_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<juce::String_const,juce::AudioProcessorParameter*>>,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>>;

struct _Rb_tree<juce::String,std::pair<juce::String_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<juce::String_const,juce::AudioProcessorParameter*>>,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>> { // PlaceHolder Class Structure
};

typedef struct _Rb_tree<juce::StringRef,std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>,std::_Select1st<std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>>,juce::AudioProcessorValueTreeState::StringRefLessThan,std::allocator<std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>>> _Rb_tree<juce::StringRef,std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>,std::_Select1st<std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>>,juce::AudioProcessorValueTreeState::StringRefLessThan,std::allocator<std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>>>, *P_Rb_tree<juce::StringRef,std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>,std::_Select1st<std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>>,juce::AudioProcessorValueTreeState::StringRefLessThan,std::allocator<std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>>>;

struct _Rb_tree<juce::StringRef,std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>,std::_Select1st<std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>>,juce::AudioProcessorValueTreeState::StringRefLessThan,std::allocator<std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>>> { // PlaceHolder Class Structure
};

typedef struct _Rb_tree<short,std::pair<short_const,std::__cxx11::u16string>,std::_Select1st<std::pair<short_const,std::__cxx11::u16string>>,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>> _Rb_tree<short,std::pair<short_const,std::__cxx11::u16string>,std::_Select1st<std::pair<short_const,std::__cxx11::u16string>>,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>, *P_Rb_tree<short,std::pair<short_const,std::__cxx11::u16string>,std::_Select1st<std::pair<short_const,std::__cxx11::u16string>>,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>;

struct _Rb_tree<short,std::pair<short_const,std::__cxx11::u16string>,std::_Select1st<std::pair<short_const,std::__cxx11::u16string>>,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>> { // PlaceHolder Class Structure
};

typedef struct _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>> _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>, *P_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>;

struct _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>> { // PlaceHolder Class Structure
};

typedef struct _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>,std::_Select1st<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>> _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>,std::_Select1st<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>>, *P_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>,std::_Select1st<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>>;

struct _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>,std::_Select1st<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>> { // PlaceHolder Class Structure
};

typedef struct _Rb_tree<std::array<std::byte,16ul>,std::pair<std::array<std::byte,16ul>const,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>>,std::_Select1st<std::pair<std::array<std::byte,16ul>const,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>>>,std::less<std::array<std::byte,16ul>>,std::allocator<std::pair<std::array<std::byte,16ul>const,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>>>> _Rb_tree<std::array<std::byte,16ul>,std::pair<std::array<std::byte,16ul>const,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>>,std::_Select1st<std::pair<std::array<std::byte,16ul>const,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>>>,std::less<std::array<std::byte,16ul>>,std::allocator<std::pair<std::array<std::byte,16ul>const,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>>>>, *P_Rb_tree<std::array<std::byte,16ul>,std::pair<std::array<std::byte,16ul>const,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>>,std::_Select1st<std::pair<std::array<std::byte,16ul>const,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>>>,std::less<std::array<std::byte,16ul>>,std::allocator<std::pair<std::array<std::byte,16ul>const,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>>>>;

struct _Rb_tree<std::array<std::byte,16ul>,std::pair<std::array<std::byte,16ul>const,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>>,std::_Select1st<std::pair<std::array<std::byte,16ul>const,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>>>,std::less<std::array<std::byte,16ul>>,std::allocator<std::pair<std::array<std::byte,16ul>const,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>>>> { // PlaceHolder Class Structure
};

typedef struct _Rb_tree<Steinberg::FUnknown_const*,std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>,std::_Select1st<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>,std::less<Steinberg::FUnknown_const*>,std::allocator<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>> _Rb_tree<Steinberg::FUnknown_const*,std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>,std::_Select1st<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>,std::less<Steinberg::FUnknown_const*>,std::allocator<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>>, *P_Rb_tree<Steinberg::FUnknown_const*,std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>,std::_Select1st<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>,std::less<Steinberg::FUnknown_const*>,std::allocator<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>>;

struct _Rb_tree<Steinberg::FUnknown_const*,std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>,std::_Select1st<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>,std::less<Steinberg::FUnknown_const*>,std::allocator<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>> { // PlaceHolder Class Structure
};

typedef struct _Rb_tree<Steinberg::Linux::IRunLoop*,Steinberg::Linux::IRunLoop*,std::_Identity<Steinberg::Linux::IRunLoop*>,std::less<Steinberg::Linux::IRunLoop*>,std::allocator<Steinberg::Linux::IRunLoop*>> _Rb_tree<Steinberg::Linux::IRunLoop*,Steinberg::Linux::IRunLoop*,std::_Identity<Steinberg::Linux::IRunLoop*>,std::less<Steinberg::Linux::IRunLoop*>,std::allocator<Steinberg::Linux::IRunLoop*>>, *P_Rb_tree<Steinberg::Linux::IRunLoop*,Steinberg::Linux::IRunLoop*,std::_Identity<Steinberg::Linux::IRunLoop*>,std::less<Steinberg::Linux::IRunLoop*>,std::allocator<Steinberg::Linux::IRunLoop*>>;

struct _Rb_tree<Steinberg::Linux::IRunLoop*,Steinberg::Linux::IRunLoop*,std::_Identity<Steinberg::Linux::IRunLoop*>,std::less<Steinberg::Linux::IRunLoop*>,std::allocator<Steinberg::Linux::IRunLoop*>> { // PlaceHolder Class Structure
};

typedef struct _Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>> _Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>, *P_Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>;

struct _Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>> { // PlaceHolder Class Structure
};

typedef struct _Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_long>,std::_Select1st<std::pair<unsigned_int_const,unsigned_long>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_long>>> _Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_long>,std::_Select1st<std::pair<unsigned_int_const,unsigned_long>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_long>>>, *P_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_long>,std::_Select1st<std::pair<unsigned_int_const,unsigned_long>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_long>>>;

struct _Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_long>,std::_Select1st<std::pair<unsigned_int_const,unsigned_long>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_long>>> { // PlaceHolder Class Structure
};

typedef undefined _Rb_tree_const_iterator;

typedef undefined _Rb_tree_iterator;

typedef struct _Rb_tree_node _Rb_tree_node, *P_Rb_tree_node;

struct _Rb_tree_node { // PlaceHolder Structure
};

typedef struct _Rb_tree_node_base _Rb_tree_node_base, *P_Rb_tree_node_base;

struct _Rb_tree_node_base { // PlaceHolder Structure
};

typedef struct _Scoped_node _Scoped_node, *P_Scoped_node;

struct _Scoped_node { // PlaceHolder Structure
};

typedef struct _signal _signal, *P_signal;

struct _signal { // PlaceHolder Structure
};

typedef struct _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> _Sp_counted_base<(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr<juce::CRQLLNF*,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr<juce::CRQLLNF*,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr<juce::CRQLLNF*,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr<juce::CRQLLNF*,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr<juce::detail::MessageThread*,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr<juce::detail::MessageThread*,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr<juce::detail::MessageThread*,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr<juce::detail::MessageThread*,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr<juce::DirectoryIterator*,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr<juce::DirectoryIterator*,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr<juce::DirectoryIterator*,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr<juce::DirectoryIterator*,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr<juce::EventHandler*,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr<juce::EventHandler*,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr<juce::EventHandler*,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr<juce::EventHandler*,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr<juce::Timer::TimerThread*,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr<juce::Timer::TimerThread*,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr<juce::Timer::TimerThread*,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr<juce::Timer::TimerThread*,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<juce::Array<juce::ComboBox::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<juce::Array<juce::ComboBox::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<juce::Array<juce::ComboBox::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<juce::Array<juce::ComboBox::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<juce::detail::ShapedText::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<juce::detail::ShapedText::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<juce::detail::ShapedText::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<juce::detail::ShapedText::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<juce::MouseCursor::SharedCursorHandle,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<juce::MouseCursor::SharedCursorHandle,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<juce::MouseCursor::SharedCursorHandle,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<juce::MouseCursor::SharedCursorHandle,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<std::function<void()>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<std::function<void()>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<std::function<void()>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<std::function<void()>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<std::vector<juce::detail::ShapedGlyph,std::allocator<juce::detail::ShapedGlyph>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<std::vector<juce::detail::ShapedGlyph,std::allocator<juce::detail::ShapedGlyph>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<std::vector<juce::detail::ShapedGlyph,std::allocator<juce::detail::ShapedGlyph>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<std::vector<juce::detail::ShapedGlyph,std::allocator<juce::detail::ShapedGlyph>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::ComboBox::Listener,juce::Array<juce::ComboBox::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComboBox::Listener,juce::Array<juce::ComboBox::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::ComboBox::Listener,juce::Array<juce::ComboBox::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComboBox::Listener,juce::Array<juce::ComboBox::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::ComboBox::Listener,juce::Array<juce::ComboBox::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComboBox::Listener,juce::Array<juce::ComboBox::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::ComboBox::Listener,juce::Array<juce::ComboBox::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComboBox::Listener,juce::Array<juce::ComboBox::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::ScrollBar::Listener,juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ScrollBar::Listener,juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::ScrollBar::Listener,juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ScrollBar::Listener,juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::ScrollBar::Listener,juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ScrollBar::Listener,juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::ScrollBar::Listener,juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ScrollBar::Listener,juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::Thread::Listener,juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Thread::Listener,juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::Thread::Listener,juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Thread::Listener,juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::Thread::Listener,juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Thread::Listener,juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::Thread::Listener,juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Thread::Listener,juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>, *P_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>;

struct _Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> { // PlaceHolder Structure
};

typedef struct _struct_1442 _struct_1442, *P_struct_1442;

struct _struct_1442 {
    __pid_t si_pid;
    __uid_t si_uid;
};

typedef struct _struct_1443 _struct_1443, *P_struct_1443;

typedef union sigval sigval, *Psigval;

typedef union sigval sigval_t;

struct _struct_1443 {
    int si_tid;
    int si_overrun;
    sigval_t si_sigval;
};

union sigval {
    int sival_int;
    void *sival_ptr;
};

typedef struct _struct_1444 _struct_1444, *P_struct_1444;

struct _struct_1444 {
    __pid_t si_pid;
    __uid_t si_uid;
    sigval_t si_sigval;
};

typedef struct _struct_1445 _struct_1445, *P_struct_1445;

struct _struct_1445 {
    __pid_t si_pid;
    __uid_t si_uid;
    int si_status;
    __clock_t si_utime;
    __clock_t si_stime;
};

typedef struct _struct_1446 _struct_1446, *P_struct_1446;

struct _struct_1446 {
    void *si_addr;
};

typedef struct _struct_1447 _struct_1447, *P_struct_1447;

struct _struct_1447 {
    long si_band;
    int si_fd;
};

typedef struct _struct_16 _struct_16, *P_struct_16;

struct _struct_16 {
    int __lock;
    uint __futex;
    ulonglong __total_seq;
    ulonglong __wakeup_seq;
    ulonglong __woken_seq;
    void *__mutex;
    uint __nwaiters;
    uint __broadcast_seq;
};

typedef struct _struct_19 _struct_19, *P_struct_19;

struct _struct_19 {
    int __lock;
    uint __nr_readers;
    uint __readers_wakeup;
    uint __writer_wakeup;
    uint __nr_readers_queued;
    uint __nr_writers_queued;
    int __writer;
    int __shared;
    ulong __pad1;
    ulong __pad2;
    uint __flags;
};

typedef struct _Temporary_value _Temporary_value, *P_Temporary_value;

struct _Temporary_value { // PlaceHolder Structure
};

typedef struct _Tuple_impl<0ul,juce::String,juce::String,juce::Typeface*,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool> _Tuple_impl<0ul,juce::String,juce::String,juce::Typeface*,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool>, *P_Tuple_impl<0ul,juce::String,juce::String,juce::Typeface*,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool>;

struct _Tuple_impl<0ul,juce::String,juce::String,juce::Typeface*,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool> { // PlaceHolder Structure
};

typedef struct _Tuple_impl<3ul,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool> _Tuple_impl<3ul,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool>, *P_Tuple_impl<3ul,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool>;

struct _Tuple_impl<3ul,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool> { // PlaceHolder Class Structure
};

typedef union _union_1441 _union_1441, *P_union_1441;

struct _struct_1442 {
    __pid_t si_pid;
    __uid_t si_uid;
};

struct _struct_1443 {
    int si_tid;
    int si_overrun;
    sigval_t si_sigval;
};

struct _struct_1444 {
    __pid_t si_pid;
    __uid_t si_uid;
    sigval_t si_sigval;
};

struct _struct_1445 {
    __pid_t si_pid;
    __uid_t si_uid;
    int si_status;
    __clock_t si_utime;
    __clock_t si_stime;
};

struct _struct_1446 {
    void *si_addr;
};

struct _struct_1447 {
    long si_band;
    int si_fd;
};

union _union_1441 {
    int _pad[28];
    struct _struct_1442 _kill;
    struct _struct_1443 _timer;
    struct _struct_1444 _rt;
    struct _struct_1445 _sigchld;
    struct _struct_1446 _sigfault;
    struct _struct_1447 _sigpoll;
};

typedef union _union_1457 _union_1457, *P_union_1457;

union _union_1457 {
    __sighandler_t sa_handler;
    void (*sa_sigaction)(int, siginfo_t *, void *);
};

typedef struct _XComposeStatus _XComposeStatus, *P_XComposeStatus;

struct _XComposeStatus { // PlaceHolder Structure
};

typedef struct _XcursorImage _XcursorImage, *P_XcursorImage;

struct _XcursorImage { // PlaceHolder Structure
};

typedef struct _XDisplay _XDisplay, *P_XDisplay;

struct _XDisplay { // PlaceHolder Structure
};

typedef struct _XEvent _XEvent, *P_XEvent;

struct _XEvent { // PlaceHolder Structure
};

typedef struct _XGC _XGC, *P_XGC;

struct _XGC { // PlaceHolder Structure
};

typedef struct _XImage _XImage, *P_XImage;

struct _XImage { // PlaceHolder Structure
};

typedef struct _XRRCrtcInfo _XRRCrtcInfo, *P_XRRCrtcInfo;

struct _XRRCrtcInfo { // PlaceHolder Structure
};

typedef struct _XRROutputInfo _XRROutputInfo, *P_XRROutputInfo;

struct _XRROutputInfo { // PlaceHolder Structure
};

typedef struct _XRRScreenResources _XRRScreenResources, *P_XRRScreenResources;

struct _XRRScreenResources { // PlaceHolder Structure
};

typedef struct AAXClientExtensions AAXClientExtensions, *PAAXClientExtensions;

struct AAXClientExtensions { // PlaceHolder Class Structure
};

typedef struct AbstractFifo AbstractFifo, *PAbstractFifo;

struct AbstractFifo { // PlaceHolder Structure
};

typedef struct accelerator_t accelerator_t, *Paccelerator_t;

struct accelerator_t { // PlaceHolder Structure
};

typedef struct accelerator_t<OT::Layout::GPOS> accelerator_t<OT::Layout::GPOS>, *Paccelerator_t<OT::Layout::GPOS>;

struct accelerator_t<OT::Layout::GPOS> { // PlaceHolder Structure
};

typedef struct accelerator_t<OT::Layout::GSUB> accelerator_t<OT::Layout::GSUB>, *Paccelerator_t<OT::Layout::GSUB>;

struct accelerator_t<OT::Layout::GSUB> { // PlaceHolder Structure
};

typedef struct accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>> accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>, *Paccelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>;

struct accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>> { // PlaceHolder Structure
};

typedef struct accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>> accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>, *Paccelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>;

struct accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>> { // PlaceHolder Structure
};

typedef struct AccessibilityActions AccessibilityActions, *PAccessibilityActions;

struct AccessibilityActions { // PlaceHolder Class Structure
};

typedef undefined AccessibilityActionType;

typedef struct AccessibilityHandler AccessibilityHandler, *PAccessibilityHandler;

struct AccessibilityHandler { // PlaceHolder Structure
};

typedef struct AccessibilityIgnoredComponent AccessibilityIgnoredComponent, *PAccessibilityIgnoredComponent;

struct AccessibilityIgnoredComponent { // PlaceHolder Structure
};

typedef struct AccessibilityRangedNumericValueInterface AccessibilityRangedNumericValueInterface, *PAccessibilityRangedNumericValueInterface;

struct AccessibilityRangedNumericValueInterface { // PlaceHolder Class Structure
};

typedef struct AccessibilityTextInterface AccessibilityTextInterface, *PAccessibilityTextInterface;

struct AccessibilityTextInterface { // PlaceHolder Structure
};

typedef struct AccessibilityTextValueInterface AccessibilityTextValueInterface, *PAccessibilityTextValueInterface;

struct AccessibilityTextValueInterface { // PlaceHolder Class Structure
};

typedef struct AccessibilityValueInterface AccessibilityValueInterface, *PAccessibilityValueInterface;

struct AccessibilityValueInterface { // PlaceHolder Structure
};

typedef struct AddOrRemoveChildAction AddOrRemoveChildAction, *PAddOrRemoveChildAction;

struct AddOrRemoveChildAction { // PlaceHolder Structure
};

typedef struct addrinfo addrinfo, *Paddrinfo;

typedef __socklen_t socklen_t;

typedef struct sockaddr sockaddr, *Psockaddr;

typedef ushort sa_family_t;

struct addrinfo {
    int ai_flags;
    int ai_family;
    int ai_socktype;
    int ai_protocol;
    socklen_t ai_addrlen;
    struct sockaddr *ai_addr;
    char *ai_canonname;
    struct addrinfo *ai_next;
};

struct sockaddr {
    sa_family_t sa_family;
    char sa_data[14];
};

typedef struct Affine2x3 Affine2x3, *PAffine2x3;

struct Affine2x3 { // PlaceHolder Class Structure
};

typedef struct AffineTransform AffineTransform, *PAffineTransform;

struct AffineTransform { // PlaceHolder Structure
};

typedef struct AlertWindow AlertWindow, *PAlertWindow;

struct AlertWindow { // PlaceHolder Structure
};

typedef struct allocator allocator, *Pallocator;

struct allocator { // PlaceHolder Structure
};

typedef struct AlternateSet<OT::Layout::SmallTypes> AlternateSet<OT::Layout::SmallTypes>, *PAlternateSet<OT::Layout::SmallTypes>;

struct AlternateSet<OT::Layout::SmallTypes> { // PlaceHolder Class Structure
};

typedef struct AnchorFormat2 AnchorFormat2, *PAnchorFormat2;

struct AnchorFormat2 { // PlaceHolder Class Structure
};

typedef struct AnchorFormat3 AnchorFormat3, *PAnchorFormat3;

struct AnchorFormat3 { // PlaceHolder Class Structure
};

typedef struct AnchorMatrix AnchorMatrix, *PAnchorMatrix;

struct AnchorMatrix { // PlaceHolder Structure
};

typedef struct AnimatedImageButton AnimatedImageButton, *PAnimatedImageButton;

struct AnimatedImageButton { // PlaceHolder Structure
};

typedef struct AnimatedPosition AnimatedPosition, *PAnimatedPosition;

struct AnimatedPosition { // PlaceHolder Structure
};

typedef struct AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum> AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>, *PAnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>;

struct AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum> { // PlaceHolder Structure
};

typedef struct AnimationTask AnimationTask, *PAnimationTask;

struct AnimationTask { // PlaceHolder Structure
};

typedef struct ApplicationCommandInfo ApplicationCommandInfo, *PApplicationCommandInfo;

struct ApplicationCommandInfo { // PlaceHolder Structure
};

typedef struct ApplicationCommandManager ApplicationCommandManager, *PApplicationCommandManager;

struct ApplicationCommandManager { // PlaceHolder Structure
};

typedef struct ApplicationCommandManagerListener ApplicationCommandManagerListener, *PApplicationCommandManagerListener;

struct ApplicationCommandManagerListener { // PlaceHolder Structure
};

typedef struct ApplicationCommandTarget ApplicationCommandTarget, *PApplicationCommandTarget;

struct ApplicationCommandTarget { // PlaceHolder Class Structure
};

typedef struct arabic_fallback_plan_t arabic_fallback_plan_t, *Parabic_fallback_plan_t;

struct arabic_fallback_plan_t { // PlaceHolder Structure
};

typedef struct arabic_shape_plan_t arabic_shape_plan_t, *Parabic_shape_plan_t;

struct arabic_shape_plan_t { // PlaceHolder Structure
};

typedef struct ArrangementArgs ArrangementArgs, *PArrangementArgs;

struct ArrangementArgs { // PlaceHolder Structure
};

typedef struct Array Array, *PArray;

struct Array { // PlaceHolder Structure
};

typedef struct array array, *Parray;

struct array { // PlaceHolder Structure
};

typedef struct array<AttachedAnimatedButton,2ul> array<AttachedAnimatedButton,2ul>, *Parray<AttachedAnimatedButton,2ul>;

struct array<AttachedAnimatedButton,2ul> { // PlaceHolder Structure
};

typedef struct array<AttachedComboBox,1ul> array<AttachedComboBox,1ul>, *Parray<AttachedComboBox,1ul>;

struct array<AttachedComboBox,1ul> { // PlaceHolder Structure
};

typedef struct array<AttachedDial,5ul> array<AttachedDial,5ul>, *Parray<AttachedDial,5ul>;

struct array<AttachedDial,5ul> { // PlaceHolder Structure
};

typedef struct array<AttachedInfiniteDial,1ul> array<AttachedInfiniteDial,1ul>, *Parray<AttachedInfiniteDial,1ul>;

struct array<AttachedInfiniteDial,1ul> { // PlaceHolder Structure
};

typedef struct array<AttachedSlider,1ul> array<AttachedSlider,1ul>, *Parray<AttachedSlider,1ul>;

struct array<AttachedSlider,1ul> { // PlaceHolder Structure
};

typedef struct Array<char*,juce::DummyCriticalSection,0> Array<char*,juce::DummyCriticalSection,0>, *PArray<char*,juce::DummyCriticalSection,0>;

struct Array<char*,juce::DummyCriticalSection,0> { // PlaceHolder Class Structure
};

typedef struct Array<int,juce::DummyCriticalSection,0> Array<int,juce::DummyCriticalSection,0>, *PArray<int,juce::DummyCriticalSection,0>;

struct Array<int,juce::DummyCriticalSection,0> { // PlaceHolder Structure
};

typedef struct Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> Array<juce::AudioChannelSet,juce::DummyCriticalSection,0>, *PArray<juce::AudioChannelSet,juce::DummyCriticalSection,0>;

struct Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> { // PlaceHolder Structure
};

typedef struct Array<juce::Component*,juce::DummyCriticalSection,0> Array<juce::Component*,juce::DummyCriticalSection,0>, *PArray<juce::Component*,juce::DummyCriticalSection,0>;

struct Array<juce::Component*,juce::DummyCriticalSection,0> { // PlaceHolder Structure
};

typedef struct Array<juce::DeletedAtShutdown*,juce::DummyCriticalSection,0> Array<juce::DeletedAtShutdown*,juce::DummyCriticalSection,0>, *PArray<juce::DeletedAtShutdown*,juce::DummyCriticalSection,0>;

struct Array<juce::DeletedAtShutdown*,juce::DummyCriticalSection,0> { // PlaceHolder Structure
};

typedef struct Array<juce::File,juce::DummyCriticalSection,0> Array<juce::File,juce::DummyCriticalSection,0>, *PArray<juce::File,juce::DummyCriticalSection,0>;

struct Array<juce::File,juce::DummyCriticalSection,0> { // PlaceHolder Structure
};

typedef struct Array<juce::KeyPress,juce::DummyCriticalSection,0> Array<juce::KeyPress,juce::DummyCriticalSection,0>, *PArray<juce::KeyPress,juce::DummyCriticalSection,0>;

struct Array<juce::KeyPress,juce::DummyCriticalSection,0> { // PlaceHolder Structure
};

typedef struct Array<juce::NamedValueSet::NamedValue,juce::DummyCriticalSection,0> Array<juce::NamedValueSet::NamedValue,juce::DummyCriticalSection,0>, *PArray<juce::NamedValueSet::NamedValue,juce::DummyCriticalSection,0>;

struct Array<juce::NamedValueSet::NamedValue,juce::DummyCriticalSection,0> { // PlaceHolder Class Structure
};

typedef struct Array<juce::PopupMenu::HelperClasses::MenuWindow*,juce::DummyCriticalSection,0> Array<juce::PopupMenu::HelperClasses::MenuWindow*,juce::DummyCriticalSection,0>, *PArray<juce::PopupMenu::HelperClasses::MenuWindow*,juce::DummyCriticalSection,0>;

struct Array<juce::PopupMenu::HelperClasses::MenuWindow*,juce::DummyCriticalSection,0> { // PlaceHolder Structure
};

typedef struct Array<juce::Range<int>,juce::DummyCriticalSection,0> Array<juce::Range<int>,juce::DummyCriticalSection,0>, *PArray<juce::Range<int>,juce::DummyCriticalSection,0>;

struct Array<juce::Range<int>,juce::DummyCriticalSection,0> { // PlaceHolder Structure
};

typedef struct Array<juce::String,juce::DummyCriticalSection,0> Array<juce::String,juce::DummyCriticalSection,0>, *PArray<juce::String,juce::DummyCriticalSection,0>;

struct Array<juce::String,juce::DummyCriticalSection,0> { // PlaceHolder Class Structure
};

typedef struct Array<juce::TypefaceCache::CachedFace,juce::DummyCriticalSection,0> Array<juce::TypefaceCache::CachedFace,juce::DummyCriticalSection,0>, *PArray<juce::TypefaceCache::CachedFace,juce::DummyCriticalSection,0>;

struct Array<juce::TypefaceCache::CachedFace,juce::DummyCriticalSection,0> { // PlaceHolder Structure
};

typedef struct Array<juce::UnicodeEntry,juce::DummyCriticalSection,0> Array<juce::UnicodeEntry,juce::DummyCriticalSection,0>, *PArray<juce::UnicodeEntry,juce::DummyCriticalSection,0>;

struct Array<juce::UnicodeEntry,juce::DummyCriticalSection,0> { // PlaceHolder Structure
};

typedef struct Array<juce::var,juce::DummyCriticalSection,0> Array<juce::var,juce::DummyCriticalSection,0>, *PArray<juce::var,juce::DummyCriticalSection,0>;

struct Array<juce::var,juce::DummyCriticalSection,0> { // PlaceHolder Structure
};

typedef struct Array<juce::XEmbedComponent::Pimpl*,juce::DummyCriticalSection,0> Array<juce::XEmbedComponent::Pimpl*,juce::DummyCriticalSection,0>, *PArray<juce::XEmbedComponent::Pimpl*,juce::DummyCriticalSection,0>;

struct Array<juce::XEmbedComponent::Pimpl*,juce::DummyCriticalSection,0> { // PlaceHolder Structure
};

typedef struct array<std::weak_ptr<juce::MouseCursor::SharedCursorHandle>,20ul> array<std::weak_ptr<juce::MouseCursor::SharedCursorHandle>,20ul>, *Parray<std::weak_ptr<juce::MouseCursor::SharedCursorHandle>,20ul>;

struct array<std::weak_ptr<juce::MouseCursor::SharedCursorHandle>,20ul> { // PlaceHolder Structure
};

typedef struct Array<unsigned_int,juce::DummyCriticalSection,0> Array<unsigned_int,juce::DummyCriticalSection,0>, *PArray<unsigned_int,juce::DummyCriticalSection,0>;

struct Array<unsigned_int,juce::DummyCriticalSection,0> { // PlaceHolder Structure
};

typedef struct ArrayBase<juce::AttributedString::Attribute,juce::DummyCriticalSection> ArrayBase<juce::AttributedString::Attribute,juce::DummyCriticalSection>, *PArrayBase<juce::AttributedString::Attribute,juce::DummyCriticalSection>;

struct ArrayBase<juce::AttributedString::Attribute,juce::DummyCriticalSection> { // PlaceHolder Class Structure
};

typedef struct ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection> ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection>, *PArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection>;

struct ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection> { // PlaceHolder Structure
};

typedef struct ArrayBase<juce::AudioProcessor::BusProperties,juce::DummyCriticalSection> ArrayBase<juce::AudioProcessor::BusProperties,juce::DummyCriticalSection>, *PArrayBase<juce::AudioProcessor::BusProperties,juce::DummyCriticalSection>;

struct ArrayBase<juce::AudioProcessor::BusProperties,juce::DummyCriticalSection> { // PlaceHolder Class Structure
};

typedef struct ArrayBase<juce::NamedValueSet::NamedValue,juce::DummyCriticalSection> ArrayBase<juce::NamedValueSet::NamedValue,juce::DummyCriticalSection>, *PArrayBase<juce::NamedValueSet::NamedValue,juce::DummyCriticalSection>;

struct ArrayBase<juce::NamedValueSet::NamedValue,juce::DummyCriticalSection> { // PlaceHolder Structure
};

typedef struct ArrayBase<juce::PopupMenu::Item,juce::DummyCriticalSection> ArrayBase<juce::PopupMenu::Item,juce::DummyCriticalSection>, *PArrayBase<juce::PopupMenu::Item,juce::DummyCriticalSection>;

struct ArrayBase<juce::PopupMenu::Item,juce::DummyCriticalSection> { // PlaceHolder Structure
};

typedef struct ArrayBase<juce::String,juce::DummyCriticalSection> ArrayBase<juce::String,juce::DummyCriticalSection>, *PArrayBase<juce::String,juce::DummyCriticalSection>;

struct ArrayBase<juce::String,juce::DummyCriticalSection> { // PlaceHolder Structure
};

typedef struct ArrayBase<juce::UndoManager::ActionSet*,juce::DummyCriticalSection> ArrayBase<juce::UndoManager::ActionSet*,juce::DummyCriticalSection>, *PArrayBase<juce::UndoManager::ActionSet*,juce::DummyCriticalSection>;

struct ArrayBase<juce::UndoManager::ActionSet*,juce::DummyCriticalSection> { // PlaceHolder Structure
};

typedef struct ArrayBase<juce::var,juce::DummyCriticalSection> ArrayBase<juce::var,juce::DummyCriticalSection>, *PArrayBase<juce::var,juce::DummyCriticalSection>;

struct ArrayBase<juce::var,juce::DummyCriticalSection> { // PlaceHolder Structure
};

typedef struct Arrowhead Arrowhead, *PArrowhead;

struct Arrowhead { // PlaceHolder Structure
};

typedef struct AsyncCallInvoker AsyncCallInvoker, *PAsyncCallInvoker;

struct AsyncCallInvoker { // PlaceHolder Structure
};

typedef struct AsyncUpdater AsyncUpdater, *PAsyncUpdater;

struct AsyncUpdater { // PlaceHolder Structure
};

typedef struct AsyncUpdaterMessage AsyncUpdaterMessage, *PAsyncUpdaterMessage;

struct AsyncUpdaterMessage { // PlaceHolder Structure
};

typedef struct AttachedAnimatedButton AttachedAnimatedButton, *PAttachedAnimatedButton;

struct AttachedAnimatedButton { // PlaceHolder Structure
};

typedef struct AttachedComboBox AttachedComboBox, *PAttachedComboBox;

struct AttachedComboBox { // PlaceHolder Structure
};

typedef struct AttachedDial AttachedDial, *PAttachedDial;

struct AttachedDial { // PlaceHolder Structure
};

typedef struct AttachedEventLoop AttachedEventLoop, *PAttachedEventLoop;

struct AttachedEventLoop { // PlaceHolder Structure
};

typedef struct AttachedInfiniteDial AttachedInfiniteDial, *PAttachedInfiniteDial;

struct AttachedInfiniteDial { // PlaceHolder Structure
};

typedef struct AttachedSlider AttachedSlider, *PAttachedSlider;

struct AttachedSlider { // PlaceHolder Structure
};

typedef struct AttributedString AttributedString, *PAttributedString;

struct AttributedString { // PlaceHolder Structure
};

typedef struct AudioBuffer AudioBuffer, *PAudioBuffer;

struct AudioBuffer { // PlaceHolder Structure
};

typedef struct AudioBuffer<double> AudioBuffer<double>, *PAudioBuffer<double>;

struct AudioBuffer<double> { // PlaceHolder Structure
};

typedef struct AudioBuffer<float> AudioBuffer<float>, *PAudioBuffer<float>;

struct AudioBuffer<float> { // PlaceHolder Structure
};

typedef struct AudioBus AudioBus, *PAudioBus;

struct AudioBus { // PlaceHolder Structure
};

typedef struct AudioBusBuffers AudioBusBuffers, *PAudioBusBuffers;

struct AudioBusBuffers { // PlaceHolder Structure
};

typedef struct AudioChannelSet AudioChannelSet, *PAudioChannelSet;

struct AudioChannelSet { // PlaceHolder Structure
};

typedef struct AudioParameterBool AudioParameterBool, *PAudioParameterBool;

struct AudioParameterBool { // PlaceHolder Structure
};

typedef struct AudioParameterBoolAttributes AudioParameterBoolAttributes, *PAudioParameterBoolAttributes;

struct AudioParameterBoolAttributes { // PlaceHolder Structure
};

typedef struct AudioParameterFloat AudioParameterFloat, *PAudioParameterFloat;

struct AudioParameterFloat { // PlaceHolder Structure
};

typedef struct AudioParameterFloatAttributes AudioParameterFloatAttributes, *PAudioParameterFloatAttributes;

struct AudioParameterFloatAttributes { // PlaceHolder Structure
};

typedef struct AudioParameterInt AudioParameterInt, *PAudioParameterInt;

struct AudioParameterInt { // PlaceHolder Structure
};

typedef struct AudioParameterIntAttributes AudioParameterIntAttributes, *PAudioParameterIntAttributes;

struct AudioParameterIntAttributes { // PlaceHolder Structure
};

typedef struct AudioPlayHead AudioPlayHead, *PAudioPlayHead;

struct AudioPlayHead { // PlaceHolder Structure
};

typedef struct AudioPluginAudioProcessor AudioPluginAudioProcessor, *PAudioPluginAudioProcessor;

struct AudioPluginAudioProcessor { // PlaceHolder Structure
};

typedef struct AudioPluginAudioProcessorEditor AudioPluginAudioProcessorEditor, *PAudioPluginAudioProcessorEditor;

struct AudioPluginAudioProcessorEditor { // PlaceHolder Structure
};

typedef struct AudioProcessor AudioProcessor, *PAudioProcessor;

struct AudioProcessor { // PlaceHolder Structure
};

typedef struct AudioProcessorEditor AudioProcessorEditor, *PAudioProcessorEditor;

struct AudioProcessorEditor { // PlaceHolder Structure
};

typedef struct AudioProcessorEditorHostContext AudioProcessorEditorHostContext, *PAudioProcessorEditorHostContext;

struct AudioProcessorEditorHostContext { // PlaceHolder Structure
};

typedef struct AudioProcessorEditorListener AudioProcessorEditorListener, *PAudioProcessorEditorListener;

struct AudioProcessorEditorListener { // PlaceHolder Structure
};

typedef struct AudioProcessorListener AudioProcessorListener, *PAudioProcessorListener;

struct AudioProcessorListener { // PlaceHolder Structure
};

typedef struct AudioProcessorParameter AudioProcessorParameter, *PAudioProcessorParameter;

struct AudioProcessorParameter { // PlaceHolder Structure
};

typedef struct AudioProcessorParameterGroup AudioProcessorParameterGroup, *PAudioProcessorParameterGroup;

struct AudioProcessorParameterGroup { // PlaceHolder Structure
};

typedef struct AudioProcessorParameterWithID AudioProcessorParameterWithID, *PAudioProcessorParameterWithID;

struct AudioProcessorParameterWithID { // PlaceHolder Structure
};

typedef struct AudioProcessorValueTreeState AudioProcessorValueTreeState, *PAudioProcessorValueTreeState;

struct AudioProcessorValueTreeState { // PlaceHolder Structure
};

typedef struct AudioWorkgroup AudioWorkgroup, *PAudioWorkgroup;

struct AudioWorkgroup { // PlaceHolder Structure
};

typedef undefined auto;

typedef struct avar avar, *Pavar;

struct avar { // PlaceHolder Class Structure
};

typedef undefined Axis;

typedef undefined back_insert_iterator;

typedef struct bad_alloc bad_alloc, *Pbad_alloc;

struct bad_alloc { // PlaceHolder Structure
};

typedef struct Base Base, *PBase;

struct Base { // PlaceHolder Structure
};

typedef undefined basic_string_view;

typedef struct BigInteger BigInteger, *PBigInteger;

struct BigInteger { // PlaceHolder Structure
};

typedef struct BitmapData BitmapData, *PBitmapData;

struct BitmapData { // PlaceHolder Structure
};

typedef struct bitread_working_state bitread_working_state, *Pbitread_working_state;

struct bitread_working_state { // PlaceHolder Structure
};

typedef struct BlockingMessage BlockingMessage, *PBlockingMessage;

struct BlockingMessage { // PlaceHolder Structure
};

typedef struct BorderSize BorderSize, *PBorderSize;

struct BorderSize { // PlaceHolder Structure
};

typedef struct bounds_t bounds_t, *Pbounds_t;

struct bounds_t { // PlaceHolder Structure
};

typedef struct BoundsChangeListener BoundsChangeListener, *PBoundsChangeListener;

struct BoundsChangeListener { // PlaceHolder Structure
};

typedef struct box box, *Pbox;

struct box { // PlaceHolder Structure
};

typedef struct BubbleComponent BubbleComponent, *PBubbleComponent;

struct BubbleComponent { // PlaceHolder Structure
};

typedef struct Buffer Buffer, *PBuffer;

struct Buffer { // PlaceHolder Structure
};

typedef struct BufferStream BufferStream, *PBufferStream;

struct BufferStream { // PlaceHolder Structure
};

typedef struct Bus Bus, *PBus;

struct Bus { // PlaceHolder Structure
};

typedef struct BusesLayout BusesLayout, *PBusesLayout;

struct BusesLayout { // PlaceHolder Structure
};

typedef struct BusesProperties BusesProperties, *PBusesProperties;

struct BusesProperties { // PlaceHolder Structure
};

typedef struct BusInfo BusInfo, *PBusInfo;

struct BusInfo { // PlaceHolder Structure
};

typedef struct BusList BusList, *PBusList;

struct BusList { // PlaceHolder Structure
};

typedef struct BusProperties BusProperties, *PBusProperties;

struct BusProperties { // PlaceHolder Structure
};

typedef struct Button Button, *PButton;

struct Button { // PlaceHolder Structure
};

typedef struct ButtonAccessibilityHandler ButtonAccessibilityHandler, *PButtonAccessibilityHandler;

struct ButtonAccessibilityHandler { // PlaceHolder Structure
};

typedef struct ButtonParameterAttachment ButtonParameterAttachment, *PButtonParameterAttachment;

struct ButtonParameterAttachment { // PlaceHolder Structure
};

typedef struct ButtonValueInterface ButtonValueInterface, *PButtonValueInterface;

struct ButtonValueInterface { // PlaceHolder Structure
};

typedef struct byte_str_ref_t byte_str_ref_t, *Pbyte_str_ref_t;

struct byte_str_ref_t { // PlaceHolder Structure
};

typedef struct ByteOrderStream ByteOrderStream, *PByteOrderStream;

struct ByteOrderStream { // PlaceHolder Structure
};

typedef struct ByteOrderStream<1u> ByteOrderStream<1u>, *PByteOrderStream<1u>;

struct ByteOrderStream<1u> { // PlaceHolder Structure
};

typedef struct c_derived_tbl c_derived_tbl, *Pc_derived_tbl;

struct c_derived_tbl { // PlaceHolder Structure
};

typedef struct CachedFace CachedFace, *PCachedFace;

struct CachedFace { // PlaceHolder Structure
};

typedef struct CachedParamValues CachedParamValues, *PCachedParamValues;

struct CachedParamValues { // PlaceHolder Structure
};

typedef struct CachedTypeface CachedTypeface, *PCachedTypeface;

struct CachedTypeface { // PlaceHolder Structure
};

typedef struct Callable Callable, *PCallable;

struct Callable { // PlaceHolder Structure
};

typedef struct Callback Callback, *PCallback;

struct Callback { // PlaceHolder Structure
};

typedef struct CallbackHelper CallbackHelper, *PCallbackHelper;

struct CallbackHelper { // PlaceHolder Structure
};

typedef struct CallOutBox CallOutBox, *PCallOutBox;

struct CallOutBox { // PlaceHolder Structure
};

typedef undefined CallPrepareToPlay;

typedef struct CallTimersMessage CallTimersMessage, *PCallTimersMessage;

struct CallTimersMessage { // PlaceHolder Structure
};

typedef struct Candidate Candidate, *PCandidate;

struct Candidate { // PlaceHolder Structure
};

typedef struct CaretComponent CaretComponent, *PCaretComponent;

struct CaretComponent { // PlaceHolder Structure
};

typedef struct CaretState CaretState, *PCaretState;

struct CaretState { // PlaceHolder Structure
};

typedef struct Category Category, *PCategory;

struct Category { // PlaceHolder Structure
};

typedef struct CBLC CBLC, *PCBLC;

struct CBLC { // PlaceHolder Class Structure
};

typedef struct cff1_cs_interp_env_t cff1_cs_interp_env_t, *Pcff1_cs_interp_env_t;

struct cff1_cs_interp_env_t { // PlaceHolder Structure
};

typedef struct cff1_extents_param_t cff1_extents_param_t, *Pcff1_extents_param_t;

struct cff1_extents_param_t { // PlaceHolder Structure
};

typedef struct cff1_font_dict_values_t cff1_font_dict_values_t, *Pcff1_font_dict_values_t;

struct cff1_font_dict_values_t { // PlaceHolder Structure
};

typedef struct cff1_path_param_t cff1_path_param_t, *Pcff1_path_param_t;

struct cff1_path_param_t { // PlaceHolder Structure
};

typedef struct cff1_private_dict_values_base_t cff1_private_dict_values_base_t, *Pcff1_private_dict_values_base_t;

struct cff1_private_dict_values_base_t { // PlaceHolder Structure
};

typedef struct CFF1FDSelect CFF1FDSelect, *PCFF1FDSelect;

struct CFF1FDSelect { // PlaceHolder Structure
};

typedef struct cff2_cs_interp_env_t cff2_cs_interp_env_t, *Pcff2_cs_interp_env_t;

struct cff2_cs_interp_env_t { // PlaceHolder Structure
};

typedef struct cff2_cs_interp_env_t<CFF::number_t> cff2_cs_interp_env_t<CFF::number_t>, *Pcff2_cs_interp_env_t<CFF::number_t>;

struct cff2_cs_interp_env_t<CFF::number_t> { // PlaceHolder Class Structure
};

typedef struct cff2_extents_param_t cff2_extents_param_t, *Pcff2_extents_param_t;

struct cff2_extents_param_t { // PlaceHolder Structure
};

typedef struct cff2_font_dict_values_t cff2_font_dict_values_t, *Pcff2_font_dict_values_t;

struct cff2_font_dict_values_t { // PlaceHolder Structure
};

typedef struct cff2_path_param_t cff2_path_param_t, *Pcff2_path_param_t;

struct cff2_path_param_t { // PlaceHolder Structure
};

typedef struct cff2_private_dict_values_base_t cff2_private_dict_values_base_t, *Pcff2_private_dict_values_base_t;

struct cff2_private_dict_values_base_t { // PlaceHolder Structure
};

typedef struct CFF2FDSelect CFF2FDSelect, *PCFF2FDSelect;

struct CFF2FDSelect { // PlaceHolder Class Structure
};

typedef struct CFFIndex<OT::IntType<unsigned_int,4u>> CFFIndex<OT::IntType<unsigned_int,4u>>, *PCFFIndex<OT::IntType<unsigned_int,4u>>;

struct CFFIndex<OT::IntType<unsigned_int,4u>> { // PlaceHolder Class Structure
};

typedef struct CFFIndex<OT::IntType<unsigned_short,2u>> CFFIndex<OT::IntType<unsigned_short,2u>>, *PCFFIndex<OT::IntType<unsigned_short,2u>>;

struct CFFIndex<OT::IntType<unsigned_short,2u>> { // PlaceHolder Class Structure
};

typedef struct Chain Chain, *PChain;

struct Chain { // PlaceHolder Structure
};

typedef struct Chain<AAT::ExtendedTypes> Chain<AAT::ExtendedTypes>, *PChain<AAT::ExtendedTypes>;

struct Chain<AAT::ExtendedTypes> { // PlaceHolder Class Structure
};

typedef struct Chain<AAT::ObsoleteTypes> Chain<AAT::ObsoleteTypes>, *PChain<AAT::ObsoleteTypes>;

struct Chain<AAT::ObsoleteTypes> { // PlaceHolder Class Structure
};

typedef struct ChainContext ChainContext, *PChainContext;

struct ChainContext { // PlaceHolder Class Structure
};

typedef struct ChainContextApplyLookupContext ChainContextApplyLookupContext, *PChainContextApplyLookupContext;

struct ChainContextApplyLookupContext { // PlaceHolder Structure
};

typedef struct ChainContextFormat1_4<OT::Layout::SmallTypes> ChainContextFormat1_4<OT::Layout::SmallTypes>, *PChainContextFormat1_4<OT::Layout::SmallTypes>;

struct ChainContextFormat1_4<OT::Layout::SmallTypes> { // PlaceHolder Class Structure
};

typedef struct ChainContextFormat2_5<OT::Layout::SmallTypes> ChainContextFormat2_5<OT::Layout::SmallTypes>, *PChainContextFormat2_5<OT::Layout::SmallTypes>;

struct ChainContextFormat2_5<OT::Layout::SmallTypes> { // PlaceHolder Class Structure
};

typedef struct ChainContextFormat3 ChainContextFormat3, *PChainContextFormat3;

struct ChainContextFormat3 { // PlaceHolder Class Structure
};

typedef struct ChainRule<OT::Layout::SmallTypes> ChainRule<OT::Layout::SmallTypes>, *PChainRule<OT::Layout::SmallTypes>;

struct ChainRule<OT::Layout::SmallTypes> { // PlaceHolder Class Structure
};

typedef struct ChainRuleSet ChainRuleSet, *PChainRuleSet;

struct ChainRuleSet { // PlaceHolder Structure
};

typedef struct ChainRuleSet<OT::Layout::SmallTypes> ChainRuleSet<OT::Layout::SmallTypes>, *PChainRuleSet<OT::Layout::SmallTypes>;

struct ChainRuleSet<OT::Layout::SmallTypes> { // PlaceHolder Class Structure
};

typedef struct ChangeBroadcaster ChangeBroadcaster, *PChangeBroadcaster;

struct ChangeBroadcaster { // PlaceHolder Structure
};

typedef struct ChangeBroadcasterCallback ChangeBroadcasterCallback, *PChangeBroadcasterCallback;

struct ChangeBroadcasterCallback { // PlaceHolder Structure
};

typedef struct ChangeDetails ChangeDetails, *PChangeDetails;

struct ChangeDetails { // PlaceHolder Structure
};

typedef struct ChannelMapping ChannelMapping, *PChannelMapping;

struct ChannelMapping { // PlaceHolder Class Structure
};

typedef undefined ChannelType;

typedef undefined CharGroup;

typedef undefined CharPointer_ASCII;

typedef undefined CharPointer_UTF16;

typedef undefined CharPointer_UTF32;

typedef undefined CharPointer_UTF8;

typedef struct Charset Charset, *PCharset;

struct Charset { // PlaceHolder Class Structure
};

typedef struct ChildProcess ChildProcess, *PChildProcess;

struct ChildProcess { // PlaceHolder Structure
};

typedef struct chunk_t chunk_t, *Pchunk_t;

struct chunk_t { // PlaceHolder Structure
};

typedef undefined ChunkType;

typedef struct ClassDef ClassDef, *PClassDef;

struct ClassDef { // PlaceHolder Class Structure
};

typedef struct ClassEntry ClassEntry, *PClassEntry;

struct ClassEntry { // PlaceHolder Structure
};

typedef struct ClassInfo ClassInfo, *PClassInfo;

struct ClassInfo { // PlaceHolder Structure
};

typedef struct ClientBufferMapper ClientBufferMapper, *PClientBufferMapper;

struct ClientBufferMapper { // PlaceHolder Structure
};

typedef struct ClientBufferMapperData<double> ClientBufferMapperData<double>, *PClientBufferMapperData<double>;

struct ClientBufferMapperData<double> { // PlaceHolder Class Structure
};

typedef struct ClientBufferMapperData<float> ClientBufferMapperData<float>, *PClientBufferMapperData<float>;

struct ClientBufferMapperData<float> { // PlaceHolder Class Structure
};

typedef struct ClientRemappedBuffer<double> ClientRemappedBuffer<double>, *PClientRemappedBuffer<double>;

struct ClientRemappedBuffer<double> { // PlaceHolder Structure
};

typedef struct ClientRemappedBuffer<float> ClientRemappedBuffer<float>, *PClientRemappedBuffer<float>;

struct ClientRemappedBuffer<float> { // PlaceHolder Structure
};

typedef struct ClipList ClipList, *PClipList;

struct ClipList { // PlaceHolder Class Structure
};

typedef __clock_t clock_t;

typedef __clockid_t clockid_t;

typedef struct cmap cmap, *Pcmap;

struct cmap { // PlaceHolder Class Structure
};

typedef struct CmapSubtable CmapSubtable, *PCmapSubtable;

struct CmapSubtable { // PlaceHolder Class Structure
};

typedef struct code code, *Pcode;

struct code { // PlaceHolder Structure
};

typedef struct code_pair_t code_pair_t, *Pcode_pair_t;

struct code_pair_t { // PlaceHolder Structure
};

typedef struct codecvt codecvt, *Pcodecvt;

struct codecvt { // PlaceHolder Structure
};

typedef struct codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0> codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>, *Pcodecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>;

struct codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0> { // PlaceHolder Structure
};

typedef undefined codetype;

typedef struct ColorStop ColorStop, *PColorStop;

struct ColorStop { // PlaceHolder Class Structure
};

typedef struct Colour Colour, *PColour;

struct Colour { // PlaceHolder Structure
};

typedef struct ColourGradient ColourGradient, *PColourGradient;

struct ColourGradient { // PlaceHolder Structure
};

typedef struct ColourPoint ColourPoint, *PColourPoint;

struct ColourPoint { // PlaceHolder Structure
};

typedef struct ColourSetting ColourSetting, *PColourSetting;

struct ColourSetting { // PlaceHolder Structure
};

typedef struct COLR COLR, *PCOLR;

struct COLR { // PlaceHolder Class Structure
};

typedef struct ComboBox ComboBox, *PComboBox;

struct ComboBox { // PlaceHolder Structure
};

typedef struct ComboBoxAccessibilityHandler ComboBoxAccessibilityHandler, *PComboBoxAccessibilityHandler;

struct ComboBoxAccessibilityHandler { // PlaceHolder Structure
};

typedef struct ComboBoxParameterAttachment ComboBoxParameterAttachment, *PComboBoxParameterAttachment;

struct ComboBoxParameterAttachment { // PlaceHolder Structure
};

typedef struct ComboBoxValueInterface ComboBoxValueInterface, *PComboBoxValueInterface;

struct ComboBoxValueInterface { // PlaceHolder Structure
};

typedef struct CommandMessage CommandMessage, *PCommandMessage;

struct CommandMessage { // PlaceHolder Structure
};

typedef undefined CompareMode;

typedef struct Compatibility Compatibility, *PCompatibility;

struct Compatibility { // PlaceHolder Structure
};

typedef struct Component Component, *PComponent;

struct Component { // PlaceHolder Structure
};

typedef struct ComponentAnimator ComponentAnimator, *PComponentAnimator;

struct ComponentAnimator { // PlaceHolder Structure
};

typedef struct ComponentBase ComponentBase, *PComponentBase;

struct ComponentBase { // PlaceHolder Structure
};

typedef struct ComponentBoundsConstrainer ComponentBoundsConstrainer, *PComponentBoundsConstrainer;

struct ComponentBoundsConstrainer { // PlaceHolder Structure
};

typedef struct ComponentDragger ComponentDragger, *PComponentDragger;

struct ComponentDragger { // PlaceHolder Structure
};

typedef struct ComponentHelpers ComponentHelpers, *PComponentHelpers;

struct ComponentHelpers { // PlaceHolder Class Structure
};

typedef struct ComponentListener ComponentListener, *PComponentListener;

struct ComponentListener { // PlaceHolder Structure
};

typedef struct ComponentMovementWatcher ComponentMovementWatcher, *PComponentMovementWatcher;

struct ComponentMovementWatcher { // PlaceHolder Structure
};

typedef struct ComponentPeer ComponentPeer, *PComponentPeer;

struct ComponentPeer { // PlaceHolder Structure
};

typedef struct ComponentRestarter ComponentRestarter, *PComponentRestarter;

struct ComponentRestarter { // PlaceHolder Structure
};

typedef struct ComponentTraverser ComponentTraverser, *PComponentTraverser;

struct ComponentTraverser { // PlaceHolder Structure
};

typedef struct ComponentWithWeakReference ComponentWithWeakReference, *PComponentWithWeakReference;

struct ComponentWithWeakReference { // PlaceHolder Structure
};

typedef struct compression_state compression_state, *Pcompression_state;

struct compression_state { // PlaceHolder Structure
};

typedef struct ConcertinaPanel ConcertinaPanel, *PConcertinaPanel;

struct ConcertinaPanel { // PlaceHolder Structure
};

typedef struct Concrete<juce::ImagePixelData::getNativeExtensions()::Wrapped> Concrete<juce::ImagePixelData::getNativeExtensions()::Wrapped>, *PConcrete<juce::ImagePixelData::getNativeExtensions()::Wrapped>;

struct Concrete<juce::ImagePixelData::getNativeExtensions()::Wrapped> { // PlaceHolder Structure
};

typedef struct Concrete<juce::SubsectionPixelData::getNativeExtensions()::Wrapped> Concrete<juce::SubsectionPixelData::getNativeExtensions()::Wrapped>, *PConcrete<juce::SubsectionPixelData::getNativeExtensions()::Wrapped>;

struct Concrete<juce::SubsectionPixelData::getNativeExtensions()::Wrapped> { // PlaceHolder Structure
};

typedef struct Condition Condition, *PCondition;

struct Condition { // PlaceHolder Class Structure
};

typedef struct condition_variable condition_variable, *Pcondition_variable;

struct condition_variable { // PlaceHolder Structure
};

typedef struct ConstString ConstString, *PConstString;

struct ConstString { // PlaceHolder Structure
};

typedef struct ConstStringTable ConstStringTable, *PConstStringTable;

struct ConstStringTable { // PlaceHolder Structure
};

typedef struct ContentWrapperComponent ContentWrapperComponent, *PContentWrapperComponent;

struct ContentWrapperComponent { // PlaceHolder Structure
};

typedef struct Context Context, *PContext;

struct Context { // PlaceHolder Class Structure
};

typedef struct ContextApplyLookupContext ContextApplyLookupContext, *PContextApplyLookupContext;

struct ContextApplyLookupContext { // PlaceHolder Structure
};

typedef struct ContextFormat1_4<OT::Layout::SmallTypes> ContextFormat1_4<OT::Layout::SmallTypes>, *PContextFormat1_4<OT::Layout::SmallTypes>;

struct ContextFormat1_4<OT::Layout::SmallTypes> { // PlaceHolder Class Structure
};

typedef struct ContextFormat2_5<OT::Layout::SmallTypes> ContextFormat2_5<OT::Layout::SmallTypes>, *PContextFormat2_5<OT::Layout::SmallTypes>;

struct ContextFormat2_5<OT::Layout::SmallTypes> { // PlaceHolder Class Structure
};

typedef struct ContextFormat3 ContextFormat3, *PContextFormat3;

struct ContextFormat3 { // PlaceHolder Class Structure
};

typedef struct ContextualSubtable<AAT::ObsoleteTypes> ContextualSubtable<AAT::ObsoleteTypes>, *PContextualSubtable<AAT::ObsoleteTypes>;

struct ContextualSubtable<AAT::ObsoleteTypes> { // PlaceHolder Class Structure
};

typedef struct contour_point_vector_t contour_point_vector_t, *Pcontour_point_vector_t;

struct contour_point_vector_t { // PlaceHolder Structure
};

typedef struct Coverage Coverage, *PCoverage;

struct Coverage { // PlaceHolder Structure
};

typedef struct CPAL CPAL, *PCPAL;

struct CPAL { // PlaceHolder Class Structure
};

typedef struct CPluginView CPluginView, *PCPluginView;

struct CPluginView { // PlaceHolder Structure
};

typedef struct cpu_set_t cpu_set_t, *Pcpu_set_t;

struct cpu_set_t {
    __cpu_mask __bits[16];
};

typedef undefined createSystemFallback;

typedef struct CriticalSection CriticalSection, *PCriticalSection;

struct CriticalSection { // PlaceHolder Structure
};

typedef struct CRQLLNF CRQLLNF, *PCRQLLNF;

struct CRQLLNF { // PlaceHolder Structure
};

typedef struct cs_opset_t<CFF::number_t,cff2_cs_opset_path_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_path_param_t,cff2_path_procs_path_t> cs_opset_t<CFF::number_t,cff2_cs_opset_path_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_path_param_t,cff2_path_procs_path_t>, *Pcs_opset_t<CFF::number_t,cff2_cs_opset_path_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_path_param_t,cff2_path_procs_path_t>;

struct cs_opset_t<CFF::number_t,cff2_cs_opset_path_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_path_param_t,cff2_path_procs_path_t> { // PlaceHolder Class Structure
};

typedef struct ct_data_s ct_data_s, *Pct_data_s;

struct ct_data_s { // PlaceHolder Structure
};

typedef struct CurrentThreadHolder CurrentThreadHolder, *PCurrentThreadHolder;

struct CurrentThreadHolder { // PlaceHolder Structure
};

typedef struct CursivePosFormat1 CursivePosFormat1, *PCursivePosFormat1;

struct CursivePosFormat1 { // PlaceHolder Class Structure
};

typedef struct CustomComboBox CustomComboBox, *PCustomComboBox;

struct CustomComboBox { // PlaceHolder Structure
};

typedef struct CustomComponent CustomComponent, *PCustomComponent;

struct CustomComponent { // PlaceHolder Structure
};

typedef struct CustomDial CustomDial, *PCustomDial;

struct CustomDial { // PlaceHolder Structure
};

typedef struct CustomSlider CustomSlider, *PCustomSlider;

struct CustomSlider { // PlaceHolder Structure
};

typedef struct d_derived_tbl d_derived_tbl, *Pd_derived_tbl;

struct d_derived_tbl { // PlaceHolder Structure
};

typedef struct default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter> default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>, *Pdefault_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>;

struct default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter> { // PlaceHolder Structure
};

typedef struct default_delete<juce::DirectoryIterator> default_delete<juce::DirectoryIterator>, *Pdefault_delete<juce::DirectoryIterator>;

struct default_delete<juce::DirectoryIterator> { // PlaceHolder Structure
};

typedef struct default_delete<juce::ModalComponentManager::ModalItem> default_delete<juce::ModalComponentManager::ModalItem>, *Pdefault_delete<juce::ModalComponentManager::ModalItem>;

struct default_delete<juce::ModalComponentManager::ModalItem> { // PlaceHolder Structure
};

typedef struct default_delete<juce::RenderingHelpers::SoftwareRendererSavedState> default_delete<juce::RenderingHelpers::SoftwareRendererSavedState>, *Pdefault_delete<juce::RenderingHelpers::SoftwareRendererSavedState>;

struct default_delete<juce::RenderingHelpers::SoftwareRendererSavedState> { // PlaceHolder Structure
};

typedef struct default_delete<juce::TextEditor::ParagraphStorage> default_delete<juce::TextEditor::ParagraphStorage>, *Pdefault_delete<juce::TextEditor::ParagraphStorage>;

struct default_delete<juce::TextEditor::ParagraphStorage> { // PlaceHolder Structure
};

typedef struct default_delete<juce::TextLayout::Line> default_delete<juce::TextLayout::Line>, *Pdefault_delete<juce::TextLayout::Line>;

struct default_delete<juce::TextLayout::Line> { // PlaceHolder Structure
};

typedef struct default_delete<juce::XWindowSystemUtilities::XSettings> default_delete<juce::XWindowSystemUtilities::XSettings>, *Pdefault_delete<juce::XWindowSystemUtilities::XSettings>;

struct default_delete<juce::XWindowSystemUtilities::XSettings> { // PlaceHolder Structure
};

typedef struct DefaultFontInfo DefaultFontInfo, *PDefaultFontInfo;

struct DefaultFontInfo { // PlaceHolder Structure
};

typedef struct DeferedChange DeferedChange, *PDeferedChange;

struct DeferedChange { // PlaceHolder Structure
};

typedef struct DeletedAtShutdown DeletedAtShutdown, *PDeletedAtShutdown;

struct DeletedAtShutdown { // PlaceHolder Structure
};

typedef struct Deleter Deleter, *PDeleter;

struct Deleter { // PlaceHolder Structure
};

typedef struct DeltaSetIndexMap DeltaSetIndexMap, *PDeltaSetIndexMap;

struct DeltaSetIndexMap { // PlaceHolder Class Structure
};

typedef struct deque<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>> deque<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>>, *Pdeque<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>>;

struct deque<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>> { // PlaceHolder Structure
};

typedef struct deque<Steinberg::Update::UpdateData,std::allocator<Steinberg::Update::UpdateData>> deque<Steinberg::Update::UpdateData,std::allocator<Steinberg::Update::UpdateData>>, *Pdeque<Steinberg::Update::UpdateData,std::allocator<Steinberg::Update::UpdateData>>;

struct deque<Steinberg::Update::UpdateData,std::allocator<Steinberg::Update::UpdateData>> { // PlaceHolder Class Structure
};

typedef struct Desktop Desktop, *PDesktop;

struct Desktop { // PlaceHolder Structure
};

typedef struct Device Device, *PDevice;

struct Device { // PlaceHolder Class Structure
};

typedef struct dict_interpreter_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>,CFF::interp_env_t<CFF::number_t>> dict_interpreter_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>,CFF::interp_env_t<CFF::number_t>>, *Pdict_interpreter_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>,CFF::interp_env_t<CFF::number_t>>;

struct dict_interpreter_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>,CFF::interp_env_t<CFF::number_t>> { // PlaceHolder Class Structure
};

typedef struct dict_val_t dict_val_t, *Pdict_val_t;

struct dict_val_t { // PlaceHolder Structure
};

typedef struct __dirstream DIR;

typedef struct DirectoryContentsDisplayComponent DirectoryContentsDisplayComponent, *PDirectoryContentsDisplayComponent;

struct DirectoryContentsDisplayComponent { // PlaceHolder Structure
};

typedef struct DirectoryEntry DirectoryEntry, *PDirectoryEntry;

struct DirectoryEntry { // PlaceHolder Structure
};

typedef struct DirectoryIterator DirectoryIterator, *PDirectoryIterator;

struct DirectoryIterator { // PlaceHolder Structure
};

typedef struct dirent dirent, *Pdirent;

struct dirent {
    __ino_t d_ino;
    __off_t d_off;
    ushort d_reclen;
    uchar d_type;
    char d_name[256];
};

typedef struct Display Display, *PDisplay;

struct Display { // PlaceHolder Structure
};

typedef struct DisplayNode DisplayNode, *PDisplayNode;

struct DisplayNode { // PlaceHolder Structure
};

typedef struct Displays Displays, *PDisplays;

struct Displays { // PlaceHolder Class Structure
};

typedef undefined DoCache;

typedef struct DocumentWindow DocumentWindow, *PDocumentWindow;

struct DocumentWindow { // PlaceHolder Structure
};

typedef struct DragInfo DragInfo, *PDragInfo;

struct DragInfo { // PlaceHolder Structure
};

typedef undefined DragMode;

typedef struct DragToScrollListener DragToScrollListener, *PDragToScrollListener;

struct DragToScrollListener { // PlaceHolder Structure
};

typedef struct Drawable Drawable, *PDrawable;

struct Drawable { // PlaceHolder Structure
};

typedef struct DrawableButton DrawableButton, *PDrawableButton;

struct DrawableButton { // PlaceHolder Structure
};

typedef struct DrawableComposite DrawableComposite, *PDrawableComposite;

struct DrawableComposite { // PlaceHolder Structure
};

typedef struct DrawableImage DrawableImage, *PDrawableImage;

struct DrawableImage { // PlaceHolder Structure
};

typedef struct DrawablePath DrawablePath, *PDrawablePath;

struct DrawablePath { // PlaceHolder Structure
};

typedef struct DrawableShape DrawableShape, *PDrawableShape;

struct DrawableShape { // PlaceHolder Structure
};

typedef struct DrawableText DrawableText, *PDrawableText;

struct DrawableText { // PlaceHolder Structure
};

typedef struct DrawableTextAccessibilityHandler DrawableTextAccessibilityHandler, *PDrawableTextAccessibilityHandler;

struct DrawableTextAccessibilityHandler { // PlaceHolder Structure
};

typedef struct drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions) drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions), *PdrawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions);

struct drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions) { // PlaceHolder Structure
};

typedef struct drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool) drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool), *PdrawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool);

struct drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool) { // PlaceHolder Structure
};

typedef undefined DrawType;

typedef struct DropShadow DropShadow, *PDropShadow;

struct DropShadow { // PlaceHolder Class Structure
};

typedef struct DropShadowEffect DropShadowEffect, *PDropShadowEffect;

struct DropShadowEffect { // PlaceHolder Structure
};

typedef struct DropShadower DropShadower, *PDropShadower;

struct DropShadower { // PlaceHolder Structure
};

typedef struct DummyBailOutChecker DummyBailOutChecker, *PDummyBailOutChecker;

struct DummyBailOutChecker { // PlaceHolder Structure
};

typedef struct DynamicChannelMapping DynamicChannelMapping, *PDynamicChannelMapping;

struct DynamicChannelMapping { // PlaceHolder Structure
};

typedef struct DynamicLibrary DynamicLibrary, *PDynamicLibrary;

struct DynamicLibrary { // PlaceHolder Structure
};

typedef struct DynamicObject DynamicObject, *PDynamicObject;

struct DynamicObject { // PlaceHolder Structure
};

typedef struct EdgeTable EdgeTable, *PEdgeTable;

struct EdgeTable { // PlaceHolder Structure
};

typedef struct EdgeTableFillers EdgeTableFillers, *PEdgeTableFillers;

struct EdgeTableFillers { // PlaceHolder Class Structure
};

typedef struct EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState> EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState>, *PEdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState>;

struct EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState> { // PlaceHolder Structure
};

typedef struct EditController EditController, *PEditController;

struct EditController { // PlaceHolder Structure
};

typedef struct EditControllerEx1 EditControllerEx1, *PEditControllerEx1;

struct EditControllerEx1 { // PlaceHolder Structure
};

typedef struct EditorAccessibilityHandler EditorAccessibilityHandler, *PEditorAccessibilityHandler;

struct EditorAccessibilityHandler { // PlaceHolder Structure
};

typedef struct EditorContextMenu EditorContextMenu, *PEditorContextMenu;

struct EditorContextMenu { // PlaceHolder Structure
};

typedef struct EditorHostContext EditorHostContext, *PEditorHostContext;

struct EditorHostContext { // PlaceHolder Structure
};

typedef struct EditorView EditorView, *PEditorView;

struct EditorView { // PlaceHolder Structure
};

typedef struct EffectState EffectState, *PEffectState;

struct EffectState { // PlaceHolder Class Structure
};

typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct Elf64_Dyn Elf64_Dyn, *PElf64_Dyn;

typedef enum Elf64_DynTag {
    DT_NULL=0,
    DT_NEEDED=1,
    DT_PLTRELSZ=2,
    DT_PLTGOT=3,
    DT_HASH=4,
    DT_STRTAB=5,
    DT_SYMTAB=6,
    DT_RELA=7,
    DT_RELASZ=8,
    DT_RELAENT=9,
    DT_STRSZ=10,
    DT_SYMENT=11,
    DT_INIT=12,
    DT_FINI=13,
    DT_SONAME=14,
    DT_RPATH=15,
    DT_SYMBOLIC=16,
    DT_REL=17,
    DT_RELSZ=18,
    DT_RELENT=19,
    DT_PLTREL=20,
    DT_DEBUG=21,
    DT_TEXTREL=22,
    DT_JMPREL=23,
    DT_BIND_NOW=24,
    DT_INIT_ARRAY=25,
    DT_FINI_ARRAY=26,
    DT_INIT_ARRAYSZ=27,
    DT_FINI_ARRAYSZ=28,
    DT_RUNPATH=29,
    DT_FLAGS=30,
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_RELRSZ=35,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELSZ=1610612752,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELRENT=1879040003,
    DT_GNU_PRELINKED=1879047669,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_CHECKSUM=1879047672,
    DT_PLTPADSZ=1879047673,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_FEATURE_1=1879047676,
    DT_POSFLAG_1=1879047677,
    DT_SYMINSZ=1879047678,
    DT_SYMINENT=1879047679,
    DT_GNU_XHASH=1879047924,
    DT_GNU_HASH=1879047925,
    DT_TLSDESC_PLT=1879047926,
    DT_TLSDESC_GOT=1879047927,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_LIBLIST=1879047929,
    DT_CONFIG=1879047930,
    DT_DEPAUDIT=1879047931,
    DT_AUDIT=1879047932,
    DT_PLTPAD=1879047933,
    DT_MOVETAB=1879047934,
    DT_SYMINFO=1879047935,
    DT_VERSYM=1879048176,
    DT_RELACOUNT=1879048185,
    DT_RELCOUNT=1879048186,
    DT_FLAGS_1=1879048187,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_AUXILIARY=2147483645,
    DT_FILTER=2147483647
} Elf64_DynTag;

struct Elf64_Dyn {
    enum Elf64_DynTag d_tag;
    qword d_val;
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

typedef enum Elf_ProgramHeaderType {
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482
} Elf_ProgramHeaderType;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191
} Elf_SectionHeaderType;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef struct Encoding Encoding, *PEncoding;

struct Encoding { // PlaceHolder Class Structure
};


// WARNING! conflicting data type names: /Demangler/juce/JSON/Encoding - /CFF/Encoding

typedef struct EncodingRecord EncodingRecord, *PEncodingRecord;

struct EncodingRecord { // PlaceHolder Structure
};

typedef undefined EndCapStyle;

typedef struct Entry Entry, *PEntry;

struct Entry { // PlaceHolder Structure
};

typedef struct ErasedScopeGuard ErasedScopeGuard, *PErasedScopeGuard;

struct ErasedScopeGuard { // PlaceHolder Structure
};

typedef undefined Error;

typedef struct ErrorException ErrorException, *PErrorException;

struct ErrorException { // PlaceHolder Structure
};

typedef struct EventBus EventBus, *PEventBus;

struct EventBus { // PlaceHolder Structure
};

typedef struct EventHandler EventHandler, *PEventHandler;

struct EventHandler { // PlaceHolder Structure
};

typedef struct exception exception, *Pexception;

struct exception { // PlaceHolder Structure
};

typedef struct fd_set fd_set, *Pfd_set;

struct fd_set {
    __fd_mask fds_bits[16];
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef struct FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>> FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>>, *PFDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>>;

struct FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>> { // PlaceHolder Class Structure
};

typedef struct feat feat, *Pfeat;

struct feat { // PlaceHolder Class Structure
};

typedef struct Feature Feature, *PFeature;

struct Feature { // PlaceHolder Class Structure
};

typedef struct FeatureParams FeatureParams, *PFeatureParams;

struct FeatureParams { // PlaceHolder Class Structure
};

typedef struct FeatureVariations FeatureVariations, *PFeatureVariations;

struct FeatureVariations { // PlaceHolder Class Structure
};

typedef struct _IO_FILE FILE;

typedef struct File File, *PFile;

struct File { // PlaceHolder Structure
};

typedef struct FileBrowserComponent FileBrowserComponent, *PFileBrowserComponent;

struct FileBrowserComponent { // PlaceHolder Structure
};

typedef struct FileInputSource FileInputSource, *PFileInputSource;

struct FileInputSource { // PlaceHolder Structure
};

typedef struct FileInputStream FileInputStream, *PFileInputStream;

struct FileInputStream { // PlaceHolder Structure
};

typedef struct FilenameComponent FilenameComponent, *PFilenameComponent;

struct FilenameComponent { // PlaceHolder Structure
};

typedef struct FileOutputStream FileOutputStream, *PFileOutputStream;

struct FileOutputStream { // PlaceHolder Structure
};

typedef struct FilePreviewComponent FilePreviewComponent, *PFilePreviewComponent;

struct FilePreviewComponent { // PlaceHolder Structure
};

typedef struct FileStream FileStream, *PFileStream;

struct FileStream { // PlaceHolder Structure
};

typedef struct FileTypeface FileTypeface, *PFileTypeface;

struct FileTypeface { // PlaceHolder Structure
};

typedef struct FillType FillType, *PFillType;

struct FillType { // PlaceHolder Structure
};

typedef struct FlaggedFloatCache<1ul> FlaggedFloatCache<1ul>, *PFlaggedFloatCache<1ul>;

struct FlaggedFloatCache<1ul> { // PlaceHolder Class Structure
};

typedef struct FLock FLock, *PFLock;

struct FLock { // PlaceHolder Structure
};

typedef struct FLStudioDIYSpecificationEnforcementLock FLStudioDIYSpecificationEnforcementLock, *PFLStudioDIYSpecificationEnforcementLock;

struct FLStudioDIYSpecificationEnforcementLock { // PlaceHolder Structure
};

typedef struct FObject FObject, *PFObject;

struct FObject { // PlaceHolder Structure
};

typedef undefined FocusChangeDirection;

typedef undefined FocusChangeType;

typedef struct FocusOutline FocusOutline, *PFocusOutline;

struct FocusOutline { // PlaceHolder Structure
};

typedef struct FocusRestorer FocusRestorer, *PFocusRestorer;

struct FocusRestorer { // PlaceHolder Structure
};

typedef struct FocusTraverser FocusTraverser, *PFocusTraverser;

struct FocusTraverser { // PlaceHolder Structure
};

typedef undefined FollowSymlinks;

typedef struct Font Font, *PFont;

struct Font { // PlaceHolder Structure
};

typedef struct FontManager FontManager, *PFontManager;

struct FontManager { // PlaceHolder Structure
};

typedef struct FontOptions FontOptions, *PFontOptions;

struct FontOptions { // PlaceHolder Structure
};

typedef struct FontPlaceholderNames FontPlaceholderNames, *PFontPlaceholderNames;

struct FontPlaceholderNames { // PlaceHolder Structure
};

typedef struct FormatOptions FormatOptions, *PFormatOptions;

struct FormatOptions { // PlaceHolder Structure
};

typedef undefined forward_iterator_tag;

typedef undefined fpos;

typedef struct FreeTypeTypeface FreeTypeTypeface, *PFreeTypeTypeface;

struct FreeTypeTypeface { // PlaceHolder Structure
};

typedef undefined FSeekMode;

typedef struct FStreamer FStreamer, *PFStreamer;

struct FStreamer { // PlaceHolder Structure
};

typedef struct FStreamSizeHolder FStreamSizeHolder, *PFStreamSizeHolder;

struct FStreamSizeHolder { // PlaceHolder Structure
};

typedef struct FTFaceWrapper FTFaceWrapper, *PFTFaceWrapper;

struct FTFaceWrapper { // PlaceHolder Structure
};

typedef struct FTLibWrapper FTLibWrapper, *PFTLibWrapper;

struct FTLibWrapper { // PlaceHolder Structure
};

typedef struct FTTypefaceList FTTypefaceList, *PFTTypefaceList;

struct FTTypefaceList { // PlaceHolder Structure
};

typedef struct FUID FUID, *PFUID;

struct FUID { // PlaceHolder Structure
};

typedef struct function function, *Pfunction;

struct function { // PlaceHolder Structure
};

typedef struct FUnknown FUnknown, *PFUnknown;

struct FUnknown { // PlaceHolder Structure
};

typedef struct fvar fvar, *Pfvar;

struct fvar { // PlaceHolder Class Structure
};

typedef struct FVariant FVariant, *PFVariant;

struct FVariant { // PlaceHolder Structure
};

typedef struct GDEF GDEF, *PGDEF;

struct GDEF { // PlaceHolder Class Structure
};

typedef struct GDEFVersion1_2<OT::Layout::SmallTypes> GDEFVersion1_2<OT::Layout::SmallTypes>, *PGDEFVersion1_2<OT::Layout::SmallTypes>;

struct GDEFVersion1_2<OT::Layout::SmallTypes> { // PlaceHolder Class Structure
};

typedef struct GenericScopedLock<juce::CriticalSection> GenericScopedLock<juce::CriticalSection>, *PGenericScopedLock<juce::CriticalSection>;

struct GenericScopedLock<juce::CriticalSection> { // PlaceHolder Structure
};

typedef struct GetClipPathOp GetClipPathOp, *PGetClipPathOp;

struct GetClipPathOp { // PlaceHolder Structure
};

typedef struct GetFillTypeOp GetFillTypeOp, *PGetFillTypeOp;

struct GetFillTypeOp { // PlaceHolder Structure
};

typedef undefined getTextFromClipboard;

typedef struct GetXProperty GetXProperty, *PGetXProperty;

struct GetXProperty { // PlaceHolder Structure
};

typedef struct GIFImageFormat GIFImageFormat, *PGIFImageFormat;

struct GIFImageFormat { // PlaceHolder Structure
};

typedef struct GIFLoader GIFLoader, *PGIFLoader;

struct GIFLoader { // PlaceHolder Class Structure
};

typedef struct GlassWindowButton GlassWindowButton, *PGlassWindowButton;

struct GlassWindowButton { // PlaceHolder Structure
};

typedef struct glob_t glob_t, *Pglob_t;

struct glob_t {
    size_t gl_pathc;
    char **gl_pathv;
    size_t gl_offs;
    int gl_flags;
    void (*gl_closedir)(void *);
    dirent * (*gl_readdir)(void *);
    void * (*gl_opendir)(char *);
    int (*gl_lstat)(char *, struct stat *);
    int (*gl_stat)(char *, struct stat *);
};

typedef struct GlobalMouseListener GlobalMouseListener, *PGlobalMouseListener;

struct GlobalMouseListener { // PlaceHolder Structure
};

typedef struct glyf_accelerator_t glyf_accelerator_t, *Pglyf_accelerator_t;

struct glyf_accelerator_t { // PlaceHolder Structure
};

typedef struct GlyphArrangement GlyphArrangement, *PGlyphArrangement;

struct GlyphArrangement { // PlaceHolder Structure
};

typedef struct GlyphArrangementCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs> GlyphArrangementCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>, *PGlyphArrangementCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>;

struct GlyphArrangementCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs> { // PlaceHolder Structure
};

typedef struct GlyphArrangementCache<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs> GlyphArrangementCache<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>, *PGlyphArrangementCache<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>;

struct GlyphArrangementCache<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs> { // PlaceHolder Structure
};

typedef undefined GlyphArrangementOptions;

typedef struct GlyphCache GlyphCache, *PGlyphCache;

struct GlyphCache { // PlaceHolder Structure
};

typedef struct GlyphLayer GlyphLayer, *PGlyphLayer;

struct GlyphLayer { // PlaceHolder Structure
};

typedef struct GlyphsStorage GlyphsStorage, *PGlyphsStorage;

struct GlyphsStorage { // PlaceHolder Structure
};

typedef struct GnuBuildId GnuBuildId, *PGnuBuildId;

struct GnuBuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    byte hash[20];
};

typedef struct Graphics Graphics, *PGraphics;

struct Graphics { // PlaceHolder Structure
};

typedef struct GroupComponent GroupComponent, *PGroupComponent;

struct GroupComponent { // PlaceHolder Structure
};

typedef struct GSUBGPOSVersion1_2<OT::Layout::SmallTypes> GSUBGPOSVersion1_2<OT::Layout::SmallTypes>, *PGSUBGPOSVersion1_2<OT::Layout::SmallTypes>;

struct GSUBGPOSVersion1_2<OT::Layout::SmallTypes> { // PlaceHolder Class Structure
};

typedef struct GZIPDecompressorInputStream GZIPDecompressorInputStream, *PGZIPDecompressorInputStream;

struct GZIPDecompressorInputStream { // PlaceHolder Structure
};

typedef struct HashMap<juce::ComponentPeer*,juce::XEmbedComponent::Pimpl::SharedKeyWindow*,juce::DefaultHashFunctions,juce::DummyCriticalSection> HashMap<juce::ComponentPeer*,juce::XEmbedComponent::Pimpl::SharedKeyWindow*,juce::DefaultHashFunctions,juce::DummyCriticalSection>, *PHashMap<juce::ComponentPeer*,juce::XEmbedComponent::Pimpl::SharedKeyWindow*,juce::DefaultHashFunctions,juce::DummyCriticalSection>;

struct HashMap<juce::ComponentPeer*,juce::XEmbedComponent::Pimpl::SharedKeyWindow*,juce::DefaultHashFunctions,juce::DummyCriticalSection> { // PlaceHolder Structure
};

typedef struct hb_aat_apply_context_t hb_aat_apply_context_t, *Phb_aat_apply_context_t;

struct hb_aat_apply_context_t { // PlaceHolder Structure
};

typedef struct hb_aat_layout_chain_accelerator_t hb_aat_layout_chain_accelerator_t, *Phb_aat_layout_chain_accelerator_t;

struct hb_aat_layout_chain_accelerator_t { // PlaceHolder Structure
};

typedef struct hb_aat_map_builder_t hb_aat_map_builder_t, *Phb_aat_map_builder_t;

struct hb_aat_map_builder_t { // PlaceHolder Structure
};

typedef struct hb_aat_map_t hb_aat_map_t, *Phb_aat_map_t;

struct hb_aat_map_t { // PlaceHolder Structure
};

typedef struct hb_accelerate_subtables_context_t hb_accelerate_subtables_context_t, *Phb_accelerate_subtables_context_t;

struct hb_accelerate_subtables_context_t { // PlaceHolder Structure
};

typedef undefined hb_array_t;

typedef struct hb_blob_ptr_t<AAT::mort> hb_blob_ptr_t<AAT::mort>, *Phb_blob_ptr_t<AAT::mort>;

struct hb_blob_ptr_t<AAT::mort> { // PlaceHolder Class Structure
};

typedef struct hb_blob_ptr_t<AAT::morx> hb_blob_ptr_t<AAT::morx>, *Phb_blob_ptr_t<AAT::morx>;

struct hb_blob_ptr_t<AAT::morx> { // PlaceHolder Class Structure
};

typedef struct hb_blob_ptr_t<OT::Layout::GPOS> hb_blob_ptr_t<OT::Layout::GPOS>, *Phb_blob_ptr_t<OT::Layout::GPOS>;

struct hb_blob_ptr_t<OT::Layout::GPOS> { // PlaceHolder Class Structure
};

typedef struct hb_blob_ptr_t<OT::Layout::GSUB> hb_blob_ptr_t<OT::Layout::GSUB>, *Phb_blob_ptr_t<OT::Layout::GSUB>;

struct hb_blob_ptr_t<OT::Layout::GSUB> { // PlaceHolder Class Structure
};

typedef struct hb_blob_t hb_blob_t, *Phb_blob_t;

struct hb_blob_t { // PlaceHolder Structure
};

typedef struct hb_buffer_t hb_buffer_t, *Phb_buffer_t;

struct hb_buffer_t { // PlaceHolder Structure
};

typedef struct hb_cache_t<24u,16u,8u,true> hb_cache_t<24u,16u,8u,true>, *Phb_cache_t<24u,16u,8u,true>;

struct hb_cache_t<24u,16u,8u,true> { // PlaceHolder Class Structure
};

typedef struct hb_color_line_t hb_color_line_t, *Phb_color_line_t;

struct hb_color_line_t { // PlaceHolder Structure
};

typedef struct hb_color_stop_t hb_color_stop_t, *Phb_color_stop_t;

struct hb_color_stop_t { // PlaceHolder Structure
};

typedef undefined hb_direction_t;

typedef struct hb_draw_funcs_t hb_draw_funcs_t, *Phb_draw_funcs_t;

struct hb_draw_funcs_t { // PlaceHolder Structure
};

typedef struct hb_draw_session_t hb_draw_session_t, *Phb_draw_session_t;

struct hb_draw_session_t { // PlaceHolder Structure
};

typedef struct hb_draw_state_t hb_draw_state_t, *Phb_draw_state_t;

struct hb_draw_state_t { // PlaceHolder Structure
};

typedef undefined hb_extents_t;

typedef struct hb_face_t hb_face_t, *Phb_face_t;

struct hb_face_t { // PlaceHolder Structure
};

typedef struct hb_feature_t hb_feature_t, *Phb_feature_t;

struct hb_feature_t { // PlaceHolder Structure
};

typedef struct hb_font_extents_t hb_font_extents_t, *Phb_font_extents_t;

struct hb_font_extents_t { // PlaceHolder Structure
};

typedef struct hb_font_t hb_font_t, *Phb_font_t;

struct hb_font_t { // PlaceHolder Structure
};

typedef struct hb_glyph_extents_t hb_glyph_extents_t, *Phb_glyph_extents_t;

struct hb_glyph_extents_t { // PlaceHolder Structure
};

typedef struct hb_glyph_info_t hb_glyph_info_t, *Phb_glyph_info_t;

struct hb_glyph_info_t { // PlaceHolder Structure
};

typedef struct hb_glyph_position_t hb_glyph_position_t, *Phb_glyph_position_t;

struct hb_glyph_position_t { // PlaceHolder Structure
};

typedef struct hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false> hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>, *Phb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>;

struct hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false> { // PlaceHolder Structure
};

typedef struct hb_hashmap_t<unsigned_int,unsigned_int,true> hb_hashmap_t<unsigned_int,unsigned_int,true>, *Phb_hashmap_t<unsigned_int,unsigned_int,true>;

struct hb_hashmap_t<unsigned_int,unsigned_int,true> { // PlaceHolder Structure
};

typedef struct hb_iter_t<hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>,hb_pair_t<unsigned_int,hb_glyph_info_t&>> hb_iter_t<hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>,hb_pair_t<unsigned_int,hb_glyph_info_t&>>, *Phb_iter_t<hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>,hb_pair_t<unsigned_int,hb_glyph_info_t&>>;

struct hb_iter_t<hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>,hb_pair_t<unsigned_int,hb_glyph_info_t&>> { // PlaceHolder Structure
};

typedef struct hb_lazy_loader_t<AAT::feat,hb_table_lazy_loader_t<AAT::feat,34u,false>,hb_face_t,34u,hb_blob_t> hb_lazy_loader_t<AAT::feat,hb_table_lazy_loader_t<AAT::feat,34u,false>,hb_face_t,34u,hb_blob_t>, *Phb_lazy_loader_t<AAT::feat,hb_table_lazy_loader_t<AAT::feat,34u,false>,hb_face_t,34u,hb_blob_t>;

struct hb_lazy_loader_t<AAT::feat,hb_table_lazy_loader_t<AAT::feat,34u,false>,hb_face_t,34u,hb_blob_t> { // PlaceHolder Class Structure
};

typedef struct hb_lazy_loader_t<AAT::trak,hb_table_lazy_loader_t<AAT::trak,32u,false>,hb_face_t,32u,hb_blob_t> hb_lazy_loader_t<AAT::trak,hb_table_lazy_loader_t<AAT::trak,32u,false>,hb_face_t,32u,hb_blob_t>, *Phb_lazy_loader_t<AAT::trak,hb_table_lazy_loader_t<AAT::trak,32u,false>,hb_face_t,32u,hb_blob_t>;

struct hb_lazy_loader_t<AAT::trak,hb_table_lazy_loader_t<AAT::trak,32u,false>,hb_face_t,32u,hb_blob_t> { // PlaceHolder Class Structure
};

typedef struct hb_lazy_loader_t<OT::avar,hb_table_lazy_loader_t<OT::avar,19u,true>,hb_face_t,19u,hb_blob_t> hb_lazy_loader_t<OT::avar,hb_table_lazy_loader_t<OT::avar,19u,true>,hb_face_t,19u,hb_blob_t>, *Phb_lazy_loader_t<OT::avar,hb_table_lazy_loader_t<OT::avar,19u,true>,hb_face_t,19u,hb_blob_t>;

struct hb_lazy_loader_t<OT::avar,hb_table_lazy_loader_t<OT::avar,19u,true>,hb_face_t,19u,hb_blob_t> { // PlaceHolder Class Structure
};

typedef struct hb_lazy_loader_t<OT::cff1_accelerator_t,hb_face_lazy_loader_t<OT::cff1_accelerator_t,16u>,hb_face_t,16u,OT::cff1_accelerator_t> hb_lazy_loader_t<OT::cff1_accelerator_t,hb_face_lazy_loader_t<OT::cff1_accelerator_t,16u>,hb_face_t,16u,OT::cff1_accelerator_t>, *Phb_lazy_loader_t<OT::cff1_accelerator_t,hb_face_lazy_loader_t<OT::cff1_accelerator_t,16u>,hb_face_t,16u,OT::cff1_accelerator_t>;

struct hb_lazy_loader_t<OT::cff1_accelerator_t,hb_face_lazy_loader_t<OT::cff1_accelerator_t,16u>,hb_face_t,16u,OT::cff1_accelerator_t> { // PlaceHolder Class Structure
};

typedef struct hb_lazy_loader_t<OT::COLR,hb_table_lazy_loader_t<OT::COLR,35u,true>,hb_face_t,35u,hb_blob_t> hb_lazy_loader_t<OT::COLR,hb_table_lazy_loader_t<OT::COLR,35u,true>,hb_face_t,35u,hb_blob_t>, *Phb_lazy_loader_t<OT::COLR,hb_table_lazy_loader_t<OT::COLR,35u,true>,hb_face_t,35u,hb_blob_t>;

struct hb_lazy_loader_t<OT::COLR,hb_table_lazy_loader_t<OT::COLR,35u,true>,hb_face_t,35u,hb_blob_t> { // PlaceHolder Class Structure
};

typedef struct hb_lazy_loader_t<OT::CPAL,hb_table_lazy_loader_t<OT::CPAL,36u,true>,hb_face_t,36u,hb_blob_t> hb_lazy_loader_t<OT::CPAL,hb_table_lazy_loader_t<OT::CPAL,36u,true>,hb_face_t,36u,hb_blob_t>, *Phb_lazy_loader_t<OT::CPAL,hb_table_lazy_loader_t<OT::CPAL,36u,true>,hb_face_t,36u,hb_blob_t>;

struct hb_lazy_loader_t<OT::CPAL,hb_table_lazy_loader_t<OT::CPAL,36u,true>,hb_face_t,36u,hb_blob_t> { // PlaceHolder Class Structure
};

typedef struct hb_lazy_loader_t<OT::fvar,hb_table_lazy_loader_t<OT::fvar,18u,true>,hb_face_t,18u,hb_blob_t> hb_lazy_loader_t<OT::fvar,hb_table_lazy_loader_t<OT::fvar,18u,true>,hb_face_t,18u,hb_blob_t>, *Phb_lazy_loader_t<OT::fvar,hb_table_lazy_loader_t<OT::fvar,18u,true>,hb_face_t,18u,hb_blob_t>;

struct hb_lazy_loader_t<OT::fvar,hb_table_lazy_loader_t<OT::fvar,18u,true>,hb_face_t,18u,hb_blob_t> { // PlaceHolder Class Structure
};

typedef struct hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t> hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>, *Phb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>;

struct hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t> { // PlaceHolder Class Structure
};

typedef struct hb_lazy_loader_t<OT::hhea,hb_table_lazy_loader_t<OT::hhea,4u,true>,hb_face_t,4u,hb_blob_t> hb_lazy_loader_t<OT::hhea,hb_table_lazy_loader_t<OT::hhea,4u,true>,hb_face_t,4u,hb_blob_t>, *Phb_lazy_loader_t<OT::hhea,hb_table_lazy_loader_t<OT::hhea,4u,true>,hb_face_t,4u,hb_blob_t>;

struct hb_lazy_loader_t<OT::hhea,hb_table_lazy_loader_t<OT::hhea,4u,true>,hb_face_t,4u,hb_blob_t> { // PlaceHolder Class Structure
};

typedef struct hb_lazy_loader_t<OT::maxp,hb_table_lazy_loader_t<OT::maxp,2u,true>,hb_face_t,2u,hb_blob_t> hb_lazy_loader_t<OT::maxp,hb_table_lazy_loader_t<OT::maxp,2u,true>,hb_face_t,2u,hb_blob_t>, *Phb_lazy_loader_t<OT::maxp,hb_table_lazy_loader_t<OT::maxp,2u,true>,hb_face_t,2u,hb_blob_t>;

struct hb_lazy_loader_t<OT::maxp,hb_table_lazy_loader_t<OT::maxp,2u,true>,hb_face_t,2u,hb_blob_t> { // PlaceHolder Structure
};

typedef struct hb_lazy_loader_t<OT::MVAR,hb_table_lazy_loader_t<OT::MVAR,22u,true>,hb_face_t,22u,hb_blob_t> hb_lazy_loader_t<OT::MVAR,hb_table_lazy_loader_t<OT::MVAR,22u,true>,hb_face_t,22u,hb_blob_t>, *Phb_lazy_loader_t<OT::MVAR,hb_table_lazy_loader_t<OT::MVAR,22u,true>,hb_face_t,22u,hb_blob_t>;

struct hb_lazy_loader_t<OT::MVAR,hb_table_lazy_loader_t<OT::MVAR,22u,true>,hb_face_t,22u,hb_blob_t> { // PlaceHolder Class Structure
};

typedef struct hb_lazy_loader_t<OT::OS2,hb_table_lazy_loader_t<OT::OS2,6u,true>,hb_face_t,6u,hb_blob_t> hb_lazy_loader_t<OT::OS2,hb_table_lazy_loader_t<OT::OS2,6u,true>,hb_face_t,6u,hb_blob_t>, *Phb_lazy_loader_t<OT::OS2,hb_table_lazy_loader_t<OT::OS2,6u,true>,hb_face_t,6u,hb_blob_t>;

struct hb_lazy_loader_t<OT::OS2,hb_table_lazy_loader_t<OT::OS2,6u,true>,hb_face_t,6u,hb_blob_t> { // PlaceHolder Class Structure
};

typedef struct hb_lazy_loader_t<OT::SVG_accelerator_t,hb_face_lazy_loader_t<OT::SVG_accelerator_t,39u>,hb_face_t,39u,OT::SVG_accelerator_t> hb_lazy_loader_t<OT::SVG_accelerator_t,hb_face_lazy_loader_t<OT::SVG_accelerator_t,39u>,hb_face_t,39u,OT::SVG_accelerator_t>, *Phb_lazy_loader_t<OT::SVG_accelerator_t,hb_face_lazy_loader_t<OT::SVG_accelerator_t,39u>,hb_face_t,39u,OT::SVG_accelerator_t>;

struct hb_lazy_loader_t<OT::SVG_accelerator_t,hb_face_lazy_loader_t<OT::SVG_accelerator_t,39u>,hb_face_t,39u,OT::SVG_accelerator_t> { // PlaceHolder Class Structure
};

typedef struct hb_lazy_loader_t<OT::vhea,hb_table_lazy_loader_t<OT::vhea,11u,true>,hb_face_t,11u,hb_blob_t> hb_lazy_loader_t<OT::vhea,hb_table_lazy_loader_t<OT::vhea,11u,true>,hb_face_t,11u,hb_blob_t>, *Phb_lazy_loader_t<OT::vhea,hb_table_lazy_loader_t<OT::vhea,11u,true>,hb_face_t,11u,hb_blob_t>;

struct hb_lazy_loader_t<OT::vhea,hb_table_lazy_loader_t<OT::vhea,11u,true>,hb_face_t,11u,hb_blob_t> { // PlaceHolder Class Structure
};

typedef struct hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>, *Phb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>;

struct hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> { // PlaceHolder Class Structure
};

typedef struct hb_map_iter_t hb_map_iter_t, *Phb_map_iter_t;

struct hb_map_iter_t { // PlaceHolder Structure
};

typedef struct hb_map_t hb_map_t, *Phb_map_t;

struct hb_map_t { // PlaceHolder Structure
};

typedef struct hb_mutex_t hb_mutex_t, *Phb_mutex_t;

struct hb_mutex_t { // PlaceHolder Structure
};

typedef struct hb_ot_apply_context_t hb_ot_apply_context_t, *Phb_ot_apply_context_t;

struct hb_ot_apply_context_t { // PlaceHolder Structure
};

typedef struct hb_ot_layout_lookup_accelerator_t hb_ot_layout_lookup_accelerator_t, *Phb_ot_layout_lookup_accelerator_t;

struct hb_ot_layout_lookup_accelerator_t { // PlaceHolder Structure
};

typedef struct hb_ot_map_builder_t hb_ot_map_builder_t, *Phb_ot_map_builder_t;

struct hb_ot_map_builder_t { // PlaceHolder Structure
};

typedef struct hb_ot_map_t hb_ot_map_t, *Phb_ot_map_t;

struct hb_ot_map_t { // PlaceHolder Structure
};

typedef undefined hb_ot_metrics_tag_t;

typedef struct hb_ot_shape_normalize_context_t hb_ot_shape_normalize_context_t, *Phb_ot_shape_normalize_context_t;

struct hb_ot_shape_normalize_context_t { // PlaceHolder Structure
};

typedef struct hb_ot_shape_plan_t hb_ot_shape_plan_t, *Phb_ot_shape_plan_t;

struct hb_ot_shape_plan_t { // PlaceHolder Structure
};

typedef struct hb_ot_shape_planner_t hb_ot_shape_planner_t, *Phb_ot_shape_planner_t;

struct hb_ot_shape_planner_t { // PlaceHolder Structure
};

typedef struct hb_outline_t hb_outline_t, *Phb_outline_t;

struct hb_outline_t { // PlaceHolder Structure
};

typedef undefined hb_paint_composite_mode_t;

typedef struct hb_paint_context_t hb_paint_context_t, *Phb_paint_context_t;

struct hb_paint_context_t { // PlaceHolder Structure
};

typedef struct hb_paint_extents_context_t hb_paint_extents_context_t, *Phb_paint_extents_context_t;

struct hb_paint_extents_context_t { // PlaceHolder Structure
};

typedef struct hb_paint_funcs_t hb_paint_funcs_t, *Phb_paint_funcs_t;

struct hb_paint_funcs_t { // PlaceHolder Structure
};

typedef struct hb_pool_t<hb_serialize_context_t::object_t,32u> hb_pool_t<hb_serialize_context_t::object_t,32u>, *Phb_pool_t<hb_serialize_context_t::object_t,32u>;

struct hb_pool_t<hb_serialize_context_t::object_t,32u> { // PlaceHolder Structure
};

typedef undefined hb_priority;

typedef struct hb_sanitize_context_t hb_sanitize_context_t, *Phb_sanitize_context_t;

struct hb_sanitize_context_t { // PlaceHolder Structure
};

typedef undefined hb_script_t;

typedef struct hb_segment_properties_t hb_segment_properties_t, *Phb_segment_properties_t;

struct hb_segment_properties_t { // PlaceHolder Structure
};

typedef struct hb_serialize_context_t hb_serialize_context_t, *Phb_serialize_context_t;

struct hb_serialize_context_t { // PlaceHolder Structure
};

typedef struct hb_set_digest_combiner_t hb_set_digest_combiner_t, *Phb_set_digest_combiner_t;

struct hb_set_digest_combiner_t { // PlaceHolder Structure
};

typedef struct hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>> hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>, *Phb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>;

struct hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>> { // PlaceHolder Class Structure
};

typedef struct hb_shape_plan_key_t hb_shape_plan_key_t, *Phb_shape_plan_key_t;

struct hb_shape_plan_key_t { // PlaceHolder Structure
};

typedef undefined hb_sorted_array_t;

typedef struct hb_unicode_funcs_t hb_unicode_funcs_t, *Phb_unicode_funcs_t;

struct hb_unicode_funcs_t { // PlaceHolder Structure
};

typedef undefined hb_unicode_general_category_t;

typedef struct hb_vector_t hb_vector_t, *Phb_vector_t;

struct hb_vector_t { // PlaceHolder Structure
};

typedef struct hb_vector_t<CFF::cff1_font_dict_values_t,false> hb_vector_t<CFF::cff1_font_dict_values_t,false>, *Phb_vector_t<CFF::cff1_font_dict_values_t,false>;

struct hb_vector_t<CFF::cff1_font_dict_values_t,false> { // PlaceHolder Structure
};

typedef struct hb_vector_t<CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>,false> hb_vector_t<CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>,false>, *Phb_vector_t<CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>,false>;

struct hb_vector_t<CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>,false> { // PlaceHolder Structure
};

typedef struct hb_vector_t<CFF::cff2_font_dict_values_t,false> hb_vector_t<CFF::cff2_font_dict_values_t,false>, *Phb_vector_t<CFF::cff2_font_dict_values_t,false>;

struct hb_vector_t<CFF::cff2_font_dict_values_t,false> { // PlaceHolder Structure
};

typedef struct hb_vector_t<CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>,false> hb_vector_t<CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>,false>, *Phb_vector_t<CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>,false>;

struct hb_vector_t<CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>,false> { // PlaceHolder Structure
};

typedef struct hb_vector_t<hb_ot_map_builder_t::feature_info_t,false> hb_vector_t<hb_ot_map_builder_t::feature_info_t,false>, *Phb_vector_t<hb_ot_map_builder_t::feature_info_t,false>;

struct hb_vector_t<hb_ot_map_builder_t::feature_info_t,false> { // PlaceHolder Class Structure
};

typedef struct hb_vector_t<hb_ot_map_builder_t::stage_info_t,false> hb_vector_t<hb_ot_map_builder_t::stage_info_t,false>, *Phb_vector_t<hb_ot_map_builder_t::stage_info_t,false>;

struct hb_vector_t<hb_ot_map_builder_t::stage_info_t,false> { // PlaceHolder Class Structure
};

typedef struct hb_vector_t<hb_ot_name_entry_t,false> hb_vector_t<hb_ot_name_entry_t,false>, *Phb_vector_t<hb_ot_name_entry_t,false>;

struct hb_vector_t<hb_ot_name_entry_t,false> { // PlaceHolder Structure
};

typedef struct hb_vector_t<hb_pair_t<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>,false> hb_vector_t<hb_pair_t<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>,false>, *Phb_vector_t<hb_pair_t<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>,false>;

struct hb_vector_t<hb_pair_t<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>,false> { // PlaceHolder Structure
};

typedef struct hb_vector_t<hb_pair_t<int,int>,false> hb_vector_t<hb_pair_t<int,int>,false>, *Phb_vector_t<hb_pair_t<int,int>,false>;

struct hb_vector_t<hb_pair_t<int,int>,false> { // PlaceHolder Structure
};

typedef struct hb_vector_t<hb_pool_t<hb_serialize_context_t::object_t,32u>::chunk_t*,false> hb_vector_t<hb_pool_t<hb_serialize_context_t::object_t,32u>::chunk_t*,false>, *Phb_vector_t<hb_pool_t<hb_serialize_context_t::object_t,32u>::chunk_t*,false>;

struct hb_vector_t<hb_pool_t<hb_serialize_context_t::object_t,32u>::chunk_t*,false> { // PlaceHolder Class Structure
};

typedef struct hb_vector_t<hb_serialize_context_t::object_t*,false> hb_vector_t<hb_serialize_context_t::object_t*,false>, *Phb_vector_t<hb_serialize_context_t::object_t*,false>;

struct hb_vector_t<hb_serialize_context_t::object_t*,false> { // PlaceHolder Structure
};

typedef struct hb_vector_t<hb_serialize_context_t::object_t::link_t,false> hb_vector_t<hb_serialize_context_t::object_t::link_t,false>, *Phb_vector_t<hb_serialize_context_t::object_t::link_t,false>;

struct hb_vector_t<hb_serialize_context_t::object_t::link_t,false> { // PlaceHolder Class Structure
};

typedef struct hb_vector_t<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>,false> hb_vector_t<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>,false>, *Phb_vector_t<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>,false>;

struct hb_vector_t<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>,false> { // PlaceHolder Structure
};

typedef struct hb_vector_t<unsigned_int,false> hb_vector_t<unsigned_int,false>, *Phb_vector_t<unsigned_int,false>;

struct hb_vector_t<unsigned_int,false> { // PlaceHolder Structure
};

typedef struct hb_would_apply_context_t hb_would_apply_context_t, *Phb_would_apply_context_t;

struct hb_would_apply_context_t { // PlaceHolder Structure
};

typedef undefined HbPtr;

typedef struct HbPtr<hb_blob_t,&hb_blob_reference,&hb_blob_destroy> HbPtr<hb_blob_t,&hb_blob_reference,&hb_blob_destroy>, *PHbPtr<hb_blob_t,&hb_blob_reference,&hb_blob_destroy>;

struct HbPtr<hb_blob_t,&hb_blob_reference,&hb_blob_destroy> { // PlaceHolder Structure
};

typedef struct HbPtr<hb_buffer_t,&hb_buffer_reference,&hb_buffer_destroy> HbPtr<hb_buffer_t,&hb_buffer_reference,&hb_buffer_destroy>, *PHbPtr<hb_buffer_t,&hb_buffer_reference,&hb_buffer_destroy>;

struct HbPtr<hb_buffer_t,&hb_buffer_reference,&hb_buffer_destroy> { // PlaceHolder Structure
};

typedef struct HbPtr<hb_draw_funcs_t,&hb_draw_funcs_reference,&hb_draw_funcs_destroy> HbPtr<hb_draw_funcs_t,&hb_draw_funcs_reference,&hb_draw_funcs_destroy>, *PHbPtr<hb_draw_funcs_t,&hb_draw_funcs_reference,&hb_draw_funcs_destroy>;

struct HbPtr<hb_draw_funcs_t,&hb_draw_funcs_reference,&hb_draw_funcs_destroy> { // PlaceHolder Structure
};

typedef struct HbPtr<hb_face_t,&hb_face_reference,&hb_face_destroy> HbPtr<hb_face_t,&hb_face_reference,&hb_face_destroy>, *PHbPtr<hb_face_t,&hb_face_reference,&hb_face_destroy>;

struct HbPtr<hb_face_t,&hb_face_reference,&hb_face_destroy> { // PlaceHolder Structure
};

typedef struct HbPtr<hb_font_t,&hb_font_reference,&hb_font_destroy> HbPtr<hb_font_t,&hb_font_reference,&hb_font_destroy>, *PHbPtr<hb_font_t,&hb_font_reference,&hb_font_destroy>;

struct HbPtr<hb_font_t,&hb_font_reference,&hb_font_destroy> { // PlaceHolder Structure
};

typedef struct head_maxp_info_t head_maxp_info_t, *Phead_maxp_info_t;

struct head_maxp_info_t { // PlaceHolder Structure
};

typedef struct HeaderItemComponent HeaderItemComponent, *PHeaderItemComponent;

struct HeaderItemComponent { // PlaceHolder Structure
};

typedef struct HeapBlock<char,false> HeapBlock<char,false>, *PHeapBlock<char,false>;

struct HeapBlock<char,false> { // PlaceHolder Structure
};

typedef struct HeapBlock<char,true> HeapBlock<char,true>, *PHeapBlock<char,true>;

struct HeapBlock<char,true> { // PlaceHolder Class Structure
};

typedef struct HeapBlock<unsigned_char,false> HeapBlock<unsigned_char,false>, *PHeapBlock<unsigned_char,false>;

struct HeapBlock<unsigned_char,false> { // PlaceHolder Structure
};

typedef struct Helmholtz Helmholtz, *PHelmholtz;

struct Helmholtz { // PlaceHolder Structure
};

typedef struct HierarchyChecker HierarchyChecker, *PHierarchyChecker;

struct HierarchyChecker { // PlaceHolder Structure
};

typedef struct HostApplication HostApplication, *PHostApplication;

struct HostApplication { // PlaceHolder Structure
};

typedef struct HostAttributeList HostAttributeList, *PHostAttributeList;

struct HostAttributeList { // PlaceHolder Structure
};

typedef struct HostMessage HostMessage, *PHostMessage;

struct HostMessage { // PlaceHolder Structure
};

typedef struct huff_entropy_encoder huff_entropy_encoder, *Phuff_entropy_encoder;

struct huff_entropy_encoder { // PlaceHolder Structure
};

typedef struct HVARVVAR HVARVVAR, *PHVARVVAR;

struct HVARVVAR { // PlaceHolder Class Structure
};

typedef struct IAttributeList IAttributeList, *PIAttributeList;

struct IAttributeList { // PlaceHolder Structure
};

typedef struct IAttributes IAttributes, *PIAttributes;

struct IAttributes { // PlaceHolder Structure
};

typedef struct IBStream IBStream, *PIBStream;

struct IBStream { // PlaceHolder Structure
};

typedef struct IBStreamer IBStreamer, *PIBStreamer;

struct IBStreamer { // PlaceHolder Structure
};

typedef struct IComponent IComponent, *PIComponent;

struct IComponent { // PlaceHolder Structure
};

typedef struct IComponentHandler IComponentHandler, *PIComponentHandler;

struct IComponentHandler { // PlaceHolder Structure
};

typedef struct IConnectionPoint IConnectionPoint, *PIConnectionPoint;

struct IConnectionPoint { // PlaceHolder Structure
};

typedef struct Identifier Identifier, *PIdentifier;

struct Identifier { // PlaceHolder Structure
};

typedef struct IDependent IDependent, *PIDependent;

struct IDependent { // PlaceHolder Structure
};

typedef struct IEditController IEditController, *PIEditController;

struct IEditController { // PlaceHolder Structure
};

typedef struct Image Image, *PImage;

struct Image { // PlaceHolder Structure
};

typedef struct ImageButton ImageButton, *PImageButton;

struct ImageButton { // PlaceHolder Structure
};

typedef struct ImageFileFormat ImageFileFormat, *PImageFileFormat;

struct ImageFileFormat { // PlaceHolder Class Structure
};

typedef struct ImagePixelData ImagePixelData, *PImagePixelData;

struct ImagePixelData { // PlaceHolder Structure
};

typedef struct ImageType ImageType, *PImageType;

struct ImageType { // PlaceHolder Structure
};

typedef struct IMessage IMessage, *PIMessage;

struct IMessage { // PlaceHolder Structure
};

typedef struct Init Init, *PInit;

struct Init { // PlaceHolder Structure
};

typedef undefined InputSourceType;

typedef struct InputStream InputStream, *PInputStream;

struct InputStream { // PlaceHolder Structure
};

typedef struct InsertAction InsertAction, *PInsertAction;

struct InsertAction { // PlaceHolder Structure
};

typedef struct InsertionSubtable<AAT::ObsoleteTypes> InsertionSubtable<AAT::ObsoleteTypes>, *PInsertionSubtable<AAT::ObsoleteTypes>;

struct InsertionSubtable<AAT::ObsoleteTypes> { // PlaceHolder Class Structure
};

typedef undefined integer_sequence;

typedef undefined InterfaceResultWithDeferredAddRef;

typedef struct Interfaces Interfaces, *PInterfaces;

struct Interfaces { // PlaceHolder Structure
};

typedef struct internal_state internal_state, *Pinternal_state;

struct internal_state { // PlaceHolder Structure
};

typedef struct InternalMessageQueue InternalMessageQueue, *PInternalMessageQueue;

struct InternalMessageQueue { // PlaceHolder Class Structure
};

typedef struct InternalRunLoop InternalRunLoop, *PInternalRunLoop;

struct InternalRunLoop { // PlaceHolder Class Structure
};

typedef struct interp_env_t interp_env_t, *Pinterp_env_t;

struct interp_env_t { // PlaceHolder Structure
};

typedef struct IntersectionIterator IntersectionIterator, *PIntersectionIterator;

struct IntersectionIterator { // PlaceHolder Structure
};

typedef struct IntType IntType, *PIntType;

struct IntType { // PlaceHolder Structure
};

typedef struct InvocationInfo InvocationInfo, *PInvocationInfo;

struct InvocationInfo { // PlaceHolder Structure
};

typedef struct ios_base ios_base, *Pios_base;

struct ios_base { // PlaceHolder Structure
};

typedef struct IParameterChanges IParameterChanges, *PIParameterChanges;

struct IParameterChanges { // PlaceHolder Structure
};

typedef struct ipc_perm ipc_perm, *Pipc_perm;

struct ipc_perm {
    __key_t __key;
    __uid_t uid;
    __gid_t gid;
    __uid_t cuid;
    __gid_t cgid;
    ushort mode;
    ushort __pad1;
    ushort __seq;
    ushort __pad2;
    ulong __unused1;
    ulong __unused2;
};

typedef struct IPlugFrame IPlugFrame, *PIPlugFrame;

struct IPlugFrame { // PlaceHolder Structure
};

typedef struct IProgramListData IProgramListData, *PIProgramListData;

struct IProgramListData { // PlaceHolder Structure
};

typedef struct IPtr IPtr, *PIPtr;

struct IPtr { // PlaceHolder Structure
};

typedef struct IPtr<Steinberg::Vst::EditController> IPtr<Steinberg::Vst::EditController>, *PIPtr<Steinberg::Vst::EditController>;

struct IPtr<Steinberg::Vst::EditController> { // PlaceHolder Structure
};

typedef struct IPtr<Steinberg::Vst::PlugInterfaceSupport> IPtr<Steinberg::Vst::PlugInterfaceSupport>, *PIPtr<Steinberg::Vst::PlugInterfaceSupport>;

struct IPtr<Steinberg::Vst::PlugInterfaceSupport> { // PlaceHolder Structure
};

typedef struct IString IString, *PIString;

struct IString { // PlaceHolder Structure
};

typedef struct IStringResult IStringResult, *PIStringResult;

struct IStringResult { // PlaceHolder Structure
};

typedef struct Item Item, *PItem;

struct Item { // PlaceHolder Structure
};

typedef struct ItemAccessibilityHandler ItemAccessibilityHandler, *PItemAccessibilityHandler;

struct ItemAccessibilityHandler { // PlaceHolder Structure
};

typedef struct ItemComponent ItemComponent, *PItemComponent;

struct ItemComponent { // PlaceHolder Structure
};

typedef struct ItemVariationStore ItemVariationStore, *PItemVariationStore;

struct ItemVariationStore { // PlaceHolder Structure
};

typedef struct ItemVarStoreInstancer ItemVarStoreInstancer, *PItemVarStoreInstancer;

struct ItemVarStoreInstancer { // PlaceHolder Structure
};

typedef struct Iterator Iterator, *PIterator;

struct Iterator { // PlaceHolder Structure
};

typedef struct itimerval itimerval, *Pitimerval;

typedef struct timeval timeval, *Ptimeval;

struct timeval {
    __time_t tv_sec;
    __suseconds_t tv_usec;
};

struct itimerval {
    struct timeval it_interval;
    struct timeval it_value;
};

typedef struct IUnitData IUnitData, *PIUnitData;

struct IUnitData { // PlaceHolder Structure
};

typedef struct IUnitInfo IUnitInfo, *PIUnitInfo;

struct IUnitInfo { // PlaceHolder Structure
};

typedef undefined J_BUF_MODE;

typedef struct JHUFF_TBL JHUFF_TBL, *PJHUFF_TBL;

struct JHUFF_TBL { // PlaceHolder Structure
};

typedef undefined JointStyle;

typedef struct jpeg_common_struct jpeg_common_struct, *Pjpeg_common_struct;

struct jpeg_common_struct { // PlaceHolder Structure
};

typedef struct jpeg_component_info jpeg_component_info, *Pjpeg_component_info;

struct jpeg_component_info { // PlaceHolder Structure
};

typedef struct jpeg_compress_struct jpeg_compress_struct, *Pjpeg_compress_struct;

struct jpeg_compress_struct { // PlaceHolder Structure
};

typedef struct jpeg_decompress_struct jpeg_decompress_struct, *Pjpeg_decompress_struct;

struct jpeg_decompress_struct { // PlaceHolder Structure
};

typedef struct JPEGImageFormat JPEGImageFormat, *PJPEGImageFormat;

struct JPEGImageFormat { // PlaceHolder Structure
};

typedef struct json_array_s json_array_s, *Pjson_array_s;

struct json_array_s { // PlaceHolder Structure
};

typedef struct json_extract_state_s json_extract_state_s, *Pjson_extract_state_s;

struct json_extract_state_s { // PlaceHolder Structure
};

typedef struct json_number_s json_number_s, *Pjson_number_s;

struct json_number_s { // PlaceHolder Structure
};

typedef struct json_object_s json_object_s, *Pjson_object_s;

struct json_object_s { // PlaceHolder Structure
};

typedef struct json_parse_result_s json_parse_result_s, *Pjson_parse_result_s;

struct json_parse_result_s { // PlaceHolder Structure
};

typedef struct json_parse_state_s json_parse_state_s, *Pjson_parse_state_s;

struct json_parse_state_s { // PlaceHolder Structure
};

typedef struct json_string_s json_string_s, *Pjson_string_s;

struct json_string_s { // PlaceHolder Structure
};

typedef struct json_value_s json_value_s, *Pjson_value_s;

struct json_value_s { // PlaceHolder Structure
};

typedef struct JSONParser JSONParser, *PJSONParser;

struct JSONParser { // PlaceHolder Class Structure
};

typedef struct juce juce, *Pjuce;

struct juce { // PlaceHolder Structure
};

typedef struct JuceAudioProcessor JuceAudioProcessor, *PJuceAudioProcessor;

struct JuceAudioProcessor { // PlaceHolder Structure
};

typedef struct JucePluginFactory JucePluginFactory, *PJucePluginFactory;

struct JucePluginFactory { // PlaceHolder Structure
};

typedef struct JucePluginFactoryBase JucePluginFactoryBase, *PJucePluginFactoryBase;

struct JucePluginFactoryBase { // PlaceHolder Class Structure
};

typedef struct JuceVST3Component JuceVST3Component, *PJuceVST3Component;

struct JuceVST3Component { // PlaceHolder Structure
};

typedef struct JuceVST3EditController JuceVST3EditController, *PJuceVST3EditController;

struct JuceVST3EditController { // PlaceHolder Structure
};

typedef struct JuceVST3Editor JuceVST3Editor, *PJuceVST3Editor;

struct JuceVST3Editor { // PlaceHolder Structure
};

typedef struct Justification Justification, *PJustification;

struct Justification { // PlaceHolder Structure
};

typedef struct jvirt_barray_control jvirt_barray_control, *Pjvirt_barray_control;

struct jvirt_barray_control { // PlaceHolder Structure
};

typedef struct jvirt_sarray_control jvirt_sarray_control, *Pjvirt_sarray_control;

struct jvirt_sarray_control { // PlaceHolder Structure
};

typedef struct KerxSubTableFormat2<AAT::KerxSubTableHeader> KerxSubTableFormat2<AAT::KerxSubTableHeader>, *PKerxSubTableFormat2<AAT::KerxSubTableHeader>;

struct KerxSubTableFormat2<AAT::KerxSubTableHeader> { // PlaceHolder Class Structure
};

typedef struct KerxSubTableFormat6<AAT::KerxSubTableHeader> KerxSubTableFormat6<AAT::KerxSubTableHeader>, *PKerxSubTableFormat6<AAT::KerxSubTableHeader>;

struct KerxSubTableFormat6<AAT::KerxSubTableHeader> { // PlaceHolder Class Structure
};

typedef struct KerxTable<OT::KernOT> KerxTable<OT::KernOT>, *PKerxTable<OT::KernOT>;

struct KerxTable<OT::KernOT> { // PlaceHolder Class Structure
};

typedef undefined Key;

typedef __key_t key_t;

typedef struct KeyboardFocusTraverser KeyboardFocusTraverser, *PKeyboardFocusTraverser;

struct KeyboardFocusTraverser { // PlaceHolder Structure
};

typedef struct KeyPress KeyPress, *PKeyPress;

struct KeyPress { // PlaceHolder Structure
};

typedef struct KnownTypeface KnownTypeface, *PKnownTypeface;

struct KnownTypeface { // PlaceHolder Structure
};

typedef struct Label Label, *PLabel;

struct Label { // PlaceHolder Structure
};

typedef struct LabelAccessibilityHandler LabelAccessibilityHandler, *PLabelAccessibilityHandler;

struct LabelAccessibilityHandler { // PlaceHolder Structure
};

typedef struct LabelKeyboardFocusTraverser LabelKeyboardFocusTraverser, *PLabelKeyboardFocusTraverser;

struct LabelKeyboardFocusTraverser { // PlaceHolder Structure
};

typedef struct LabelValueInterface LabelValueInterface, *PLabelValueInterface;

struct LabelValueInterface { // PlaceHolder Structure
};

typedef struct LayoutPair LayoutPair, *PLayoutPair;

struct LayoutPair { // PlaceHolder Structure
};

typedef struct LegacyAudioParameter LegacyAudioParameter, *PLegacyAudioParameter;

struct LegacyAudioParameter { // PlaceHolder Structure
};

typedef struct LegacyAudioParametersWrapper LegacyAudioParametersWrapper, *PLegacyAudioParametersWrapper;

struct LegacyAudioParametersWrapper { // PlaceHolder Structure
};

typedef struct LibPdManager LibPdManager, *PLibPdManager;

struct LibPdManager { // PlaceHolder Class Structure
};

typedef struct Ligature<OT::Layout::SmallTypes> Ligature<OT::Layout::SmallTypes>, *PLigature<OT::Layout::SmallTypes>;

struct Ligature<OT::Layout::SmallTypes> { // PlaceHolder Class Structure
};

typedef struct LigatureSet<OT::Layout::SmallTypes> LigatureSet<OT::Layout::SmallTypes>, *PLigatureSet<OT::Layout::SmallTypes>;

struct LigatureSet<OT::Layout::SmallTypes> { // PlaceHolder Class Structure
};

typedef struct LigatureSubtable<AAT::ObsoleteTypes> LigatureSubtable<AAT::ObsoleteTypes>, *PLigatureSubtable<AAT::ObsoleteTypes>;

struct LigatureSubtable<AAT::ObsoleteTypes> { // PlaceHolder Class Structure
};

typedef undefined Line;


// WARNING! conflicting data type names: /Demangler/juce/TextLayout/Line - /Demangler/juce/Line

typedef struct Linear Linear, *PLinear;

struct Linear { // PlaceHolder Structure
};

typedef struct LineDataAndChunkStorage LineDataAndChunkStorage, *PLineDataAndChunkStorage;

struct LineDataAndChunkStorage { // PlaceHolder Structure
};

typedef struct LineItem LineItem, *PLineItem;

struct LineItem { // PlaceHolder Structure
};

typedef undefined LineLength;

typedef struct LineState LineState, *PLineState;

struct LineState { // PlaceHolder Structure
};

typedef struct LinuxComponentPeer LinuxComponentPeer, *PLinuxComponentPeer;

struct LinuxComponentPeer { // PlaceHolder Structure
};

typedef struct LinuxEventLoopInternal LinuxEventLoopInternal, *PLinuxEventLoopInternal;

struct LinuxEventLoopInternal { // PlaceHolder Class Structure
};

typedef struct LinuxRepaintManager LinuxRepaintManager, *PLinuxRepaintManager;

struct LinuxRepaintManager { // PlaceHolder Class Structure
};

typedef struct Listener Listener, *PListener;

struct Listener { // PlaceHolder Structure
};

typedef struct ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>> ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>, *PListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>;

struct ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>> { // PlaceHolder Structure
};

typedef struct ListenerList<juce::ApplicationCommandManagerListener,juce::Array<juce::ApplicationCommandManagerListener*,juce::DummyCriticalSection,0>> ListenerList<juce::ApplicationCommandManagerListener,juce::Array<juce::ApplicationCommandManagerListener*,juce::DummyCriticalSection,0>>, *PListenerList<juce::ApplicationCommandManagerListener,juce::Array<juce::ApplicationCommandManagerListener*,juce::DummyCriticalSection,0>>;

struct ListenerList<juce::ApplicationCommandManagerListener,juce::Array<juce::ApplicationCommandManagerListener*,juce::DummyCriticalSection,0>> { // PlaceHolder Class Structure
};

typedef struct ListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>> ListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>>, *PListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>>;

struct ListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>> { // PlaceHolder Structure
};

typedef struct ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>> ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>, *PListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>;

struct ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>> { // PlaceHolder Structure
};

typedef struct ListenerList<juce::ChangeListener,juce::Array<juce::ChangeListener*,juce::DummyCriticalSection,0>> ListenerList<juce::ChangeListener,juce::Array<juce::ChangeListener*,juce::DummyCriticalSection,0>>, *PListenerList<juce::ChangeListener,juce::Array<juce::ChangeListener*,juce::DummyCriticalSection,0>>;

struct ListenerList<juce::ChangeListener,juce::Array<juce::ChangeListener*,juce::DummyCriticalSection,0>> { // PlaceHolder Structure
};

typedef struct ListenerList<juce::ComboBox::Listener,juce::Array<juce::ComboBox::Listener*,juce::DummyCriticalSection,0>> ListenerList<juce::ComboBox::Listener,juce::Array<juce::ComboBox::Listener*,juce::DummyCriticalSection,0>>, *PListenerList<juce::ComboBox::Listener,juce::Array<juce::ComboBox::Listener*,juce::DummyCriticalSection,0>>;

struct ListenerList<juce::ComboBox::Listener,juce::Array<juce::ComboBox::Listener*,juce::DummyCriticalSection,0>> { // PlaceHolder Structure
};

typedef struct ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>> ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>, *PListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>;

struct ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>> { // PlaceHolder Structure
};

typedef struct ListenerList<juce::ComponentPeer::ScaleFactorListener,juce::Array<juce::ComponentPeer::ScaleFactorListener*,juce::DummyCriticalSection,0>> ListenerList<juce::ComponentPeer::ScaleFactorListener,juce::Array<juce::ComponentPeer::ScaleFactorListener*,juce::DummyCriticalSection,0>>, *PListenerList<juce::ComponentPeer::ScaleFactorListener,juce::Array<juce::ComponentPeer::ScaleFactorListener*,juce::DummyCriticalSection,0>>;

struct ListenerList<juce::ComponentPeer::ScaleFactorListener,juce::Array<juce::ComponentPeer::ScaleFactorListener*,juce::DummyCriticalSection,0>> { // PlaceHolder Structure
};

typedef struct ListenerList<juce::ComponentPeer::VBlankListener,juce::Array<juce::ComponentPeer::VBlankListener*,juce::DummyCriticalSection,0>> ListenerList<juce::ComponentPeer::VBlankListener,juce::Array<juce::ComponentPeer::VBlankListener*,juce::DummyCriticalSection,0>>, *PListenerList<juce::ComponentPeer::VBlankListener,juce::Array<juce::ComponentPeer::VBlankListener*,juce::DummyCriticalSection,0>>;

struct ListenerList<juce::ComponentPeer::VBlankListener,juce::Array<juce::ComponentPeer::VBlankListener*,juce::DummyCriticalSection,0>> { // PlaceHolder Structure
};

typedef struct ListenerList<juce::DarkModeSettingListener,juce::Array<juce::DarkModeSettingListener*,juce::DummyCriticalSection,0>> ListenerList<juce::DarkModeSettingListener,juce::Array<juce::DarkModeSettingListener*,juce::DummyCriticalSection,0>>, *PListenerList<juce::DarkModeSettingListener,juce::Array<juce::DarkModeSettingListener*,juce::DummyCriticalSection,0>>;

struct ListenerList<juce::DarkModeSettingListener,juce::Array<juce::DarkModeSettingListener*,juce::DummyCriticalSection,0>> { // PlaceHolder Structure
};

typedef struct ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>> ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>, *PListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>;

struct ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>> { // PlaceHolder Structure
};

typedef struct ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>> ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>, *PListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>;

struct ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>> { // PlaceHolder Structure
};

typedef struct ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>> ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>, *PListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>;

struct ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>> { // PlaceHolder Structure
};

typedef struct ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>> ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>, *PListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>;

struct ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>> { // PlaceHolder Structure
};

typedef struct ListenerList<juce::ScrollBar::Listener,juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>> ListenerList<juce::ScrollBar::Listener,juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>>, *PListenerList<juce::ScrollBar::Listener,juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>>;

struct ListenerList<juce::ScrollBar::Listener,juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>> { // PlaceHolder Class Structure
};

typedef struct ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>> ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>, *PListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>;

struct ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>> { // PlaceHolder Structure
};

typedef struct ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>> ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>, *PListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>;

struct ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>> { // PlaceHolder Structure
};

typedef struct ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>> ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>, *PListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>;

struct ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>> { // PlaceHolder Structure
};

typedef struct ListenerList<juce::Thread::Listener,juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>> ListenerList<juce::Thread::Listener,juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>>, *PListenerList<juce::Thread::Listener,juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>>;

struct ListenerList<juce::Thread::Listener,juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>> { // PlaceHolder Structure
};

typedef struct ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>> ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>, *PListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>;

struct ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>> { // PlaceHolder Structure
};

typedef struct ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>> ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>, *PListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>;

struct ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>> { // PlaceHolder Structure
};

typedef struct ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>> ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>, *PListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>;

struct ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>> { // PlaceHolder Structure
};

typedef struct locale locale, *Plocale;

struct locale { // PlaceHolder Structure
};

typedef struct LocalisedStrings LocalisedStrings, *PLocalisedStrings;

struct LocalisedStrings { // PlaceHolder Structure
};

typedef struct Lock Lock, *PLock;

struct Lock { // PlaceHolder Class Structure
};

typedef struct LockedVSTComSmartPtr<juce::JuceAudioProcessor> LockedVSTComSmartPtr<juce::JuceAudioProcessor>, *PLockedVSTComSmartPtr<juce::JuceAudioProcessor>;

struct LockedVSTComSmartPtr<juce::JuceAudioProcessor> { // PlaceHolder Structure
};

typedef struct LockedVSTComSmartPtr<juce::JuceVST3EditController> LockedVSTComSmartPtr<juce::JuceVST3EditController>, *PLockedVSTComSmartPtr<juce::JuceVST3EditController>;

struct LockedVSTComSmartPtr<juce::JuceVST3EditController> { // PlaceHolder Structure
};

typedef struct LockedVSTComSmartPtr<Steinberg::Vst::IHostApplication> LockedVSTComSmartPtr<Steinberg::Vst::IHostApplication>, *PLockedVSTComSmartPtr<Steinberg::Vst::IHostApplication>;

struct LockedVSTComSmartPtr<Steinberg::Vst::IHostApplication> { // PlaceHolder Structure
};

typedef struct logic_error logic_error, *Plogic_error;

struct logic_error { // PlaceHolder Structure
};

typedef struct LookAndFeel LookAndFeel, *PLookAndFeel;

struct LookAndFeel { // PlaceHolder Structure
};

typedef struct LookAndFeel_V2 LookAndFeel_V2, *PLookAndFeel_V2;

struct LookAndFeel_V2 { // PlaceHolder Structure
};

typedef struct LookAndFeel_V3 LookAndFeel_V3, *PLookAndFeel_V3;

struct LookAndFeel_V3 { // PlaceHolder Structure
};

typedef struct LookAndFeel_V3_DocumentWindowButton LookAndFeel_V3_DocumentWindowButton, *PLookAndFeel_V3_DocumentWindowButton;

struct LookAndFeel_V3_DocumentWindowButton { // PlaceHolder Structure
};

typedef struct LookAndFeel_V4 LookAndFeel_V4, *PLookAndFeel_V4;

struct LookAndFeel_V4 { // PlaceHolder Structure
};

typedef struct LookAndFeel_V4_DocumentWindowButton LookAndFeel_V4_DocumentWindowButton, *PLookAndFeel_V4_DocumentWindowButton;

struct LookAndFeel_V4_DocumentWindowButton { // PlaceHolder Structure
};

typedef struct LookAndFeelHelpers LookAndFeelHelpers, *PLookAndFeelHelpers;

struct LookAndFeelHelpers { // PlaceHolder Class Structure
};

typedef struct Lookup<OT::HBGlyphID16> Lookup<OT::HBGlyphID16>, *PLookup<OT::HBGlyphID16>;

struct Lookup<OT::HBGlyphID16> { // PlaceHolder Class Structure
};

typedef struct Lookup<OT::IntType<unsigned_int,4u>> Lookup<OT::IntType<unsigned_int,4u>>, *PLookup<OT::IntType<unsigned_int,4u>>;

struct Lookup<OT::IntType<unsigned_int,4u>> { // PlaceHolder Class Structure
};

typedef struct Lookup<OT::IntType<unsigned_short,2u>> Lookup<OT::IntType<unsigned_short,2u>>, *PLookup<OT::IntType<unsigned_short,2u>>;

struct Lookup<OT::IntType<unsigned_short,2u>> { // PlaceHolder Class Structure
};

typedef struct Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>> Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>, *PLookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>;

struct Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>> { // PlaceHolder Class Structure
};

typedef struct LookupRecord LookupRecord, *PLookupRecord;

struct LookupRecord { // PlaceHolder Structure
};

typedef struct LowLevelGraphicsContext LowLevelGraphicsContext, *PLowLevelGraphicsContext;

struct LowLevelGraphicsContext { // PlaceHolder Class Structure
};

typedef struct LowLevelGraphicsSoftwareRenderer LowLevelGraphicsSoftwareRenderer, *PLowLevelGraphicsSoftwareRenderer;

struct LowLevelGraphicsSoftwareRenderer { // PlaceHolder Structure
};

typedef struct LruCache<juce::String,juce::Array<juce::Unicode::Codepoint,juce::DummyCriticalSection,0>,128ul> LruCache<juce::String,juce::Array<juce::Unicode::Codepoint,juce::DummyCriticalSection,0>,128ul>, *PLruCache<juce::String,juce::Array<juce::Unicode::Codepoint,juce::DummyCriticalSection,0>,128ul>;

struct LruCache<juce::String,juce::Array<juce::Unicode::Codepoint,juce::DummyCriticalSection,0>,128ul> { // PlaceHolder Structure
};

typedef struct LruCache<std::tuple<float,float>,juce::HbPtr<hb_font_t,&hb_font_reference,&hb_font_destroy>,128ul> LruCache<std::tuple<float,float>,juce::HbPtr<hb_font_t,&hb_font_reference,&hb_font_destroy>,128ul>, *PLruCache<std::tuple<float,float>,juce::HbPtr<hb_font_t,&hb_font_reference,&hb_font_destroy>,128ul>;

struct LruCache<std::tuple<float,float>,juce::HbPtr<hb_font_t,&hb_font_reference,&hb_font_destroy>,128ul> { // PlaceHolder Structure
};

typedef struct LruCache<unsigned_int,std::optional<hb_glyph_extents_t>,512ul> LruCache<unsigned_int,std::optional<hb_glyph_extents_t>,512ul>, *PLruCache<unsigned_int,std::optional<hb_glyph_extents_t>,512ul>;

struct LruCache<unsigned_int,std::optional<hb_glyph_extents_t>,512ul> { // PlaceHolder Class Structure
};

typedef struct ltag ltag, *Pltag;

struct ltag { // PlaceHolder Class Structure
};

typedef struct machine_index_t machine_index_t, *Pmachine_index_t;

struct machine_index_t { // PlaceHolder Structure
};

typedef struct machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>>> machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>>>, *Pmachine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>>>;

struct machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>>> { // PlaceHolder Structure
};

typedef struct map<char_const*,char16_t*,std::less<char_const*>,std::allocator<std::pair<char_const*const,char16_t*>>> map<char_const*,char16_t*,std::less<char_const*>,std::allocator<std::pair<char_const*const,char16_t*>>>, *Pmap<char_const*,char16_t*,std::less<char_const*>,std::allocator<std::pair<char_const*const,char16_t*>>>;

struct map<char_const*,char16_t*,std::less<char_const*>,std::allocator<std::pair<char_const*const,char16_t*>>> { // PlaceHolder Class Structure
};

typedef struct map<char_const,char16_t,std::less<char_const>,std::allocator<std::pair<char_const,char16_t>>> map<char_const,char16_t,std::less<char_const>,std::allocator<std::pair<char_const,char16_t>>>, *Pmap<char_const,char16_t,std::less<char_const>,std::allocator<std::pair<char_const,char16_t>>>;

struct map<char_const,char16_t,std::less<char_const>,std::allocator<std::pair<char_const,char16_t>>> { // PlaceHolder Class Structure
};

typedef struct map<int,unsigned_long,std::less<int>,std::allocator<std::pair<int_const,unsigned_long>>> map<int,unsigned_long,std::less<int>,std::allocator<std::pair<int_const,unsigned_long>>>, *Pmap<int,unsigned_long,std::less<int>,std::allocator<std::pair<int_const,unsigned_long>>>;

struct map<int,unsigned_long,std::less<int>,std::allocator<std::pair<int_const,unsigned_long>>> { // PlaceHolder Structure
};

typedef struct map<juce::String,juce::AudioProcessorParameter*,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>> map<juce::String,juce::AudioProcessorParameter*,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>>, *Pmap<juce::String,juce::AudioProcessorParameter*,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>>;

struct map<juce::String,juce::AudioProcessorParameter*,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>> { // PlaceHolder Structure
};

typedef struct map<juce::String,juce::LruCache<juce::String,juce::Array<juce::Unicode::Codepoint,juce::DummyCriticalSection,0>,128ul>::Pair,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::LruCache<juce::String,juce::Array<juce::Unicode::Codepoint,juce::DummyCriticalSection,0>,128ul>::Pair>>> map<juce::String,juce::LruCache<juce::String,juce::Array<juce::Unicode::Codepoint,juce::DummyCriticalSection,0>,128ul>::Pair,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::LruCache<juce::String,juce::Array<juce::Unicode::Codepoint,juce::DummyCriticalSection,0>,128ul>::Pair>>>, *Pmap<juce::String,juce::LruCache<juce::String,juce::Array<juce::Unicode::Codepoint,juce::DummyCriticalSection,0>,128ul>::Pair,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::LruCache<juce::String,juce::Array<juce::Unicode::Codepoint,juce::DummyCriticalSection,0>,128ul>::Pair>>>;

struct map<juce::String,juce::LruCache<juce::String,juce::Array<juce::Unicode::Codepoint,juce::DummyCriticalSection,0>,128ul>::Pair,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::LruCache<juce::String,juce::Array<juce::Unicode::Codepoint,juce::DummyCriticalSection,0>,128ul>::Pair>>> { // PlaceHolder Structure
};

typedef struct map<juce::TypefaceFileAndIndex,juce::LruCache<juce::TypefaceFileAndIndex,juce::ReferenceCountedObjectPtr<juce::Typeface>,128ul>::Pair,std::less<juce::TypefaceFileAndIndex>,std::allocator<std::pair<juce::TypefaceFileAndIndex_const,juce::LruCache<juce::TypefaceFileAndIndex,juce::ReferenceCountedObjectPtr<juce::Typeface>,128ul>::Pair>>> map<juce::TypefaceFileAndIndex,juce::LruCache<juce::TypefaceFileAndIndex,juce::ReferenceCountedObjectPtr<juce::Typeface>,128ul>::Pair,std::less<juce::TypefaceFileAndIndex>,std::allocator<std::pair<juce::TypefaceFileAndIndex_const,juce::LruCache<juce::TypefaceFileAndIndex,juce::ReferenceCountedObjectPtr<juce::Typeface>,128ul>::Pair>>>, *Pmap<juce::TypefaceFileAndIndex,juce::LruCache<juce::TypefaceFileAndIndex,juce::ReferenceCountedObjectPtr<juce::Typeface>,128ul>::Pair,std::less<juce::TypefaceFileAndIndex>,std::allocator<std::pair<juce::TypefaceFileAndIndex_const,juce::LruCache<juce::TypefaceFileAndIndex,juce::ReferenceCountedObjectPtr<juce::Typeface>,128ul>::Pair>>>;

struct map<juce::TypefaceFileAndIndex,juce::LruCache<juce::TypefaceFileAndIndex,juce::ReferenceCountedObjectPtr<juce::Typeface>,128ul>::Pair,std::less<juce::TypefaceFileAndIndex>,std::allocator<std::pair<juce::TypefaceFileAndIndex_const,juce::LruCache<juce::TypefaceFileAndIndex,juce::ReferenceCountedObjectPtr<juce::Typeface>,128ul>::Pair>>> { // PlaceHolder Structure
};

typedef struct map<std::__cxx11::string,Steinberg::Vst::HostAttributeList::Attribute,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>> map<std::__cxx11::string,Steinberg::Vst::HostAttributeList::Attribute,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>>, *Pmap<std::__cxx11::string,Steinberg::Vst::HostAttributeList::Attribute,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>>;

struct map<std::__cxx11::string,Steinberg::Vst::HostAttributeList::Attribute,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>> { // PlaceHolder Class Structure
};

typedef struct map<std::array<std::byte,16ul>,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>,std::less<std::array<std::byte,16ul>>,std::allocator<std::pair<std::array<std::byte,16ul>const,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>>>> map<std::array<std::byte,16ul>,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>,std::less<std::array<std::byte,16ul>>,std::allocator<std::pair<std::array<std::byte,16ul>const,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>>>>, *Pmap<std::array<std::byte,16ul>,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>,std::less<std::array<std::byte,16ul>>,std::allocator<std::pair<std::array<std::byte,16ul>const,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>>>>;

struct map<std::array<std::byte,16ul>,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>,std::less<std::array<std::byte,16ul>>,std::allocator<std::pair<std::array<std::byte,16ul>const,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>>>> { // PlaceHolder Structure
};

typedef struct map<Steinberg::FUnknown_const*,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>,std::less<Steinberg::FUnknown_const*>,std::allocator<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>> map<Steinberg::FUnknown_const*,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>,std::less<Steinberg::FUnknown_const*>,std::allocator<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>>, *Pmap<Steinberg::FUnknown_const*,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>,std::less<Steinberg::FUnknown_const*>,std::allocator<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>>;

struct map<Steinberg::FUnknown_const*,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>,std::less<Steinberg::FUnknown_const*>,std::allocator<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>> { // PlaceHolder Structure
};

typedef struct map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>> map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>, *Pmap<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>;

struct map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>> { // PlaceHolder Structure
};

typedef struct map<unsigned_int,unsigned_long,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_long>>> map<unsigned_int,unsigned_long,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_long>>>, *Pmap<unsigned_int,unsigned_long,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_long>>>;

struct map<unsigned_int,unsigned_long,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_long>>> { // PlaceHolder Class Structure
};

typedef struct map<unsigned_long,int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>> map<unsigned_long,int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>>, *Pmap<unsigned_long,int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>>;

struct map<unsigned_long,int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>> { // PlaceHolder Structure
};

typedef struct map<void*,std::function<void()>,std::less<void*>,std::allocator<std::pair<void*const,std::function<void()>>>> map<void*,std::function<void()>,std::less<void*>,std::allocator<std::pair<void*const,std::function<void()>>>>, *Pmap<void*,std::function<void()>,std::less<void*>,std::allocator<std::pair<void*const,std::function<void()>>>>;

struct map<void*,std::function<void()>,std::less<void*>,std::allocator<std::pair<void*const,std::function<void()>>>> { // PlaceHolder Structure
};

typedef struct MarkArray MarkArray, *PMarkArray;

struct MarkArray { // PlaceHolder Class Structure
};

typedef struct MarkBasePosFormat1_2<OT::Layout::SmallTypes> MarkBasePosFormat1_2<OT::Layout::SmallTypes>, *PMarkBasePosFormat1_2<OT::Layout::SmallTypes>;

struct MarkBasePosFormat1_2<OT::Layout::SmallTypes> { // PlaceHolder Class Structure
};

typedef struct MarkGlyphSetsFormat1 MarkGlyphSetsFormat1, *PMarkGlyphSetsFormat1;

struct MarkGlyphSetsFormat1 { // PlaceHolder Class Structure
};

typedef struct MarkLigPosFormat1_2<OT::Layout::SmallTypes> MarkLigPosFormat1_2<OT::Layout::SmallTypes>, *PMarkLigPosFormat1_2<OT::Layout::SmallTypes>;

struct MarkLigPosFormat1_2<OT::Layout::SmallTypes> { // PlaceHolder Class Structure
};

typedef struct MarkMarkPosFormat1_2<OT::Layout::SmallTypes> MarkMarkPosFormat1_2<OT::Layout::SmallTypes>, *PMarkMarkPosFormat1_2<OT::Layout::SmallTypes>;

struct MarkMarkPosFormat1_2<OT::Layout::SmallTypes> { // PlaceHolder Class Structure
};

typedef struct Master Master, *PMaster;

struct Master { // PlaceHolder Structure
};

typedef undefined MBCodePage;

typedef struct MemoryBlock MemoryBlock, *PMemoryBlock;

struct MemoryBlock { // PlaceHolder Structure
};

typedef struct MemoryInputStream MemoryInputStream, *PMemoryInputStream;

struct MemoryInputStream { // PlaceHolder Structure
};

typedef struct MemoryOutputStream MemoryOutputStream, *PMemoryOutputStream;

struct MemoryOutputStream { // PlaceHolder Structure
};

typedef struct MemoryStream MemoryStream, *PMemoryStream;

struct MemoryStream { // PlaceHolder Structure
};

typedef struct MenuBarComponent MenuBarComponent, *PMenuBarComponent;

struct MenuBarComponent { // PlaceHolder Structure
};

typedef struct MenuItemIterator MenuItemIterator, *PMenuItemIterator;

struct MenuItemIterator { // PlaceHolder Class Structure
};

typedef undefined MenuSelectionDirection;

typedef struct MenuWindow MenuWindow, *PMenuWindow;

struct MenuWindow { // PlaceHolder Structure
};

typedef undefined MergeEqualItemsYes;

typedef struct MessageBase MessageBase, *PMessageBase;

struct MessageBase { // PlaceHolder Structure
};

typedef undefined MessageBoxIconType;

typedef struct MessageManager MessageManager, *PMessageManager;

struct MessageManager { // PlaceHolder Class Structure
};

typedef struct MessageManagerLock MessageManagerLock, *PMessageManagerLock;

struct MessageManagerLock { // PlaceHolder Structure
};

typedef struct MessageThread MessageThread, *PMessageThread;

struct MessageThread { // PlaceHolder Structure
};

typedef struct MidiBuffer MidiBuffer, *PMidiBuffer;

struct MidiBuffer { // PlaceHolder Structure
};

typedef struct ModalComponentManager ModalComponentManager, *PModalComponentManager;

struct ModalComponentManager { // PlaceHolder Structure
};

typedef struct ModalComponentManagerChangeNotifier ModalComponentManagerChangeNotifier, *PModalComponentManagerChangeNotifier;

struct ModalComponentManagerChangeNotifier { // PlaceHolder Structure
};

typedef struct ModalItem ModalItem, *PModalItem;

struct ModalItem { // PlaceHolder Structure
};

typedef struct ModifierKeys ModifierKeys, *PModifierKeys;

struct ModifierKeys { // PlaceHolder Structure
};

typedef struct ModuleInfo ModuleInfo, *PModuleInfo;

struct ModuleInfo { // PlaceHolder Structure
};

typedef struct ModuleInfoJsonParser ModuleInfoJsonParser, *PModuleInfoJsonParser;

struct ModuleInfoJsonParser { // PlaceHolder Class Structure
};

typedef undefined MouseCursor;

typedef struct MouseEvent MouseEvent, *PMouseEvent;

struct MouseEvent { // PlaceHolder Structure
};

typedef undefined MouseInputSource;

typedef struct MouseInputSourceImpl MouseInputSourceImpl, *PMouseInputSourceImpl;

struct MouseInputSourceImpl { // PlaceHolder Structure
};

typedef struct MouseInputSourceList MouseInputSourceList, *PMouseInputSourceList;

struct MouseInputSourceList { // PlaceHolder Structure
};

typedef struct MouseListener MouseListener, *PMouseListener;

struct MouseListener { // PlaceHolder Structure
};

typedef struct MouseSourceState MouseSourceState, *PMouseSourceState;

struct MouseSourceState { // PlaceHolder Structure
};

typedef struct MouseWheelDetails MouseWheelDetails, *PMouseWheelDetails;

struct MouseWheelDetails { // PlaceHolder Structure
};

typedef struct multiset<Steinberg::Linux::IRunLoop*,std::less<Steinberg::Linux::IRunLoop*>,std::allocator<Steinberg::Linux::IRunLoop*>> multiset<Steinberg::Linux::IRunLoop*,std::less<Steinberg::Linux::IRunLoop*>,std::allocator<Steinberg::Linux::IRunLoop*>>, *Pmultiset<Steinberg::Linux::IRunLoop*,std::less<Steinberg::Linux::IRunLoop*>,std::allocator<Steinberg::Linux::IRunLoop*>>;

struct multiset<Steinberg::Linux::IRunLoop*,std::less<Steinberg::Linux::IRunLoop*>,std::allocator<Steinberg::Linux::IRunLoop*>> { // PlaceHolder Structure
};

typedef struct MVAR MVAR, *PMVAR;

struct MVAR { // PlaceHolder Class Structure
};

typedef struct NamedValueSet NamedValueSet, *PNamedValueSet;

struct NamedValueSet { // PlaceHolder Structure
};

typedef struct Native Native, *PNative;

struct Native { // PlaceHolder Structure
};

typedef struct NativeDarkModeChangeDetectorImpl NativeDarkModeChangeDetectorImpl, *PNativeDarkModeChangeDetectorImpl;

struct NativeDarkModeChangeDetectorImpl { // PlaceHolder Structure
};

typedef struct NativeImageType NativeImageType, *PNativeImageType;

struct NativeImageType { // PlaceHolder Structure
};

typedef struct NativeIterator NativeIterator, *PNativeIterator;

struct NativeIterator { // PlaceHolder Structure
};

typedef undefined NavigationDirection;

typedef ulong nfds_t;

typedef int nl_item;

typedef struct NoncontextualSubtable<AAT::ObsoleteTypes> NoncontextualSubtable<AAT::ObsoleteTypes>, *PNoncontextualSubtable<AAT::ObsoleteTypes>;

struct NoncontextualSubtable<AAT::ObsoleteTypes> { // PlaceHolder Class Structure
};

typedef struct NormalisableRange NormalisableRange, *PNormalisableRange;

struct NormalisableRange { // PlaceHolder Structure
};

typedef struct NormalisableRange<double> NormalisableRange<double>, *PNormalisableRange<double>;

struct NormalisableRange<double> { // PlaceHolder Structure
};

typedef struct NormalisableRange<float> NormalisableRange<float>, *PNormalisableRange<float>;

struct NormalisableRange<float> { // PlaceHolder Structure
};

typedef struct nothrow_t nothrow_t, *Pnothrow_t;

struct nothrow_t { // PlaceHolder Structure
};

typedef undefined NotificationType;

typedef struct Number Number, *PNumber;

struct Number { // PlaceHolder Class Structure
};

typedef struct object_t object_t, *Pobject_t;

struct object_t { // PlaceHolder Structure
};

typedef struct OffsetTo OffsetTo, *POffsetTo;

struct OffsetTo { // PlaceHolder Structure
};

typedef struct OffsetTo<OT::Layout::Common::Coverage,OT::IntType<unsigned_short,2u>,void,true> OffsetTo<OT::Layout::Common::Coverage,OT::IntType<unsigned_short,2u>,void,true>, *POffsetTo<OT::Layout::Common::Coverage,OT::IntType<unsigned_short,2u>,void,true>;

struct OffsetTo<OT::Layout::Common::Coverage,OT::IntType<unsigned_short,2u>,void,true> { // PlaceHolder Class Structure
};

typedef struct op_str_t op_str_t, *Pop_str_t;

struct op_str_t { // PlaceHolder Structure
};

typedef struct OpenTypeFontFile OpenTypeFontFile, *POpenTypeFontFile;

struct OpenTypeFontFile { // PlaceHolder Class Structure
};

typedef undefined Optional;

typedef undefined optional;

typedef struct Optional<VST3::Vst2xProgram> Optional<VST3::Vst2xProgram>, *POptional<VST3::Vst2xProgram>;

struct Optional<VST3::Vst2xProgram> { // PlaceHolder Class Structure
};

typedef struct OptionalScopedPointer<juce::TextEditor::InputFilter> OptionalScopedPointer<juce::TextEditor::InputFilter>, *POptionalScopedPointer<juce::TextEditor::InputFilter>;

struct OptionalScopedPointer<juce::TextEditor::InputFilter> { // PlaceHolder Structure
};

typedef struct Options Options, *POptions;

struct Options { // PlaceHolder Structure
};

typedef struct ostream ostream, *Postream;

struct ostream { // PlaceHolder Structure
};

typedef struct OutlineWindowComponent OutlineWindowComponent, *POutlineWindowComponent;

struct OutlineWindowComponent { // PlaceHolder Structure
};

typedef struct OutlineWindowProperties OutlineWindowProperties, *POutlineWindowProperties;

struct OutlineWindowProperties { // PlaceHolder Structure
};

typedef struct OutputStream OutputStream, *POutputStream;

struct OutputStream { // PlaceHolder Structure
};

typedef struct OwnedArray<juce::AudioProcessor::Bus,juce::DummyCriticalSection> OwnedArray<juce::AudioProcessor::Bus,juce::DummyCriticalSection>, *POwnedArray<juce::AudioProcessor::Bus,juce::DummyCriticalSection>;

struct OwnedArray<juce::AudioProcessor::Bus,juce::DummyCriticalSection> { // PlaceHolder Structure
};

typedef struct OwnedArray<juce::AudioProcessorParameterGroup::AudioProcessorParameterNode,juce::DummyCriticalSection> OwnedArray<juce::AudioProcessorParameterGroup::AudioProcessorParameterNode,juce::DummyCriticalSection>, *POwnedArray<juce::AudioProcessorParameterGroup::AudioProcessorParameterNode,juce::DummyCriticalSection>;

struct OwnedArray<juce::AudioProcessorParameterGroup::AudioProcessorParameterNode,juce::DummyCriticalSection> { // PlaceHolder Structure
};

typedef struct OwnedArray<juce::ComboBox,juce::DummyCriticalSection> OwnedArray<juce::ComboBox,juce::DummyCriticalSection>, *POwnedArray<juce::ComboBox,juce::DummyCriticalSection>;

struct OwnedArray<juce::ComboBox,juce::DummyCriticalSection> { // PlaceHolder Structure
};

typedef struct OwnedArray<juce::Component,juce::DummyCriticalSection> OwnedArray<juce::Component,juce::DummyCriticalSection>, *POwnedArray<juce::Component,juce::DummyCriticalSection>;

struct OwnedArray<juce::Component,juce::DummyCriticalSection> { // PlaceHolder Structure
};

typedef struct OwnedArray<juce::detail::MouseInputSourceImpl,juce::DummyCriticalSection> OwnedArray<juce::detail::MouseInputSourceImpl,juce::DummyCriticalSection>, *POwnedArray<juce::detail::MouseInputSourceImpl,juce::DummyCriticalSection>;

struct OwnedArray<juce::detail::MouseInputSourceImpl,juce::DummyCriticalSection> { // PlaceHolder Structure
};

typedef struct OwnedArray<juce::PopupMenu::HelperClasses::ItemComponent,juce::DummyCriticalSection> OwnedArray<juce::PopupMenu::HelperClasses::ItemComponent,juce::DummyCriticalSection>, *POwnedArray<juce::PopupMenu::HelperClasses::ItemComponent,juce::DummyCriticalSection>;

struct OwnedArray<juce::PopupMenu::HelperClasses::ItemComponent,juce::DummyCriticalSection> { // PlaceHolder Structure
};

typedef struct OwnedArray<juce::PopupMenu::HelperClasses::MouseSourceState,juce::DummyCriticalSection> OwnedArray<juce::PopupMenu::HelperClasses::MouseSourceState,juce::DummyCriticalSection>, *POwnedArray<juce::PopupMenu::HelperClasses::MouseSourceState,juce::DummyCriticalSection>;

struct OwnedArray<juce::PopupMenu::HelperClasses::MouseSourceState,juce::DummyCriticalSection> { // PlaceHolder Structure
};

typedef struct OwnedArray<juce::ProgressBar,juce::DummyCriticalSection> OwnedArray<juce::ProgressBar,juce::DummyCriticalSection>, *POwnedArray<juce::ProgressBar,juce::DummyCriticalSection>;

struct OwnedArray<juce::ProgressBar,juce::DummyCriticalSection> { // PlaceHolder Structure
};

typedef struct OwnedArray<juce::TextButton,juce::DummyCriticalSection> OwnedArray<juce::TextButton,juce::DummyCriticalSection>, *POwnedArray<juce::TextButton,juce::DummyCriticalSection>;

struct OwnedArray<juce::TextButton,juce::DummyCriticalSection> { // PlaceHolder Structure
};

typedef struct OwnedArray<juce::TextEditor,juce::DummyCriticalSection> OwnedArray<juce::TextEditor,juce::DummyCriticalSection>, *POwnedArray<juce::TextEditor,juce::DummyCriticalSection>;

struct OwnedArray<juce::TextEditor,juce::DummyCriticalSection> { // PlaceHolder Structure
};

typedef struct OwnedArray<juce::UndoManager::ActionSet,juce::DummyCriticalSection> OwnedArray<juce::UndoManager::ActionSet,juce::DummyCriticalSection>, *POwnedArray<juce::UndoManager::ActionSet,juce::DummyCriticalSection>;

struct OwnedArray<juce::UndoManager::ActionSet,juce::DummyCriticalSection> { // PlaceHolder Class Structure
};

typedef struct OwnedGlyphsSpan OwnedGlyphsSpan, *POwnedGlyphsSpan;

struct OwnedGlyphsSpan { // PlaceHolder Structure
};

typedef struct OwnedParameterListener OwnedParameterListener, *POwnedParameterListener;

struct OwnedParameterListener { // PlaceHolder Structure
};

typedef struct Paint Paint, *PPaint;

struct Paint { // PlaceHolder Class Structure
};

typedef struct PaintComposite PaintComposite, *PPaintComposite;

struct PaintComposite { // PlaceHolder Class Structure
};

typedef struct PaintGlyph PaintGlyph, *PPaintGlyph;

struct PaintGlyph { // PlaceHolder Class Structure
};

typedef struct PaintLinearGradient<OT::NoVariable> PaintLinearGradient<OT::NoVariable>, *PPaintLinearGradient<OT::NoVariable>;

struct PaintLinearGradient<OT::NoVariable> { // PlaceHolder Class Structure
};

typedef struct PaintLinearGradient<OT::Variable> PaintLinearGradient<OT::Variable>, *PPaintLinearGradient<OT::Variable>;

struct PaintLinearGradient<OT::Variable> { // PlaceHolder Class Structure
};

typedef struct PaintRadialGradient<OT::NoVariable> PaintRadialGradient<OT::NoVariable>, *PPaintRadialGradient<OT::NoVariable>;

struct PaintRadialGradient<OT::NoVariable> { // PlaceHolder Class Structure
};

typedef struct PaintRadialGradient<OT::Variable> PaintRadialGradient<OT::Variable>, *PPaintRadialGradient<OT::Variable>;

struct PaintRadialGradient<OT::Variable> { // PlaceHolder Class Structure
};

typedef struct PaintRotate PaintRotate, *PPaintRotate;

struct PaintRotate { // PlaceHolder Class Structure
};

typedef struct PaintRotateAroundCenter PaintRotateAroundCenter, *PPaintRotateAroundCenter;

struct PaintRotateAroundCenter { // PlaceHolder Class Structure
};

typedef struct PaintScale PaintScale, *PPaintScale;

struct PaintScale { // PlaceHolder Class Structure
};

typedef struct PaintScaleAroundCenter PaintScaleAroundCenter, *PPaintScaleAroundCenter;

struct PaintScaleAroundCenter { // PlaceHolder Class Structure
};

typedef struct PaintScaleUniform PaintScaleUniform, *PPaintScaleUniform;

struct PaintScaleUniform { // PlaceHolder Class Structure
};

typedef struct PaintScaleUniformAroundCenter PaintScaleUniformAroundCenter, *PPaintScaleUniformAroundCenter;

struct PaintScaleUniformAroundCenter { // PlaceHolder Class Structure
};

typedef struct PaintSkew PaintSkew, *PPaintSkew;

struct PaintSkew { // PlaceHolder Class Structure
};

typedef struct PaintSkewAroundCenter PaintSkewAroundCenter, *PPaintSkewAroundCenter;

struct PaintSkewAroundCenter { // PlaceHolder Class Structure
};

typedef struct PaintSolid PaintSolid, *PPaintSolid;

struct PaintSolid { // PlaceHolder Class Structure
};

typedef struct PaintSweepGradient<OT::NoVariable> PaintSweepGradient<OT::NoVariable>, *PPaintSweepGradient<OT::NoVariable>;

struct PaintSweepGradient<OT::NoVariable> { // PlaceHolder Class Structure
};

typedef struct PaintSweepGradient<OT::Variable> PaintSweepGradient<OT::Variable>, *PPaintSweepGradient<OT::Variable>;

struct PaintSweepGradient<OT::Variable> { // PlaceHolder Class Structure
};

typedef struct PaintTransform<OT::NoVariable> PaintTransform<OT::NoVariable>, *PPaintTransform<OT::NoVariable>;

struct PaintTransform<OT::NoVariable> { // PlaceHolder Class Structure
};

typedef struct PaintTransform<OT::Variable> PaintTransform<OT::Variable>, *PPaintTransform<OT::Variable>;

struct PaintTransform<OT::Variable> { // PlaceHolder Class Structure
};

typedef struct PaintTranslate PaintTranslate, *PPaintTranslate;

struct PaintTranslate { // PlaceHolder Class Structure
};

typedef struct Pair Pair, *PPair;

struct Pair { // PlaceHolder Structure
};

typedef struct pair pair, *Ppair;

struct pair { // PlaceHolder Structure
};

typedef struct pair<std::__cxx11::string_const,std::__cxx11::u16string> pair<std::__cxx11::string_const,std::__cxx11::u16string>, *Ppair<std::__cxx11::string_const,std::__cxx11::u16string>;

struct pair<std::__cxx11::string_const,std::__cxx11::u16string> { // PlaceHolder Class Structure
};

typedef struct PairPosFormat1_3<OT::Layout::SmallTypes> PairPosFormat1_3<OT::Layout::SmallTypes>, *PPairPosFormat1_3<OT::Layout::SmallTypes>;

struct PairPosFormat1_3<OT::Layout::SmallTypes> { // PlaceHolder Class Structure
};

typedef struct PairPosFormat2_4<OT::Layout::SmallTypes> PairPosFormat2_4<OT::Layout::SmallTypes>, *PPairPosFormat2_4<OT::Layout::SmallTypes>;

struct PairPosFormat2_4<OT::Layout::SmallTypes> { // PlaceHolder Class Structure
};

typedef struct PairSet<OT::Layout::SmallTypes> PairSet<OT::Layout::SmallTypes>, *PPairSet<OT::Layout::SmallTypes>;

struct PairSet<OT::Layout::SmallTypes> { // PlaceHolder Class Structure
};

typedef struct ParagraphsModel ParagraphsModel, *PParagraphsModel;

struct ParagraphsModel { // PlaceHolder Structure
};

typedef struct ParagraphStorage ParagraphStorage, *PParagraphStorage;

struct ParagraphStorage { // PlaceHolder Structure
};

typedef struct Param Param, *PParam;

struct Param { // PlaceHolder Structure
};

typedef struct param param, *Pparam;

struct param { // PlaceHolder Class Structure
};

typedef struct Parameter Parameter, *PParameter;

struct Parameter { // PlaceHolder Structure
};

typedef struct ParameterAdapter ParameterAdapter, *PParameterAdapter;

struct ParameterAdapter { // PlaceHolder Structure
};

typedef struct ParameterAttachment ParameterAttachment, *PParameterAttachment;

struct ParameterAttachment { // PlaceHolder Structure
};

typedef struct ParameterChangeForwarder ParameterChangeForwarder, *PParameterChangeForwarder;

struct ParameterChangeForwarder { // PlaceHolder Structure
};

typedef struct ParameterContainer ParameterContainer, *PParameterContainer;

struct ParameterContainer { // PlaceHolder Structure
};

typedef undefined ParameterControlHighlightInfo;

typedef struct ParameterID ParameterID, *PParameterID;

struct ParameterID { // PlaceHolder Structure
};

typedef struct ParameterInfo ParameterInfo, *PParameterInfo;

struct ParameterInfo { // PlaceHolder Structure
};

typedef struct ParameterLayout ParameterLayout, *PParameterLayout;

struct ParameterLayout { // PlaceHolder Structure
};

typedef struct ParameterStorage<juce::RangedAudioParameter> ParameterStorage<juce::RangedAudioParameter>, *PParameterStorage<juce::RangedAudioParameter>;

struct ParameterStorage<juce::RangedAudioParameter> { // PlaceHolder Structure
};

typedef struct ParentVisibilityChangedListener ParentVisibilityChangedListener, *PParentVisibilityChangedListener;

struct ParentVisibilityChangedListener { // PlaceHolder Structure
};

typedef struct parse_error parse_error, *Pparse_error;

struct parse_error { // PlaceHolder Structure
};

typedef struct parsed_values_t<CFF::cff1_top_dict_val_t> parsed_values_t<CFF::cff1_top_dict_val_t>, *Pparsed_values_t<CFF::cff1_top_dict_val_t>;

struct parsed_values_t<CFF::cff1_top_dict_val_t> { // PlaceHolder Structure
};

typedef struct parsed_values_t<CFF::dict_val_t> parsed_values_t<CFF::dict_val_t>, *Pparsed_values_t<CFF::dict_val_t>;

struct parsed_values_t<CFF::dict_val_t> { // PlaceHolder Class Structure
};

typedef struct parsed_values_t<CFF::op_str_t> parsed_values_t<CFF::op_str_t>, *Pparsed_values_t<CFF::op_str_t>;

struct parsed_values_t<CFF::op_str_t> { // PlaceHolder Structure
};

typedef undefined partial_ordering;

typedef struct passwd passwd, *Ppasswd;

struct passwd {
    char *pw_name;
    char *pw_passwd;
    __uid_t pw_uid;
    __gid_t pw_gid;
    char *pw_gecos;
    char *pw_dir;
    char *pw_shell;
};

typedef struct Path Path, *PPath;

struct Path { // PlaceHolder Structure
};

typedef struct PathFlatteningIterator PathFlatteningIterator, *PPathFlatteningIterator;

struct PathFlatteningIterator { // PlaceHolder Class Structure
};

typedef struct PathStrokeType PathStrokeType, *PPathStrokeType;

struct PathStrokeType { // PlaceHolder Structure
};

typedef struct PClassInfo PClassInfo, *PPClassInfo;

struct PClassInfo { // PlaceHolder Structure
};

typedef struct PClassInfo2 PClassInfo2, *PPClassInfo2;

struct PClassInfo2 { // PlaceHolder Structure
};

typedef struct PClassInfoW PClassInfoW, *PPClassInfoW;

struct PClassInfoW { // PlaceHolder Structure
};

typedef struct PdWorker PdWorker, *PPdWorker;

struct PdWorker { // PlaceHolder Structure
};

typedef undefined PenDetails;

typedef struct PFactoryInfo PFactoryInfo, *PPFactoryInfo;

struct PFactoryInfo { // PlaceHolder Structure
};

typedef undefined PID;

typedef struct piecewise_construct_t piecewise_construct_t, *Ppiecewise_construct_t;

struct piecewise_construct_t { // PlaceHolder Structure
};

typedef struct Pimpl Pimpl, *PPimpl;

struct Pimpl { // PlaceHolder Structure
};

typedef struct PixelAlpha PixelAlpha, *PPixelAlpha;

struct PixelAlpha { // PlaceHolder Structure
};

typedef struct PixelARGB PixelARGB, *PPixelARGB;

struct PixelARGB { // PlaceHolder Structure
};

typedef undefined PixelFormat;

typedef struct PixelRGB PixelRGB, *PPixelRGB;

struct PixelRGB { // PlaceHolder Structure
};

typedef struct PlugInterfaceSupport PlugInterfaceSupport, *PPlugInterfaceSupport;

struct PlugInterfaceSupport { // PlaceHolder Structure
};

typedef struct png_color_16_struct png_color_16_struct, *Ppng_color_16_struct;

struct png_color_16_struct { // PlaceHolder Structure
};

typedef struct png_colorspace png_colorspace, *Ppng_colorspace;

struct png_colorspace { // PlaceHolder Structure
};

typedef struct png_info_def png_info_def, *Ppng_info_def;

struct png_info_def { // PlaceHolder Structure
};

typedef struct png_row_info_struct png_row_info_struct, *Ppng_row_info_struct;

struct png_row_info_struct { // PlaceHolder Structure
};

typedef struct png_sPLT_struct png_sPLT_struct, *Ppng_sPLT_struct;

struct png_sPLT_struct { // PlaceHolder Structure
};

typedef struct png_struct_def png_struct_def, *Ppng_struct_def;

struct png_struct_def { // PlaceHolder Structure
};

typedef struct png_text_struct png_text_struct, *Ppng_text_struct;

struct png_text_struct { // PlaceHolder Structure
};

typedef struct png_xy png_xy, *Ppng_xy;

struct png_xy { // PlaceHolder Structure
};

typedef struct png_XYZ png_XYZ, *Ppng_XYZ;

struct png_XYZ { // PlaceHolder Structure
};

typedef struct PNGImageFormat PNGImageFormat, *PPNGImageFormat;

struct PNGImageFormat { // PlaceHolder Structure
};

typedef struct pnglibNamespace pnglibNamespace, *PpnglibNamespace;

struct pnglibNamespace { // PlaceHolder Class Structure
};

typedef undefined Point;

typedef struct point_t point_t, *Ppoint_t;

struct point_t { // PlaceHolder Structure
};

typedef pointer pointer __((offset(0x10)));

typedef struct PointerState PointerState, *PPointerState;

struct PointerState { // PlaceHolder Structure
};

typedef undefined points_aggregator_t;

typedef struct pollfd pollfd, *Ppollfd;

struct pollfd {
    int fd;
    short events;
    short revents;
};

typedef struct PopupDisplayComponent PopupDisplayComponent, *PPopupDisplayComponent;

struct PopupDisplayComponent { // PlaceHolder Structure
};

typedef struct PopupMenu PopupMenu, *PPopupMenu;

struct PopupMenu { // PlaceHolder Structure
};

typedef struct PopupMenuCompletionCallback PopupMenuCompletionCallback, *PPopupMenuCompletionCallback;

struct PopupMenuCompletionCallback { // PlaceHolder Structure
};

typedef struct PositionedGlyph PositionedGlyph, *PPositionedGlyph;

struct PositionedGlyph { // PlaceHolder Class Structure
};

typedef struct PosLookup PosLookup, *PPosLookup;

struct PosLookup { // PlaceHolder Structure
};

typedef struct PresetFile PresetFile, *PPresetFile;

struct PresetFile { // PlaceHolder Structure
};

typedef undefined Priority;

typedef struct ProcessData ProcessData, *PProcessData;

struct ProcessData { // PlaceHolder Structure
};

typedef undefined ProcessingPrecision;

typedef struct ProcessSetup ProcessSetup, *PProcessSetup;

struct ProcessSetup { // PlaceHolder Structure
};

typedef struct ProgramChangeParameter ProgramChangeParameter, *PProgramChangeParameter;

struct ProgramChangeParameter { // PlaceHolder Structure
};

typedef struct ProgramList ProgramList, *PProgramList;

struct ProgramList { // PlaceHolder Structure
};

typedef struct ProgramListInfo ProgramListInfo, *PProgramListInfo;

struct ProgramListInfo { // PlaceHolder Structure
};

typedef struct ProgramListWithPitchNames ProgramListWithPitchNames, *PProgramListWithPitchNames;

struct ProgramListWithPitchNames { // PlaceHolder Structure
};

typedef struct ProgressBar ProgressBar, *PProgressBar;

struct ProgressBar { // PlaceHolder Structure
};

typedef struct PropertyComponent PropertyComponent, *PPropertyComponent;

struct PropertyComponent { // PlaceHolder Structure
};

typedef union pthread_attr_t pthread_attr_t, *Ppthread_attr_t;

union pthread_attr_t {
    char __size[56];
    long __align;
};

typedef union pthread_cond_t pthread_cond_t, *Ppthread_cond_t;

struct _struct_16 {
    int __lock;
    uint __futex;
    ulonglong __total_seq;
    ulonglong __wakeup_seq;
    ulonglong __woken_seq;
    void *__mutex;
    uint __nwaiters;
    uint __broadcast_seq;
};

union pthread_cond_t {
    struct _struct_16 __data;
    char __size[48];
    longlong __align;
};

typedef union pthread_condattr_t pthread_condattr_t, *Ppthread_condattr_t;

union pthread_condattr_t {
    char __size[4];
    int __align;
};

typedef union pthread_mutex_t pthread_mutex_t, *Ppthread_mutex_t;

struct __pthread_mutex_s {
    int __lock;
    uint __count;
    int __owner;
    uint __nusers;
    int __kind;
    int __spins;
    __pthread_list_t __list;
};

union pthread_mutex_t {
    struct __pthread_mutex_s __data;
    char __size[40];
    long __align;
};

typedef union pthread_mutexattr_t pthread_mutexattr_t, *Ppthread_mutexattr_t;

union pthread_mutexattr_t {
    char __size[4];
    int __align;
};

typedef union pthread_rwlock_t pthread_rwlock_t, *Ppthread_rwlock_t;

struct _struct_19 {
    int __lock;
    uint __nr_readers;
    uint __readers_wakeup;
    uint __writer_wakeup;
    uint __nr_readers_queued;
    uint __nr_writers_queued;
    int __writer;
    int __shared;
    ulong __pad1;
    ulong __pad2;
    uint __flags;
};

union pthread_rwlock_t {
    struct _struct_19 __data;
    char __size[56];
    long __align;
};

typedef ulong pthread_t;

typedef struct PushBackVisitor PushBackVisitor, *PPushBackVisitor;

struct PushBackVisitor { // PlaceHolder Structure
};

typedef struct QuitMessage QuitMessage, *PQuitMessage;

struct QuitMessage { // PlaceHolder Structure
};

typedef struct Random Random, *PRandom;

struct Random { // PlaceHolder Class Structure
};

typedef undefined random_access_iterator_tag;

typedef undefined Range;

typedef struct RangedAudioParameter RangedAudioParameter, *PRangedAudioParameter;

struct RangedAudioParameter { // PlaceHolder Structure
};

typedef struct RangedAudioParameterAttributes RangedAudioParameterAttributes, *PRangedAudioParameterAttributes;

struct RangedAudioParameterAttributes { // PlaceHolder Structure
};

typedef struct RangedAudioParameterAttributes<juce::AudioParameterBoolAttributes,bool> RangedAudioParameterAttributes<juce::AudioParameterBoolAttributes,bool>, *PRangedAudioParameterAttributes<juce::AudioParameterBoolAttributes,bool>;

struct RangedAudioParameterAttributes<juce::AudioParameterBoolAttributes,bool> { // PlaceHolder Structure
};

typedef struct RangedAudioParameterAttributes<juce::AudioParameterFloatAttributes,float> RangedAudioParameterAttributes<juce::AudioParameterFloatAttributes,float>, *PRangedAudioParameterAttributes<juce::AudioParameterFloatAttributes,float>;

struct RangedAudioParameterAttributes<juce::AudioParameterFloatAttributes,float> { // PlaceHolder Structure
};

typedef struct RangedAudioParameterAttributes<juce::AudioParameterIntAttributes,int> RangedAudioParameterAttributes<juce::AudioParameterIntAttributes,int>, *PRangedAudioParameterAttributes<juce::AudioParameterIntAttributes,int>;

struct RangedAudioParameterAttributes<juce::AudioParameterIntAttributes,int> { // PlaceHolder Structure
};

typedef struct RangedDirectoryIterator RangedDirectoryIterator, *PRangedDirectoryIterator;

struct RangedDirectoryIterator { // PlaceHolder Structure
};

typedef struct RangedIterator RangedIterator, *PRangedIterator;

struct RangedIterator { // PlaceHolder Structure
};

typedef struct RangedIteratorWrapper<float_const> RangedIteratorWrapper<float_const>, *PRangedIteratorWrapper<float_const>;

struct RangedIteratorWrapper<float_const> { // PlaceHolder Structure
};

typedef struct RangedIteratorWrapper<int> RangedIteratorWrapper<int>, *PRangedIteratorWrapper<int>;

struct RangedIteratorWrapper<int> { // PlaceHolder Structure
};

typedef struct RangedIteratorWrapper<int_const> RangedIteratorWrapper<int_const>, *PRangedIteratorWrapper<int_const>;

struct RangedIteratorWrapper<int_const> { // PlaceHolder Structure
};

typedef struct RangedIteratorWrapper<juce::Colour> RangedIteratorWrapper<juce::Colour>, *PRangedIteratorWrapper<juce::Colour>;

struct RangedIteratorWrapper<juce::Colour> { // PlaceHolder Structure
};

typedef struct RangedIteratorWrapper<juce::Colour_const> RangedIteratorWrapper<juce::Colour_const>, *PRangedIteratorWrapper<juce::Colour_const>;

struct RangedIteratorWrapper<juce::Colour_const> { // PlaceHolder Structure
};

typedef struct RangedIteratorWrapper<juce::detail::JustifiedText::DrawType_const> RangedIteratorWrapper<juce::detail::JustifiedText::DrawType_const>, *PRangedIteratorWrapper<juce::detail::JustifiedText::DrawType_const>;

struct RangedIteratorWrapper<juce::detail::JustifiedText::DrawType_const> { // PlaceHolder Structure
};

typedef struct RangedIteratorWrapper<juce::detail::LineMetrics_const> RangedIteratorWrapper<juce::detail::LineMetrics_const>, *PRangedIteratorWrapper<juce::detail::LineMetrics_const>;

struct RangedIteratorWrapper<juce::detail::LineMetrics_const> { // PlaceHolder Structure
};

typedef struct RangedIteratorWrapper<juce::Font> RangedIteratorWrapper<juce::Font>, *PRangedIteratorWrapper<juce::Font>;

struct RangedIteratorWrapper<juce::Font> { // PlaceHolder Structure
};

typedef struct RangedIteratorWrapper<juce::Font_const> RangedIteratorWrapper<juce::Font_const>, *PRangedIteratorWrapper<juce::Font_const>;

struct RangedIteratorWrapper<juce::Font_const> { // PlaceHolder Structure
};

typedef struct RangedIteratorWrapper<long_long> RangedIteratorWrapper<long_long>, *PRangedIteratorWrapper<long_long>;

struct RangedIteratorWrapper<long_long> { // PlaceHolder Structure
};

typedef struct RangedIteratorWrapper<signed_char> RangedIteratorWrapper<signed_char>, *PRangedIteratorWrapper<signed_char>;

struct RangedIteratorWrapper<signed_char> { // PlaceHolder Structure
};

typedef struct RangedIteratorWrapper<signed_char_const> RangedIteratorWrapper<signed_char_const>, *PRangedIteratorWrapper<signed_char_const>;

struct RangedIteratorWrapper<signed_char_const> { // PlaceHolder Structure
};

typedef struct RangedIteratorWrapper<std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>const> RangedIteratorWrapper<std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>const>, *PRangedIteratorWrapper<std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>const>;

struct RangedIteratorWrapper<std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>const> { // PlaceHolder Structure
};

typedef struct RangedValues RangedValues, *PRangedValues;

struct RangedValues { // PlaceHolder Structure
};

typedef struct RangedValues<float> RangedValues<float>, *PRangedValues<float>;

struct RangedValues<float> { // PlaceHolder Structure
};

typedef struct RangedValues<int> RangedValues<int>, *PRangedValues<int>;

struct RangedValues<int> { // PlaceHolder Structure
};

typedef struct RangedValues<juce::Colour> RangedValues<juce::Colour>, *PRangedValues<juce::Colour>;

struct RangedValues<juce::Colour> { // PlaceHolder Structure
};

typedef struct RangedValues<juce::detail::GlyphLookupEntry> RangedValues<juce::detail::GlyphLookupEntry>, *PRangedValues<juce::detail::GlyphLookupEntry>;

struct RangedValues<juce::detail::GlyphLookupEntry> { // PlaceHolder Structure
};

typedef struct RangedValues<juce::detail::JustifiedText::DrawType> RangedValues<juce::detail::JustifiedText::DrawType>, *PRangedValues<juce::detail::JustifiedText::DrawType>;

struct RangedValues<juce::detail::JustifiedText::DrawType> { // PlaceHolder Structure
};

typedef struct RangedValues<juce::detail::LineMetrics> RangedValues<juce::detail::LineMetrics>, *PRangedValues<juce::detail::LineMetrics>;

struct RangedValues<juce::detail::LineMetrics> { // PlaceHolder Structure
};

typedef struct RangedValues<juce::Font> RangedValues<juce::Font>, *PRangedValues<juce::Font>;

struct RangedValues<juce::Font> { // PlaceHolder Structure
};

typedef struct RangedValues<long_long> RangedValues<long_long>, *PRangedValues<long_long>;

struct RangedValues<long_long> { // PlaceHolder Structure
};

typedef struct RangedValues<signed_char> RangedValues<signed_char>, *PRangedValues<signed_char>;

struct RangedValues<signed_char> { // PlaceHolder Structure
};

typedef struct RangedValues<std::optional<juce::Font>> RangedValues<std::optional<juce::Font>>, *PRangedValues<std::optional<juce::Font>>;

struct RangedValues<std::optional<juce::Font>> { // PlaceHolder Structure
};

typedef struct RangeParameter RangeParameter, *PRangeParameter;

struct RangeParameter { // PlaceHolder Structure
};

typedef struct Ranges Ranges, *PRanges;

struct Ranges { // PlaceHolder Class Structure
};

typedef struct ReadBufferDesc ReadBufferDesc, *PReadBufferDesc;

struct ReadBufferDesc { // PlaceHolder Structure
};

typedef struct ReadOnlyBStream ReadOnlyBStream, *PReadOnlyBStream;

struct ReadOnlyBStream { // PlaceHolder Structure
};

typedef struct ReadWriteLock ReadWriteLock, *PReadWriteLock;

struct ReadWriteLock { // PlaceHolder Structure
};

typedef undefined ReadWriteMode;

typedef struct RearrangementSubtable<AAT::ObsoleteTypes> RearrangementSubtable<AAT::ObsoleteTypes>, *PRearrangementSubtable<AAT::ObsoleteTypes>;

struct RearrangementSubtable<AAT::ObsoleteTypes> { // PlaceHolder Class Structure
};

typedef struct Record_sanitize_closure_t Record_sanitize_closure_t, *PRecord_sanitize_closure_t;

struct Record_sanitize_closure_t { // PlaceHolder Structure
};

typedef struct RecordListOf<OT::Feature> RecordListOf<OT::Feature>, *PRecordListOf<OT::Feature>;

struct RecordListOf<OT::Feature> { // PlaceHolder Class Structure
};

typedef struct RecordListOf<OT::Script> RecordListOf<OT::Script>, *PRecordListOf<OT::Script>;

struct RecordListOf<OT::Script> { // PlaceHolder Class Structure
};

typedef struct Rectangle Rectangle, *PRectangle;

struct Rectangle { // PlaceHolder Structure
};

typedef struct Rectangle<int> Rectangle<int>, *PRectangle<int>;

struct Rectangle<int> { // PlaceHolder Class Structure
};

typedef struct RectangleList RectangleList, *PRectangleList;

struct RectangleList { // PlaceHolder Structure
};

typedef struct RectangleListRegion RectangleListRegion, *PRectangleListRegion;

struct RectangleListRegion { // PlaceHolder Structure
};

typedef struct RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState> RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>, *PRectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>;

struct RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState> { // PlaceHolder Structure
};

typedef struct RefCountedArray RefCountedArray, *PRefCountedArray;

struct RefCountedArray { // PlaceHolder Structure
};

typedef struct ReferenceCountedArray<juce::MessageManager::MessageBase,juce::DummyCriticalSection> ReferenceCountedArray<juce::MessageManager::MessageBase,juce::DummyCriticalSection>, *PReferenceCountedArray<juce::MessageManager::MessageBase,juce::DummyCriticalSection>;

struct ReferenceCountedArray<juce::MessageManager::MessageBase,juce::DummyCriticalSection> { // PlaceHolder Structure
};

typedef struct ReferenceCountedArray<juce::ValueTree::SharedObject,juce::DummyCriticalSection> ReferenceCountedArray<juce::ValueTree::SharedObject,juce::DummyCriticalSection>, *PReferenceCountedArray<juce::ValueTree::SharedObject,juce::DummyCriticalSection>;

struct ReferenceCountedArray<juce::ValueTree::SharedObject,juce::DummyCriticalSection> { // PlaceHolder Structure
};

typedef struct ReferenceCountedObject ReferenceCountedObject, *PReferenceCountedObject;

struct ReferenceCountedObject { // PlaceHolder Structure
};

typedef undefined ReferenceCountedObjectPtr;

typedef struct ReferenceCountedObjectPtr<juce::CurrentThreadHolder> ReferenceCountedObjectPtr<juce::CurrentThreadHolder>, *PReferenceCountedObjectPtr<juce::CurrentThreadHolder>;

struct ReferenceCountedObjectPtr<juce::CurrentThreadHolder> { // PlaceHolder Structure
};

typedef struct ReferenceCountedObjectPtr<juce::FTFaceWrapper> ReferenceCountedObjectPtr<juce::FTFaceWrapper>, *PReferenceCountedObjectPtr<juce::FTFaceWrapper>;

struct ReferenceCountedObjectPtr<juce::FTFaceWrapper> { // PlaceHolder Structure
};

typedef struct ReferenceCountedObjectPtr<juce::FTLibWrapper> ReferenceCountedObjectPtr<juce::FTLibWrapper>, *PReferenceCountedObjectPtr<juce::FTLibWrapper>;

struct ReferenceCountedObjectPtr<juce::FTLibWrapper> { // PlaceHolder Structure
};

typedef struct ReferenceCountedObjectPtr<juce::PopupMenu::CustomComponent> ReferenceCountedObjectPtr<juce::PopupMenu::CustomComponent>, *PReferenceCountedObjectPtr<juce::PopupMenu::CustomComponent>;

struct ReferenceCountedObjectPtr<juce::PopupMenu::CustomComponent> { // PlaceHolder Structure
};

typedef struct ReferenceCountedObjectPtr<juce::ValueTree::SharedObject> ReferenceCountedObjectPtr<juce::ValueTree::SharedObject>, *PReferenceCountedObjectPtr<juce::ValueTree::SharedObject>;

struct ReferenceCountedObjectPtr<juce::ValueTree::SharedObject> { // PlaceHolder Structure
};

typedef struct RemoveAction RemoveAction, *PRemoveAction;

struct RemoveAction { // PlaceHolder Structure
};

typedef undefined ResamplingQuality;

typedef struct ResizableCornerComponent ResizableCornerComponent, *PResizableCornerComponent;

struct ResizableCornerComponent { // PlaceHolder Structure
};

typedef struct ResizableWindow ResizableWindow, *PResizableWindow;

struct ResizableWindow { // PlaceHolder Structure
};

typedef undefined Result;


// WARNING! conflicting data type names: /Demangler/juce/Result - /Demangler/VST3/(anonymous_namespace)/IO/Result

typedef undefined result;

typedef undefined return_t;

typedef struct ReverseChainSingleSubstFormat1 ReverseChainSingleSubstFormat1, *PReverseChainSingleSubstFormat1;

struct ReverseChainSingleSubstFormat1 { // PlaceHolder Class Structure
};

typedef __rlim_t rlim_t;

typedef struct rlimit rlimit, *Prlimit;

struct rlimit {
    rlim_t rlim_cur;
    rlim_t rlim_max;
};

typedef undefined RotaryParameters;

typedef struct RoutingInfo RoutingInfo, *PRoutingInfo;

struct RoutingInfo { // PlaceHolder Structure
};

typedef struct RuleSet<OT::Layout::SmallTypes> RuleSet<OT::Layout::SmallTypes>, *PRuleSet<OT::Layout::SmallTypes>;

struct RuleSet<OT::Layout::SmallTypes> { // PlaceHolder Class Structure
};

typedef undefined SafePointer;

typedef struct SafePointer<juce::Component> SafePointer<juce::Component>, *PSafePointer<juce::Component>;

struct SafePointer<juce::Component> { // PlaceHolder Structure
};

typedef struct SafePointer<juce::PopupMenu::HelperClasses::ItemComponent> SafePointer<juce::PopupMenu::HelperClasses::ItemComponent>, *PSafePointer<juce::PopupMenu::HelperClasses::ItemComponent>;

struct SafePointer<juce::PopupMenu::HelperClasses::ItemComponent> { // PlaceHolder Structure
};

typedef struct SanitisedString SanitisedString, *PSanitisedString;

struct SanitisedString { // PlaceHolder Structure
};

typedef struct SavedStateBase SavedStateBase, *PSavedStateBase;

struct SavedStateBase { // PlaceHolder Structure
};

typedef struct SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>, *PSavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>;

struct SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> { // PlaceHolder Structure
};

typedef struct SavedStateStack<juce::RenderingHelpers::SoftwareRendererSavedState> SavedStateStack<juce::RenderingHelpers::SoftwareRendererSavedState>, *PSavedStateStack<juce::RenderingHelpers::SoftwareRendererSavedState>;

struct SavedStateStack<juce::RenderingHelpers::SoftwareRendererSavedState> { // PlaceHolder Class Structure
};

typedef struct sbix_accelerator_t sbix_accelerator_t, *Psbix_accelerator_t;

struct sbix_accelerator_t { // PlaceHolder Structure
};

typedef struct sched_param sched_param, *Psched_param;

struct sched_param {
    int __sched_priority;
};

typedef struct ScopedDragNotification ScopedDragNotification, *PScopedDragNotification;

struct ScopedDragNotification { // PlaceHolder Structure
};

typedef struct ScopedJuceInitialiser_GUI ScopedJuceInitialiser_GUI, *PScopedJuceInitialiser_GUI;

struct ScopedJuceInitialiser_GUI { // PlaceHolder Structure
};

typedef struct ScopedNoDenormals ScopedNoDenormals, *PScopedNoDenormals;

struct ScopedNoDenormals { // PlaceHolder Structure
};

typedef struct ScopedRunLoop ScopedRunLoop, *PScopedRunLoop;

struct ScopedRunLoop { // PlaceHolder Structure
};

typedef struct ScopedSaveState ScopedSaveState, *PScopedSaveState;

struct ScopedSaveState { // PlaceHolder Structure
};

typedef struct ScopedWindowAssociation ScopedWindowAssociation, *PScopedWindowAssociation;

struct ScopedWindowAssociation { // PlaceHolder Structure
};

typedef struct ScopedXLock ScopedXLock, *PScopedXLock;

struct ScopedXLock { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::getLocaleValue(int)::$_38> ScopeGuard<juce::getLocaleValue(int)::$_38>, *PScopeGuard<juce::getLocaleValue(int)::$_38>;

struct ScopeGuard<juce::getLocaleValue(int)::$_38> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::setPositionAndSendChange(double)::{lambda(juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener&)#1},juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::setPositionAndSendChange(double)::{lambda(juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener&)#1}&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::setPositionAndSendChange(double)::{lambda(juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener&)#1},juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::setPositionAndSendChange(double)::{lambda(juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener&)#1}&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::setPositionAndSendChange(double)::{lambda(juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener&)#1},juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::setPositionAndSendChange(double)::{lambda(juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener&)#1}&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::setPositionAndSendChange(double)::{lambda(juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener&)#1},juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::setPositionAndSendChange(double)::{lambda(juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener&)#1}&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::ApplicationCommandManagerListener,juce::Array<juce::ApplicationCommandManagerListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ApplicationCommandManager::sendListenerInvokeCallback(juce::ApplicationCommandTarget::InvocationInfo_const&)::$_27,juce::ListenerList<juce::ApplicationCommandManagerListener,juce::Array<juce::ApplicationCommandManagerListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ApplicationCommandManagerListener*,juce::ListenerList<juce::ApplicationCommandManagerListener,juce::Array<juce::ApplicationCommandManagerListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ApplicationCommandManager::sendListenerInvokeCallback(juce::ApplicationCommandTarget::InvocationInfo_const&)::$_27&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::ApplicationCommandManagerListener,juce::Array<juce::ApplicationCommandManagerListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ApplicationCommandManager::sendListenerInvokeCallback(juce::ApplicationCommandTarget::InvocationInfo_const&)::$_27,juce::ListenerList<juce::ApplicationCommandManagerListener,juce::Array<juce::ApplicationCommandManagerListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ApplicationCommandManagerListener*,juce::ListenerList<juce::ApplicationCommandManagerListener,juce::Array<juce::ApplicationCommandManagerListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ApplicationCommandManager::sendListenerInvokeCallback(juce::ApplicationCommandTarget::InvocationInfo_const&)::$_27&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::ApplicationCommandManagerListener,juce::Array<juce::ApplicationCommandManagerListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ApplicationCommandManager::sendListenerInvokeCallback(juce::ApplicationCommandTarget::InvocationInfo_const&)::$_27,juce::ListenerList<juce::ApplicationCommandManagerListener,juce::Array<juce::ApplicationCommandManagerListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ApplicationCommandManagerListener*,juce::ListenerList<juce::ApplicationCommandManagerListener,juce::Array<juce::ApplicationCommandManagerListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ApplicationCommandManager::sendListenerInvokeCallback(juce::ApplicationCommandTarget::InvocationInfo_const&)::$_27&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::ApplicationCommandManagerListener,juce::Array<juce::ApplicationCommandManagerListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ApplicationCommandManager::sendListenerInvokeCallback(juce::ApplicationCommandTarget::InvocationInfo_const&)::$_27,juce::ListenerList<juce::ApplicationCommandManagerListener,juce::Array<juce::ApplicationCommandManagerListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ApplicationCommandManagerListener*,juce::ListenerList<juce::ApplicationCommandManagerListener,juce::Array<juce::ApplicationCommandManagerListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ApplicationCommandManager::sendListenerInvokeCallback(juce::ApplicationCommandTarget::InvocationInfo_const&)::$_27&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::AudioProcessorValueTreeState::ParameterAdapter::parameterValueChanged(int,float)::{lambda(juce::AudioProcessorValueTreeState::Listener&)#1},juce::ListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::AudioProcessorValueTreeState::Listener*,juce::ListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::AudioProcessorValueTreeState::ParameterAdapter::parameterValueChanged(int,float)::{lambda(juce::AudioProcessorValueTreeState::Listener&)#1}&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::AudioProcessorValueTreeState::ParameterAdapter::parameterValueChanged(int,float)::{lambda(juce::AudioProcessorValueTreeState::Listener&)#1},juce::ListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::AudioProcessorValueTreeState::Listener*,juce::ListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::AudioProcessorValueTreeState::ParameterAdapter::parameterValueChanged(int,float)::{lambda(juce::AudioProcessorValueTreeState::Listener&)#1}&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::AudioProcessorValueTreeState::ParameterAdapter::parameterValueChanged(int,float)::{lambda(juce::AudioProcessorValueTreeState::Listener&)#1},juce::ListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::AudioProcessorValueTreeState::Listener*,juce::ListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::AudioProcessorValueTreeState::ParameterAdapter::parameterValueChanged(int,float)::{lambda(juce::AudioProcessorValueTreeState::Listener&)#1}&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::AudioProcessorValueTreeState::ParameterAdapter::parameterValueChanged(int,float)::{lambda(juce::AudioProcessorValueTreeState::Listener&)#1},juce::ListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::AudioProcessorValueTreeState::Listener*,juce::ListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::AudioProcessorValueTreeState::ParameterAdapter::parameterValueChanged(int,float)::{lambda(juce::AudioProcessorValueTreeState::Listener&)#1}&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Button::sendClickMessage(juce::ModifierKeys_const&)::$_25,juce::Component::BailOutChecker>(juce::Button::Listener*,juce::Component::BailOutChecker_const&,juce::Button::sendClickMessage(juce::ModifierKeys_const&)::$_25&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Button::sendClickMessage(juce::ModifierKeys_const&)::$_25,juce::Component::BailOutChecker>(juce::Button::Listener*,juce::Component::BailOutChecker_const&,juce::Button::sendClickMessage(juce::ModifierKeys_const&)::$_25&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Button::sendClickMessage(juce::ModifierKeys_const&)::$_25,juce::Component::BailOutChecker>(juce::Button::Listener*,juce::Component::BailOutChecker_const&,juce::Button::sendClickMessage(juce::ModifierKeys_const&)::$_25&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Button::sendClickMessage(juce::ModifierKeys_const&)::$_25,juce::Component::BailOutChecker>(juce::Button::Listener*,juce::Component::BailOutChecker_const&,juce::Button::sendClickMessage(juce::ModifierKeys_const&)::$_25&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Button::sendStateMessage()::$_26,juce::Component::BailOutChecker>(juce::Button::Listener*,juce::Component::BailOutChecker_const&,juce::Button::sendStateMessage()::$_26&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Button::sendStateMessage()::$_26,juce::Component::BailOutChecker>(juce::Button::Listener*,juce::Component::BailOutChecker_const&,juce::Button::sendStateMessage()::$_26&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Button::sendStateMessage()::$_26,juce::Component::BailOutChecker>(juce::Button::Listener*,juce::Component::BailOutChecker_const&,juce::Button::sendStateMessage()::$_26&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Button::sendStateMessage()::$_26,juce::Component::BailOutChecker>(juce::Button::Listener*,juce::Component::BailOutChecker_const&,juce::Button::sendStateMessage()::$_26&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::ChangeListener,juce::Array<juce::ChangeListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ChangeBroadcaster::callListeners()::$_6,juce::ListenerList<juce::ChangeListener,juce::Array<juce::ChangeListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ChangeListener*,juce::ListenerList<juce::ChangeListener,juce::Array<juce::ChangeListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ChangeBroadcaster::callListeners()::$_6&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::ChangeListener,juce::Array<juce::ChangeListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ChangeBroadcaster::callListeners()::$_6,juce::ListenerList<juce::ChangeListener,juce::Array<juce::ChangeListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ChangeListener*,juce::ListenerList<juce::ChangeListener,juce::Array<juce::ChangeListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ChangeBroadcaster::callListeners()::$_6&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::ChangeListener,juce::Array<juce::ChangeListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ChangeBroadcaster::callListeners()::$_6,juce::ListenerList<juce::ChangeListener,juce::Array<juce::ChangeListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ChangeListener*,juce::ListenerList<juce::ChangeListener,juce::Array<juce::ChangeListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ChangeBroadcaster::callListeners()::$_6&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::ChangeListener,juce::Array<juce::ChangeListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ChangeBroadcaster::callListeners()::$_6,juce::ListenerList<juce::ChangeListener,juce::Array<juce::ChangeListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ChangeListener*,juce::ListenerList<juce::ChangeListener,juce::Array<juce::ChangeListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ChangeBroadcaster::callListeners()::$_6&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::ComboBox::Listener,juce::Array<juce::ComboBox::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ComboBox::handleAsyncUpdate()::$_130,juce::Component::BailOutChecker>(juce::ComboBox::Listener*,juce::Component::BailOutChecker_const&,juce::ComboBox::handleAsyncUpdate()::$_130&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::ComboBox::Listener,juce::Array<juce::ComboBox::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ComboBox::handleAsyncUpdate()::$_130,juce::Component::BailOutChecker>(juce::ComboBox::Listener*,juce::Component::BailOutChecker_const&,juce::ComboBox::handleAsyncUpdate()::$_130&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::ComboBox::Listener,juce::Array<juce::ComboBox::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ComboBox::handleAsyncUpdate()::$_130,juce::Component::BailOutChecker>(juce::ComboBox::Listener*,juce::Component::BailOutChecker_const&,juce::ComboBox::handleAsyncUpdate()::$_130&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::ComboBox::Listener,juce::Array<juce::ComboBox::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ComboBox::handleAsyncUpdate()::$_130,juce::Component::BailOutChecker>(juce::ComboBox::Listener*,juce::Component::BailOutChecker_const&,juce::ComboBox::handleAsyncUpdate()::$_130&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalBroughtToFront()::$_52,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::internalBroughtToFront()::$_52&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalBroughtToFront()::$_52,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::internalBroughtToFront()::$_52&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalBroughtToFront()::$_52,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::internalBroughtToFront()::$_52&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalBroughtToFront()::$_52,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::internalBroughtToFront()::$_52&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalChildrenChanged()::$_33,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::internalChildrenChanged()::$_33&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalChildrenChanged()::$_33,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::internalChildrenChanged()::$_33&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalChildrenChanged()::$_33,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::internalChildrenChanged()::$_33&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalChildrenChanged()::$_33,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::internalChildrenChanged()::$_33&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalHierarchyChanged()::$_34,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::internalHierarchyChanged()::$_34&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalHierarchyChanged()::$_34,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::internalHierarchyChanged()::$_34&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalHierarchyChanged()::$_34,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::internalHierarchyChanged()::$_34&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalHierarchyChanged()::$_34,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::internalHierarchyChanged()::$_34&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::sendMovedResizedMessages(bool,bool)::$_32,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::sendMovedResizedMessages(bool,bool)::$_32&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::sendMovedResizedMessages(bool,bool)::$_32,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::sendMovedResizedMessages(bool,bool)::$_32&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::sendMovedResizedMessages(bool,bool)::$_32,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::sendMovedResizedMessages(bool,bool)::$_32&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::sendMovedResizedMessages(bool,bool)::$_32,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::sendMovedResizedMessages(bool,bool)::$_32&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::sendVisibilityChangeMessage()::$_31,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::sendVisibilityChangeMessage()::$_31&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::sendVisibilityChangeMessage()::$_31,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::sendVisibilityChangeMessage()::$_31&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::sendVisibilityChangeMessage()::$_31,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::sendVisibilityChangeMessage()::$_31&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::sendVisibilityChangeMessage()::$_31,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::sendVisibilityChangeMessage()::$_31&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::setEnabled(bool)::$_54,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::setEnabled(bool)::$_54&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::setEnabled(bool)::$_54,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::setEnabled(bool)::$_54&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::setEnabled(bool)::$_54,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::setEnabled(bool)::$_54&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::setEnabled(bool)::$_54,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::setEnabled(bool)::$_54&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::setName(juce::String_const&)::$_30,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::setName(juce::String_const&)::$_30&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::setName(juce::String_const&)::$_30,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::setName(juce::String_const&)::$_30&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::setName(juce::String_const&)::$_30,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::setName(juce::String_const&)::$_30&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::setName(juce::String_const&)::$_30,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::setName(juce::String_const&)::$_30&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::~Component()::$_29,juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ComponentListener*,juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::Component::~Component()::$_29&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::~Component()::$_29,juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ComponentListener*,juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::Component::~Component()::$_29&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::~Component()::$_29,juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ComponentListener*,juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::Component::~Component()::$_29&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::~Component()::$_29,juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ComponentListener*,juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::Component::~Component()::$_29&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::ComponentPeer::ScaleFactorListener,juce::Array<juce::ComponentPeer::ScaleFactorListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::LinuxComponentPeer::updateScaleFactorFromNewBounds(juce::Rectangle<int>const&,bool)::{lambda(juce::ComponentPeer::ScaleFactorListener&)#1},juce::ListenerList<juce::ComponentPeer::ScaleFactorListener,juce::Array<juce::ComponentPeer::ScaleFactorListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ComponentPeer::ScaleFactorListener*,juce::ListenerList<juce::ComponentPeer::ScaleFactorListener,juce::Array<juce::ComponentPeer::ScaleFactorListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::LinuxComponentPeer::updateScaleFactorFromNewBounds(juce::Rectangle<int>const&,bool)::{lambda(juce::ComponentPeer::ScaleFactorListener&)#1}&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::ComponentPeer::ScaleFactorListener,juce::Array<juce::ComponentPeer::ScaleFactorListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::LinuxComponentPeer::updateScaleFactorFromNewBounds(juce::Rectangle<int>const&,bool)::{lambda(juce::ComponentPeer::ScaleFactorListener&)#1},juce::ListenerList<juce::ComponentPeer::ScaleFactorListener,juce::Array<juce::ComponentPeer::ScaleFactorListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ComponentPeer::ScaleFactorListener*,juce::ListenerList<juce::ComponentPeer::ScaleFactorListener,juce::Array<juce::ComponentPeer::ScaleFactorListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::LinuxComponentPeer::updateScaleFactorFromNewBounds(juce::Rectangle<int>const&,bool)::{lambda(juce::ComponentPeer::ScaleFactorListener&)#1}&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::ComponentPeer::ScaleFactorListener,juce::Array<juce::ComponentPeer::ScaleFactorListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::LinuxComponentPeer::updateScaleFactorFromNewBounds(juce::Rectangle<int>const&,bool)::{lambda(juce::ComponentPeer::ScaleFactorListener&)#1},juce::ListenerList<juce::ComponentPeer::ScaleFactorListener,juce::Array<juce::ComponentPeer::ScaleFactorListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ComponentPeer::ScaleFactorListener*,juce::ListenerList<juce::ComponentPeer::ScaleFactorListener,juce::Array<juce::ComponentPeer::ScaleFactorListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::LinuxComponentPeer::updateScaleFactorFromNewBounds(juce::Rectangle<int>const&,bool)::{lambda(juce::ComponentPeer::ScaleFactorListener&)#1}&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::ComponentPeer::ScaleFactorListener,juce::Array<juce::ComponentPeer::ScaleFactorListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::LinuxComponentPeer::updateScaleFactorFromNewBounds(juce::Rectangle<int>const&,bool)::{lambda(juce::ComponentPeer::ScaleFactorListener&)#1},juce::ListenerList<juce::ComponentPeer::ScaleFactorListener,juce::Array<juce::ComponentPeer::ScaleFactorListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ComponentPeer::ScaleFactorListener*,juce::ListenerList<juce::ComponentPeer::ScaleFactorListener,juce::Array<juce::ComponentPeer::ScaleFactorListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::LinuxComponentPeer::updateScaleFactorFromNewBounds(juce::Rectangle<int>const&,bool)::{lambda(juce::ComponentPeer::ScaleFactorListener&)#1}&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::ComponentPeer::VBlankListener,juce::Array<juce::ComponentPeer::VBlankListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ComponentPeer::callVBlankListeners(double)::$_158,juce::ListenerList<juce::ComponentPeer::VBlankListener,juce::Array<juce::ComponentPeer::VBlankListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ComponentPeer::VBlankListener*,juce::ListenerList<juce::ComponentPeer::VBlankListener,juce::Array<juce::ComponentPeer::VBlankListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ComponentPeer::callVBlankListeners(double)::$_158&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::ComponentPeer::VBlankListener,juce::Array<juce::ComponentPeer::VBlankListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ComponentPeer::callVBlankListeners(double)::$_158,juce::ListenerList<juce::ComponentPeer::VBlankListener,juce::Array<juce::ComponentPeer::VBlankListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ComponentPeer::VBlankListener*,juce::ListenerList<juce::ComponentPeer::VBlankListener,juce::Array<juce::ComponentPeer::VBlankListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ComponentPeer::callVBlankListeners(double)::$_158&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::ComponentPeer::VBlankListener,juce::Array<juce::ComponentPeer::VBlankListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ComponentPeer::callVBlankListeners(double)::$_158,juce::ListenerList<juce::ComponentPeer::VBlankListener,juce::Array<juce::ComponentPeer::VBlankListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ComponentPeer::VBlankListener*,juce::ListenerList<juce::ComponentPeer::VBlankListener,juce::Array<juce::ComponentPeer::VBlankListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ComponentPeer::callVBlankListeners(double)::$_158&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::ComponentPeer::VBlankListener,juce::Array<juce::ComponentPeer::VBlankListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ComponentPeer::callVBlankListeners(double)::$_158,juce::ListenerList<juce::ComponentPeer::VBlankListener,juce::Array<juce::ComponentPeer::VBlankListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ComponentPeer::VBlankListener*,juce::ListenerList<juce::ComponentPeer::VBlankListener,juce::Array<juce::ComponentPeer::VBlankListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ComponentPeer::callVBlankListeners(double)::$_158&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::DarkModeSettingListener,juce::Array<juce::DarkModeSettingListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Desktop::darkModeChanged()::$_56,juce::ListenerList<juce::DarkModeSettingListener,juce::Array<juce::DarkModeSettingListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::DarkModeSettingListener*,juce::ListenerList<juce::DarkModeSettingListener,juce::Array<juce::DarkModeSettingListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::Desktop::darkModeChanged()::$_56&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::DarkModeSettingListener,juce::Array<juce::DarkModeSettingListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Desktop::darkModeChanged()::$_56,juce::ListenerList<juce::DarkModeSettingListener,juce::Array<juce::DarkModeSettingListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::DarkModeSettingListener*,juce::ListenerList<juce::DarkModeSettingListener,juce::Array<juce::DarkModeSettingListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::Desktop::darkModeChanged()::$_56&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::DarkModeSettingListener,juce::Array<juce::DarkModeSettingListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Desktop::darkModeChanged()::$_56,juce::ListenerList<juce::DarkModeSettingListener,juce::Array<juce::DarkModeSettingListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::DarkModeSettingListener*,juce::ListenerList<juce::DarkModeSettingListener,juce::Array<juce::DarkModeSettingListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::Desktop::darkModeChanged()::$_56&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::DarkModeSettingListener,juce::Array<juce::DarkModeSettingListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Desktop::darkModeChanged()::$_56,juce::ListenerList<juce::DarkModeSettingListener,juce::Array<juce::DarkModeSettingListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::DarkModeSettingListener*,juce::ListenerList<juce::DarkModeSettingListener,juce::Array<juce::DarkModeSettingListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::Desktop::darkModeChanged()::$_56&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Desktop::handleAsyncUpdate()::$_55,juce::ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::FocusChangeListener*,juce::ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::Desktop::handleAsyncUpdate()::$_55&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Desktop::handleAsyncUpdate()::$_55,juce::ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::FocusChangeListener*,juce::ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::Desktop::handleAsyncUpdate()::$_55&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Desktop::handleAsyncUpdate()::$_55,juce::ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::FocusChangeListener*,juce::ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::Desktop::handleAsyncUpdate()::$_55&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Desktop::handleAsyncUpdate()::$_55,juce::ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::FocusChangeListener*,juce::ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::Desktop::handleAsyncUpdate()::$_55&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ImagePixelData::sendDataChangeMessage()::$_12,juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ImagePixelData::Listener*,juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ImagePixelData::sendDataChangeMessage()::$_12&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ImagePixelData::sendDataChangeMessage()::$_12,juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ImagePixelData::Listener*,juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ImagePixelData::sendDataChangeMessage()::$_12&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ImagePixelData::sendDataChangeMessage()::$_12,juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ImagePixelData::Listener*,juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ImagePixelData::sendDataChangeMessage()::$_12&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ImagePixelData::sendDataChangeMessage()::$_12,juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ImagePixelData::Listener*,juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ImagePixelData::sendDataChangeMessage()::$_12&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ImagePixelData::~callCheckedExcluding()::$_11,juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ImagePixelData::Listener*,juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ImagePixelData::~callCheckedExcluding()::$_11&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ImagePixelData::~callCheckedExcluding()::$_11,juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ImagePixelData::Listener*,juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ImagePixelData::~callCheckedExcluding()::$_11&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ImagePixelData::~callCheckedExcluding()::$_11,juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ImagePixelData::Listener*,juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ImagePixelData::~callCheckedExcluding()::$_11&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ImagePixelData::~callCheckedExcluding()::$_11,juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ImagePixelData::Listener*,juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ImagePixelData::~callCheckedExcluding()::$_11&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Label::callChangeListeners()::$_133,juce::Component::BailOutChecker>(juce::Label::Listener*,juce::Component::BailOutChecker_const&,juce::Label::callChangeListeners()::$_133&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Label::callChangeListeners()::$_133,juce::Component::BailOutChecker>(juce::Label::Listener*,juce::Component::BailOutChecker_const&,juce::Label::callChangeListeners()::$_133&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Label::callChangeListeners()::$_133,juce::Component::BailOutChecker>(juce::Label::Listener*,juce::Component::BailOutChecker_const&,juce::Label::callChangeListeners()::$_133&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Label::callChangeListeners()::$_133,juce::Component::BailOutChecker>(juce::Label::Listener*,juce::Component::BailOutChecker_const&,juce::Label::callChangeListeners()::$_133&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Label::editorAboutToBeHidden(juce::TextEditor*)::$_132,juce::Component::BailOutChecker>(juce::Label::Listener*,juce::Component::BailOutChecker_const&,juce::Label::editorAboutToBeHidden(juce::TextEditor*)::$_132&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Label::editorAboutToBeHidden(juce::TextEditor*)::$_132,juce::Component::BailOutChecker>(juce::Label::Listener*,juce::Component::BailOutChecker_const&,juce::Label::editorAboutToBeHidden(juce::TextEditor*)::$_132&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Label::editorAboutToBeHidden(juce::TextEditor*)::$_132,juce::Component::BailOutChecker>(juce::Label::Listener*,juce::Component::BailOutChecker_const&,juce::Label::editorAboutToBeHidden(juce::TextEditor*)::$_132&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Label::editorAboutToBeHidden(juce::TextEditor*)::$_132,juce::Component::BailOutChecker>(juce::Label::Listener*,juce::Component::BailOutChecker_const&,juce::Label::editorAboutToBeHidden(juce::TextEditor*)::$_132&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Label::editorShown(juce::TextEditor*)::$_131,juce::Component::BailOutChecker>(juce::Label::Listener*,juce::Component::BailOutChecker_const&,juce::Label::editorShown(juce::TextEditor*)::$_131&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Label::editorShown(juce::TextEditor*)::$_131,juce::Component::BailOutChecker>(juce::Label::Listener*,juce::Component::BailOutChecker_const&,juce::Label::editorShown(juce::TextEditor*)::$_131&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Label::editorShown(juce::TextEditor*)::$_131,juce::Component::BailOutChecker>(juce::Label::Listener*,juce::Component::BailOutChecker_const&,juce::Label::editorShown(juce::TextEditor*)::$_131&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Label::editorShown(juce::TextEditor*)::$_131,juce::Component::BailOutChecker>(juce::Label::Listener*,juce::Component::BailOutChecker_const&,juce::Label::editorShown(juce::TextEditor*)::$_131&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::InternalRunLoop::registerFdCallback(int,std::function<void()>&&,short)::{lambda(auto:1&)#1},juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::LinuxEventLoopInternal::Listener*,juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::InternalRunLoop::registerFdCallback(int,std::function<void()>&&,short)::{lambda(auto:1&)#1}&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::InternalRunLoop::registerFdCallback(int,std::function<void()>&&,short)::{lambda(auto:1&)#1},juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::LinuxEventLoopInternal::Listener*,juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::InternalRunLoop::registerFdCallback(int,std::function<void()>&&,short)::{lambda(auto:1&)#1}&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::InternalRunLoop::registerFdCallback(int,std::function<void()>&&,short)::{lambda(auto:1&)#1},juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::LinuxEventLoopInternal::Listener*,juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::InternalRunLoop::registerFdCallback(int,std::function<void()>&&,short)::{lambda(auto:1&)#1}&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::InternalRunLoop::registerFdCallback(int,std::function<void()>&&,short)::{lambda(auto:1&)#1},juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::LinuxEventLoopInternal::Listener*,juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::InternalRunLoop::registerFdCallback(int,std::function<void()>&&,short)::{lambda(auto:1&)#1}&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::InternalRunLoop::unregisterFdCallback(int)::{lambda(auto:1&)#1},juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::LinuxEventLoopInternal::Listener*,juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::InternalRunLoop::unregisterFdCallback(int)::{lambda(auto:1&)#1}&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::InternalRunLoop::unregisterFdCallback(int)::{lambda(auto:1&)#1},juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::LinuxEventLoopInternal::Listener*,juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::InternalRunLoop::unregisterFdCallback(int)::{lambda(auto:1&)#1}&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::InternalRunLoop::unregisterFdCallback(int)::{lambda(auto:1&)#1},juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::LinuxEventLoopInternal::Listener*,juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::InternalRunLoop::unregisterFdCallback(int)::{lambda(auto:1&)#1}&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::InternalRunLoop::unregisterFdCallback(int)::{lambda(auto:1&)#1},juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::LinuxEventLoopInternal::Listener*,juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::InternalRunLoop::unregisterFdCallback(int)::{lambda(auto:1&)#1}&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseDown(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::$_40,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseDown(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::$_40&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseDown(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::$_40,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseDown(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::$_40&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseDown(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::$_40,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseDown(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::$_40&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseDown(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::$_40,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseDown(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::$_40&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseDown(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::$_42,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseDown(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::$_42&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseDown(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::$_42,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseDown(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::$_42&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseDown(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::$_42,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseDown(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::$_42&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseDown(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::$_42,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseDown(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::$_42&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseDrag(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::$_46,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseDrag(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::$_46&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseDrag(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::$_46,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseDrag(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::$_46&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseDrag(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::$_46,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseDrag(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::$_46&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseDrag(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::$_46,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseDrag(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::$_46&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseEnter(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::$_38,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseEnter(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::$_38&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseEnter(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::$_38,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseEnter(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::$_38&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseEnter(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::$_38,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseEnter(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::$_38&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseEnter(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::$_38,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseEnter(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::$_38&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseExit(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::$_39,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseExit(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::$_39&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseExit(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::$_39,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseExit(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::$_39&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseExit(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::$_39,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseExit(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::$_39&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseExit(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::$_39,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseExit(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::$_39&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseMove(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::$_47,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseMove(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::$_47&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseMove(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::$_47,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseMove(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::$_47&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseMove(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::$_47,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseMove(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::$_47&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseMove(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::$_47,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseMove(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::$_47&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::$_43,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::$_43&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::$_43,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::$_43&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::$_43,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::$_43&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::$_43,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::$_43&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::$_44,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::$_44&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::$_44,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::$_44&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::$_44,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::$_44&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::$_44,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::$_44&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::$_45,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::$_45&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::$_45,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::$_45&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::$_45,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::$_45&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::$_45,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::$_45&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseWheel(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time,juce::MouseWheelDetails_const&)::$_48,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseWheel(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time,juce::MouseWheelDetails_const&)::$_48&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseWheel(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time,juce::MouseWheelDetails_const&)::$_48,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseWheel(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time,juce::MouseWheelDetails_const&)::$_48&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseWheel(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time,juce::MouseWheelDetails_const&)::$_48,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseWheel(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time,juce::MouseWheelDetails_const&)::$_48&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseWheel(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time,juce::MouseWheelDetails_const&)::$_48,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseWheel(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time,juce::MouseWheelDetails_const&)::$_48&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseWheel(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time,juce::MouseWheelDetails_const&)::$_49,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseWheel(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time,juce::MouseWheelDetails_const&)::$_49&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseWheel(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time,juce::MouseWheelDetails_const&)::$_49,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseWheel(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time,juce::MouseWheelDetails_const&)::$_49&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseWheel(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time,juce::MouseWheelDetails_const&)::$_49,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseWheel(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time,juce::MouseWheelDetails_const&)::$_49&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseWheel(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time,juce::MouseWheelDetails_const&)::$_49,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseWheel(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time,juce::MouseWheelDetails_const&)::$_49&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Desktop::sendMouseMove()::$_57,juce::Component::BailOutChecker>(juce::MouseListener*,juce::Component::BailOutChecker_const&,juce::Desktop::sendMouseMove()::$_57&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Desktop::sendMouseMove()::$_57,juce::Component::BailOutChecker>(juce::MouseListener*,juce::Component::BailOutChecker_const&,juce::Desktop::sendMouseMove()::$_57&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Desktop::sendMouseMove()::$_57,juce::Component::BailOutChecker>(juce::MouseListener*,juce::Component::BailOutChecker_const&,juce::Desktop::sendMouseMove()::$_57&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Desktop::sendMouseMove()::$_57,juce::Component::BailOutChecker>(juce::MouseListener*,juce::Component::BailOutChecker_const&,juce::Desktop::sendMouseMove()::$_57&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Desktop::sendMouseMove()::$_58,juce::Component::BailOutChecker>(juce::MouseListener*,juce::Component::BailOutChecker_const&,juce::Desktop::sendMouseMove()::$_58&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Desktop::sendMouseMove()::$_58,juce::Component::BailOutChecker>(juce::MouseListener*,juce::Component::BailOutChecker_const&,juce::Desktop::sendMouseMove()::$_58&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Desktop::sendMouseMove()::$_58,juce::Component::BailOutChecker>(juce::MouseListener*,juce::Component::BailOutChecker_const&,juce::Desktop::sendMouseMove()::$_58&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Desktop::sendMouseMove()::$_58,juce::Component::BailOutChecker>(juce::MouseListener*,juce::Component::BailOutChecker_const&,juce::Desktop::sendMouseMove()::$_58&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::ScrollBar::Listener,juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ScrollBar::handleAsyncUpdate()::$_98,juce::ListenerList<juce::ScrollBar::Listener,juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ScrollBar::Listener*,juce::ListenerList<juce::ScrollBar::Listener,juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ScrollBar::handleAsyncUpdate()::$_98&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::ScrollBar::Listener,juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ScrollBar::handleAsyncUpdate()::$_98,juce::ListenerList<juce::ScrollBar::Listener,juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ScrollBar::Listener*,juce::ListenerList<juce::ScrollBar::Listener,juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ScrollBar::handleAsyncUpdate()::$_98&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::ScrollBar::Listener,juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ScrollBar::handleAsyncUpdate()::$_98,juce::ListenerList<juce::ScrollBar::Listener,juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ScrollBar::Listener*,juce::ListenerList<juce::ScrollBar::Listener,juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ScrollBar::handleAsyncUpdate()::$_98&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::ScrollBar::Listener,juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ScrollBar::handleAsyncUpdate()::$_98,juce::ListenerList<juce::ScrollBar::Listener,juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ScrollBar::Listener*,juce::ListenerList<juce::ScrollBar::Listener,juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ScrollBar::handleAsyncUpdate()::$_98&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::callCheckedExcluding<juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::callCheckedExcluding<juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker>(juce::ShutdownDetector::Listener*,juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker_const&,void(juce::ShutdownDetector::Listener::*)())::{lambda(juce::ShutdownDetector::Listener&)#1},juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker>(juce::ShutdownDetector::Listener*,juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker_const&,juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::callCheckedExcluding<juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker>(juce::ShutdownDetector::Listener*,juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker_const&,void(juce::ShutdownDetector::Listener::*)())::{lambda(juce::ShutdownDetector::Listener&)#1}&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::callCheckedExcluding<juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::callCheckedExcluding<juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker>(juce::ShutdownDetector::Listener*,juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker_const&,void(juce::ShutdownDetector::Listener::*)())::{lambda(juce::ShutdownDetector::Listener&)#1},juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker>(juce::ShutdownDetector::Listener*,juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker_const&,juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::callCheckedExcluding<juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker>(juce::ShutdownDetector::Listener*,juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker_const&,void(juce::ShutdownDetector::Listener::*)())::{lambda(juce::ShutdownDetector::Listener&)#1}&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::callCheckedExcluding<juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::callCheckedExcluding<juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker>(juce::ShutdownDetector::Listener*,juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker_const&,void(juce::ShutdownDetector::Listener::*)())::{lambda(juce::ShutdownDetector::Listener&)#1},juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker>(juce::ShutdownDetector::Listener*,juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker_const&,juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::callCheckedExcluding<juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker>(juce::ShutdownDetector::Listener*,juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker_const&,void(juce::ShutdownDetector::Listener::*)())::{lambda(juce::ShutdownDetector::Listener&)#1}&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::callCheckedExcluding<juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::callCheckedExcluding<juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker>(juce::ShutdownDetector::Listener*,juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker_const&,void(juce::ShutdownDetector::Listener::*)())::{lambda(juce::ShutdownDetector::Listener&)#1},juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker>(juce::ShutdownDetector::Listener*,juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker_const&,juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::callCheckedExcluding<juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker>(juce::ShutdownDetector::Listener*,juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker_const&,void(juce::ShutdownDetector::Listener::*)())::{lambda(juce::ShutdownDetector::Listener&)#1}&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Slider::Pimpl::handleAsyncUpdate()::{lambda(juce::SliderListener<juce::Slider>&)#1},juce::Component::BailOutChecker>(juce::SliderListener<juce::Slider>*,juce::Component::BailOutChecker_const&,juce::Slider::Pimpl::handleAsyncUpdate()::{lambda(juce::SliderListener<juce::Slider>&)#1}&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Slider::Pimpl::handleAsyncUpdate()::{lambda(juce::SliderListener<juce::Slider>&)#1},juce::Component::BailOutChecker>(juce::SliderListener<juce::Slider>*,juce::Component::BailOutChecker_const&,juce::Slider::Pimpl::handleAsyncUpdate()::{lambda(juce::SliderListener<juce::Slider>&)#1}&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Slider::Pimpl::handleAsyncUpdate()::{lambda(juce::SliderListener<juce::Slider>&)#1},juce::Component::BailOutChecker>(juce::SliderListener<juce::Slider>*,juce::Component::BailOutChecker_const&,juce::Slider::Pimpl::handleAsyncUpdate()::{lambda(juce::SliderListener<juce::Slider>&)#1}&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Slider::Pimpl::handleAsyncUpdate()::{lambda(juce::SliderListener<juce::Slider>&)#1},juce::Component::BailOutChecker>(juce::SliderListener<juce::Slider>*,juce::Component::BailOutChecker_const&,juce::Slider::Pimpl::handleAsyncUpdate()::{lambda(juce::SliderListener<juce::Slider>&)#1}&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Slider::Pimpl::sendDragEnd()::{lambda(juce::SliderListener<juce::Slider>&)#1},juce::Component::BailOutChecker>(juce::SliderListener<juce::Slider>*,juce::Component::BailOutChecker_const&,juce::Slider::Pimpl::sendDragEnd()::{lambda(juce::SliderListener<juce::Slider>&)#1}&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Slider::Pimpl::sendDragEnd()::{lambda(juce::SliderListener<juce::Slider>&)#1},juce::Component::BailOutChecker>(juce::SliderListener<juce::Slider>*,juce::Component::BailOutChecker_const&,juce::Slider::Pimpl::sendDragEnd()::{lambda(juce::SliderListener<juce::Slider>&)#1}&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Slider::Pimpl::sendDragEnd()::{lambda(juce::SliderListener<juce::Slider>&)#1},juce::Component::BailOutChecker>(juce::SliderListener<juce::Slider>*,juce::Component::BailOutChecker_const&,juce::Slider::Pimpl::sendDragEnd()::{lambda(juce::SliderListener<juce::Slider>&)#1}&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Slider::Pimpl::sendDragEnd()::{lambda(juce::SliderListener<juce::Slider>&)#1},juce::Component::BailOutChecker>(juce::SliderListener<juce::Slider>*,juce::Component::BailOutChecker_const&,juce::Slider::Pimpl::sendDragEnd()::{lambda(juce::SliderListener<juce::Slider>&)#1}&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Slider::Pimpl::sendDragStart()::{lambda(juce::SliderListener<juce::Slider>&)#1},juce::Component::BailOutChecker>(juce::SliderListener<juce::Slider>*,juce::Component::BailOutChecker_const&,juce::Slider::Pimpl::sendDragStart()::{lambda(juce::SliderListener<juce::Slider>&)#1}&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Slider::Pimpl::sendDragStart()::{lambda(juce::SliderListener<juce::Slider>&)#1},juce::Component::BailOutChecker>(juce::SliderListener<juce::Slider>*,juce::Component::BailOutChecker_const&,juce::Slider::Pimpl::sendDragStart()::{lambda(juce::SliderListener<juce::Slider>&)#1}&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Slider::Pimpl::sendDragStart()::{lambda(juce::SliderListener<juce::Slider>&)#1},juce::Component::BailOutChecker>(juce::SliderListener<juce::Slider>*,juce::Component::BailOutChecker_const&,juce::Slider::Pimpl::sendDragStart()::{lambda(juce::SliderListener<juce::Slider>&)#1}&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Slider::Pimpl::sendDragStart()::{lambda(juce::SliderListener<juce::Slider>&)#1},juce::Component::BailOutChecker>(juce::SliderListener<juce::Slider>*,juce::Component::BailOutChecker_const&,juce::Slider::Pimpl::sendDragStart()::{lambda(juce::SliderListener<juce::Slider>&)#1}&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::TextEditor::handleCommandMessage(int)::$_151,juce::Component::BailOutChecker>(juce::TextEditor::Listener*,juce::Component::BailOutChecker_const&,juce::TextEditor::handleCommandMessage(int)::$_151&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::TextEditor::handleCommandMessage(int)::$_151,juce::Component::BailOutChecker>(juce::TextEditor::Listener*,juce::Component::BailOutChecker_const&,juce::TextEditor::handleCommandMessage(int)::$_151&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::TextEditor::handleCommandMessage(int)::$_151,juce::Component::BailOutChecker>(juce::TextEditor::Listener*,juce::Component::BailOutChecker_const&,juce::TextEditor::handleCommandMessage(int)::$_151&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::TextEditor::handleCommandMessage(int)::$_151,juce::Component::BailOutChecker>(juce::TextEditor::Listener*,juce::Component::BailOutChecker_const&,juce::TextEditor::handleCommandMessage(int)::$_151&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::TextEditor::handleCommandMessage(int)::$_152,juce::Component::BailOutChecker>(juce::TextEditor::Listener*,juce::Component::BailOutChecker_const&,juce::TextEditor::handleCommandMessage(int)::$_152&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::TextEditor::handleCommandMessage(int)::$_152,juce::Component::BailOutChecker>(juce::TextEditor::Listener*,juce::Component::BailOutChecker_const&,juce::TextEditor::handleCommandMessage(int)::$_152&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::TextEditor::handleCommandMessage(int)::$_152,juce::Component::BailOutChecker>(juce::TextEditor::Listener*,juce::Component::BailOutChecker_const&,juce::TextEditor::handleCommandMessage(int)::$_152&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::TextEditor::handleCommandMessage(int)::$_152,juce::Component::BailOutChecker>(juce::TextEditor::Listener*,juce::Component::BailOutChecker_const&,juce::TextEditor::handleCommandMessage(int)::$_152&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::TextEditor::handleCommandMessage(int)::$_153,juce::Component::BailOutChecker>(juce::TextEditor::Listener*,juce::Component::BailOutChecker_const&,juce::TextEditor::handleCommandMessage(int)::$_153&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::TextEditor::handleCommandMessage(int)::$_153,juce::Component::BailOutChecker>(juce::TextEditor::Listener*,juce::Component::BailOutChecker_const&,juce::TextEditor::handleCommandMessage(int)::$_153&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::TextEditor::handleCommandMessage(int)::$_153,juce::Component::BailOutChecker>(juce::TextEditor::Listener*,juce::Component::BailOutChecker_const&,juce::TextEditor::handleCommandMessage(int)::$_153&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::TextEditor::handleCommandMessage(int)::$_153,juce::Component::BailOutChecker>(juce::TextEditor::Listener*,juce::Component::BailOutChecker_const&,juce::TextEditor::handleCommandMessage(int)::$_153&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::TextEditor::handleCommandMessage(int)::$_154,juce::Component::BailOutChecker>(juce::TextEditor::Listener*,juce::Component::BailOutChecker_const&,juce::TextEditor::handleCommandMessage(int)::$_154&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::TextEditor::handleCommandMessage(int)::$_154,juce::Component::BailOutChecker>(juce::TextEditor::Listener*,juce::Component::BailOutChecker_const&,juce::TextEditor::handleCommandMessage(int)::$_154&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::TextEditor::handleCommandMessage(int)::$_154,juce::Component::BailOutChecker>(juce::TextEditor::Listener*,juce::Component::BailOutChecker_const&,juce::TextEditor::handleCommandMessage(int)::$_154&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::TextEditor::handleCommandMessage(int)::$_154,juce::Component::BailOutChecker>(juce::TextEditor::Listener*,juce::Component::BailOutChecker_const&,juce::TextEditor::handleCommandMessage(int)::$_154&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::Thread::Listener,juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>>::callCheckedExcluding<juce::Thread::signalThreadShouldExit()::$_22,juce::ListenerList<juce::Thread::Listener,juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker>(juce::Thread::Listener*,juce::ListenerList<juce::Thread::Listener,juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker_const&,juce::Thread::signalThreadShouldExit()::$_22&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::Thread::Listener,juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>>::callCheckedExcluding<juce::Thread::signalThreadShouldExit()::$_22,juce::ListenerList<juce::Thread::Listener,juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker>(juce::Thread::Listener*,juce::ListenerList<juce::Thread::Listener,juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker_const&,juce::Thread::signalThreadShouldExit()::$_22&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::Thread::Listener,juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>>::callCheckedExcluding<juce::Thread::signalThreadShouldExit()::$_22,juce::ListenerList<juce::Thread::Listener,juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker>(juce::Thread::Listener*,juce::ListenerList<juce::Thread::Listener,juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker_const&,juce::Thread::signalThreadShouldExit()::$_22&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::Thread::Listener,juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>>::callCheckedExcluding<juce::Thread::signalThreadShouldExit()::$_22,juce::ListenerList<juce::Thread::Listener,juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker>(juce::Thread::Listener*,juce::ListenerList<juce::Thread::Listener,juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker_const&,juce::Thread::signalThreadShouldExit()::$_22&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Value::callListeners()::$_0,juce::ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::Value::Listener*,juce::ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::Value::callListeners()::$_0&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Value::callListeners()::$_0,juce::ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::Value::Listener*,juce::ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::Value::callListeners()::$_0&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Value::callListeners()::$_0,juce::ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::Value::Listener*,juce::ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::Value::callListeners()::$_0&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Value::callListeners()::$_0,juce::ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::Value::Listener*,juce::ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::Value::callListeners()::$_0&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ValueTree::operator=(juce::ValueTree_const&)::$_1,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ValueTree::Listener*,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ValueTree::operator=(juce::ValueTree_const&)::$_1&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ValueTree::operator=(juce::ValueTree_const&)::$_1,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ValueTree::Listener*,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ValueTree::operator=(juce::ValueTree_const&)::$_1&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ValueTree::operator=(juce::ValueTree_const&)::$_1,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ValueTree::Listener*,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ValueTree::operator=(juce::ValueTree_const&)::$_1&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ValueTree::operator=(juce::ValueTree_const&)::$_1,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ValueTree::Listener*,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ValueTree::operator=(juce::ValueTree_const&)::$_1&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ValueTree::SharedObject::sendChildAddedMessage(juce::ValueTree)::{lambda(juce::ValueTree::Listener&)#1}&,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ValueTree::Listener*,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ValueTree::SharedObject::sendChildAddedMessage(juce::ValueTree)::{lambda(juce::ValueTree::Listener&)#1}&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ValueTree::SharedObject::sendChildAddedMessage(juce::ValueTree)::{lambda(juce::ValueTree::Listener&)#1}&,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ValueTree::Listener*,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ValueTree::SharedObject::sendChildAddedMessage(juce::ValueTree)::{lambda(juce::ValueTree::Listener&)#1}&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ValueTree::SharedObject::sendChildAddedMessage(juce::ValueTree)::{lambda(juce::ValueTree::Listener&)#1}&,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ValueTree::Listener*,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ValueTree::SharedObject::sendChildAddedMessage(juce::ValueTree)::{lambda(juce::ValueTree::Listener&)#1}&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ValueTree::SharedObject::sendChildAddedMessage(juce::ValueTree)::{lambda(juce::ValueTree::Listener&)#1}&,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ValueTree::Listener*,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ValueTree::SharedObject::sendChildAddedMessage(juce::ValueTree)::{lambda(juce::ValueTree::Listener&)#1}&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ValueTree::SharedObject::sendChildRemovedMessage(juce::ValueTree,int)::{lambda(juce::ValueTree::Listener&)#1}&,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ValueTree::Listener*,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ValueTree::SharedObject::sendChildRemovedMessage(juce::ValueTree,int)::{lambda(juce::ValueTree::Listener&)#1}&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ValueTree::SharedObject::sendChildRemovedMessage(juce::ValueTree,int)::{lambda(juce::ValueTree::Listener&)#1}&,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ValueTree::Listener*,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ValueTree::SharedObject::sendChildRemovedMessage(juce::ValueTree,int)::{lambda(juce::ValueTree::Listener&)#1}&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ValueTree::SharedObject::sendChildRemovedMessage(juce::ValueTree,int)::{lambda(juce::ValueTree::Listener&)#1}&,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ValueTree::Listener*,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ValueTree::SharedObject::sendChildRemovedMessage(juce::ValueTree,int)::{lambda(juce::ValueTree::Listener&)#1}&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ValueTree::SharedObject::sendChildRemovedMessage(juce::ValueTree,int)::{lambda(juce::ValueTree::Listener&)#1}&,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ValueTree::Listener*,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ValueTree::SharedObject::sendChildRemovedMessage(juce::ValueTree,int)::{lambda(juce::ValueTree::Listener&)#1}&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ValueTree::SharedObject::sendParentChangeMessage()::{lambda(juce::ValueTree::Listener&)#1}&,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ValueTree::Listener*,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ValueTree::SharedObject::sendParentChangeMessage()::{lambda(juce::ValueTree::Listener&)#1}&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ValueTree::SharedObject::sendParentChangeMessage()::{lambda(juce::ValueTree::Listener&)#1}&,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ValueTree::Listener*,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ValueTree::SharedObject::sendParentChangeMessage()::{lambda(juce::ValueTree::Listener&)#1}&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ValueTree::SharedObject::sendParentChangeMessage()::{lambda(juce::ValueTree::Listener&)#1}&,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ValueTree::Listener*,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ValueTree::SharedObject::sendParentChangeMessage()::{lambda(juce::ValueTree::Listener&)#1}&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ValueTree::SharedObject::sendParentChangeMessage()::{lambda(juce::ValueTree::Listener&)#1}&,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ValueTree::Listener*,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ValueTree::SharedObject::sendParentChangeMessage()::{lambda(juce::ValueTree::Listener&)#1}&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ValueTree::SharedObject::sendPropertyChangeMessage(juce::Identifier_const&,juce::ValueTree::Listener*)::{lambda(juce::ValueTree::Listener&)#1}&,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ValueTree::Listener*,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ValueTree::SharedObject::sendPropertyChangeMessage(juce::Identifier_const&,juce::ValueTree::Listener*)::{lambda(juce::ValueTree::Listener&)#1}&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ValueTree::SharedObject::sendPropertyChangeMessage(juce::Identifier_const&,juce::ValueTree::Listener*)::{lambda(juce::ValueTree::Listener&)#1}&,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ValueTree::Listener*,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ValueTree::SharedObject::sendPropertyChangeMessage(juce::Identifier_const&,juce::ValueTree::Listener*)::{lambda(juce::ValueTree::Listener&)#1}&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ValueTree::SharedObject::sendPropertyChangeMessage(juce::Identifier_const&,juce::ValueTree::Listener*)::{lambda(juce::ValueTree::Listener&)#1}&,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ValueTree::Listener*,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ValueTree::SharedObject::sendPropertyChangeMessage(juce::Identifier_const&,juce::ValueTree::Listener*)::{lambda(juce::ValueTree::Listener&)#1}&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ValueTree::SharedObject::sendPropertyChangeMessage(juce::Identifier_const&,juce::ValueTree::Listener*)::{lambda(juce::ValueTree::Listener&)#1}&,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ValueTree::Listener*,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ValueTree::SharedObject::sendPropertyChangeMessage(juce::Identifier_const&,juce::ValueTree::Listener*)::{lambda(juce::ValueTree::Listener&)#1}&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::XWindowSystemUtilities::XSettings::update()::$_14,juce::ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::XWindowSystemUtilities::XSettings::Listener*,juce::ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::XWindowSystemUtilities::XSettings::update()::$_14&&)::{lambda()#1}> ScopeGuard<juce::ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::XWindowSystemUtilities::XSettings::update()::$_14,juce::ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::XWindowSystemUtilities::XSettings::Listener*,juce::ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::XWindowSystemUtilities::XSettings::update()::$_14&&)::{lambda()#1}>, *PScopeGuard<juce::ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::XWindowSystemUtilities::XSettings::update()::$_14,juce::ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::XWindowSystemUtilities::XSettings::Listener*,juce::ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::XWindowSystemUtilities::XSettings::update()::$_14&&)::{lambda()#1}>;

struct ScopeGuard<juce::ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::XWindowSystemUtilities::XSettings::update()::$_14,juce::ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::XWindowSystemUtilities::XSettings::Listener*,juce::ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::XWindowSystemUtilities::XSettings::update()::$_14&&)::{lambda()#1}> { // PlaceHolder Structure
};

typedef struct ScopeGuard<juce::MessageManager::Lock::setAcquired(bool)const::$_5> ScopeGuard<juce::MessageManager::Lock::setAcquired(bool)const::$_5>, *PScopeGuard<juce::MessageManager::Lock::setAcquired(bool)const::$_5>;

struct ScopeGuard<juce::MessageManager::Lock::setAcquired(bool)const::$_5> { // PlaceHolder Structure
};

typedef struct ScratchBuffer ScratchBuffer, *PScratchBuffer;

struct ScratchBuffer { // PlaceHolder Structure
};

typedef struct Screen Screen, *PScreen;

struct Screen { // PlaceHolder Structure
};

typedef struct ScrollBar ScrollBar, *PScrollBar;

struct ScrollBar { // PlaceHolder Structure
};

typedef struct ScrollbarButton ScrollbarButton, *PScrollbarButton;

struct ScrollbarButton { // PlaceHolder Structure
};

typedef undefined SeekMode;

typedef struct Sequence<OT::Layout::SmallTypes> Sequence<OT::Layout::SmallTypes>, *PSequence<OT::Layout::SmallTypes>;

struct Sequence<OT::Layout::SmallTypes> { // PlaceHolder Class Structure
};

typedef struct set set, *Pset;

struct set { // PlaceHolder Structure
};

typedef struct set<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,std::less<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>> set<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,std::less<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>>, *Pset<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,std::less<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>>;

struct set<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,std::less<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>> { // PlaceHolder Structure
};

typedef struct SetGradientStopsOp SetGradientStopsOp, *PSetGradientStopsOp;

struct SetGradientStopsOp { // PlaceHolder Structure
};

typedef struct SetPropertyAction SetPropertyAction, *PSetPropertyAction;

struct SetPropertyAction { // PlaceHolder Structure
};

typedef struct SettableTooltipClient SettableTooltipClient, *PSettableTooltipClient;

struct SettableTooltipClient { // PlaceHolder Structure
};

typedef struct ShadowWindow ShadowWindow, *PShadowWindow;

struct ShadowWindow { // PlaceHolder Structure
};

typedef struct ShapedGlyph ShapedGlyph, *PShapedGlyph;

struct ShapedGlyph { // PlaceHolder Structure
};

typedef undefined ShapedGlyphSpan;

typedef struct ShapedText ShapedText, *PShapedText;

struct ShapedText { // PlaceHolder Structure
};

typedef struct ShapedTextOptions ShapedTextOptions, *PShapedTextOptions;

struct ShapedTextOptions { // PlaceHolder Structure
};

typedef struct Shaper Shaper, *PShaper;

struct Shaper { // PlaceHolder Structure
};

typedef undefined SharedBase;

typedef struct SharedCursorHandle SharedCursorHandle, *PSharedCursorHandle;

struct SharedCursorHandle { // PlaceHolder Class Structure
};

typedef struct SharedFontInternal SharedFontInternal, *PSharedFontInternal;

struct SharedFontInternal { // PlaceHolder Structure
};

typedef struct SharedKeyWindow SharedKeyWindow, *PSharedKeyWindow;

struct SharedKeyWindow { // PlaceHolder Structure
};

typedef struct SharedObject SharedObject, *PSharedObject;

struct SharedObject { // PlaceHolder Structure
};

typedef struct SharedPointer SharedPointer, *PSharedPointer;

struct SharedPointer { // PlaceHolder Structure
};

typedef struct SharedResourcePointer<juce::CRQLLNF> SharedResourcePointer<juce::CRQLLNF>, *PSharedResourcePointer<juce::CRQLLNF>;

struct SharedResourcePointer<juce::CRQLLNF> { // PlaceHolder Structure
};

typedef struct SharedResourcePointer<juce::detail::MessageThread> SharedResourcePointer<juce::detail::MessageThread>, *PSharedResourcePointer<juce::detail::MessageThread>;

struct SharedResourcePointer<juce::detail::MessageThread> { // PlaceHolder Structure
};

typedef struct SharedResourcePointer<juce::EventHandler> SharedResourcePointer<juce::EventHandler>, *PSharedResourcePointer<juce::EventHandler>;

struct SharedResourcePointer<juce::EventHandler> { // PlaceHolder Structure
};

typedef ulong shmatt_t;

typedef struct shmid_ds shmid_ds, *Pshmid_ds;

struct ipc_perm {
    __key_t __key;
    __uid_t uid;
    __gid_t gid;
    __uid_t cuid;
    __gid_t cgid;
    ushort mode;
    ushort __pad1;
    ushort __seq;
    ushort __pad2;
    ulong __unused1;
    ulong __unused2;
};

struct shmid_ds {
    struct ipc_perm shm_perm;
    size_t shm_segsz;
    __time_t shm_atime;
    __time_t shm_dtime;
    __time_t shm_ctime;
    __pid_t shm_cpid;
    __pid_t shm_lpid;
    shmatt_t shm_nattch;
    ulong __unused4;
    ulong __unused5;
};

typedef undefined ShownManually;

typedef struct ShutdownDetector ShutdownDetector, *PShutdownDetector;

struct ShutdownDetector { // PlaceHolder Structure
};

typedef struct SidePanel SidePanel, *PSidePanel;

struct SidePanel { // PlaceHolder Structure
};

typedef struct sigaction sigaction, *Psigaction;

union _union_1457 {
    __sighandler_t sa_handler;
    void (*sa_sigaction)(int, siginfo_t *, void *);
};

struct __sigset_t {
    ulong __val[16];
};

struct sigaction {
    union _union_1457 __sigaction_handler;
    struct __sigset_t sa_mask;
    int sa_flags;
    void (*sa_restorer)(void);
};

typedef struct siginfo siginfo, *Psiginfo;

union _union_1441 {
    int _pad[28];
    struct _struct_1442 _kill;
    struct _struct_1443 _timer;
    struct _struct_1444 _rt;
    struct _struct_1445 _sigchld;
    struct _struct_1446 _sigfault;
    struct _struct_1447 _sigpoll;
};

struct siginfo {
    int si_signo;
    int si_errno;
    int si_code;
    union _union_1441 _sifields;
};

typedef struct siginfo siginfo_t;

typedef undefined signed;

typedef struct SimpleShapedText SimpleShapedText, *PSimpleShapedText;

struct SimpleShapedText { // PlaceHolder Structure
};

typedef struct SimpleValueSource SimpleValueSource, *PSimpleValueSource;

struct SimpleValueSource { // PlaceHolder Structure
};

typedef struct SinglePosFormat1 SinglePosFormat1, *PSinglePosFormat1;

struct SinglePosFormat1 { // PlaceHolder Class Structure
};

typedef struct SinglePosFormat2 SinglePosFormat2, *PSinglePosFormat2;

struct SinglePosFormat2 { // PlaceHolder Class Structure
};

typedef struct SingleSubstFormat1_3<OT::Layout::SmallTypes> SingleSubstFormat1_3<OT::Layout::SmallTypes>, *PSingleSubstFormat1_3<OT::Layout::SmallTypes>;

struct SingleSubstFormat1_3<OT::Layout::SmallTypes> { // PlaceHolder Class Structure
};

typedef struct SingleSubstFormat2_4<OT::Layout::SmallTypes> SingleSubstFormat2_4<OT::Layout::SmallTypes>, *PSingleSubstFormat2_4<OT::Layout::SmallTypes>;

struct SingleSubstFormat2_4<OT::Layout::SmallTypes> { // PlaceHolder Class Structure
};

typedef struct SingleThreadedReferenceCountedObject SingleThreadedReferenceCountedObject, *PSingleThreadedReferenceCountedObject;

struct SingleThreadedReferenceCountedObject { // PlaceHolder Structure
};

typedef struct SingletonHolder<juce::(anonymous_namespace)::GlyphArrangementCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>,juce::CriticalSection,false> SingletonHolder<juce::(anonymous_namespace)::GlyphArrangementCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>,juce::CriticalSection,false>, *PSingletonHolder<juce::(anonymous_namespace)::GlyphArrangementCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>,juce::CriticalSection,false>;

struct SingletonHolder<juce::(anonymous_namespace)::GlyphArrangementCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>,juce::CriticalSection,false> { // PlaceHolder Structure
};

typedef struct SingletonHolder<juce::(anonymous_namespace)::GlyphArrangementCache<juce::Graphics::drawMultiLineText(juce::String_const&,int,int,int,juce::Justification,float)const::ArrangementArgs>,juce::CriticalSection,false> SingletonHolder<juce::(anonymous_namespace)::GlyphArrangementCache<juce::Graphics::drawMultiLineText(juce::String_const&,int,int,int,juce::Justification,float)const::ArrangementArgs>,juce::CriticalSection,false>, *PSingletonHolder<juce::(anonymous_namespace)::GlyphArrangementCache<juce::Graphics::drawMultiLineText(juce::String_const&,int,int,int,juce::Justification,float)const::ArrangementArgs>,juce::CriticalSection,false>;

struct SingletonHolder<juce::(anonymous_namespace)::GlyphArrangementCache<juce::Graphics::drawMultiLineText(juce::String_const&,int,int,int,juce::Justification,float)const::ArrangementArgs>,juce::CriticalSection,false> { // PlaceHolder Structure
};

typedef struct SingletonHolder<juce::(anonymous_namespace)::GlyphArrangementCache<juce::Graphics::drawSingleLineText(juce::String_const&,int,int,juce::Justification)const::ArrangementArgs>,juce::CriticalSection,false> SingletonHolder<juce::(anonymous_namespace)::GlyphArrangementCache<juce::Graphics::drawSingleLineText(juce::String_const&,int,int,juce::Justification)const::ArrangementArgs>,juce::CriticalSection,false>, *PSingletonHolder<juce::(anonymous_namespace)::GlyphArrangementCache<juce::Graphics::drawSingleLineText(juce::String_const&,int,int,juce::Justification)const::ArrangementArgs>,juce::CriticalSection,false>;

struct SingletonHolder<juce::(anonymous_namespace)::GlyphArrangementCache<juce::Graphics::drawSingleLineText(juce::String_const&,int,int,juce::Justification)const::ArrangementArgs>,juce::CriticalSection,false> { // PlaceHolder Structure
};

typedef struct SingletonHolder<juce::(anonymous_namespace)::GlyphArrangementCache<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>,juce::CriticalSection,false> SingletonHolder<juce::(anonymous_namespace)::GlyphArrangementCache<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>,juce::CriticalSection,false>, *PSingletonHolder<juce::(anonymous_namespace)::GlyphArrangementCache<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>,juce::CriticalSection,false>;

struct SingletonHolder<juce::(anonymous_namespace)::GlyphArrangementCache<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>,juce::CriticalSection,false> { // PlaceHolder Structure
};

typedef struct SingletonHolder<juce::ImageCache::Pimpl,juce::CriticalSection,false> SingletonHolder<juce::ImageCache::Pimpl,juce::CriticalSection,false>, *PSingletonHolder<juce::ImageCache::Pimpl,juce::CriticalSection,false>;

struct SingletonHolder<juce::ImageCache::Pimpl,juce::CriticalSection,false> { // PlaceHolder Structure
};

typedef struct SingletonHolder<juce::InternalMessageQueue,juce::CriticalSection,false> SingletonHolder<juce::InternalMessageQueue,juce::CriticalSection,false>, *PSingletonHolder<juce::InternalMessageQueue,juce::CriticalSection,false>;

struct SingletonHolder<juce::InternalMessageQueue,juce::CriticalSection,false> { // PlaceHolder Structure
};

typedef struct SingletonHolder<juce::InternalRunLoop,juce::CriticalSection,false> SingletonHolder<juce::InternalRunLoop,juce::CriticalSection,false>, *PSingletonHolder<juce::InternalRunLoop,juce::CriticalSection,false>;

struct SingletonHolder<juce::InternalRunLoop,juce::CriticalSection,false> { // PlaceHolder Structure
};

typedef struct SingletonHolder<juce::PushNotifications,juce::CriticalSection,false> SingletonHolder<juce::PushNotifications,juce::CriticalSection,false>, *PSingletonHolder<juce::PushNotifications,juce::CriticalSection,false>;

struct SingletonHolder<juce::PushNotifications,juce::CriticalSection,false> { // PlaceHolder Structure
};

typedef struct SingletonHolder<juce::ShutdownDetector,juce::CriticalSection,false> SingletonHolder<juce::ShutdownDetector,juce::CriticalSection,false>, *PSingletonHolder<juce::ShutdownDetector,juce::CriticalSection,false>;

struct SingletonHolder<juce::ShutdownDetector,juce::CriticalSection,false> { // PlaceHolder Structure
};

typedef struct SingletonHolder<juce::TypefaceCache,juce::CriticalSection,false> SingletonHolder<juce::TypefaceCache,juce::CriticalSection,false>, *PSingletonHolder<juce::TypefaceCache,juce::CriticalSection,false>;

struct SingletonHolder<juce::TypefaceCache,juce::CriticalSection,false> { // PlaceHolder Structure
};

typedef struct SingletonHolder<juce::X11Symbols,juce::CriticalSection,false> SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>, *PSingletonHolder<juce::X11Symbols,juce::CriticalSection,false>;

struct SingletonHolder<juce::X11Symbols,juce::CriticalSection,false> { // PlaceHolder Structure
};

typedef struct SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>, *PSingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>;

struct SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> { // PlaceHolder Structure
};

typedef undefined SkipDisabledComponents;

typedef struct Slider Slider, *PSlider;

struct Slider { // PlaceHolder Structure
};

typedef struct SliderAccessibilityHandler SliderAccessibilityHandler, *PSliderAccessibilityHandler;

struct SliderAccessibilityHandler { // PlaceHolder Structure
};

typedef struct SliderLabelComp SliderLabelComp, *PSliderLabelComp;

struct SliderLabelComp { // PlaceHolder Structure
};

typedef struct SliderListener SliderListener, *PSliderListener;

struct SliderListener { // PlaceHolder Structure
};

typedef struct SliderParameterAttachment SliderParameterAttachment, *PSliderParameterAttachment;

struct SliderParameterAttachment { // PlaceHolder Structure
};

typedef undefined SliderStyle;

typedef struct Snapshot Snapshot, *PSnapshot;

struct Snapshot { // PlaceHolder Structure
};

typedef struct SoftwareImageType SoftwareImageType, *PSoftwareImageType;

struct SoftwareImageType { // PlaceHolder Structure
};

typedef struct SoftwarePixelData SoftwarePixelData, *PSoftwarePixelData;

struct SoftwarePixelData { // PlaceHolder Structure
};

typedef struct SoftwareRendererSavedState SoftwareRendererSavedState, *PSoftwareRendererSavedState;

struct SoftwareRendererSavedState { // PlaceHolder Structure
};

typedef struct SolidColour SolidColour, *PSolidColour;

struct SolidColour { // PlaceHolder Structure
};

typedef struct SolidColour<juce::PixelARGB,false> SolidColour<juce::PixelARGB,false>, *PSolidColour<juce::PixelARGB,false>;

struct SolidColour<juce::PixelARGB,false> { // PlaceHolder Class Structure
};

typedef struct SolidColour<juce::PixelRGB,false> SolidColour<juce::PixelRGB,false>, *PSolidColour<juce::PixelRGB,false>;

struct SolidColour<juce::PixelRGB,false> { // PlaceHolder Class Structure
};

typedef struct SortedSet<juce::LookAndFeel::ColourSetting,juce::DummyCriticalSection> SortedSet<juce::LookAndFeel::ColourSetting,juce::DummyCriticalSection>, *PSortedSet<juce::LookAndFeel::ColourSetting,juce::DummyCriticalSection>;

struct SortedSet<juce::LookAndFeel::ColourSetting,juce::DummyCriticalSection> { // PlaceHolder Class Structure
};

typedef struct SortedSet<juce::Value*,juce::DummyCriticalSection> SortedSet<juce::Value*,juce::DummyCriticalSection>, *PSortedSet<juce::Value*,juce::DummyCriticalSection>;

struct SortedSet<juce::Value*,juce::DummyCriticalSection> { // PlaceHolder Class Structure
};

typedef struct SortedSet<juce::ValueTree*,juce::DummyCriticalSection> SortedSet<juce::ValueTree*,juce::DummyCriticalSection>, *PSortedSet<juce::ValueTree*,juce::DummyCriticalSection>;

struct SortedSet<juce::ValueTree*,juce::DummyCriticalSection> { // PlaceHolder Structure
};

typedef struct SourceLocation SourceLocation, *PSourceLocation;

struct SourceLocation { // PlaceHolder Structure
};

typedef undefined Span;

typedef undefined SpecialLocationType;

typedef struct SpinLock SpinLock, *PSpinLock;

struct SpinLock { // PlaceHolder Class Structure
};

typedef __ssize_t ssize_t;

typedef struct StackArrayStream StackArrayStream, *PStackArrayStream;

struct StackArrayStream { // PlaceHolder Structure
};

typedef struct StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState> StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>, *PStackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>;

struct StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState> { // PlaceHolder Structure
};

typedef undefined StandardCursorType;

typedef struct StartEndString StartEndString, *PStartEndString;

struct StartEndString { // PlaceHolder Structure
};

typedef struct stat64 stat64, *Pstat64;

struct timespec {
    __time_t tv_sec;
    long tv_nsec;
};

struct stat64 {
    __dev_t st_dev;
    __ino64_t st_ino;
    __nlink_t st_nlink;
    __mode_t st_mode;
    __uid_t st_uid;
    __gid_t st_gid;
    int __pad0;
    __dev_t st_rdev;
    __off_t st_size;
    __blksize_t st_blksize;
    __blkcnt64_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    long __unused[3];
};

typedef struct StateTable StateTable, *PStateTable;

struct StateTable { // PlaceHolder Structure
};

typedef struct StateTable<AAT::ObsoleteTypes,void> StateTable<AAT::ObsoleteTypes,void>, *PStateTable<AAT::ObsoleteTypes,void>;

struct StateTable<AAT::ObsoleteTypes,void> { // PlaceHolder Class Structure
};

typedef struct StateTableDriver<AAT::ObsoleteTypes,void> StateTableDriver<AAT::ObsoleteTypes,void>, *PStateTableDriver<AAT::ObsoleteTypes,void>;

struct StateTableDriver<AAT::ObsoleteTypes,void> { // PlaceHolder Class Structure
};

typedef undefined StoredScaleFactor;

typedef struct streambuf streambuf, *Pstreambuf;

struct streambuf { // PlaceHolder Structure
};

typedef struct String String, *PString;

struct String { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/std/__cxx11/string - /string

typedef struct String_const String_const, *PString_const;

struct String_const { // PlaceHolder Structure
};

typedef struct StringArray StringArray, *PStringArray;

struct StringArray { // PlaceHolder Structure
};

typedef struct StringConvert StringConvert, *PStringConvert;

struct StringConvert { // PlaceHolder Class Structure
};

typedef struct StringCreationHelper StringCreationHelper, *PStringCreationHelper;

struct StringCreationHelper { // PlaceHolder Class Structure
};

typedef struct StringLayoutState StringLayoutState, *PStringLayoutState;

struct StringLayoutState { // PlaceHolder Structure
};

typedef struct StringListParameter StringListParameter, *PStringListParameter;

struct StringListParameter { // PlaceHolder Structure
};

typedef struct StringObject StringObject, *PStringObject;

struct StringObject { // PlaceHolder Structure
};

typedef struct StringPool StringPool, *PStringPool;

struct StringPool { // PlaceHolder Structure
};

typedef undefined StringRef;


// WARNING! conflicting data type names: /juce/StringRef - /Demangler/juce/StringRef

typedef struct Submenu Submenu, *PSubmenu;

struct Submenu { // PlaceHolder Structure
};

typedef struct SubsectionPixelData SubsectionPixelData, *PSubsectionPixelData;

struct SubsectionPixelData { // PlaceHolder Structure
};

typedef struct SubstLookup SubstLookup, *PSubstLookup;

struct SubstLookup { // PlaceHolder Structure
};

typedef struct SubstLookupSubTable SubstLookupSubTable, *PSubstLookupSubTable;

struct SubstLookupSubTable { // PlaceHolder Structure
};

typedef struct SubtableGlyphCoverage SubtableGlyphCoverage, *PSubtableGlyphCoverage;

struct SubtableGlyphCoverage { // PlaceHolder Class Structure
};

typedef struct SVGState SVGState, *PSVGState;

struct SVGState { // PlaceHolder Class Structure
};

typedef undefined SymbolBinding;

typedef struct SystemStats SystemStats, *PSystemStats;

struct SystemStats { // PlaceHolder Class Structure
};

typedef struct t_helmholtz t_helmholtz, *Pt_helmholtz;

struct t_helmholtz { // PlaceHolder Structure
};

typedef struct TabBarButton TabBarButton, *PTabBarButton;

struct TabBarButton { // PlaceHolder Structure
};

typedef struct TabbedButtonBar TabbedButtonBar, *PTabbedButtonBar;

struct TabbedButtonBar { // PlaceHolder Structure
};

typedef struct TableHeaderComponent TableHeaderComponent, *PTableHeaderComponent;

struct TableHeaderComponent { // PlaceHolder Structure
};

typedef undefined TEMPNAMEPLACEHOLDERVALUE;

typedef struct TemporaryFile TemporaryFile, *PTemporaryFile;

struct TemporaryFile { // PlaceHolder Structure
};

typedef struct TextButton TextButton, *PTextButton;

struct TextButton { // PlaceHolder Structure
};

typedef struct TextEditor TextEditor, *PTextEditor;

struct TextEditor { // PlaceHolder Structure
};

typedef struct TextEditorStorage TextEditorStorage, *PTextEditorStorage;

struct TextEditorStorage { // PlaceHolder Structure
};

typedef struct TextEditorStorageChunks TextEditorStorageChunks, *PTextEditorStorageChunks;

struct TextEditorStorageChunks { // PlaceHolder Structure
};

typedef struct TextEditorTextInterface TextEditorTextInterface, *PTextEditorTextInterface;

struct TextEditorTextInterface { // PlaceHolder Structure
};

typedef struct TextEditorViewport TextEditorViewport, *PTextEditorViewport;

struct TextEditorViewport { // PlaceHolder Structure
};

typedef undefined TextEntryBoxPosition;

typedef struct TextFormat TextFormat, *PTextFormat;

struct TextFormat { // PlaceHolder Structure
};

typedef struct TextHolderComponent TextHolderComponent, *PTextHolderComponent;

struct TextHolderComponent { // PlaceHolder Structure
};

typedef struct TextInputTarget TextInputTarget, *PTextInputTarget;

struct TextInputTarget { // PlaceHolder Structure
};

typedef struct TextLayout TextLayout, *PTextLayout;

struct TextLayout { // PlaceHolder Structure
};

typedef struct this_will_fail_to_link_if_some_of_your_compile_units_are_built_in_release_mode this_will_fail_to_link_if_some_of_your_compile_units_are_built_in_release_mode, *Pthis_will_fail_to_link_if_some_of_your_compile_units_are_built_in_release_mode;

struct this_will_fail_to_link_if_some_of_your_compile_units_are_built_in_release_mode { // PlaceHolder Structure
};

typedef struct Thread Thread, *PThread;

struct Thread { // PlaceHolder Structure
};

typedef struct ThreadLocalValue<juce::AudioProcessor::WrapperType> ThreadLocalValue<juce::AudioProcessor::WrapperType>, *PThreadLocalValue<juce::AudioProcessor::WrapperType>;

struct ThreadLocalValue<juce::AudioProcessor::WrapperType> { // PlaceHolder Structure
};

typedef undefined Time;

typedef __time_t time_t;

typedef struct TimedCallback TimedCallback, *PTimedCallback;

struct TimedCallback { // PlaceHolder Structure
};

typedef struct Timer Timer, *PTimer;

struct Timer { // PlaceHolder Structure
};

typedef struct TimerThread TimerThread, *PTimerThread;

struct TimerThread { // PlaceHolder Structure
};

typedef struct tm tm, *Ptm;

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    long tm_gmtoff;
    char *tm_zone;
};

typedef struct tms tms, *Ptms;

struct tms {
    clock_t tms_utime;
    clock_t tms_stime;
    clock_t tms_cutime;
    clock_t tms_cstime;
};

typedef struct ToggleButton ToggleButton, *PToggleButton;

struct ToggleButton { // PlaceHolder Structure
};

typedef struct Toolbar Toolbar, *PToolbar;

struct Toolbar { // PlaceHolder Structure
};

typedef struct ToolbarItemComponent ToolbarItemComponent, *PToolbarItemComponent;

struct ToolbarItemComponent { // PlaceHolder Structure
};

typedef struct TooltipWindow TooltipWindow, *PTooltipWindow;

struct TooltipWindow { // PlaceHolder Structure
};

typedef struct TopLevelWindow TopLevelWindow, *PTopLevelWindow;

struct TopLevelWindow { // PlaceHolder Structure
};

typedef struct TopLevelWindowManager TopLevelWindowManager, *PTopLevelWindowManager;

struct TopLevelWindowManager { // PlaceHolder Structure
};

typedef struct TrackData TrackData, *PTrackData;

struct TrackData { // PlaceHolder Class Structure
};

typedef struct TrackProperties TrackProperties, *PTrackProperties;

struct TrackProperties { // PlaceHolder Structure
};

typedef struct trak trak, *Ptrak;

struct trak { // PlaceHolder Class Structure
};

typedef struct TransformedImageFill<juce::PixelAlpha,juce::PixelAlpha,false> TransformedImageFill<juce::PixelAlpha,juce::PixelAlpha,false>, *PTransformedImageFill<juce::PixelAlpha,juce::PixelAlpha,false>;

struct TransformedImageFill<juce::PixelAlpha,juce::PixelAlpha,false> { // PlaceHolder Class Structure
};

typedef struct TransformedImageFill<juce::PixelAlpha,juce::PixelARGB,false> TransformedImageFill<juce::PixelAlpha,juce::PixelARGB,false>, *PTransformedImageFill<juce::PixelAlpha,juce::PixelARGB,false>;

struct TransformedImageFill<juce::PixelAlpha,juce::PixelARGB,false> { // PlaceHolder Class Structure
};

typedef struct TransformedImageFill<juce::PixelAlpha,juce::PixelARGB,true> TransformedImageFill<juce::PixelAlpha,juce::PixelARGB,true>, *PTransformedImageFill<juce::PixelAlpha,juce::PixelARGB,true>;

struct TransformedImageFill<juce::PixelAlpha,juce::PixelARGB,true> { // PlaceHolder Class Structure
};

typedef struct TransformedImageFill<juce::PixelAlpha,juce::PixelRGB,false> TransformedImageFill<juce::PixelAlpha,juce::PixelRGB,false>, *PTransformedImageFill<juce::PixelAlpha,juce::PixelRGB,false>;

struct TransformedImageFill<juce::PixelAlpha,juce::PixelRGB,false> { // PlaceHolder Class Structure
};

typedef struct TransformedImageFill<juce::PixelAlpha,juce::PixelRGB,true> TransformedImageFill<juce::PixelAlpha,juce::PixelRGB,true>, *PTransformedImageFill<juce::PixelAlpha,juce::PixelRGB,true>;

struct TransformedImageFill<juce::PixelAlpha,juce::PixelRGB,true> { // PlaceHolder Class Structure
};

typedef struct TransformedImageFill<juce::PixelARGB,juce::PixelAlpha,false> TransformedImageFill<juce::PixelARGB,juce::PixelAlpha,false>, *PTransformedImageFill<juce::PixelARGB,juce::PixelAlpha,false>;

struct TransformedImageFill<juce::PixelARGB,juce::PixelAlpha,false> { // PlaceHolder Class Structure
};

typedef struct TransformedImageFill<juce::PixelARGB,juce::PixelARGB,false> TransformedImageFill<juce::PixelARGB,juce::PixelARGB,false>, *PTransformedImageFill<juce::PixelARGB,juce::PixelARGB,false>;

struct TransformedImageFill<juce::PixelARGB,juce::PixelARGB,false> { // PlaceHolder Class Structure
};

typedef struct TransformedImageFill<juce::PixelARGB,juce::PixelARGB,true> TransformedImageFill<juce::PixelARGB,juce::PixelARGB,true>, *PTransformedImageFill<juce::PixelARGB,juce::PixelARGB,true>;

struct TransformedImageFill<juce::PixelARGB,juce::PixelARGB,true> { // PlaceHolder Class Structure
};

typedef struct TransformedImageFill<juce::PixelARGB,juce::PixelRGB,false> TransformedImageFill<juce::PixelARGB,juce::PixelRGB,false>, *PTransformedImageFill<juce::PixelARGB,juce::PixelRGB,false>;

struct TransformedImageFill<juce::PixelARGB,juce::PixelRGB,false> { // PlaceHolder Class Structure
};

typedef struct TransformedImageFill<juce::PixelARGB,juce::PixelRGB,true> TransformedImageFill<juce::PixelARGB,juce::PixelRGB,true>, *PTransformedImageFill<juce::PixelARGB,juce::PixelRGB,true>;

struct TransformedImageFill<juce::PixelARGB,juce::PixelRGB,true> { // PlaceHolder Class Structure
};

typedef struct TransformedImageFill<juce::PixelRGB,juce::PixelAlpha,false> TransformedImageFill<juce::PixelRGB,juce::PixelAlpha,false>, *PTransformedImageFill<juce::PixelRGB,juce::PixelAlpha,false>;

struct TransformedImageFill<juce::PixelRGB,juce::PixelAlpha,false> { // PlaceHolder Class Structure
};

typedef struct TransformedImageFill<juce::PixelRGB,juce::PixelARGB,false> TransformedImageFill<juce::PixelRGB,juce::PixelARGB,false>, *PTransformedImageFill<juce::PixelRGB,juce::PixelARGB,false>;

struct TransformedImageFill<juce::PixelRGB,juce::PixelARGB,false> { // PlaceHolder Class Structure
};

typedef struct TransformedImageFill<juce::PixelRGB,juce::PixelARGB,true> TransformedImageFill<juce::PixelRGB,juce::PixelARGB,true>, *PTransformedImageFill<juce::PixelRGB,juce::PixelARGB,true>;

struct TransformedImageFill<juce::PixelRGB,juce::PixelARGB,true> { // PlaceHolder Class Structure
};

typedef struct TransformedImageFill<juce::PixelRGB,juce::PixelRGB,false> TransformedImageFill<juce::PixelRGB,juce::PixelRGB,false>, *PTransformedImageFill<juce::PixelRGB,juce::PixelRGB,false>;

struct TransformedImageFill<juce::PixelRGB,juce::PixelRGB,false> { // PlaceHolder Class Structure
};

typedef struct TransformedImageFill<juce::PixelRGB,juce::PixelRGB,true> TransformedImageFill<juce::PixelRGB,juce::PixelRGB,true>, *PTransformedImageFill<juce::PixelRGB,juce::PixelRGB,true>;

struct TransformedImageFill<juce::PixelRGB,juce::PixelRGB,true> { // PlaceHolder Class Structure
};

typedef struct tree_desc_s tree_desc_s, *Ptree_desc_s;

struct tree_desc_s { // PlaceHolder Structure
};

typedef struct TreeView TreeView, *PTreeView;

struct TreeView { // PlaceHolder Structure
};

typedef struct tuple tuple, *Ptuple;

struct tuple { // PlaceHolder Structure
};

typedef undefined Type;

typedef undefined type;

typedef struct type_info type_info, *Ptype_info;

struct type_info { // PlaceHolder Structure
};

typedef struct Typeface Typeface, *PTypeface;

struct Typeface { // PlaceHolder Structure
};

typedef struct TypefaceCache TypefaceCache, *PTypefaceCache;

struct TypefaceCache { // PlaceHolder Structure
};

typedef struct TypefaceFileAndIndex TypefaceFileAndIndex, *PTypefaceFileAndIndex;

struct TypefaceFileAndIndex { // PlaceHolder Structure
};

typedef struct TypefaceFileCache TypefaceFileCache, *PTypefaceFileCache;

struct TypefaceFileCache { // PlaceHolder Structure
};

typedef undefined TypefaceMetricsKind;

typedef struct TypefaceNativeOptions TypefaceNativeOptions, *PTypefaceNativeOptions;

struct TypefaceNativeOptions { // PlaceHolder Structure
};

typedef struct u16string u16string, *Pu16string;

struct u16string { // PlaceHolder Structure
};

typedef ulong uintmax_t;

typedef struct UndoableAction UndoableAction, *PUndoableAction;

struct UndoableAction { // PlaceHolder Structure
};

typedef struct UndoManager UndoManager, *PUndoManager;

struct UndoManager { // PlaceHolder Structure
};

typedef struct Unicode Unicode, *PUnicode;

struct Unicode { // PlaceHolder Class Structure
};

typedef unsigned int    wchar32;
typedef undefined UnicodeNormalization;

typedef struct unique_lock unique_lock, *Punique_lock;

struct unique_lock { // PlaceHolder Structure
};

typedef struct unique_ptr unique_ptr, *Punique_ptr;

struct unique_ptr { // PlaceHolder Structure
};

typedef struct unique_ptr<_FcCharSet,juce::FunctionPointerDestructor<&FcCharSetDestroy>> unique_ptr<_FcCharSet,juce::FunctionPointerDestructor<&FcCharSetDestroy>>, *Punique_ptr<_FcCharSet,juce::FunctionPointerDestructor<&FcCharSetDestroy>>;

struct unique_ptr<_FcCharSet,juce::FunctionPointerDestructor<&FcCharSetDestroy>> { // PlaceHolder Structure
};

typedef struct unique_ptr<_FcConfig,juce::FunctionPointerDestructor<&FcConfigDestroy>> unique_ptr<_FcConfig,juce::FunctionPointerDestructor<&FcConfigDestroy>>, *Punique_ptr<_FcConfig,juce::FunctionPointerDestructor<&FcConfigDestroy>>;

struct unique_ptr<_FcConfig,juce::FunctionPointerDestructor<&FcConfigDestroy>> { // PlaceHolder Structure
};

typedef struct unique_ptr<_FcLangSet,juce::FunctionPointerDestructor<&FcLangSetDestroy>> unique_ptr<_FcLangSet,juce::FunctionPointerDestructor<&FcLangSetDestroy>>, *Punique_ptr<_FcLangSet,juce::FunctionPointerDestructor<&FcLangSetDestroy>>;

struct unique_ptr<_FcLangSet,juce::FunctionPointerDestructor<&FcLangSetDestroy>> { // PlaceHolder Structure
};

typedef struct unique_ptr<_FcPattern,juce::FunctionPointerDestructor<&FcPatternDestroy>> unique_ptr<_FcPattern,juce::FunctionPointerDestructor<&FcPatternDestroy>>, *Punique_ptr<_FcPattern,juce::FunctionPointerDestructor<&FcPatternDestroy>>;

struct unique_ptr<_FcPattern,juce::FunctionPointerDestructor<&FcPatternDestroy>> { // PlaceHolder Structure
};

typedef struct unique_ptr<_XcursorImage,juce::XWindowSystem::createCustomMouseCursorInfo(juce::Image_const&,juce::Point<int>)const::$_1> unique_ptr<_XcursorImage,juce::XWindowSystem::createCustomMouseCursorInfo(juce::Image_const&,juce::Point<int>)const::$_1>, *Punique_ptr<_XcursorImage,juce::XWindowSystem::createCustomMouseCursorInfo(juce::Image_const&,juce::Point<int>)const::$_1>;

struct unique_ptr<_XcursorImage,juce::XWindowSystem::createCustomMouseCursorInfo(juce::Image_const&,juce::Point<int>)const::$_1> { // PlaceHolder Structure
};

typedef struct unique_ptr<_XImage,juce::XBitmapImage::Deleter> unique_ptr<_XImage,juce::XBitmapImage::Deleter>, *Punique_ptr<_XImage,juce::XBitmapImage::Deleter>;

struct unique_ptr<_XImage,juce::XBitmapImage::Deleter> { // PlaceHolder Structure
};

typedef struct unique_ptr<char,juce::(anonymous_namespace)::XFreeDeleter> unique_ptr<char,juce::(anonymous_namespace)::XFreeDeleter>, *Punique_ptr<char,juce::(anonymous_namespace)::XFreeDeleter>;

struct unique_ptr<char,juce::(anonymous_namespace)::XFreeDeleter> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::AbstractFifo,std::default_delete<juce::AbstractFifo>> unique_ptr<juce::AbstractFifo,std::default_delete<juce::AbstractFifo>>, *Punique_ptr<juce::AbstractFifo,std::default_delete<juce::AbstractFifo>>;

struct unique_ptr<juce::AbstractFifo,std::default_delete<juce::AbstractFifo>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::AccessibilityHandler,std::default_delete<juce::AccessibilityHandler>> unique_ptr<juce::AccessibilityHandler,std::default_delete<juce::AccessibilityHandler>>, *Punique_ptr<juce::AccessibilityHandler,std::default_delete<juce::AccessibilityHandler>>;

struct unique_ptr<juce::AccessibilityHandler,std::default_delete<juce::AccessibilityHandler>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::AffineTransform,std::default_delete<juce::AffineTransform>> unique_ptr<juce::AffineTransform,std::default_delete<juce::AffineTransform>>, *Punique_ptr<juce::AffineTransform,std::default_delete<juce::AffineTransform>>;

struct unique_ptr<juce::AffineTransform,std::default_delete<juce::AffineTransform>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::Array<juce::KeyListener*,juce::DummyCriticalSection,0>,std::default_delete<juce::Array<juce::KeyListener*,juce::DummyCriticalSection,0>>> unique_ptr<juce::Array<juce::KeyListener*,juce::DummyCriticalSection,0>,std::default_delete<juce::Array<juce::KeyListener*,juce::DummyCriticalSection,0>>>, *Punique_ptr<juce::Array<juce::KeyListener*,juce::DummyCriticalSection,0>,std::default_delete<juce::Array<juce::KeyListener*,juce::DummyCriticalSection,0>>>;

struct unique_ptr<juce::Array<juce::KeyListener*,juce::DummyCriticalSection,0>,std::default_delete<juce::Array<juce::KeyListener*,juce::DummyCriticalSection,0>>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::AudioProcessor,std::default_delete<juce::AudioProcessor>> unique_ptr<juce::AudioProcessor,std::default_delete<juce::AudioProcessor>>, *Punique_ptr<juce::AudioProcessor,std::default_delete<juce::AudioProcessor>>;

struct unique_ptr<juce::AudioProcessor,std::default_delete<juce::AudioProcessor>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::AudioProcessorEditor,std::default_delete<juce::AudioProcessorEditor>> unique_ptr<juce::AudioProcessorEditor,std::default_delete<juce::AudioProcessorEditor>>, *Punique_ptr<juce::AudioProcessorEditor,std::default_delete<juce::AudioProcessorEditor>>;

struct unique_ptr<juce::AudioProcessorEditor,std::default_delete<juce::AudioProcessorEditor>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::AudioProcessorEditor::AudioProcessorEditorListener,std::default_delete<juce::AudioProcessorEditor::AudioProcessorEditorListener>> unique_ptr<juce::AudioProcessorEditor::AudioProcessorEditorListener,std::default_delete<juce::AudioProcessorEditor::AudioProcessorEditorListener>>, *Punique_ptr<juce::AudioProcessorEditor::AudioProcessorEditorListener,std::default_delete<juce::AudioProcessorEditor::AudioProcessorEditorListener>>;

struct unique_ptr<juce::AudioProcessorEditor::AudioProcessorEditorListener,std::default_delete<juce::AudioProcessorEditor::AudioProcessorEditorListener>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::AudioProcessorParameterGroup,std::default_delete<juce::AudioProcessorParameterGroup>> unique_ptr<juce::AudioProcessorParameterGroup,std::default_delete<juce::AudioProcessorParameterGroup>>, *Punique_ptr<juce::AudioProcessorParameterGroup,std::default_delete<juce::AudioProcessorParameterGroup>>;

struct unique_ptr<juce::AudioProcessorParameterGroup,std::default_delete<juce::AudioProcessorParameterGroup>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::AudioProcessorValueTreeState::SliderAttachment,std::default_delete<juce::AudioProcessorValueTreeState::SliderAttachment>> unique_ptr<juce::AudioProcessorValueTreeState::SliderAttachment,std::default_delete<juce::AudioProcessorValueTreeState::SliderAttachment>>, *Punique_ptr<juce::AudioProcessorValueTreeState::SliderAttachment,std::default_delete<juce::AudioProcessorValueTreeState::SliderAttachment>>;

struct unique_ptr<juce::AudioProcessorValueTreeState::SliderAttachment,std::default_delete<juce::AudioProcessorValueTreeState::SliderAttachment>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::Button::CallbackHelper,std::default_delete<juce::Button::CallbackHelper>> unique_ptr<juce::Button::CallbackHelper,std::default_delete<juce::Button::CallbackHelper>>, *Punique_ptr<juce::Button::CallbackHelper,std::default_delete<juce::Button::CallbackHelper>>;

struct unique_ptr<juce::Button::CallbackHelper,std::default_delete<juce::Button::CallbackHelper>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::CachedComponentImage,std::default_delete<juce::CachedComponentImage>> unique_ptr<juce::CachedComponentImage,std::default_delete<juce::CachedComponentImage>>, *Punique_ptr<juce::CachedComponentImage,std::default_delete<juce::CachedComponentImage>>;

struct unique_ptr<juce::CachedComponentImage,std::default_delete<juce::CachedComponentImage>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::CaretComponent,std::default_delete<juce::CaretComponent>> unique_ptr<juce::CaretComponent,std::default_delete<juce::CaretComponent>>, *Punique_ptr<juce::CaretComponent,std::default_delete<juce::CaretComponent>>;

struct unique_ptr<juce::CaretComponent,std::default_delete<juce::CaretComponent>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::Component::EffectState,std::default_delete<juce::Component::EffectState>> unique_ptr<juce::Component::EffectState,std::default_delete<juce::Component::EffectState>>, *Punique_ptr<juce::Component::EffectState,std::default_delete<juce::Component::EffectState>>;

struct unique_ptr<juce::Component::EffectState,std::default_delete<juce::Component::EffectState>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::Component::MouseListenerList,std::default_delete<juce::Component::MouseListenerList>> unique_ptr<juce::Component::MouseListenerList,std::default_delete<juce::Component::MouseListenerList>>, *Punique_ptr<juce::Component::MouseListenerList,std::default_delete<juce::Component::MouseListenerList>>;

struct unique_ptr<juce::Component::MouseListenerList,std::default_delete<juce::Component::MouseListenerList>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::Component::Positioner,std::default_delete<juce::Component::Positioner>> unique_ptr<juce::Component::Positioner,std::default_delete<juce::Component::Positioner>>, *Punique_ptr<juce::Component::Positioner,std::default_delete<juce::Component::Positioner>>;

struct unique_ptr<juce::Component::Positioner,std::default_delete<juce::Component::Positioner>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::Displays,std::default_delete<juce::Displays>> unique_ptr<juce::Displays,std::default_delete<juce::Displays>>, *Punique_ptr<juce::Displays,std::default_delete<juce::Displays>>;

struct unique_ptr<juce::Displays,std::default_delete<juce::Displays>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::DropShadower,std::default_delete<juce::DropShadower>> unique_ptr<juce::DropShadower,std::default_delete<juce::DropShadower>>, *Punique_ptr<juce::DropShadower,std::default_delete<juce::DropShadower>>;

struct unique_ptr<juce::DropShadower,std::default_delete<juce::DropShadower>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::DropShadower::ParentVisibilityChangedListener,std::default_delete<juce::DropShadower::ParentVisibilityChangedListener>> unique_ptr<juce::DropShadower::ParentVisibilityChangedListener,std::default_delete<juce::DropShadower::ParentVisibilityChangedListener>>, *Punique_ptr<juce::DropShadower::ParentVisibilityChangedListener,std::default_delete<juce::DropShadower::ParentVisibilityChangedListener>>;

struct unique_ptr<juce::DropShadower::ParentVisibilityChangedListener,std::default_delete<juce::DropShadower::ParentVisibilityChangedListener>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::DropShadower::VirtualDesktopWatcher,std::default_delete<juce::DropShadower::VirtualDesktopWatcher>> unique_ptr<juce::DropShadower::VirtualDesktopWatcher,std::default_delete<juce::DropShadower::VirtualDesktopWatcher>>, *Punique_ptr<juce::DropShadower::VirtualDesktopWatcher,std::default_delete<juce::DropShadower::VirtualDesktopWatcher>>;

struct unique_ptr<juce::DropShadower::VirtualDesktopWatcher,std::default_delete<juce::DropShadower::VirtualDesktopWatcher>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::JuceVST3EditController::EditorHostContext,std::default_delete<juce::JuceVST3EditController::EditorHostContext>> unique_ptr<juce::JuceVST3EditController::EditorHostContext,std::default_delete<juce::JuceVST3EditController::EditorHostContext>>, *Punique_ptr<juce::JuceVST3EditController::EditorHostContext,std::default_delete<juce::JuceVST3EditController::EditorHostContext>>;

struct unique_ptr<juce::JuceVST3EditController::EditorHostContext,std::default_delete<juce::JuceVST3EditController::EditorHostContext>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::JuceVST3EditController::JuceVST3Editor::ContentWrapperComponent,juce::JuceVST3EditController::JuceVST3Editor::MessageManagerLockedDeleter> unique_ptr<juce::JuceVST3EditController::JuceVST3Editor::ContentWrapperComponent,juce::JuceVST3EditController::JuceVST3Editor::MessageManagerLockedDeleter>, *Punique_ptr<juce::JuceVST3EditController::JuceVST3Editor::ContentWrapperComponent,juce::JuceVST3EditController::JuceVST3Editor::MessageManagerLockedDeleter>;

struct unique_ptr<juce::JuceVST3EditController::JuceVST3Editor::ContentWrapperComponent,juce::JuceVST3EditController::JuceVST3Editor::MessageManagerLockedDeleter> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::Label,std::default_delete<juce::Label>> unique_ptr<juce::Label,std::default_delete<juce::Label>>, *Punique_ptr<juce::Label,std::default_delete<juce::Label>>;

struct unique_ptr<juce::Label,std::default_delete<juce::Label>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::LegacyAudioParameter,std::default_delete<juce::LegacyAudioParameter>> unique_ptr<juce::LegacyAudioParameter,std::default_delete<juce::LegacyAudioParameter>>, *Punique_ptr<juce::LegacyAudioParameter,std::default_delete<juce::LegacyAudioParameter>>;

struct unique_ptr<juce::LegacyAudioParameter,std::default_delete<juce::LegacyAudioParameter>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::LinuxComponentPeer::LinuxRepaintManager,std::default_delete<juce::LinuxComponentPeer::LinuxRepaintManager>> unique_ptr<juce::LinuxComponentPeer::LinuxRepaintManager,std::default_delete<juce::LinuxComponentPeer::LinuxRepaintManager>>, *Punique_ptr<juce::LinuxComponentPeer::LinuxRepaintManager,std::default_delete<juce::LinuxComponentPeer::LinuxRepaintManager>>;

struct unique_ptr<juce::LinuxComponentPeer::LinuxRepaintManager,std::default_delete<juce::LinuxComponentPeer::LinuxRepaintManager>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::LocalisedStrings,std::default_delete<juce::LocalisedStrings>> unique_ptr<juce::LocalisedStrings,std::default_delete<juce::LocalisedStrings>>, *Punique_ptr<juce::LocalisedStrings,std::default_delete<juce::LocalisedStrings>>;

struct unique_ptr<juce::LocalisedStrings,std::default_delete<juce::LocalisedStrings>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::PopupMenu,std::default_delete<juce::PopupMenu>> unique_ptr<juce::PopupMenu,std::default_delete<juce::PopupMenu>>, *Punique_ptr<juce::PopupMenu,std::default_delete<juce::PopupMenu>>;

struct unique_ptr<juce::PopupMenu,std::default_delete<juce::PopupMenu>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::PopupMenu::HelperClasses::MenuWindow,std::default_delete<juce::PopupMenu::HelperClasses::MenuWindow>> unique_ptr<juce::PopupMenu::HelperClasses::MenuWindow,std::default_delete<juce::PopupMenu::HelperClasses::MenuWindow>>, *Punique_ptr<juce::PopupMenu::HelperClasses::MenuWindow,std::default_delete<juce::PopupMenu::HelperClasses::MenuWindow>>;

struct unique_ptr<juce::PopupMenu::HelperClasses::MenuWindow,std::default_delete<juce::PopupMenu::HelperClasses::MenuWindow>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::PopupMenuCompletionCallback,std::default_delete<juce::PopupMenuCompletionCallback>> unique_ptr<juce::PopupMenuCompletionCallback,std::default_delete<juce::PopupMenuCompletionCallback>>, *Punique_ptr<juce::PopupMenuCompletionCallback,std::default_delete<juce::PopupMenuCompletionCallback>>;

struct unique_ptr<juce::PopupMenuCompletionCallback,std::default_delete<juce::PopupMenuCompletionCallback>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::ResizableCornerComponent,std::default_delete<juce::ResizableCornerComponent>> unique_ptr<juce::ResizableCornerComponent,std::default_delete<juce::ResizableCornerComponent>>, *Punique_ptr<juce::ResizableCornerComponent,std::default_delete<juce::ResizableCornerComponent>>;

struct unique_ptr<juce::ResizableCornerComponent,std::default_delete<juce::ResizableCornerComponent>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::ScrollBar,std::default_delete<juce::ScrollBar>> unique_ptr<juce::ScrollBar,std::default_delete<juce::ScrollBar>>, *Punique_ptr<juce::ScrollBar,std::default_delete<juce::ScrollBar>>;

struct unique_ptr<juce::ScrollBar,std::default_delete<juce::ScrollBar>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::TextEditor::TextEditorStorage,std::default_delete<juce::TextEditor::TextEditorStorage>> unique_ptr<juce::TextEditor::TextEditorStorage,std::default_delete<juce::TextEditor::TextEditorStorage>>, *Punique_ptr<juce::TextEditor::TextEditorStorage,std::default_delete<juce::TextEditor::TextEditorStorage>>;

struct unique_ptr<juce::TextEditor::TextEditorStorage,std::default_delete<juce::TextEditor::TextEditorStorage>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::Typeface::Native,std::default_delete<juce::Typeface::Native>> unique_ptr<juce::Typeface::Native,std::default_delete<juce::Typeface::Native>>, *Punique_ptr<juce::Typeface::Native,std::default_delete<juce::Typeface::Native>>;

struct unique_ptr<juce::Typeface::Native,std::default_delete<juce::Typeface::Native>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::Viewport,std::default_delete<juce::Viewport>> unique_ptr<juce::Viewport,std::default_delete<juce::Viewport>>, *Punique_ptr<juce::Viewport,std::default_delete<juce::Viewport>>;

struct unique_ptr<juce::Viewport,std::default_delete<juce::Viewport>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::Viewport::DragToScrollListener,std::default_delete<juce::Viewport::DragToScrollListener>> unique_ptr<juce::Viewport::DragToScrollListener,std::default_delete<juce::Viewport::DragToScrollListener>>, *Punique_ptr<juce::Viewport::DragToScrollListener,std::default_delete<juce::Viewport::DragToScrollListener>>;

struct unique_ptr<juce::Viewport::DragToScrollListener,std::default_delete<juce::Viewport::DragToScrollListener>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::XmlElement,std::default_delete<juce::XmlElement>> unique_ptr<juce::XmlElement,std::default_delete<juce::XmlElement>>, *Punique_ptr<juce::XmlElement,std::default_delete<juce::XmlElement>>;

struct unique_ptr<juce::XmlElement,std::default_delete<juce::XmlElement>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::XWindowSystem::DisplayVisuals,std::default_delete<juce::XWindowSystem::DisplayVisuals>> unique_ptr<juce::XWindowSystem::DisplayVisuals,std::default_delete<juce::XWindowSystem::DisplayVisuals>>, *Punique_ptr<juce::XWindowSystem::DisplayVisuals,std::default_delete<juce::XWindowSystem::DisplayVisuals>>;

struct unique_ptr<juce::XWindowSystem::DisplayVisuals,std::default_delete<juce::XWindowSystem::DisplayVisuals>> { // PlaceHolder Structure
};

typedef struct unique_ptr<juce::XWindowSystemUtilities::XSettings,std::default_delete<juce::XWindowSystemUtilities::XSettings>> unique_ptr<juce::XWindowSystemUtilities::XSettings,std::default_delete<juce::XWindowSystemUtilities::XSettings>>, *Punique_ptr<juce::XWindowSystemUtilities::XSettings,std::default_delete<juce::XWindowSystemUtilities::XSettings>>;

struct unique_ptr<juce::XWindowSystemUtilities::XSettings,std::default_delete<juce::XWindowSystemUtilities::XSettings>> { // PlaceHolder Structure
};

typedef struct unique_ptr<std::set<juce::File,std::less<juce::File>,std::allocator<juce::File>>,std::default_delete<std::set<juce::File,std::less<juce::File>,std::allocator<juce::File>>>> unique_ptr<std::set<juce::File,std::less<juce::File>,std::allocator<juce::File>>,std::default_delete<std::set<juce::File,std::less<juce::File>,std::allocator<juce::File>>>>, *Punique_ptr<std::set<juce::File,std::less<juce::File>,std::allocator<juce::File>>,std::default_delete<std::set<juce::File,std::less<juce::File>,std::allocator<juce::File>>>>;

struct unique_ptr<std::set<juce::File,std::less<juce::File>,std::allocator<juce::File>>,std::default_delete<std::set<juce::File,std::less<juce::File>,std::allocator<juce::File>>>> { // PlaceHolder Structure
};

typedef struct unique_ptr<unsigned_long,juce::(anonymous_namespace)::XFreeDeleter> unique_ptr<unsigned_long,juce::(anonymous_namespace)::XFreeDeleter>, *Punique_ptr<unsigned_long,juce::(anonymous_namespace)::XFreeDeleter>;

struct unique_ptr<unsigned_long,juce::(anonymous_namespace)::XFreeDeleter> { // PlaceHolder Structure
};

typedef struct unique_ptr<XSizeHints,juce::(anonymous_namespace)::XFreeDeleter> unique_ptr<XSizeHints,juce::(anonymous_namespace)::XFreeDeleter>, *Punique_ptr<XSizeHints,juce::(anonymous_namespace)::XFreeDeleter>;

struct unique_ptr<XSizeHints,juce::(anonymous_namespace)::XFreeDeleter> { // PlaceHolder Structure
};

typedef struct unique_ptr<XWMHints,juce::(anonymous_namespace)::XFreeDeleter> unique_ptr<XWMHints,juce::(anonymous_namespace)::XFreeDeleter>, *Punique_ptr<XWMHints,juce::(anonymous_namespace)::XFreeDeleter>;

struct unique_ptr<XWMHints,juce::(anonymous_namespace)::XFreeDeleter> { // PlaceHolder Structure
};

typedef undefined UniqueBase;

typedef struct Unit Unit, *PUnit;

struct Unit { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/param/Unit - /Demangler/Steinberg/Vst/Unit

typedef struct UnitInfo UnitInfo, *PUnitInfo;

struct UnitInfo { // PlaceHolder Structure
};

typedef struct unordered_map<juce::LinuxComponentPeer*,juce::X11DragState,std::hash<juce::LinuxComponentPeer*>,std::equal_to<juce::LinuxComponentPeer*>,std::allocator<std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>>> unordered_map<juce::LinuxComponentPeer*,juce::X11DragState,std::hash<juce::LinuxComponentPeer*>,std::equal_to<juce::LinuxComponentPeer*>,std::allocator<std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>>>, *Punordered_map<juce::LinuxComponentPeer*,juce::X11DragState,std::hash<juce::LinuxComponentPeer*>,std::equal_to<juce::LinuxComponentPeer*>,std::allocator<std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>>>;

struct unordered_map<juce::LinuxComponentPeer*,juce::X11DragState,std::hash<juce::LinuxComponentPeer*>,std::equal_to<juce::LinuxComponentPeer*>,std::allocator<std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>>> { // PlaceHolder Structure
};

typedef struct unordered_map<juce::String,juce::XWindowSystemUtilities::XSetting,std::hash<juce::String>,std::equal_to<juce::String>,std::allocator<std::pair<juce::String_const,juce::XWindowSystemUtilities::XSetting>>> unordered_map<juce::String,juce::XWindowSystemUtilities::XSetting,std::hash<juce::String>,std::equal_to<juce::String>,std::allocator<std::pair<juce::String_const,juce::XWindowSystemUtilities::XSetting>>>, *Punordered_map<juce::String,juce::XWindowSystemUtilities::XSetting,std::hash<juce::String>,std::equal_to<juce::String>,std::allocator<std::pair<juce::String_const,juce::XWindowSystemUtilities::XSetting>>>;

struct unordered_map<juce::String,juce::XWindowSystemUtilities::XSetting,std::hash<juce::String>,std::equal_to<juce::String>,std::allocator<std::pair<juce::String_const,juce::XWindowSystemUtilities::XSetting>>> { // PlaceHolder Structure
};

typedef struct UpdateData UpdateData, *PUpdateData;

struct UpdateData { // PlaceHolder Structure
};

typedef struct UpdateHandler UpdateHandler, *PUpdateHandler;

struct UpdateHandler { // PlaceHolder Structure
};

typedef struct UseImageOp UseImageOp, *PUseImageOp;

struct UseImageOp { // PlaceHolder Structure
};

typedef struct UsePathOp UsePathOp, *PUsePathOp;

struct UsePathOp { // PlaceHolder Structure
};

typedef struct UseTextOp UseTextOp, *PUseTextOp;

struct UseTextOp { // PlaceHolder Structure
};

typedef struct UString UString, *PUString;

struct UString { // PlaceHolder Class Structure
};

typedef struct Value Value, *PValue;

struct Value { // PlaceHolder Structure
};

typedef struct ValueBase ValueBase, *PValueBase;

struct ValueBase { // PlaceHolder Structure
};

typedef struct ValueFormat ValueFormat, *PValueFormat;

struct ValueFormat { // PlaceHolder Structure
};

typedef struct ValueInterface ValueInterface, *PValueInterface;

struct ValueInterface { // PlaceHolder Structure
};

typedef struct ValueSource ValueSource, *PValueSource;

struct ValueSource { // PlaceHolder Structure
};

typedef struct ValueTree ValueTree, *PValueTree;

struct ValueTree { // PlaceHolder Structure
};

typedef struct ValueUnion ValueUnion, *PValueUnion;

struct ValueUnion { // PlaceHolder Structure
};

typedef struct var var, *Pvar;

struct var { // PlaceHolder Structure
};

typedef struct VarData VarData, *PVarData;

struct VarData { // PlaceHolder Class Structure
};

typedef struct variant variant, *Pvariant;

struct variant { // PlaceHolder Structure
};

typedef struct VariantType VariantType, *PVariantType;

struct VariantType { // PlaceHolder Structure
};

typedef struct VarRegionList VarRegionList, *PVarRegionList;

struct VarRegionList { // PlaceHolder Structure
};

typedef struct vector vector, *Pvector;

struct vector { // PlaceHolder Structure
};

typedef struct vector<AudioPluginAudioProcessor*,std::allocator<AudioPluginAudioProcessor*>> vector<AudioPluginAudioProcessor*,std::allocator<AudioPluginAudioProcessor*>>, *Pvector<AudioPluginAudioProcessor*,std::allocator<AudioPluginAudioProcessor*>>;

struct vector<AudioPluginAudioProcessor*,std::allocator<AudioPluginAudioProcessor*>> { // PlaceHolder Structure
};

typedef struct vector<AudioPluginAudioProcessorEditor::Particle,std::allocator<AudioPluginAudioProcessorEditor::Particle>> vector<AudioPluginAudioProcessorEditor::Particle,std::allocator<AudioPluginAudioProcessorEditor::Particle>>, *Pvector<AudioPluginAudioProcessorEditor::Particle,std::allocator<AudioPluginAudioProcessorEditor::Particle>>;

struct vector<AudioPluginAudioProcessorEditor::Particle,std::allocator<AudioPluginAudioProcessorEditor::Particle>> { // PlaceHolder Structure
};

typedef struct vector<float,std::allocator<float>> vector<float,std::allocator<float>>, *Pvector<float,std::allocator<float>>;

struct vector<float,std::allocator<float>> { // PlaceHolder Structure
};

typedef struct vector<int,std::allocator<int>> vector<int,std::allocator<int>>, *Pvector<int,std::allocator<int>>;

struct vector<int,std::allocator<int>> { // PlaceHolder Class Structure
};

typedef struct vector<juce::Colour,std::allocator<juce::Colour>> vector<juce::Colour,std::allocator<juce::Colour>>, *Pvector<juce::Colour,std::allocator<juce::Colour>>;

struct vector<juce::Colour,std::allocator<juce::Colour>> { // PlaceHolder Class Structure
};

typedef struct vector<juce::Component*,std::allocator<juce::Component*>> vector<juce::Component*,std::allocator<juce::Component*>>, *Pvector<juce::Component*,std::allocator<juce::Component*>>;

struct vector<juce::Component*,std::allocator<juce::Component*>> { // PlaceHolder Class Structure
};

typedef struct vector<juce::Component::SafePointer<juce::Component>,std::allocator<juce::Component::SafePointer<juce::Component>>> vector<juce::Component::SafePointer<juce::Component>,std::allocator<juce::Component::SafePointer<juce::Component>>>, *Pvector<juce::Component::SafePointer<juce::Component>,std::allocator<juce::Component::SafePointer<juce::Component>>>;

struct vector<juce::Component::SafePointer<juce::Component>,std::allocator<juce::Component::SafePointer<juce::Component>>> { // PlaceHolder Structure
};

typedef struct vector<juce::detail::GlyphsStorage,std::allocator<juce::detail::GlyphsStorage>> vector<juce::detail::GlyphsStorage,std::allocator<juce::detail::GlyphsStorage>>, *Pvector<juce::detail::GlyphsStorage,std::allocator<juce::detail::GlyphsStorage>>;

struct vector<juce::detail::GlyphsStorage,std::allocator<juce::detail::GlyphsStorage>> { // PlaceHolder Structure
};

typedef struct vector<juce::detail::OwnedGlyphsSpan,std::allocator<juce::detail::OwnedGlyphsSpan>> vector<juce::detail::OwnedGlyphsSpan,std::allocator<juce::detail::OwnedGlyphsSpan>>, *Pvector<juce::detail::OwnedGlyphsSpan,std::allocator<juce::detail::OwnedGlyphsSpan>>;

struct vector<juce::detail::OwnedGlyphsSpan,std::allocator<juce::detail::OwnedGlyphsSpan>> { // PlaceHolder Structure
};

typedef struct vector<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,std::allocator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan>> vector<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,std::allocator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan>>, *Pvector<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,std::allocator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan>>;

struct vector<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,std::allocator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan>> { // PlaceHolder Structure
};

typedef struct vector<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>> vector<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>>, *Pvector<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>>;

struct vector<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>> { // PlaceHolder Structure
};

typedef struct vector<juce::DynamicChannelMapping,std::allocator<juce::DynamicChannelMapping>> vector<juce::DynamicChannelMapping,std::allocator<juce::DynamicChannelMapping>>, *Pvector<juce::DynamicChannelMapping,std::allocator<juce::DynamicChannelMapping>>;

struct vector<juce::DynamicChannelMapping,std::allocator<juce::DynamicChannelMapping>> { // PlaceHolder Class Structure
};

typedef struct vector<juce::Font,std::allocator<juce::Font>> vector<juce::Font,std::allocator<juce::Font>>, *Pvector<juce::Font,std::allocator<juce::Font>>;

struct vector<juce::Font,std::allocator<juce::Font>> { // PlaceHolder Structure
};

typedef struct vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>> vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>, *Pvector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>;

struct vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>> { // PlaceHolder Structure
};

typedef struct vector<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()const::Submenu,std::allocator<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()const::Submenu>> vector<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()const::Submenu,std::allocator<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()const::Submenu>>, *Pvector<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()const::Submenu,std::allocator<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()const::Submenu>>;

struct vector<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()const::Submenu,std::allocator<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()const::Submenu>> { // PlaceHolder Structure
};

typedef struct vector<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*>> vector<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>, *Pvector<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>;

struct vector<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*>> { // PlaceHolder Class Structure
};

typedef struct vector<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>> vector<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>>, *Pvector<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>>;

struct vector<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>> { // PlaceHolder Class Structure
};

typedef struct vector<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::Iterator*>> vector<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>, *Pvector<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>;

struct vector<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::Iterator*>> { // PlaceHolder Class Structure
};

typedef struct vector<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::Iterator*>> vector<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>, *Pvector<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>;

struct vector<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::Iterator*>> { // PlaceHolder Class Structure
};

typedef struct vector<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::Iterator*>> vector<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>, *Pvector<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>;

struct vector<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::Iterator*>> { // PlaceHolder Class Structure
};

typedef struct vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>> vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>, *Pvector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>;

struct vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>> { // PlaceHolder Class Structure
};

typedef struct vector<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::Iterator*>> vector<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::Iterator*>>, *Pvector<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::Iterator*>>;

struct vector<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>::Iterator*>> { // PlaceHolder Class Structure
};

typedef struct vector<juce::ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>::Iterator*>> vector<juce::ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>, *Pvector<juce::ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>;

struct vector<juce::ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::TextEditor::Listener,juce::Array<juce::TextEditor::Listener*,juce::DummyCriticalSection,0>>::Iterator*>> { // PlaceHolder Class Structure
};

typedef struct vector<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*>> vector<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>, *Pvector<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>;

struct vector<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::Iterator*>> { // PlaceHolder Class Structure
};

typedef struct vector<juce::Range<long_long>,std::allocator<juce::Range<long_long>>> vector<juce::Range<long_long>,std::allocator<juce::Range<long_long>>>, *Pvector<juce::Range<long_long>,std::allocator<juce::Range<long_long>>>;

struct vector<juce::Range<long_long>,std::allocator<juce::Range<long_long>>> { // PlaceHolder Structure
};

typedef struct vector<juce::RangedAudioParameter*,std::allocator<juce::RangedAudioParameter*>> vector<juce::RangedAudioParameter*,std::allocator<juce::RangedAudioParameter*>>, *Pvector<juce::RangedAudioParameter*,std::allocator<juce::RangedAudioParameter*>>;

struct vector<juce::RangedAudioParameter*,std::allocator<juce::RangedAudioParameter*>> { // PlaceHolder Structure
};

typedef struct vector<juce::String,std::allocator<juce::String>> vector<juce::String,std::allocator<juce::String>>, *Pvector<juce::String,std::allocator<juce::String>>;

struct vector<juce::String,std::allocator<juce::String>> { // PlaceHolder Structure
};

typedef struct vector<juce::Timer::TimerThread::TimerCountdown,std::allocator<juce::Timer::TimerThread::TimerCountdown>> vector<juce::Timer::TimerThread::TimerCountdown,std::allocator<juce::Timer::TimerThread::TimerCountdown>>, *Pvector<juce::Timer::TimerThread::TimerCountdown,std::allocator<juce::Timer::TimerThread::TimerCountdown>>;

struct vector<juce::Timer::TimerThread::TimerCountdown,std::allocator<juce::Timer::TimerThread::TimerCountdown>> { // PlaceHolder Structure
};

typedef struct vector<long_long,std::allocator<long_long>> vector<long_long,std::allocator<long_long>>, *Pvector<long_long,std::allocator<long_long>>;

struct vector<long_long,std::allocator<long_long>> { // PlaceHolder Class Structure
};

typedef struct vector<signed_char,std::allocator<signed_char>> vector<signed_char,std::allocator<signed_char>>, *Pvector<signed_char,std::allocator<signed_char>>;

struct vector<signed_char,std::allocator<signed_char>> { // PlaceHolder Class Structure
};

typedef struct vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>, *Pvector<std::__cxx11::string,std::allocator<std::__cxx11::string>>;

struct vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> { // PlaceHolder Structure
};

typedef struct vector<std::__cxx11::u16string,std::allocator<std::__cxx11::u16string>> vector<std::__cxx11::u16string,std::allocator<std::__cxx11::u16string>>, *Pvector<std::__cxx11::u16string,std::allocator<std::__cxx11::u16string>>;

struct vector<std::__cxx11::u16string,std::allocator<std::__cxx11::u16string>> { // PlaceHolder Class Structure
};

typedef struct vector<std::map<short,std::__cxx11::u16string,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>,std::allocator<std::map<short,std::__cxx11::u16string,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>>> vector<std::map<short,std::__cxx11::u16string,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>,std::allocator<std::map<short,std::__cxx11::u16string,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>>>, *Pvector<std::map<short,std::__cxx11::u16string,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>,std::allocator<std::map<short,std::__cxx11::u16string,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>>>;

struct vector<std::map<short,std::__cxx11::u16string,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>,std::allocator<std::map<short,std::__cxx11::u16string,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>>> { // PlaceHolder Class Structure
};

typedef struct vector<std::map<std::__cxx11::string,std::__cxx11::u16string,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>,std::allocator<std::map<std::__cxx11::string,std::__cxx11::u16string,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>>> vector<std::map<std::__cxx11::string,std::__cxx11::u16string,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>,std::allocator<std::map<std::__cxx11::string,std::__cxx11::u16string,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>>>, *Pvector<std::map<std::__cxx11::string,std::__cxx11::u16string,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>,std::allocator<std::map<std::__cxx11::string,std::__cxx11::u16string,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>>>;

struct vector<std::map<std::__cxx11::string,std::__cxx11::u16string,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>,std::allocator<std::map<std::__cxx11::string,std::__cxx11::u16string,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>>> { // PlaceHolder Class Structure
};

typedef struct vector<std::optional<juce::Font>,std::allocator<std::optional<juce::Font>>> vector<std::optional<juce::Font>,std::allocator<std::optional<juce::Font>>>, *Pvector<std::optional<juce::Font>,std::allocator<std::optional<juce::Font>>>;

struct vector<std::optional<juce::Font>,std::allocator<std::optional<juce::Font>>> { // PlaceHolder Class Structure
};

typedef struct vector<std::pair<juce::Range<long_long>,juce::Font>,std::allocator<std::pair<juce::Range<long_long>,juce::Font>>> vector<std::pair<juce::Range<long_long>,juce::Font>,std::allocator<std::pair<juce::Range<long_long>,juce::Font>>>, *Pvector<std::pair<juce::Range<long_long>,juce::Font>,std::allocator<std::pair<juce::Range<long_long>,juce::Font>>>;

struct vector<std::pair<juce::Range<long_long>,juce::Font>,std::allocator<std::pair<juce::Range<long_long>,juce::Font>>> { // PlaceHolder Structure
};

typedef struct vector<std::tuple<juce::String,std::optional<float>,std::optional<float>>,std::allocator<std::tuple<juce::String,std::optional<float>,std::optional<float>>>> vector<std::tuple<juce::String,std::optional<float>,std::optional<float>>,std::allocator<std::tuple<juce::String,std::optional<float>,std::optional<float>>>>, *Pvector<std::tuple<juce::String,std::optional<float>,std::optional<float>>,std::allocator<std::tuple<juce::String,std::optional<float>,std::optional<float>>>>;

struct vector<std::tuple<juce::String,std::optional<float>,std::optional<float>>,std::allocator<std::tuple<juce::String,std::optional<float>,std::optional<float>>>> { // PlaceHolder Structure
};

typedef struct vector<std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase,std::default_delete<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase>>,std::allocator<std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase,std::default_delete<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase>>>> vector<std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase,std::default_delete<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase>>,std::allocator<std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase,std::default_delete<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase>>>>, *Pvector<std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase,std::default_delete<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase>>,std::allocator<std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase,std::default_delete<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase>>>>;

struct vector<std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase,std::default_delete<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase>>,std::allocator<std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase,std::default_delete<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase>>>> { // PlaceHolder Structure
};

typedef struct vector<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>,std::allocator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>>> vector<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>,std::allocator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>>>, *Pvector<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>,std::allocator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>>>;

struct vector<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>,std::allocator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>>> { // PlaceHolder Structure
};

typedef struct vector<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,std::default_delete<juce::JuceVST3EditController::OwnedParameterListener>>,std::allocator<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,std::default_delete<juce::JuceVST3EditController::OwnedParameterListener>>>> vector<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,std::default_delete<juce::JuceVST3EditController::OwnedParameterListener>>,std::allocator<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,std::default_delete<juce::JuceVST3EditController::OwnedParameterListener>>>>, *Pvector<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,std::default_delete<juce::JuceVST3EditController::OwnedParameterListener>>,std::allocator<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,std::default_delete<juce::JuceVST3EditController::OwnedParameterListener>>>>;

struct vector<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,std::default_delete<juce::JuceVST3EditController::OwnedParameterListener>>,std::allocator<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,std::default_delete<juce::JuceVST3EditController::OwnedParameterListener>>>> { // PlaceHolder Structure
};

typedef struct vector<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>,std::allocator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>>> vector<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>,std::allocator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>>>, *Pvector<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>,std::allocator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>>>;

struct vector<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>,std::allocator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>>> { // PlaceHolder Structure
};

typedef struct vector<std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>,std::allocator<std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>>> vector<std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>,std::allocator<std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>>>, *Pvector<std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>,std::allocator<std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>>>;

struct vector<std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>,std::allocator<std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>>> { // PlaceHolder Class Structure
};

typedef struct vector<std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>,std::allocator<std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>>> vector<std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>,std::allocator<std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>>>, *Pvector<std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>,std::allocator<std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>>>;

struct vector<std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>,std::allocator<std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>>> { // PlaceHolder Class Structure
};

typedef struct vector<Steinberg::FUID,std::allocator<Steinberg::FUID>> vector<Steinberg::FUID,std::allocator<Steinberg::FUID>>, *Pvector<Steinberg::FUID,std::allocator<Steinberg::FUID>>;

struct vector<Steinberg::FUID,std::allocator<Steinberg::FUID>> { // PlaceHolder Structure
};

typedef struct vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>> vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>, *Pvector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>;

struct vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>> { // PlaceHolder Structure
};

typedef struct vector<Steinberg::IPtr<Steinberg::Vst::Parameter>,std::allocator<Steinberg::IPtr<Steinberg::Vst::Parameter>>> vector<Steinberg::IPtr<Steinberg::Vst::Parameter>,std::allocator<Steinberg::IPtr<Steinberg::Vst::Parameter>>>, *Pvector<Steinberg::IPtr<Steinberg::Vst::Parameter>,std::allocator<Steinberg::IPtr<Steinberg::Vst::Parameter>>>;

struct vector<Steinberg::IPtr<Steinberg::Vst::Parameter>,std::allocator<Steinberg::IPtr<Steinberg::Vst::Parameter>>> { // PlaceHolder Class Structure
};

typedef struct vector<Steinberg::IPtr<Steinberg::Vst::ProgramList>,std::allocator<Steinberg::IPtr<Steinberg::Vst::ProgramList>>> vector<Steinberg::IPtr<Steinberg::Vst::ProgramList>,std::allocator<Steinberg::IPtr<Steinberg::Vst::ProgramList>>>, *Pvector<Steinberg::IPtr<Steinberg::Vst::ProgramList>,std::allocator<Steinberg::IPtr<Steinberg::Vst::ProgramList>>>;

struct vector<Steinberg::IPtr<Steinberg::Vst::ProgramList>,std::allocator<Steinberg::IPtr<Steinberg::Vst::ProgramList>>> { // PlaceHolder Structure
};

typedef struct vector<Steinberg::IPtr<Steinberg::Vst::Unit>,std::allocator<Steinberg::IPtr<Steinberg::Vst::Unit>>> vector<Steinberg::IPtr<Steinberg::Vst::Unit>,std::allocator<Steinberg::IPtr<Steinberg::Vst::Unit>>>, *Pvector<Steinberg::IPtr<Steinberg::Vst::Unit>,std::allocator<Steinberg::IPtr<Steinberg::Vst::Unit>>>;

struct vector<Steinberg::IPtr<Steinberg::Vst::Unit>,std::allocator<Steinberg::IPtr<Steinberg::Vst::Unit>>> { // PlaceHolder Structure
};

typedef struct vector<Steinberg::ModuleInfo::ClassInfo,std::allocator<Steinberg::ModuleInfo::ClassInfo>> vector<Steinberg::ModuleInfo::ClassInfo,std::allocator<Steinberg::ModuleInfo::ClassInfo>>, *Pvector<Steinberg::ModuleInfo::ClassInfo,std::allocator<Steinberg::ModuleInfo::ClassInfo>>;

struct vector<Steinberg::ModuleInfo::ClassInfo,std::allocator<Steinberg::ModuleInfo::ClassInfo>> { // PlaceHolder Class Structure
};

typedef struct vector<Steinberg::ModuleInfo::Compatibility,std::allocator<Steinberg::ModuleInfo::Compatibility>> vector<Steinberg::ModuleInfo::Compatibility,std::allocator<Steinberg::ModuleInfo::Compatibility>>, *Pvector<Steinberg::ModuleInfo::Compatibility,std::allocator<Steinberg::ModuleInfo::Compatibility>>;

struct vector<Steinberg::ModuleInfo::Compatibility,std::allocator<Steinberg::ModuleInfo::Compatibility>> { // PlaceHolder Class Structure
};

typedef struct vector<Steinberg::ModuleInfo::Snapshot,std::allocator<Steinberg::ModuleInfo::Snapshot>> vector<Steinberg::ModuleInfo::Snapshot,std::allocator<Steinberg::ModuleInfo::Snapshot>>, *Pvector<Steinberg::ModuleInfo::Snapshot,std::allocator<Steinberg::ModuleInfo::Snapshot>>;

struct vector<Steinberg::ModuleInfo::Snapshot,std::allocator<Steinberg::ModuleInfo::Snapshot>> { // PlaceHolder Class Structure
};

typedef struct vector<unsigned_long,std::allocator<unsigned_long>> vector<unsigned_long,std::allocator<unsigned_long>>, *Pvector<unsigned_long,std::allocator<unsigned_long>>;

struct vector<unsigned_long,std::allocator<unsigned_long>> { // PlaceHolder Structure
};

typedef struct vector<VST3::Vst2xProgram,std::allocator<VST3::Vst2xProgram>> vector<VST3::Vst2xProgram,std::allocator<VST3::Vst2xProgram>>, *Pvector<VST3::Vst2xProgram,std::allocator<VST3::Vst2xProgram>>;

struct vector<VST3::Vst2xProgram,std::allocator<VST3::Vst2xProgram>> { // PlaceHolder Class Structure
};

typedef struct Viewport Viewport, *PViewport;

struct Viewport { // PlaceHolder Structure
};

typedef struct ViewRect ViewRect, *PViewRect;

struct ViewRect { // PlaceHolder Structure
};

typedef struct VirtualDesktopWatcher VirtualDesktopWatcher, *PVirtualDesktopWatcher;

struct VirtualDesktopWatcher { // PlaceHolder Structure
};

typedef struct Visitor Visitor, *PVisitor;

struct Visitor { // PlaceHolder Structure
};

typedef struct Visual Visual, *PVisual;

struct Visual { // PlaceHolder Structure
};

typedef struct Vst2xProgram Vst2xProgram, *PVst2xProgram;

struct Vst2xProgram { // PlaceHolder Structure
};

typedef struct Vst2xState Vst2xState, *PVst2xState;

struct Vst2xState { // PlaceHolder Structure
};

typedef struct VST3 VST3, *PVST3;

struct VST3 { // PlaceHolder Class Structure
};

typedef struct VSTComSmartPtr VSTComSmartPtr, *PVSTComSmartPtr;

struct VSTComSmartPtr { // PlaceHolder Structure
};

typedef struct VSTComSmartPtr<juce::JuceAudioProcessor> VSTComSmartPtr<juce::JuceAudioProcessor>, *PVSTComSmartPtr<juce::JuceAudioProcessor>;

struct VSTComSmartPtr<juce::JuceAudioProcessor> { // PlaceHolder Structure
};

typedef struct VSTComSmartPtr<juce::JuceVST3EditController> VSTComSmartPtr<juce::JuceVST3EditController>, *PVSTComSmartPtr<juce::JuceVST3EditController>;

struct VSTComSmartPtr<juce::JuceVST3EditController> { // PlaceHolder Structure
};

typedef struct VSTComSmartPtr<Steinberg::Linux::IRunLoop> VSTComSmartPtr<Steinberg::Linux::IRunLoop>, *PVSTComSmartPtr<Steinberg::Linux::IRunLoop>;

struct VSTComSmartPtr<Steinberg::Linux::IRunLoop> { // PlaceHolder Structure
};

typedef struct VSTComSmartPtr<Steinberg::Vst::IHostApplication> VSTComSmartPtr<Steinberg::Vst::IHostApplication>, *PVSTComSmartPtr<Steinberg::Vst::IHostApplication>;

struct VSTComSmartPtr<Steinberg::Vst::IHostApplication> { // PlaceHolder Structure
};

typedef struct WaitableEvent WaitableEvent, *PWaitableEvent;

struct WaitableEvent { // PlaceHolder Structure
};

typedef struct Weak Weak, *PWeak;

struct Weak { // PlaceHolder Structure
};

typedef struct WeakReference WeakReference, *PWeakReference;

struct WeakReference { // PlaceHolder Structure
};

typedef struct WeakReference<juce::Component,juce::ReferenceCountedObject> WeakReference<juce::Component,juce::ReferenceCountedObject>, *PWeakReference<juce::Component,juce::ReferenceCountedObject>;

struct WeakReference<juce::Component,juce::ReferenceCountedObject> { // PlaceHolder Structure
};

typedef struct WeakReference<juce::LookAndFeel,juce::ReferenceCountedObject> WeakReference<juce::LookAndFeel,juce::ReferenceCountedObject>, *PWeakReference<juce::LookAndFeel,juce::ReferenceCountedObject>;

struct WeakReference<juce::LookAndFeel,juce::ReferenceCountedObject> { // PlaceHolder Structure
};

typedef struct WeakRefMaster WeakRefMaster, *PWeakRefMaster;

struct WeakRefMaster { // PlaceHolder Structure
};

typedef struct WindowProperties WindowProperties, *PWindowProperties;

struct WindowProperties { // PlaceHolder Structure
};

typedef uint wint_t;

typedef undefined WrapperType;

typedef struct WriteBufferDesc WriteBufferDesc, *PWriteBufferDesc;

struct WriteBufferDesc { // PlaceHolder Structure
};

typedef struct wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>> wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>, *Pwstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>>;

struct wstring_convert<std::codecvt_utf8_utf16<char16_t,1114111ul,(std::codecvt_mode)0>,char16_t,std::allocator<char16_t>,std::allocator<char>> { // PlaceHolder Structure
};

typedef struct X11DragState X11DragState, *PX11DragState;

struct X11DragState { // PlaceHolder Class Structure
};

typedef struct X11Symbols X11Symbols, *PX11Symbols;

struct X11Symbols { // PlaceHolder Structure
};

typedef struct XBitmapImage XBitmapImage, *PXBitmapImage;

struct XBitmapImage { // PlaceHolder Structure
};

typedef struct XClassHint XClassHint, *PXClassHint;

struct XClassHint { // PlaceHolder Structure
};

typedef struct XClientMessageEvent XClientMessageEvent, *PXClientMessageEvent;

struct XClientMessageEvent { // PlaceHolder Structure
};

typedef struct XColor XColor, *PXColor;

struct XColor { // PlaceHolder Structure
};

typedef struct XErrorEvent XErrorEvent, *PXErrorEvent;

struct XErrorEvent { // PlaceHolder Structure
};

typedef struct XGCValues XGCValues, *PXGCValues;

struct XGCValues { // PlaceHolder Structure
};

typedef undefined XICCEncodingStyle;

typedef struct XKeyEvent XKeyEvent, *PXKeyEvent;

struct XKeyEvent { // PlaceHolder Structure
};

typedef struct XMappingEvent XMappingEvent, *PXMappingEvent;

struct XMappingEvent { // PlaceHolder Structure
};

typedef struct XmlDocument XmlDocument, *PXmlDocument;

struct XmlDocument { // PlaceHolder Structure
};

typedef struct XmlElement XmlElement, *PXmlElement;

struct XmlElement { // PlaceHolder Structure
};

typedef struct XmlPath XmlPath, *PXmlPath;

struct XmlPath { // PlaceHolder Structure
};

typedef struct XModifierKeymap XModifierKeymap, *PXModifierKeymap;

struct XModifierKeymap { // PlaceHolder Structure
};

typedef struct XSetting XSetting, *PXSetting;

struct XSetting { // PlaceHolder Structure
};

typedef struct XSettings XSettings, *PXSettings;

struct XSettings { // PlaceHolder Structure
};

typedef struct XSetWindowAttributes XSetWindowAttributes, *PXSetWindowAttributes;

struct XSetWindowAttributes { // PlaceHolder Structure
};

typedef struct XShmSegmentInfo XShmSegmentInfo, *PXShmSegmentInfo;

struct XShmSegmentInfo { // PlaceHolder Structure
};

typedef struct XSizeHints XSizeHints, *PXSizeHints;

struct XSizeHints { // PlaceHolder Structure
};

typedef struct XTextProperty XTextProperty, *PXTextProperty;

struct XTextProperty { // PlaceHolder Structure
};

typedef struct XValueHolder<unsigned_long> XValueHolder<unsigned_long>, *PXValueHolder<unsigned_long>;

struct XValueHolder<unsigned_long> { // PlaceHolder Structure
};

typedef struct XVisualInfo XVisualInfo, *PXVisualInfo;

struct XVisualInfo { // PlaceHolder Structure
};

typedef struct XWindowAttributes XWindowAttributes, *PXWindowAttributes;

struct XWindowAttributes { // PlaceHolder Structure
};

typedef struct XWindowSystem XWindowSystem, *PXWindowSystem;

struct XWindowSystem { // PlaceHolder Structure
};

typedef struct XWMHints XWMHints, *PXWMHints;

struct XWMHints { // PlaceHolder Structure
};

typedef struct z_stream_s z_stream_s, *Pz_stream_s;

struct z_stream_s { // PlaceHolder Structure
};

typedef undefined Zone;

typedef struct {lambda()#1} {lambda()#1}, *P{lambda()#1};

struct {lambda()#1} { // PlaceHolder Structure
};

typedef struct {lambda()#2} {lambda()#2}, *P{lambda()#2};

struct {lambda()#2} { // PlaceHolder Structure
};

typedef undefined {lambda(auto:1&)#1};

typedef undefined {lambda(auto:1&)#2};

typedef undefined {lambda(auto:1&,auto:2&)#1};


// WARNING! conflicting data type names: /juce/ClientBufferMapper/updateActiveClientBuses(juce::AudioProcessor::BusesLayout_const&)/{lambda(auto:1&,auto:2&)#1} - /Demangler/juce/detail/IntersectingRangedValues<float_const,signed_char>/IntersectionIterator/advance()/{lambda(auto:1&,auto:2&)#1}

typedef struct {lambda(auto:1)#1} {lambda(auto:1)#1}, *P{lambda(auto:1)#1};

struct {lambda(auto:1)#1} { // PlaceHolder Structure
};

typedef struct {lambda(auto:1_const&)#1} {lambda(auto:1_const&)#1}, *P{lambda(auto:1_const&)#1};

struct {lambda(auto:1_const&)#1} { // PlaceHolder Structure
};

typedef struct {lambda(juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener&)#1} {lambda(juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener&)#1}, *P{lambda(juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener&)#1};

struct {lambda(juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener&)#1} { // PlaceHolder Structure
};

typedef struct {lambda(juce::Button&,bool)#1} {lambda(juce::Button&,bool)#1}, *P{lambda(juce::Button&,bool)#1};

struct {lambda(juce::Button&,bool)#1} { // PlaceHolder Class Structure
};

typedef struct {lambda(juce::Point<int>const&)#1} {lambda(juce::Point<int>const&)#1}, *P{lambda(juce::Point<int>const&)#1};

struct {lambda(juce::Point<int>const&)#1} { // PlaceHolder Structure
};

typedef struct {lambda(juce::String_const&)#1} {lambda(juce::String_const&)#1}, *P{lambda(juce::String_const&)#1};

struct {lambda(juce::String_const&)#1} { // PlaceHolder Structure
};

typedef struct {lambda(juce::ValueTree::Listener&)#1} {lambda(juce::ValueTree::Listener&)#1}, *P{lambda(juce::ValueTree::Listener&)#1};

struct {lambda(juce::ValueTree::Listener&)#1} { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/juce/ValueTree/SharedObject/sendPropertyChangeMessage(juce::Identifier_const&,juce::ValueTree::Listener*)/{lambda(juce::ValueTree::Listener&)#1} - /Demangler/juce/ValueTree/SharedObject/sendChildAddedMessage(juce::ValueTree)/{lambda(juce::ValueTree::Listener&)#1}


#endif /* UZU_TYPES_H */
