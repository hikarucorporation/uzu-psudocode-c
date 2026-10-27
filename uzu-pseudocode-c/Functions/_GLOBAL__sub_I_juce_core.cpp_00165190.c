// Function : _GLOBAL__sub_I_juce_core.cpp
// Namespace: 
// Entry    : 00165190
// Prototype: undefined _GLOBAL__sub_I_juce_core.cpp(void)
// Body     : 00165190 - 00165454


/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _GLOBAL__sub_I_juce_core_cpp(void)

{
  int iVar1;
  rlimit local_18;
  
  std::ios_base::Init::Init((Init *)&_ZStL8__ioinit_1527);
  __cxa_atexit(PTR__Init_007159f0,&_ZStL8__ioinit_1527,&__dso_handle);
  iVar1 = getrlimit(RLIMIT_NOFILE,&local_18);
  if (((iVar1 != 0) || (local_18.rlim_cur != 0xffffffffffffffff)) ||
     (local_18.rlim_max != 0xffffffffffffffff)) {
    local_18.rlim_cur = 0xffffffffffffffff;
    local_18.rlim_max = 0xffffffffffffffff;
    iVar1 = setrlimit(RLIMIT_NOFILE,&local_18);
    if (iVar1 != 0) {
      iVar1 = getrlimit(RLIMIT_NOFILE,&local_18);
      if ((iVar1 != 0) || (local_18.rlim_cur < 0x2000)) {
        local_18.rlim_cur = _DAT_005de200;
        local_18.rlim_max = _UNK_005de208;
        iVar1 = setrlimit(RLIMIT_NOFILE,&local_18);
        if (iVar1 != 0) {
          iVar1 = getrlimit(RLIMIT_NOFILE,&local_18);
          if ((iVar1 != 0) || (local_18.rlim_cur < 0x1c00)) {
            local_18.rlim_cur = _DAT_005de210;
            local_18.rlim_max = _UNK_005de218;
            iVar1 = setrlimit(RLIMIT_NOFILE,&local_18);
            if (iVar1 != 0) {
              iVar1 = getrlimit(RLIMIT_NOFILE,&local_18);
              if ((iVar1 != 0) || (local_18.rlim_cur < 0x1800)) {
                local_18.rlim_cur = _DAT_005de220;
                local_18.rlim_max = _UNK_005de228;
                iVar1 = setrlimit(RLIMIT_NOFILE,&local_18);
                if (iVar1 != 0) {
                  iVar1 = getrlimit(RLIMIT_NOFILE,&local_18);
                  if ((iVar1 != 0) || (local_18.rlim_cur < 0x1400)) {
                    local_18.rlim_cur = _DAT_005de230;
                    local_18.rlim_max = _UNK_005de238;
                    iVar1 = setrlimit(RLIMIT_NOFILE,&local_18);
                    if (iVar1 != 0) {
                      iVar1 = getrlimit(RLIMIT_NOFILE,&local_18);
                      if ((iVar1 != 0) || (local_18.rlim_cur < 0x1000)) {
                        local_18.rlim_cur = _DAT_005de240;
                        local_18.rlim_max = _UNK_005de248;
                        iVar1 = setrlimit(RLIMIT_NOFILE,&local_18);
                        if (iVar1 != 0) {
                          iVar1 = getrlimit(RLIMIT_NOFILE,&local_18);
                          if ((iVar1 != 0) || (local_18.rlim_cur < 0xc00)) {
                            local_18.rlim_cur = _DAT_005de250;
                            local_18.rlim_max = _UNK_005de258;
                            iVar1 = setrlimit(RLIMIT_NOFILE,&local_18);
                            if (iVar1 != 0) {
                              iVar1 = getrlimit(RLIMIT_NOFILE,&local_18);
                              if ((iVar1 != 0) || (local_18.rlim_cur < 0x800)) {
                                local_18.rlim_cur = _DAT_005de260;
                                local_18.rlim_max = _UNK_005de268;
                                iVar1 = setrlimit(RLIMIT_NOFILE,&local_18);
                                if (iVar1 != 0) {
                                  iVar1 = getrlimit(RLIMIT_NOFILE,&local_18);
                                  if ((iVar1 != 0) || (local_18.rlim_cur < 0x400)) {
                                    local_18.rlim_cur = _DAT_005de270;
                                    local_18.rlim_max = _UNK_005de278;
                                    setrlimit(RLIMIT_NOFILE,&local_18);
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  juce::Identifier::null = &DAT_0061ac58;
  __cxa_atexit(juce::Identifier::~Identifier,&juce::Identifier::null,&__dso_handle);
  juce::(anonymous_namespace)::currentMappingsLock = 0;
  __cxa_atexit(std::unique_ptr<juce::LocalisedStrings,std::default_delete<juce::LocalisedStrings>>::
               ~unique_ptr,&juce::(anonymous_namespace)::currentMappings,&__dso_handle);
  _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = 0;
  return;
}


