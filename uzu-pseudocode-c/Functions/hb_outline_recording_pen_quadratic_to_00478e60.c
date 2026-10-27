// Function : hb_outline_recording_pen_quadratic_to
// Namespace: 
// Entry    : 00478e60
// Prototype: undefined hb_outline_recording_pen_quadratic_to(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined8 param_5_00, uint * param_6)
// Body     : 00478e60 - 0047905f


/* WARNING: Unknown calling convention: __cdecl */
/* hb_outline_recording_pen_quadratic_to(hb_draw_funcs_t*, void*, hb_draw_state_t*, float, float,
   float, float, void*) */

void __cdecl
hb_outline_recording_pen_quadratic_to
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined8 param_5_00,uint *param_6)

{
  long lVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar2 = *param_6;
  if ((int)param_6[1] < (int)uVar2) {
LAB_00478e82:
    lVar1 = *(long *)(param_6 + 2);
    uVar5 = (ulong)param_6[1];
    param_6[1] = param_6[1] + 1;
    *(undefined4 *)(lVar1 + uVar5 * 0xc) = param_1;
    *(undefined4 *)(lVar1 + 4 + uVar5 * 0xc) = param_2;
    *(undefined4 *)(lVar1 + 8 + uVar5 * 0xc) = 2;
    uVar2 = *param_6;
    uVar4 = param_6[1];
    if ((int)uVar4 < (int)uVar2) goto LAB_00478ec2;
  }
  else {
    if (-1 < (int)uVar2) {
      uVar4 = param_6[1] + 1;
      if (uVar2 < uVar4) {
        uVar6 = uVar2;
        do {
          uVar6 = uVar6 + (uVar6 >> 1) + 8;
        } while (uVar6 < uVar4);
        if (0x15555555 < uVar6) {
LAB_00478f6c:
          *param_6 = ~uVar2;
          goto LAB_00478f70;
        }
        if (uVar6 == 0) {
          free(*(void **)(param_6 + 2));
          pvVar3 = (void *)0x0;
        }
        else {
          pvVar3 = realloc(*(void **)(param_6 + 2),(ulong)uVar6 * 0xc);
          if (pvVar3 == (void *)0x0) {
            uVar2 = *param_6;
            if (uVar6 <= uVar2) goto LAB_00478e82;
            goto LAB_00478f6c;
          }
        }
        *(void **)(param_6 + 2) = pvVar3;
        *param_6 = uVar6;
      }
      goto LAB_00478e82;
    }
LAB_00478f70:
    DAT_0071cd88 = 0;
    _hb_CrapPool = 0;
    uVar2 = *param_6;
    uVar4 = param_6[1];
    if ((int)uVar4 < (int)uVar2) goto LAB_00478ec2;
  }
  if ((int)uVar2 < 0) {
    _hb_CrapPool = 0;
    DAT_0071cd88 = 0;
    return;
  }
  uVar6 = uVar2;
  if (uVar2 < uVar4 + 1) {
    do {
      uVar6 = uVar6 + (uVar6 >> 1) + 8;
    } while (uVar6 < uVar4 + 1);
    if (0x15555555 < uVar6) {
LAB_00478ff5:
      *param_6 = ~uVar2;
      DAT_0071cd88 = 0;
      _hb_CrapPool = 0;
      return;
    }
    if (uVar6 == 0) {
      free(*(void **)(param_6 + 2));
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = realloc(*(void **)(param_6 + 2),(ulong)uVar6 * 0xc);
      if (pvVar3 == (void *)0x0) {
        uVar2 = *param_6;
        if (uVar6 <= uVar2) goto LAB_00478ec2;
        goto LAB_00478ff5;
      }
    }
    *(void **)(param_6 + 2) = pvVar3;
    *param_6 = uVar6;
  }
LAB_00478ec2:
  lVar1 = *(long *)(param_6 + 2);
  uVar5 = (ulong)param_6[1];
  param_6[1] = param_6[1] + 1;
  *(undefined4 *)(lVar1 + uVar5 * 0xc) = param_3;
  *(undefined4 *)(lVar1 + 4 + uVar5 * 0xc) = param_4;
  *(undefined4 *)(lVar1 + 8 + uVar5 * 0xc) = 2;
  return;
}


