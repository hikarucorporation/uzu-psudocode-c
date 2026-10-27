// Function : resize
// Namespace: hb_vector_t_CFF__cff1_private_dict_values_base_t_CFF__dict_val_t__false_
// Entry    : 0044c8c0
// Prototype: undefined8 resize(uint * param_1, uint param_2)
// Body     : 0044c8c0 - 0044c9dd


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_vector_t<CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>, false>::resize(int, bool,
   bool) */

undefined8 __cdecl
hb_vector_t<CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>,false>::resize
          (uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  long lVar2;
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
    if (0x6666666 < uVar8) {
LAB_0044c9d4:
      *param_1 = ~uVar3;
      return 0;
    }
    pvVar5 = realloc_vector<CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>,(void*)0>
                       ((long)param_1,uVar8);
    if ((uVar8 == 0) || (pvVar5 != (void *)0x0)) {
      *(void **)(param_1 + 2) = pvVar5;
      *param_1 = uVar8;
    }
    else {
      uVar3 = *param_1;
      if (uVar3 < uVar8) goto LAB_0044c9d4;
    }
  }
  uVar3 = param_1[1];
  uVar4 = (ulong)uVar3;
  if (uVar3 < param_2) {
    do {
      lVar2 = *(long *)(param_1 + 2);
      puVar1 = (undefined8 *)(lVar2 + 0x10 + uVar4 * 0x28);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(lVar2 + uVar4 * 0x28);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(lVar2 + 0x20 + uVar4 * 0x28) = 0;
      uVar3 = param_1[1] + 1;
      uVar4 = (ulong)uVar3;
      param_1[1] = uVar3;
    } while (uVar3 < param_2);
  }
  else if ((param_2 < uVar3) && (uVar3 != param_2)) {
    piVar7 = (int *)(*(long *)(param_1 + 2) + uVar4 * 0x28 + -0x20);
    iVar6 = param_2 - uVar3;
    do {
      if (*piVar7 != 0) {
        piVar7[1] = 0;
        free(*(void **)(piVar7 + 2));
        uVar4 = extraout_RAX;
      }
      piVar7[0] = 0;
      piVar7[1] = 0;
      piVar7[2] = 0;
      piVar7[3] = 0;
      piVar7 = piVar7 + -10;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0);
  }
  param_1[1] = param_2;
  return CONCAT71((int7)(uVar4 >> 8),1);
}


