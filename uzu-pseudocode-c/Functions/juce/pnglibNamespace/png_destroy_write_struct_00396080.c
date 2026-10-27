// Function : png_destroy_write_struct
// Namespace: juce:pnglibNamespace
// Entry    : 00396080
// Prototype: undefined png_destroy_write_struct(undefined8 * param_1, undefined8 * param_2)
// Body     : 00396080 - 0039619a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_destroy_write_struct(juce::pnglibNamespace::png_struct_def**,
   juce::pnglibNamespace::png_info_def**) */

void __cdecl
juce::pnglibNamespace::png_destroy_write_struct(undefined8 *param_1,undefined8 *param_2)

{
  void *__ptr;
  void *__ptr_00;
  long *plVar1;
  long *__ptr_01;
  
  if ((param_1 == (undefined8 *)0x0) || (__ptr = (void *)*param_1, __ptr == (void *)0x0)) {
    return;
  }
  if ((param_2 != (undefined8 *)0x0) && (__ptr_00 = (void *)*param_2, __ptr_00 != (void *)0x0)) {
    *param_2 = 0;
    png_free_data((long)__ptr,(long)__ptr_00,0xffff,-1);
    free(__ptr_00);
  }
  *param_1 = 0;
  if ((*(byte *)((long)__ptr + 0x50) & 2) != 0) {
    zlibNamespace::deflateEnd((long)__ptr + 0x60);
  }
  __ptr_01 = *(long **)((long)__ptr + 0xd0);
  if (__ptr_01 != (long *)0x0) {
    *(undefined8 *)((long)__ptr + 0xd0) = 0;
    do {
      plVar1 = (long *)*__ptr_01;
      free(__ptr_01);
      __ptr_01 = plVar1;
    } while (plVar1 != (long *)0x0);
  }
  if (*(void **)((long)__ptr + 0x148) != (void *)0x0) {
    free(*(void **)((long)__ptr + 0x148));
  }
  *(undefined8 *)((long)__ptr + 0x148) = 0;
  if (*(void **)((long)__ptr + 0x140) != (void *)0x0) {
    free(*(void **)((long)__ptr + 0x140));
  }
  if (*(void **)((long)__ptr + 0x150) != (void *)0x0) {
    free(*(void **)((long)__ptr + 0x150));
  }
  if (*(void **)((long)__ptr + 0x158) != (void *)0x0) {
    free(*(void **)((long)__ptr + 0x158));
  }
  *(undefined8 *)((long)__ptr + 0x140) = 0;
  *(undefined8 *)((long)__ptr + 0x150) = 0;
  *(undefined8 *)((long)__ptr + 0x158) = 0;
  if (*(void **)((long)__ptr + 0x2e8) != (void *)0x0) {
    free(*(void **)((long)__ptr + 0x2e8));
  }
  free(__ptr);
  return;
}


