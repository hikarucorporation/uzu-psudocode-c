// Function : ex_finite
// Namespace: 
// Entry    : 005d4420
// Prototype: undefined ex_finite(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, long param_11, long * param_12, char * param_13, undefined8 param_14)
// Body     : 005d4420 - 005d4613


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ex_finite(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9,undefined8 param_10,long param_11,long *param_12,char *param_13,
              undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  lVar7 = _UNK_0065ada8;
  lVar4 = *(long *)(param_11 + 8);
  if (lVar4 - 0xeU < 2) {
    if (param_12[1] == 0xf) {
      lVar4 = *param_12;
      iVar5 = *(int *)(param_9 + 0x28f8);
      uVar2 = _DAT_00652570;
      uVar3 = _UNK_00652578;
    }
    else {
      param_12[1] = 0xf;
      lVar4 = ex_malloc((long)*(int *)(param_9 + 0x28f8) << 2);
      *param_12 = lVar4;
      iVar5 = *(int *)(param_9 + 0x28f8);
      uVar2 = _DAT_00652570;
      uVar3 = _UNK_00652578;
    }
    _DAT_00652570 = uVar2;
    _UNK_00652578 = uVar3;
    if (iVar5 != 0) {
      if (6 < iVar5 - 1U) {
        uVar6 = (ulong)(iVar5 - 1U) + 1;
        uVar11 = uVar6 & 0xfffffffffffffff8;
        uVar9 = (uVar11 - 8 >> 3) + 1;
        uVar8 = (ulong)((uint)uVar9 & 7);
        if (uVar11 - 8 < 0x38) {
          lVar7 = 0;
        }
        else {
          uVar9 = uVar9 & 0xfffffffffffffff8;
          lVar7 = 0;
          do {
            puVar1 = (undefined8 *)(lVar4 + lVar7 * 4);
            *puVar1 = uVar2;
            puVar1[1] = uVar3;
            puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar7 * 4);
            *puVar1 = uVar2;
            puVar1[1] = uVar3;
            puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar7 * 4);
            *puVar1 = uVar2;
            puVar1[1] = uVar3;
            puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar7 * 4);
            *puVar1 = uVar2;
            puVar1[1] = uVar3;
            puVar1 = (undefined8 *)(lVar4 + 0x40 + lVar7 * 4);
            *puVar1 = uVar2;
            puVar1[1] = uVar3;
            puVar1 = (undefined8 *)(lVar4 + 0x50 + lVar7 * 4);
            *puVar1 = uVar2;
            puVar1[1] = uVar3;
            puVar1 = (undefined8 *)(lVar4 + 0x60 + lVar7 * 4);
            *puVar1 = uVar2;
            puVar1[1] = uVar3;
            puVar1 = (undefined8 *)(lVar4 + 0x70 + lVar7 * 4);
            *puVar1 = uVar2;
            puVar1[1] = uVar3;
            puVar1 = (undefined8 *)(lVar4 + 0x80 + lVar7 * 4);
            *puVar1 = uVar2;
            puVar1[1] = uVar3;
            puVar1 = (undefined8 *)(lVar4 + 0x90 + lVar7 * 4);
            *puVar1 = uVar2;
            puVar1[1] = uVar3;
            puVar1 = (undefined8 *)(lVar4 + 0xa0 + lVar7 * 4);
            *puVar1 = uVar2;
            puVar1[1] = uVar3;
            puVar1 = (undefined8 *)(lVar4 + 0xb0 + lVar7 * 4);
            *puVar1 = uVar2;
            puVar1[1] = uVar3;
            puVar1 = (undefined8 *)(lVar4 + 0xc0 + lVar7 * 4);
            *puVar1 = uVar2;
            puVar1[1] = uVar3;
            puVar1 = (undefined8 *)(lVar4 + 0xd0 + lVar7 * 4);
            *puVar1 = uVar2;
            puVar1[1] = uVar3;
            puVar1 = (undefined8 *)(lVar4 + 0xe0 + lVar7 * 4);
            *puVar1 = uVar2;
            puVar1[1] = uVar3;
            puVar1 = (undefined8 *)(lVar4 + 0xf0 + lVar7 * 4);
            *puVar1 = uVar2;
            puVar1[1] = uVar3;
            lVar7 = lVar7 + 0x40;
            uVar9 = uVar9 - 8;
          } while (uVar9 != 0);
        }
        uVar3 = _UNK_00652578;
        uVar2 = _DAT_00652570;
        if (uVar8 != 0) {
          lVar7 = lVar4 + lVar7 * 4;
          lVar10 = 0;
          do {
            puVar1 = (undefined8 *)(lVar7 + lVar10);
            *puVar1 = uVar2;
            puVar1[1] = uVar3;
            puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar10);
            *puVar1 = uVar2;
            puVar1[1] = uVar3;
            lVar10 = lVar10 + 0x20;
          } while (uVar8 * 0x20 != lVar10);
        }
        if (uVar6 == uVar11) {
          return;
        }
        iVar5 = iVar5 - (int)uVar11;
        lVar4 = lVar4 + uVar11 * 4;
      }
      lVar7 = 0;
      do {
        *(undefined4 *)(lVar4 + lVar7 * 4) = 0x3f800000;
        lVar7 = lVar7 + 1;
      } while (iVar5 != (int)lVar7);
    }
    return;
  }
  if (lVar4 == 2) {
    if (param_12[1] != 0xf) {
      param_12[1] = 2;
      *(undefined4 *)param_12 = 0x3f800000;
      return;
    }
  }
  else {
    if (lVar4 != 1) {
      pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               "expr: FUNV_EVAL_UNARY(%d): bad left type %ld\n",0x798,lVar4,param_13,param_14);
      return;
    }
    if (param_12[1] != 0xf) {
      *param_12 = _DAT_0065ada0;
      param_12[1] = lVar7;
      return;
    }
  }
  ex_mkvector(DAT_005d9038,*param_12,*(int *)(param_9 + 0x28f8));
  return;
}


