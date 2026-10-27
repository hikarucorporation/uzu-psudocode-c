// Function : glist_readatoms
// Namespace: 
// Entry    : 0051b500
// Prototype: undefined glist_readatoms(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, uint param_9, ulong param_10, uint * param_11, undefined8 * param_12, char * param_13, ulong param_14, int * param_15)
// Body     : 0051b500 - 0051b81e


void glist_readatoms(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    uint param_9,ulong param_10,uint *param_11,undefined8 *param_12,char *param_13,
                    ulong param_14,int *param_15)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  bool bVar17;
  ulong uVar18;
  char *pcVar19;
  ulong uVar20;
  uint uVar21;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar22;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  
  puVar6 = param_12;
  pcVar19 = param_13;
  uVar18 = param_14;
  lVar5 = template_findbyname(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              (long)param_12);
  if (lVar5 == 0) {
    pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
             "%s: no such template",*param_12,puVar6,pcVar19,uVar18);
    *param_11 = param_9;
  }
  else {
    uVar22 = word_restore(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          (long)param_13,lVar5,(int)param_14,param_15);
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar1) {
      uVar10 = (ulong)(int)param_9;
      uVar20 = 0;
      do {
        uVar12 = uVar20 * 3;
        iVar2 = *(int *)(*(long *)(lVar5 + 0x20) + uVar20 * 0x18);
        if (iVar2 == 2) {
          piVar8 = binbuf_new();
          uVar4 = *param_11;
          uVar16 = (ulong)uVar4;
          uVar14 = (ulong)(int)uVar4;
          if ((int)uVar4 < (int)param_9) {
            bVar17 = true;
            uVar12 = param_10;
            uVar16 = uVar14;
            if (*(int *)(param_10 + uVar14 * 0x10) != 4) {
              piVar9 = (int *)(uVar14 * 0x10 + param_10 + 0x10);
              do {
                uVar16 = uVar16 + 1;
                uVar12 = uVar10;
                if (uVar10 == uVar16) {
                  bVar17 = false;
                  uVar16 = (ulong)param_9;
                  goto LAB_0051b59b;
                }
                iVar2 = *piVar9;
                piVar9 = piVar9 + 4;
              } while (iVar2 != 4);
              bVar17 = (long)uVar16 < (long)uVar10;
            }
          }
          else {
            bVar17 = false;
          }
LAB_0051b59b:
          binbuf_restore(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,piVar8,(int)uVar16 - uVar4,(int *)(uVar14 * 0x10 + param_10),uVar12,
                         pcVar19,uVar18);
          piVar9 = *(int **)(param_13 + uVar20 * 8);
          uVar4 = binbuf_getnatom(piVar8);
          puVar6 = (undefined8 *)binbuf_getvec((long)piVar8);
          binbuf_add(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     piVar9,uVar4,puVar6,uVar12,pcVar19,uVar18);
          uVar22 = binbuf_free(piVar8);
          uVar4 = (int)uVar16 + 1;
          if (!bVar17) {
            uVar4 = param_9;
          }
          *param_11 = uVar4;
        }
        else if (iVar2 == 3) {
          piVar8 = *(int **)(param_13 + uVar20 * 8);
          iVar2 = piVar8[1];
          puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x20) + 0x10 + uVar20 * 0x18);
          lVar7 = template_findbyname(uVar22,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                                      ,(long)puVar6);
          if (lVar7 == 0) {
            uVar22 = pd_error(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,0,"%s: no such template",*puVar6,uVar12,pcVar19,uVar18);
          }
          else {
            uVar4 = *param_11;
            uVar22 = extraout_XMM0_Qa_01;
            if ((int)uVar4 < (int)param_9) {
              lVar7 = 0;
              do {
                lVar11 = (long)(int)uVar4;
                lVar15 = lVar11 * 0x10;
                bVar17 = true;
                uVar21 = uVar4;
                if (*(int *)(param_10 + lVar15) != 4) {
                  piVar9 = (int *)(param_10 + 0x10 + lVar15);
                  lVar13 = 0;
                  do {
                    if (uVar4 + (1 - param_9) == (int)lVar13) {
                      bVar17 = (lVar11 - lVar13) + 1 < (long)uVar10;
                      uVar21 = param_9;
                      goto LAB_0051b6e5;
                    }
                    lVar13 = lVar13 + -1;
                    iVar3 = *piVar9;
                    piVar9 = piVar9 + 4;
                  } while (iVar3 != 4);
                  bVar17 = lVar11 - lVar13 < (long)uVar10;
                  uVar21 = uVar4 - (int)lVar13;
                }
LAB_0051b6e5:
                *param_11 = bVar17 + uVar21;
                if (uVar21 - uVar4 == 0) break;
                uVar22 = array_resize(uVar22,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                                      ,piVar8,(int)(lVar7 + 1));
                pcVar19 = (char *)(lVar7 * iVar2 + *(long *)(piVar8 + 2));
                uVar18 = (ulong)(uVar21 - uVar4);
                uVar22 = glist_readatoms(uVar22,param_2,param_3,param_4,param_5,param_6,param_7,
                                         param_8,param_9,param_10,param_11,puVar6,pcVar19,uVar18,
                                         (int *)(lVar15 + param_10));
                uVar4 = *param_11;
                lVar7 = lVar7 + 1;
              } while ((int)uVar4 < (int)param_9);
            }
          }
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 != uVar1);
    }
  }
  return;
}


