// Function : hb_outline_recording_pen_close_path
// Namespace: 
// Entry    : 004793a0
// Prototype: undefined hb_outline_recording_pen_close_path(undefined8 param_1, long param_2)
// Body     : 004793a0 - 00479440


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_outline_recording_pen_close_path(hb_draw_funcs_t*, void*, hb_draw_state_t*, void*) */

void __cdecl hb_outline_recording_pen_close_path(undefined8 param_1,long param_2)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((int)uVar1 <= *(int *)(param_2 + 0x14)) {
    if ((int)uVar1 < 0) {
      _hb_CrapPool._0_4_ = 0;
      return;
    }
    uVar3 = *(int *)(param_2 + 0x14) + 1;
    if (uVar1 < uVar3) {
      uVar4 = uVar1;
      do {
        uVar4 = uVar4 + (uVar4 >> 1) + 8;
      } while (uVar4 < uVar3);
      if (0x3fffffff < uVar4) {
LAB_00479416:
        *(uint *)(param_2 + 0x10) = ~uVar1;
        _hb_CrapPool._0_4_ = 0;
        return;
      }
      if (uVar4 == 0) {
        free(*(void **)(param_2 + 0x18));
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = realloc(*(void **)(param_2 + 0x18),(ulong)uVar4 << 2);
        if (pvVar2 == (void *)0x0) {
          uVar1 = *(uint *)(param_2 + 0x10);
          if (uVar4 <= uVar1) goto LAB_004793bc;
          goto LAB_00479416;
        }
      }
      *(void **)(param_2 + 0x18) = pvVar2;
      *(uint *)(param_2 + 0x10) = uVar4;
    }
  }
LAB_004793bc:
  uVar1 = *(uint *)(param_2 + 0x14);
  *(uint *)(param_2 + 0x14) = uVar1 + 1;
  *(undefined4 *)(*(long *)(param_2 + 0x18) + (ulong)uVar1 * 4) = *(undefined4 *)(param_2 + 4);
  return;
}


