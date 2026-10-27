// Function : png_user_version_check
// Namespace: juce:pnglibNamespace
// Entry    : 0039ce10
// Prototype: bool png_user_version_check(long param_1)
// Body     : 0039ce10 - 0039ce72


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_user_version_check(juce::pnglibNamespace::png_struct_def*, char
   const*) */

bool __cdecl juce::pnglibNamespace::png_user_version_check(long param_1)

{
  bool bVar1;
  char local_88 [8];
  char acStack_80 [8];
  char local_78 [8];
  char acStack_70 [8];
  char local_68 [8];
  char acStack_60 [8];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  
  bVar1 = (*(byte *)(param_1 + 0x52) & 2) == 0;
  if (!bVar1) {
    local_88 = (char  [8])s_Application_built_with_libpng_1__005ddb70._0_8_;
    acStack_80 = (char  [8])s_Application_built_with_libpng_1__005ddb70._8_8_;
    local_78 = (char  [8])s_Application_built_with_libpng_1__005ddb70._16_8_;
    acStack_70 = (char  [8])s_Application_built_with_libpng_1__005ddb70._24_8_;
    local_68 = (char  [8])s_Application_built_with_libpng_1__005ddb70._32_8_;
    acStack_60 = (char  [8])s_Application_built_with_libpng_1__005ddb70._40_8_;
    local_58 = 0x2e31206874697720;
    local_50 = 0x37332e36;
    local_4c = 0;
    png_warning(param_1,local_88);
  }
  return bVar1;
}


