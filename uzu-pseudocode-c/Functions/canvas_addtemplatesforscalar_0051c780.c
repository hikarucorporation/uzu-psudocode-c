// Function : canvas_addtemplatesforscalar
// Namespace: 
// Entry    : 0051c780
// Prototype: undefined canvas_addtemplatesforscalar(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, uint * param_11, undefined8 * param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 0051c780 - 0051c94c


void canvas_addtemplatesforscalar
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 *param_10,uint *param_11,undefined8 *param_12,char *param_13,
               undefined8 param_14,undefined1 param_15)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int *piVar11;
  long lVar12;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar13;
  undefined8 *local_48;
  
  puVar10 = param_10;
  lVar6 = template_findbyname(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              param_9);
  uVar1 = *param_11;
  lVar12 = (long)(int)uVar1;
  if (0 < lVar12) {
    uVar7 = 0;
    do {
      uVar13 = extraout_XMM0_Qa;
      if (*(long *)((long)*param_12 + uVar7 * 8) == param_9) goto LAB_0051c80b;
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar7);
  }
  puVar10 = (undefined8 *)(lVar12 * 8);
  pvVar8 = resizebytes(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       (void *)*param_12,(ulong)puVar10,(long)(int)uVar1 * 8 + 8);
  *(long *)((long)pvVar8 + lVar12 * 8) = param_9;
  *param_12 = pvVar8;
  *param_11 = uVar1 + 1;
  uVar13 = extraout_XMM0_Qa_00;
LAB_0051c80b:
  if (lVar6 == 0) {
    bug(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
        "canvas_addtemplatesforscalar",puVar10,param_11,param_12,param_13,param_14,param_15);
    return;
  }
  iVar5 = *(int *)(lVar6 + 0x18);
  if (iVar5 != 0) {
    piVar11 = *(int **)(lVar6 + 0x20);
    puVar10 = param_12;
    local_48 = param_10;
    do {
      iVar5 = iVar5 + -1;
      if (*piVar11 == 3) {
        puVar4 = (uint *)*local_48;
        uVar1 = puVar4[1];
        uVar2 = *puVar4;
        uVar7 = (ulong)uVar2;
        lVar6 = *(long *)(piVar11 + 4);
        uVar3 = *param_11;
        lVar12 = (long)(int)uVar3;
        pvVar8 = (void *)*param_12;
        if (0 < lVar12) {
          uVar9 = 0;
          do {
            if (*(long *)((long)pvVar8 + uVar9 * 8) == lVar6) goto LAB_0051c8d5;
            uVar9 = uVar9 + 1;
          } while (uVar3 != uVar9);
        }
        param_12 = puVar10;
        pvVar8 = resizebytes(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pvVar8,
                             lVar12 * 8,(long)(int)uVar3 * 8 + 8);
        *(long *)((long)pvVar8 + lVar12 * 8) = lVar6;
        *param_12 = pvVar8;
        *param_11 = uVar3 + 1;
        uVar13 = extraout_XMM0_Qa_01;
        puVar10 = param_12;
LAB_0051c8d5:
        if (0 < (int)uVar2) {
          lVar12 = 0;
          param_12 = puVar10;
          do {
            uVar13 = canvas_addtemplatesforscalar
                               (uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar6
                                ,(undefined8 *)(*(long *)(puVar4 + 2) + lVar12),param_11,param_12,
                                param_13,param_14,(char)param_12);
            lVar12 = lVar12 + (int)uVar1;
            uVar7 = uVar7 - 1;
            puVar10 = param_12;
          } while (uVar7 != 0);
        }
      }
      piVar11 = piVar11 + 6;
      local_48 = local_48 + 1;
    } while (iVar5 != 0);
  }
  return;
}


