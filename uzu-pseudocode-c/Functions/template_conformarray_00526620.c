// Function : template_conformarray
// Namespace: 
// Entry    : 00526620
// Prototype: undefined template_conformarray(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, long param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 00526620 - 005268a2


void template_conformarray
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,long *param_10,long param_11,int *param_12,char *param_13,
               undefined8 param_14)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  void *pvVar9;
  int *piVar10;
  ulong uVar11;
  undefined8 extraout_RDX;
  ulong extraout_RDX_00;
  ulong uVar12;
  int iVar13;
  long lVar14;
  void *pvVar15;
  long lVar16;
  void *pvVar17;
  long lVar18;
  long lVar19;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar20;
  undefined1 in_stack_ffffffffffffff88;
  
  if (*(long *)(param_12 + 4) == *(long *)(param_9 + 0x10)) {
    iVar13 = *(int *)(param_9 + 0x18) * 8;
    uVar8 = (ulong)((int)param_10[3] << 3);
    piVar10 = param_12;
    plVar7 = param_10;
    pvVar9 = getbytes((long)*param_12 * uVar8);
    pvVar3 = *(void **)(param_12 + 2);
    if (param_12[1] != iVar13) {
      bug(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
          "template_conformarray",plVar7,extraout_RDX,piVar10,param_13,param_14,
          in_stack_ffffffffffffff88);
    }
    if (0 < *param_12) {
      lVar14 = (long)pvVar9 + 8;
      lVar16 = 0;
      do {
        pvVar17 = (void *)(lVar16 * uVar8 + (long)pvVar9);
        uVar11 = uVar8;
        uVar20 = word_init((long)pvVar17,(long)param_10,param_12 + 8);
        pvVar15 = (void *)(lVar16 * iVar13 + (long)pvVar3);
        uVar1 = *(uint *)(param_10 + 3);
        param_13 = (char *)(ulong)uVar1;
        uVar12 = extraout_RDX_00;
        if (0 < (int)uVar1) {
          if (uVar1 == 1) {
            uVar11 = 0;
          }
          else {
            uVar12 = (ulong)(uVar1 & 0xfffffffe);
            uVar11 = 0;
            do {
              uVar2 = *(uint *)(param_11 + uVar11 * 4);
              if (-1 < (int)uVar2) {
                uVar4 = *(undefined8 *)(lVar14 + -8 + uVar11 * 8);
                *(undefined8 *)(lVar14 + -8 + uVar11 * 8) =
                     *(undefined8 *)((long)pvVar15 + (ulong)uVar2 * 8);
                *(undefined8 *)((long)pvVar15 + (long)*(int *)(param_11 + uVar11 * 4) * 8) = uVar4;
              }
              uVar2 = *(uint *)(param_11 + 4 + uVar11 * 4);
              if (-1 < (int)uVar2) {
                uVar4 = *(undefined8 *)(lVar14 + uVar11 * 8);
                *(undefined8 *)(lVar14 + uVar11 * 8) =
                     *(undefined8 *)((long)pvVar15 + (ulong)uVar2 * 8);
                *(undefined8 *)((long)pvVar15 + (long)*(int *)(param_11 + 4 + uVar11 * 4) * 8) =
                     uVar4;
              }
              uVar11 = uVar11 + 2;
            } while (uVar12 != uVar11);
          }
          if (((uVar1 & 1) != 0) && (uVar1 = *(uint *)(param_11 + uVar11 * 4), -1 < (int)uVar1)) {
            uVar12 = *(ulong *)((long)pvVar17 + uVar11 * 8);
            *(undefined8 *)((long)pvVar17 + uVar11 * 8) =
                 *(undefined8 *)((long)pvVar15 + (ulong)uVar1 * 8);
            *(ulong *)((long)pvVar15 + (long)*(int *)(param_11 + uVar11 * 4) * 8) = uVar12;
          }
        }
        word_free(uVar20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)pvVar15,
                  param_9,uVar12,uVar11,param_13,param_14);
        lVar16 = lVar16 + 1;
        lVar14 = lVar14 + uVar8;
      } while (lVar16 < *param_12);
    }
    *(void **)(param_12 + 2) = pvVar9;
    uVar20 = freebytes(pvVar3);
    iVar13 = *param_12;
    plVar7 = param_10;
  }
  else {
    plVar7 = pd_findbyclass(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            *(long *)(param_12 + 4),template_class);
    iVar13 = *param_12;
    uVar20 = extraout_XMM0_Qa;
  }
  if ((0 < iVar13) && (iVar6 = (int)plVar7[3], 0 < iVar6)) {
    lVar14 = 0;
    lVar16 = 0;
    do {
      if (0 < iVar6) {
        lVar5 = *(long *)(param_12 + 2);
        lVar19 = 0;
        lVar18 = 0;
        do {
          if (*(int *)(plVar7[4] + lVar19) == 3) {
            uVar20 = template_conformarray
                               (uVar20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                param_9,param_10,param_11,
                                *(int **)(iVar13 * lVar14 + lVar5 + lVar18 * 8),param_13,param_14);
            iVar6 = (int)plVar7[3];
          }
          lVar18 = lVar18 + 1;
          lVar19 = lVar19 + 0x18;
        } while (lVar18 < iVar6);
        iVar13 = *param_12;
      }
      lVar16 = lVar16 + 1;
      lVar14 = lVar14 + 8;
    } while (lVar16 < iVar13);
  }
  return;
}


