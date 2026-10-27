// Function : png_malloc_warn
// Namespace: juce:pnglibNamespace
// Entry    : 003a4b20
// Prototype: void * png_malloc_warn(long param_1, size_t param_2)
// Body     : 003a4b20 - 003a4b4f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_malloc_warn(juce::pnglibNamespace::png_struct_def const*, unsigned
   long) */

void * __cdecl juce::pnglibNamespace::png_malloc_warn(long param_1,size_t param_2)

{
  void *pvVar1;
  
  if (param_1 != 0) {
    if (param_2 != 0) {
      pvVar1 = malloc(param_2);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
    }
    png_warning(param_1,"Out of memory");
  }
  return (void *)0x0;
}


