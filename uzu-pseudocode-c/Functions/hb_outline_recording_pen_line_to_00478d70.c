// Function : hb_outline_recording_pen_line_to
// Namespace: 
// Entry    : 00478d70
// Prototype: undefined hb_outline_recording_pen_line_to(undefined4 param_1, undefined4 param_2, undefined8 param_3, uint * param_4)
// Body     : 00478d70 - 00478e55


/* WARNING: Unknown calling convention: __cdecl */
/* hb_outline_recording_pen_line_to(hb_draw_funcs_t*, void*, hb_draw_state_t*, float, float, void*)
    */

void __cdecl
hb_outline_recording_pen_line_to
          (undefined4 param_1,undefined4 param_2,undefined8 param_3,uint *param_4)

{
  long lVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar2 = *param_4;
  if ((int)uVar2 <= (int)param_4[1]) {
    if ((int)uVar2 < 0) {
      _hb_CrapPool = 0;
      DAT_0071cd88 = 0;
      return;
    }
    uVar4 = param_4[1] + 1;
    if (uVar2 < uVar4) {
      uVar6 = uVar2;
      do {
        uVar6 = uVar6 + (uVar6 >> 1) + 8;
      } while (uVar6 < uVar4);
      if (0x15555555 < uVar6) {
LAB_00478e17:
        *param_4 = ~uVar2;
        DAT_0071cd88 = 0;
        _hb_CrapPool = 0;
        return;
      }
      if (uVar6 == 0) {
        free(*(void **)(param_4 + 2));
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar3 = realloc(*(void **)(param_4 + 2),(ulong)uVar6 * 0xc);
        if (pvVar3 == (void *)0x0) {
          uVar2 = *param_4;
          if (uVar6 <= uVar2) goto LAB_00478d8f;
          goto LAB_00478e17;
        }
      }
      *(void **)(param_4 + 2) = pvVar3;
      *param_4 = uVar6;
    }
  }
LAB_00478d8f:
  lVar1 = *(long *)(param_4 + 2);
  uVar5 = (ulong)param_4[1];
  param_4[1] = param_4[1] + 1;
  *(undefined4 *)(lVar1 + uVar5 * 0xc) = param_1;
  *(undefined4 *)(lVar1 + 4 + uVar5 * 0xc) = param_2;
  *(undefined4 *)(lVar1 + 8 + uVar5 * 0xc) = 1;
  return;
}


