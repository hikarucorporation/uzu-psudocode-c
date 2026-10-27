// Function : list_store_delete
// Namespace: 
// Entry    : 005524e0
// Prototype: undefined list_store_delete(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, ulong param_12, char * param_13, undefined8 param_14)
// Body     : 005524e0 - 005527e2


void list_store_delete(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9,undefined8 param_10,undefined8 param_11,ulong param_12,
                      char *param_13,undefined8 param_14)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong extraout_RDX;
  undefined8 extraout_RDX_00;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  
  uVar10 = (uint)(float)param_1;
  if (-1 < (int)uVar10) {
    iVar1 = *(int *)(param_9 + 0x38);
    uVar3 = iVar1 - uVar10;
    param_12 = (ulong)uVar3;
    if (uVar3 != 0 && (int)uVar10 <= iVar1) {
      uVar5 = (uint)(float)param_2;
      uVar6 = (ulong)uVar5;
      piVar7 = *(int **)(param_9 + 0x40);
      uVar11 = uVar5;
      if ((int)uVar3 < (int)uVar5) {
        uVar11 = uVar3;
      }
      if ((int)uVar5 < 0) {
        uVar11 = uVar3;
      }
      uVar9 = (ulong)uVar11;
      uVar3 = 1;
      if (uVar5 != 0) {
        uVar3 = uVar11;
      }
      piVar2 = piVar7;
      if ((*(int *)(param_9 + 0x3c) != 0) && (0 < (int)uVar3)) {
        lVar4 = (ulong)uVar3 * 8;
        lVar8 = 0;
        do {
          if (*(int *)((long)piVar7 + lVar8 + (ulong)uVar10 * 0x28) == 3) {
            param_1 = gpointer_unset(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                                     ,*(long *)((long)piVar7 + lVar8 + (ulong)uVar10 * 0x28 + 8),
                                     uVar9,uVar6,lVar4,param_13,param_14);
            *(int *)(param_9 + 0x3c) = *(int *)(param_9 + 0x3c) + -1;
            uVar6 = extraout_RDX;
          }
          lVar8 = lVar8 + 0x28;
        } while ((ulong)uVar3 * 0x28 != lVar8);
        iVar1 = *(int *)(param_9 + 0x38);
        piVar2 = *(int **)(param_9 + 0x40);
      }
      uVar11 = uVar10 + uVar3;
      memmove(piVar2 + (long)(int)uVar10 * 10,
              piVar2 + (long)(int)uVar10 * 10 + (long)(int)uVar3 * 10,
              (long)(int)(iVar1 - uVar11) * 0x28);
      lVar8 = (long)*(int *)(param_9 + 0x38);
      lVar4 = lVar8 * 8;
      piVar2 = resizebytes(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                           param_5,param_6,param_7,param_8,*(void **)(param_9 + 0x40),lVar8 * 0x28,
                           (lVar8 - (int)uVar3) * 0x28);
      *(int **)(param_9 + 0x40) = piVar2;
      if (piVar2 == (int *)0x0) {
        *(undefined4 *)(param_9 + 0x38) = 0;
        pd_error(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,0,"list: out of memory",extraout_RDX_00,lVar4,param_13,
                 param_14);
        return;
      }
      if (*(int *)(param_9 + 0x3c) != 0) {
        iVar1 = *(int *)(param_9 + 0x38);
        if (piVar7 == piVar2) {
          uVar5 = iVar1 - uVar11;
          if (uVar5 != 0) {
            piVar7 = piVar7 + (long)(int)uVar10 * 10;
            if ((uVar5 & 3) != 0) {
              uVar10 = 0;
              do {
                if (*piVar7 == 3) {
                  *(int **)(piVar7 + 2) = piVar7 + 4;
                }
                piVar7 = piVar7 + 10;
                uVar10 = uVar10 + 1;
              } while ((uVar5 & 3) != uVar10);
              uVar5 = uVar5 - uVar10;
            }
            if (2 < iVar1 + ~uVar11) {
              piVar7 = piVar7 + 0x18;
              do {
                if (piVar7[-0x18] == 3) {
                  *(int **)(piVar7 + -0x16) = piVar7 + -0x14;
                  if (piVar7[-0xe] != 3) goto LAB_00552797;
LAB_005527be:
                  *(int **)(piVar7 + -0xc) = piVar7 + -10;
                  if (piVar7[-4] != 3) goto LAB_0055279d;
LAB_005527cc:
                  *(int **)(piVar7 + -2) = piVar7;
                  iVar1 = piVar7[6];
                }
                else {
                  if (piVar7[-0xe] == 3) goto LAB_005527be;
LAB_00552797:
                  if (piVar7[-4] == 3) goto LAB_005527cc;
LAB_0055279d:
                  iVar1 = piVar7[6];
                }
                if (iVar1 == 3) {
                  *(int **)(piVar7 + 8) = piVar7 + 10;
                }
                uVar5 = uVar5 - 4;
                piVar7 = piVar7 + 0x28;
              } while (uVar5 != 0);
            }
          }
        }
        else {
          uVar10 = iVar1 - uVar3;
          if (uVar10 != 0) {
            if ((uVar10 & 3) != 0) {
              uVar11 = 0;
              do {
                if (*piVar2 == 3) {
                  *(int **)(piVar2 + 2) = piVar2 + 4;
                }
                piVar2 = piVar2 + 10;
                uVar11 = uVar11 + 1;
              } while ((uVar10 & 3) != uVar11);
              uVar10 = uVar10 - uVar11;
            }
            if (2 < iVar1 + ~uVar3) {
              piVar2 = piVar2 + 0x18;
              do {
                if (piVar2[-0x18] == 3) {
                  *(int **)(piVar2 + -0x16) = piVar2 + -0x14;
                  if (piVar2[-0xe] != 3) goto LAB_00552706;
LAB_0055272e:
                  *(int **)(piVar2 + -0xc) = piVar2 + -10;
                  if (piVar2[-4] != 3) goto LAB_0055270c;
LAB_0055273c:
                  *(int **)(piVar2 + -2) = piVar2;
                  iVar1 = piVar2[6];
                }
                else {
                  if (piVar2[-0xe] == 3) goto LAB_0055272e;
LAB_00552706:
                  if (piVar2[-4] == 3) goto LAB_0055273c;
LAB_0055270c:
                  iVar1 = piVar2[6];
                }
                if (iVar1 == 3) {
                  *(int **)(piVar2 + 8) = piVar2 + 10;
                }
                uVar10 = uVar10 - 4;
                piVar2 = piVar2 + 0x28;
              } while (uVar10 != 0);
            }
          }
        }
      }
      *(int *)(param_9 + 0x38) = *(int *)(param_9 + 0x38) - uVar3;
      return;
    }
  }
  pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
           "list_store_delete: index %d out of range",(ulong)uVar10,param_12,param_13,param_14);
  return;
}


