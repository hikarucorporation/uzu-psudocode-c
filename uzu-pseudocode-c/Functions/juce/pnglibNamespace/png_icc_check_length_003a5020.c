// Function : png_icc_check_length
// Namespace: juce:pnglibNamespace
// Entry    : 003a5020
// Prototype: undefined8 png_icc_check_length(pnglibNamespace * param_1, long param_2, char * param_3, uint param_4)
// Body     : 003a5020 - 003a505b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_icc_check_length(juce::pnglibNamespace::png_struct_def const*,
   juce::pnglibNamespace::png_colorspace*, char const*, unsigned int) */

undefined8 __cdecl
juce::pnglibNamespace::png_icc_check_length
          (pnglibNamespace *param_1,long param_2,char *param_3,uint param_4)

{
  char *pcVar1;
  
  if (param_4 < 0x84) {
    pcVar1 = "too short";
  }
  else {
    if (*(ulong *)(param_1 + 0x328) == 0) {
      return 1;
    }
    if ((ulong)param_4 <= *(ulong *)(param_1 + 0x328)) {
      return 1;
    }
    pcVar1 = "exceeds application limits";
  }
  png_icc_profile_error(param_1,param_2,param_3,(ulong)param_4,pcVar1);
  return 0;
}


