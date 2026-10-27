// Function : png_read_buffer
// Namespace: juce:pnglibNamespace
// Entry    : 003a52a0
// Prototype: void * png_read_buffer(long param_1, ulong param_2)
// Body     : 003a52a0 - 003a530c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_read_buffer(juce::pnglibNamespace::png_struct_def*, unsigned long,
   int) */

void * __cdecl juce::pnglibNamespace::png_read_buffer(long param_1,ulong param_2)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x358);
  if (pvVar1 == (void *)0x0) {
    if (param_2 == 0) {
      return (void *)0x0;
    }
  }
  else {
    if (param_2 <= *(ulong *)(param_1 + 0x360)) {
      return pvVar1;
    }
    *(undefined8 *)(param_1 + 0x358) = 0;
    *(undefined8 *)(param_1 + 0x360) = 0;
    free(pvVar1);
  }
  pvVar1 = calloc(1,param_2);
  if (pvVar1 == (void *)0x0) {
    return (void *)0x0;
  }
  *(void **)(param_1 + 0x358) = pvVar1;
  *(ulong *)(param_1 + 0x360) = param_2;
  return pvVar1;
}


