// Function : list_store_doinsert
// Namespace: 
// Entry    : 00552bd0
// Prototype: undefined list_store_doinsert(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, uint param_10, long param_11, uint param_12, char * param_13, undefined8 param_14)
// Body     : 00552bd0 - 00552eb2


void list_store_doinsert(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,long param_9,uint param_10,long param_11,uint param_12,char *param_13,
                        undefined8 param_14)

{
  undefined8 *puVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  int *extraout_RDX;
  int *piVar11;
  int *extraout_RDX_00;
  int *extraout_RDX_01;
  long lVar12;
  void *__src;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  ulong uVar16;
  
  uVar16 = (ulong)param_10;
  piVar2 = *(int **)(param_9 + 0x40);
  lVar7 = (long)*(int *)(param_9 + 0x38);
  piVar10 = (int *)(lVar7 * 8);
  lVar12 = (long)(int)param_10;
  piVar8 = resizebytes(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar2,
                       lVar7 * 0x28,(lVar7 + lVar12) * 0x28);
  *(int **)(param_9 + 0x40) = piVar8;
  if (piVar8 == (int *)0x0) {
    *(undefined4 *)(param_9 + 0x38) = 0;
    pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,0,"list: out of memory",extraout_RDX,piVar10,param_13,param_14);
    return;
  }
  piVar11 = extraout_RDX;
  if ((piVar2 != piVar8) && (*(int *)(param_9 + 0x3c) != 0)) {
    uVar9 = *(uint *)(param_9 + 0x38);
    piVar10 = (int *)(ulong)uVar9;
    if (uVar9 != 0) {
      piVar11 = (int *)(ulong)(uVar9 - 1);
      if ((uVar9 & 3) != 0) {
        uVar13 = 0;
        do {
          if (*piVar8 == 3) {
            *(int **)(piVar8 + 2) = piVar8 + 4;
          }
          piVar8 = piVar8 + 10;
          uVar13 = uVar13 + 1;
        } while ((uVar9 & 3) != uVar13);
        piVar10 = (int *)(ulong)(uVar9 - uVar13);
      }
      if (2 < uVar9 - 1) {
        piVar8 = piVar8 + 0x18;
        do {
          if (piVar8[-0x18] == 3) {
            piVar11 = piVar8 + -0x14;
            *(int **)(piVar8 + -0x16) = piVar11;
            if (piVar8[-0xe] == 3) goto LAB_00552d7e;
LAB_00552d5a:
            if (piVar8[-4] != 3) goto LAB_00552d60;
LAB_00552d8c:
            *(int **)(piVar8 + -2) = piVar8;
            iVar6 = piVar8[6];
          }
          else {
            if (piVar8[-0xe] != 3) goto LAB_00552d5a;
LAB_00552d7e:
            piVar11 = piVar8 + -10;
            *(int **)(piVar8 + -0xc) = piVar11;
            if (piVar8[-4] == 3) goto LAB_00552d8c;
LAB_00552d60:
            iVar6 = piVar8[6];
          }
          uVar9 = (int)piVar10 - 4;
          piVar10 = (int *)(ulong)uVar9;
          if (iVar6 == 3) {
            piVar11 = piVar8 + 10;
            *(int **)(piVar8 + 8) = piVar11;
          }
          piVar8 = piVar8 + 0x28;
        } while (uVar9 != 0);
      }
    }
  }
  iVar6 = *(int *)(param_9 + 0x38) - param_12;
  if (iVar6 != 0 && (int)param_12 <= *(int *)(param_9 + 0x38)) {
    __src = (void *)((long)(int)param_12 * 0x28 + *(long *)(param_9 + 0x40));
    piVar10 = (int *)(lVar12 * 5);
    memmove((void *)((long)__src + lVar12 * 0x28),__src,(long)iVar6 * 0x28);
    piVar11 = extraout_RDX_00;
    if (*(int *)(param_9 + 0x3c) != 0) {
      uVar9 = *(uint *)(param_9 + 0x38);
      piVar11 = (int *)(ulong)uVar9;
      uVar13 = uVar9 - param_12;
      if (uVar13 != 0) {
        piVar10 = (int *)((long)(int)((int)uVar16 + param_12) * 0x28 + *(long *)(param_9 + 0x40));
        piVar11 = (int *)(ulong)(uVar9 + ~param_12);
        if ((uVar13 & 3) != 0) {
          uVar14 = 0;
          do {
            if (*piVar10 == 3) {
              *(int **)(piVar10 + 2) = piVar10 + 4;
            }
            piVar10 = piVar10 + 10;
            uVar14 = uVar14 + 1;
          } while ((uVar13 & 3) != uVar14);
          uVar13 = uVar13 - uVar14;
        }
        if (2 < uVar9 + ~param_12) {
          piVar10 = piVar10 + 0x18;
          do {
            if (piVar10[-0x18] == 3) {
              piVar11 = piVar10 + -0x14;
              *(int **)(piVar10 + -0x16) = piVar11;
              if (piVar10[-0xe] == 3) goto LAB_00552e8e;
LAB_00552e6b:
              if (piVar10[-4] != 3) goto LAB_00552e71;
LAB_00552e9c:
              *(int **)(piVar10 + -2) = piVar10;
              iVar6 = piVar10[6];
            }
            else {
              if (piVar10[-0xe] != 3) goto LAB_00552e6b;
LAB_00552e8e:
              piVar11 = piVar10 + -10;
              *(int **)(piVar10 + -0xc) = piVar11;
              if (piVar10[-4] == 3) goto LAB_00552e9c;
LAB_00552e71:
              iVar6 = piVar10[6];
            }
            if (iVar6 == 3) {
              piVar11 = piVar10 + 10;
              *(int **)(piVar10 + 8) = piVar11;
            }
            uVar13 = uVar13 - 4;
            piVar10 = piVar10 + 0x28;
          } while (uVar13 != 0);
        }
      }
    }
  }
  iVar6 = (int)uVar16;
  if (0 < iVar6) {
    uVar15 = uVar16 & 0xffffffff;
    lVar7 = (long)(int)param_12 * 0x28 + 0x10;
    lVar12 = 0;
    do {
      uVar4 = *(undefined8 *)(param_11 + lVar12);
      uVar5 = ((undefined8 *)(param_11 + lVar12))[1];
      puVar1 = (undefined8 *)(*(long *)(param_9 + 0x40) + -0x10 + lVar7);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      lVar3 = *(long *)(param_9 + 0x40);
      if (*(int *)(lVar3 + -0x10 + lVar7) == 3) {
        *(int *)(param_9 + 0x3c) = *(int *)(param_9 + 0x3c) + 1;
        gpointer_copy(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      *(undefined8 **)(lVar3 + -8 + lVar7),(undefined8 *)(lVar3 + lVar7),piVar11,
                      piVar10,param_13,param_14,(char)uVar16);
        piVar10 = (int *)(*(long *)(param_9 + 0x40) + lVar7);
        *(int **)(*(long *)(param_9 + 0x40) + -8 + lVar7) = piVar10;
        piVar11 = extraout_RDX_01;
      }
      iVar6 = (int)uVar16;
      lVar12 = lVar12 + 0x10;
      lVar7 = lVar7 + 0x28;
    } while (uVar15 * 0x10 != lVar12);
  }
  *(int *)(param_9 + 0x38) = *(int *)(param_9 + 0x38) + iVar6;
  return;
}


