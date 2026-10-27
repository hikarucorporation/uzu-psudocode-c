// Function : png_destroy_read_struct
// Namespace: juce:pnglibNamespace
// Entry    : 0039f6b0
// Prototype: undefined png_destroy_read_struct(undefined8 * param_1, undefined8 * param_2)
// Body     : 0039f6b0 - 0039f8da


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_destroy_read_struct(juce::pnglibNamespace::png_struct_def**,
   juce::pnglibNamespace::png_info_def**, juce::pnglibNamespace::png_info_def**) */

void __cdecl juce::pnglibNamespace::png_destroy_read_struct(undefined8 *param_1,undefined8 *param_2)

{
  void *__ptr;
  void *__ptr_00;
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  long *plVar4;
  
  if ((param_1 == (undefined8 *)0x0) || (__ptr = (void *)*param_1, __ptr == (void *)0x0)) {
    return;
  }
  if ((param_2 != (undefined8 *)0x0) && (__ptr_00 = (void *)*param_2, __ptr_00 != (void *)0x0)) {
    *param_2 = 0;
    png_free_data((long)__ptr,(long)__ptr_00,0xffff,-1);
    free(__ptr_00);
  }
  *param_1 = 0;
  png_destroy_gamma_table((long)__ptr);
  if (*(void **)((long)__ptr + 0x2f8) != (void *)0x0) {
    free(*(void **)((long)__ptr + 0x2f8));
  }
  *(undefined8 *)((long)__ptr + 0x2f8) = 0;
  if (*(void **)((long)__ptr + 0x370) != (void *)0x0) {
    free(*(void **)((long)__ptr + 0x370));
  }
  *(undefined8 *)((long)__ptr + 0x370) = 0;
  if (*(void **)((long)__ptr + 0x358) != (void *)0x0) {
    free(*(void **)((long)__ptr + 0x358));
  }
  *(undefined8 *)((long)__ptr + 0x358) = 0;
  if (*(void **)((long)__ptr + 0x298) != (void *)0x0) {
    free(*(void **)((long)__ptr + 0x298));
  }
  *(undefined8 *)((long)__ptr + 0x298) = 0;
  if (*(void **)((long)__ptr + 0x2a0) != (void *)0x0) {
    free(*(void **)((long)__ptr + 0x2a0));
  }
  *(undefined8 *)((long)__ptr + 0x2a0) = 0;
  uVar2 = *(uint *)((long)__ptr + 0x2c8);
  if ((uVar2 & 0x1000) != 0) {
    if (*(void **)((long)__ptr + 0x170) != (void *)0x0) {
      free(*(void **)((long)__ptr + 0x170));
      uVar2 = *(uint *)((long)__ptr + 0x2c8);
    }
    *(undefined8 *)((long)__ptr + 0x170) = 0;
  }
  uVar1 = uVar2 & 0xffffefff;
  *(uint *)((long)__ptr + 0x2c8) = uVar1;
  if ((uVar2 & 0x2000) != 0) {
    if (*(void **)((long)__ptr + 0x208) != (void *)0x0) {
      free(*(void **)((long)__ptr + 0x208));
      uVar1 = *(uint *)((long)__ptr + 0x2c8);
    }
    *(undefined8 *)((long)__ptr + 0x208) = 0;
  }
  *(uint *)((long)__ptr + 0x2c8) = uVar1 & 0xffffdfff;
  if ((((*(long *)((long)__ptr + 0xa0) != 0) &&
       (pcVar3 = *(code **)((long)__ptr + 0xa8), pcVar3 != (code *)0x0)) &&
      (plVar4 = *(long **)((long)__ptr + 0x98), plVar4 != (long *)0x0)) &&
     ((*plVar4 == (long)__ptr + 0x60 && ((int)plVar4[1] - 0x3f34U < 0x20)))) {
    if (plVar4[9] != 0) {
      (*pcVar3)(*(undefined8 *)((long)__ptr + 0xb0),plVar4[9]);
      plVar4 = *(long **)((long)__ptr + 0x98);
      pcVar3 = *(code **)((long)__ptr + 0xa8);
    }
    (*pcVar3)(*(undefined8 *)((long)__ptr + 0xb0),plVar4);
    *(undefined8 *)((long)__ptr + 0x98) = 0;
  }
  if (*(void **)((long)__ptr + 0x250) != (void *)0x0) {
    free(*(void **)((long)__ptr + 0x250));
  }
  *(undefined8 *)((long)__ptr + 0x250) = 0;
  if (*(void **)((long)__ptr + 0x338) != (void *)0x0) {
    free(*(void **)((long)__ptr + 0x338));
  }
  *(undefined8 *)((long)__ptr + 0x338) = 0;
  if (*(void **)((long)__ptr + 0x2e8) != (void *)0x0) {
    free(*(void **)((long)__ptr + 0x2e8));
  }
  free(__ptr);
  return;
}


