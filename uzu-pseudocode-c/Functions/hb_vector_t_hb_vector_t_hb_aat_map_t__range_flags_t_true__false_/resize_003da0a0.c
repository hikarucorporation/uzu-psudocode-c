// Function : resize
// Namespace: hb_vector_t_hb_vector_t_hb_aat_map_t__range_flags_t_true__false_
// Entry    : 003da0a0
// Prototype: undefined8 resize(uint * param_1, uint param_2)
// Body     : 003da0a0 - 003da1ca


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_vector_t<hb_vector_t<hb_aat_map_t::range_flags_t, true>, false>::resize(int, bool, bool) */

undefined8 __cdecl
hb_vector_t<hb_vector_t<hb_aat_map_t::range_flags_t,true>,false>::resize(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  ulong uVar4;
  ulong extraout_RAX;
  void *pvVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  
  if ((int)param_2 < 0) {
    param_2 = 0;
  }
  uVar3 = *param_1;
  if ((int)uVar3 < 0) {
    return 0;
  }
  if (uVar3 < param_2) {
    uVar8 = uVar3;
    do {
      uVar8 = uVar8 + (uVar8 >> 1) + 8;
    } while (uVar8 < param_2);
    if (0xfffffff < uVar8) {
LAB_003da1ac:
      *param_1 = ~uVar3;
      return 0;
    }
    if (uVar8 == 0) {
      free(*(void **)(param_1 + 2));
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = realloc(*(void **)(param_1 + 2),(ulong)uVar8 << 4);
      if (pvVar5 == (void *)0x0) {
        uVar3 = *param_1;
        if (uVar8 <= uVar3) goto LAB_003da0c9;
        goto LAB_003da1ac;
      }
    }
    *(void **)(param_1 + 2) = pvVar5;
    *param_1 = uVar8;
  }
LAB_003da0c9:
  uVar3 = param_1[1];
  uVar4 = (ulong)uVar3;
  if (uVar3 < param_2) {
    do {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + uVar4 * 0x10);
      *puVar1 = 0;
      puVar1[1] = 0;
      uVar3 = param_1[1] + 1;
      uVar4 = (ulong)uVar3;
      param_1[1] = uVar3;
    } while (uVar3 < param_2);
  }
  else if ((param_2 < uVar3) && (uVar3 != param_2)) {
    iVar6 = param_2 - uVar3;
    piVar2 = (int *)(uVar4 * 0x10 + *(long *)(param_1 + 2));
    do {
      piVar7 = piVar2 + -4;
      if (*piVar7 != 0) {
        piVar2[-3] = 0;
        free(*(void **)(piVar2 + -2));
        uVar4 = extraout_RAX;
      }
      piVar7[0] = 0;
      piVar7[1] = 0;
      piVar2[-2] = 0;
      piVar2[-1] = 0;
      iVar6 = iVar6 + 1;
      piVar2 = piVar7;
    } while (iVar6 != 0);
  }
  param_1[1] = param_2;
  return CONCAT71((int7)(uVar4 >> 8),1);
}


