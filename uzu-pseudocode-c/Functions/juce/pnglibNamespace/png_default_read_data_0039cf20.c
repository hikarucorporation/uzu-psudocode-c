// Function : png_default_read_data
// Namespace: juce:pnglibNamespace
// Entry    : 0039cf20
// Prototype: undefined png_default_read_data(pnglibNamespace * param_1, void * param_2, size_t param_3)
// Body     : 0039cf20 - 0039cf57


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_default_read_data(juce::pnglibNamespace::png_struct_def*, unsigned
   char*, unsigned long) */

void __cdecl
juce::pnglibNamespace::png_default_read_data(pnglibNamespace *param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (param_1 != (pnglibNamespace *)0x0) {
    sVar1 = fread(param_2,1,param_3,*(FILE **)(param_1 + 0x28));
    if (sVar1 != param_3) {
                    /* WARNING: Subroutine does not return */
      png_err(param_1);
    }
  }
  return;
}


