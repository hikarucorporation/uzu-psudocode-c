// Function : png_destroy_gamma_table
// Namespace: juce:pnglibNamespace
// Entry    : 0039f8e0
// Prototype: undefined png_destroy_gamma_table(long param_1)
// Body     : 0039f8e0 - 0039faf6


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_destroy_gamma_table(juce::pnglibNamespace::png_struct_def*) */

void __cdecl juce::pnglibNamespace::png_destroy_gamma_table(long param_1)

{
  void *pvVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  
  if ((param_1 != 0) && (*(void **)(param_1 + 0x1c8) != (void *)0x0)) {
    free(*(void **)(param_1 + 0x1c8));
  }
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  puVar3 = *(undefined8 **)(param_1 + 0x1d0);
  if (puVar3 != (undefined8 *)0x0) {
    if (*(int *)(param_1 + 0x1c0) != -0x17) {
      uVar4 = 1 << (8U - (char)*(int *)(param_1 + 0x1c0) & 0x1f);
      uVar5 = (ulong)uVar4;
      if ((int)uVar4 < 2) {
        uVar5 = 1;
      }
      lVar2 = 0;
      pvVar1 = (void *)*puVar3;
      while( true ) {
        if (pvVar1 != (void *)0x0) {
          free(pvVar1);
        }
        if (uVar5 - 1 == lVar2) break;
        lVar2 = lVar2 + 1;
        pvVar1 = *(void **)(*(long *)(param_1 + 0x1d0) + lVar2 * 8);
      }
      puVar3 = *(undefined8 **)(param_1 + 0x1d0);
    }
    if ((param_1 != 0) && (puVar3 != (undefined8 *)0x0)) {
      free(puVar3);
    }
    *(undefined8 *)(param_1 + 0x1d0) = 0;
  }
  if ((param_1 != 0) && (*(void **)(param_1 + 0x1d8) != (void *)0x0)) {
    free(*(void **)(param_1 + 0x1d8));
  }
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  if ((param_1 != 0) && (*(void **)(param_1 + 0x1e0) != (void *)0x0)) {
    free(*(void **)(param_1 + 0x1e0));
  }
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  puVar3 = *(undefined8 **)(param_1 + 0x1e8);
  if (puVar3 != (undefined8 *)0x0) {
    if (*(int *)(param_1 + 0x1c0) != -0x17) {
      uVar4 = 1 << (8U - (char)*(int *)(param_1 + 0x1c0) & 0x1f);
      uVar5 = (ulong)uVar4;
      if ((int)uVar4 < 2) {
        uVar5 = 1;
      }
      lVar2 = 0;
      pvVar1 = (void *)*puVar3;
      while( true ) {
        if (pvVar1 != (void *)0x0) {
          free(pvVar1);
        }
        if (uVar5 - 1 == lVar2) break;
        lVar2 = lVar2 + 1;
        pvVar1 = *(void **)(*(long *)(param_1 + 0x1e8) + lVar2 * 8);
      }
      puVar3 = *(undefined8 **)(param_1 + 0x1e8);
    }
    if ((param_1 != 0) && (puVar3 != (undefined8 *)0x0)) {
      free(puVar3);
    }
    *(undefined8 *)(param_1 + 0x1e8) = 0;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x1f0);
  if (puVar3 != (undefined8 *)0x0) {
    if (*(int *)(param_1 + 0x1c0) != -0x17) {
      uVar4 = 1 << (8U - (char)*(int *)(param_1 + 0x1c0) & 0x1f);
      uVar5 = (ulong)uVar4;
      if ((int)uVar4 < 2) {
        uVar5 = 1;
      }
      lVar2 = 0;
      pvVar1 = (void *)*puVar3;
      while( true ) {
        if (pvVar1 != (void *)0x0) {
          free(pvVar1);
        }
        if (uVar5 - 1 == lVar2) break;
        lVar2 = lVar2 + 1;
        pvVar1 = *(void **)(*(long *)(param_1 + 0x1f0) + lVar2 * 8);
      }
      puVar3 = *(undefined8 **)(param_1 + 0x1f0);
    }
    if ((param_1 != 0) && (puVar3 != (undefined8 *)0x0)) {
      free(puVar3);
    }
    *(undefined8 *)(param_1 + 0x1f0) = 0;
  }
  return;
}


