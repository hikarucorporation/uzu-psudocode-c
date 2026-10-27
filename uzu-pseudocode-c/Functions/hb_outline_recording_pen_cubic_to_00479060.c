// Function : hb_outline_recording_pen_cubic_to
// Namespace: 
// Entry    : 00479060
// Prototype: undefined hb_outline_recording_pen_cubic_to(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined8 param_7_00, uint * param_8)
// Body     : 00479060 - 0047939a


/* WARNING: Unknown calling convention: __cdecl */
/* hb_outline_recording_pen_cubic_to(hb_draw_funcs_t*, void*, hb_draw_state_t*, float, float, float,
   float, float, float, void*) */

void __cdecl
hb_outline_recording_pen_cubic_to
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined8 param_7_00,uint *param_8)

{
  long lVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar2 = *param_8;
  if ((int)param_8[1] < (int)uVar2) {
LAB_00479086:
    lVar1 = *(long *)(param_8 + 2);
    uVar5 = (ulong)param_8[1];
    param_8[1] = param_8[1] + 1;
    *(undefined4 *)(lVar1 + uVar5 * 0xc) = param_1;
    *(undefined4 *)(lVar1 + 4 + uVar5 * 0xc) = param_2;
    *(undefined4 *)(lVar1 + 8 + uVar5 * 0xc) = 3;
    uVar2 = *param_8;
    uVar4 = param_8[1];
    if ((int)uVar4 < (int)uVar2) goto LAB_004790c6;
LAB_004790b3:
    if (-1 < (int)uVar2) {
      uVar6 = uVar2;
      if (uVar2 < uVar4 + 1) {
        do {
          uVar6 = uVar6 + (uVar6 >> 1) + 8;
        } while (uVar6 < uVar4 + 1);
        if (0x15555555 < uVar6) {
LAB_0047926d:
          *param_8 = ~uVar2;
          goto LAB_00479271;
        }
        if (uVar6 == 0) {
          free(*(void **)(param_8 + 2));
          pvVar3 = (void *)0x0;
        }
        else {
          pvVar3 = realloc(*(void **)(param_8 + 2),(ulong)uVar6 * 0xc);
          if (pvVar3 == (void *)0x0) {
            uVar2 = *param_8;
            if (uVar6 <= uVar2) goto LAB_004790c6;
            goto LAB_0047926d;
          }
        }
        *(void **)(param_8 + 2) = pvVar3;
        *param_8 = uVar6;
      }
      goto LAB_004790c6;
    }
LAB_00479271:
    DAT_0071cd88 = 0;
    _hb_CrapPool = 0;
    uVar2 = *param_8;
    uVar4 = param_8[1];
    if ((int)uVar4 < (int)uVar2) goto LAB_00479106;
  }
  else {
    if (-1 < (int)uVar2) {
      uVar4 = param_8[1] + 1;
      if (uVar2 < uVar4) {
        uVar6 = uVar2;
        do {
          uVar6 = uVar6 + (uVar6 >> 1) + 8;
        } while (uVar6 < uVar4);
        if (0x15555555 < uVar6) {
LAB_004791c6:
          *param_8 = ~uVar2;
          goto LAB_004791ca;
        }
        if (uVar6 == 0) {
          free(*(void **)(param_8 + 2));
          pvVar3 = (void *)0x0;
        }
        else {
          pvVar3 = realloc(*(void **)(param_8 + 2),(ulong)uVar6 * 0xc);
          if (pvVar3 == (void *)0x0) {
            uVar2 = *param_8;
            if (uVar6 <= uVar2) goto LAB_00479086;
            goto LAB_004791c6;
          }
        }
        *(void **)(param_8 + 2) = pvVar3;
        *param_8 = uVar6;
      }
      goto LAB_00479086;
    }
LAB_004791ca:
    DAT_0071cd88 = 0;
    _hb_CrapPool = 0;
    uVar2 = *param_8;
    uVar4 = param_8[1];
    if ((int)uVar2 <= (int)uVar4) goto LAB_004790b3;
LAB_004790c6:
    lVar1 = *(long *)(param_8 + 2);
    uVar5 = (ulong)param_8[1];
    param_8[1] = param_8[1] + 1;
    *(undefined4 *)(lVar1 + uVar5 * 0xc) = param_3;
    *(undefined4 *)(lVar1 + 4 + uVar5 * 0xc) = param_4;
    *(undefined4 *)(lVar1 + 8 + uVar5 * 0xc) = 3;
    uVar2 = *param_8;
    uVar4 = param_8[1];
    if ((int)uVar4 < (int)uVar2) goto LAB_00479106;
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
LAB_004792fc:
      *param_8 = ~uVar2;
      DAT_0071cd88 = 0;
      _hb_CrapPool = 0;
      return;
    }
    if (uVar6 == 0) {
      free(*(void **)(param_8 + 2));
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = realloc(*(void **)(param_8 + 2),(ulong)uVar6 * 0xc);
      if (pvVar3 == (void *)0x0) {
        uVar2 = *param_8;
        if (uVar6 <= uVar2) goto LAB_00479106;
        goto LAB_004792fc;
      }
    }
    *(void **)(param_8 + 2) = pvVar3;
    *param_8 = uVar6;
  }
LAB_00479106:
  lVar1 = *(long *)(param_8 + 2);
  uVar5 = (ulong)param_8[1];
  param_8[1] = param_8[1] + 1;
  *(undefined4 *)(lVar1 + uVar5 * 0xc) = param_5;
  *(undefined4 *)(lVar1 + 4 + uVar5 * 0xc) = param_6;
  *(undefined4 *)(lVar1 + 8 + uVar5 * 0xc) = 3;
  return;
}


