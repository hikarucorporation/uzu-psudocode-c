// Function : png_zalloc
// Namespace: juce:pnglibNamespace
// Entry    : 0039ce80
// Prototype: void * png_zalloc(long param_1, uint param_2, uint param_3)
// Body     : 0039ce80 - 0039ceb4


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_zalloc(void*, unsigned int, unsigned int) */

void * __cdecl juce::pnglibNamespace::png_zalloc(long param_1,uint param_2,uint param_3)

{
  void *pvVar1;
  
  if (param_1 != 0) {
    if ((ulong)param_2 * (ulong)param_3 != 0) {
      pvVar1 = malloc((ulong)param_2 * (ulong)param_3);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
    }
    png_warning(param_1,"Out of memory");
  }
  return (void *)0x0;
}


