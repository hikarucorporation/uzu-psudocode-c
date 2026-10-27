// Function : template_conformglist
// Namespace: 
// Entry    : 00520fb0
// Prototype: undefined template_conformglist(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, long param_11, long * param_12, char * param_13, undefined8 param_14)
// Body     : 00520fb0 - 0052123f


void template_conformglist
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,long *param_10,long param_11,long *param_12,char *param_13,
               undefined8 param_14)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long *extraout_RDX_02;
  long extraout_RDX_03;
  long extraout_RDX_04;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar12;
  long lVar13;
  undefined8 local_48 [3];
  
  plVar7 = *(long **)(param_11 + 0x30);
  if (plVar7 != (long *)0x0) {
    plVar4 = param_12;
    plVar5 = (long *)PTR_scalar_class_00715810;
    plVar9 = param_10;
    lVar13 = param_11;
    do {
      lVar8 = *plVar7;
      if (lVar8 == *plVar5) {
        if (plVar7[2] == *(long *)(param_9 + 0x10)) {
          gpointer_init(local_48);
          plVar6 = getbytes((long)(int)param_10[3] * 8 + 0x18);
          *plVar6 = *plVar5;
          plVar6[2] = *(long *)(param_9 + 0x10);
          gpointer_setglist(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8,local_48,lVar13,plVar6,plVar4,param_13,param_14);
          plVar10 = plVar6 + 3;
          plVar9 = param_10;
          uVar12 = word_init((long)plVar10,(long)param_10,local_48);
          uVar1 = *(uint *)(param_10 + 3);
          plVar5 = extraout_RDX_02;
          if (0 < (int)uVar1) {
            if (uVar1 == 1) {
              plVar4 = (long *)0x0;
            }
            else {
              plVar5 = (long *)(ulong)(uVar1 & 0xfffffffe);
              plVar4 = (long *)0x0;
              do {
                uVar2 = *(uint *)((long)param_12 + (long)plVar4 * 4);
                if (-1 < (int)uVar2) {
                  lVar8 = plVar6[(long)((long)plVar4 + 3)];
                  plVar6[(long)((long)plVar4 + 3)] = plVar7[(ulong)uVar2 + 3];
                  plVar7[(long)*(int *)((long)param_12 + (long)plVar4 * 4) + 3] = lVar8;
                }
                uVar2 = *(uint *)((long)param_12 + (long)plVar4 * 4 + 4);
                plVar9 = (long *)(ulong)uVar2;
                if (-1 < (int)uVar2) {
                  lVar8 = plVar6[(long)((long)plVar4 + 4)];
                  plVar6[(long)((long)plVar4 + 4)] = plVar7[(long)plVar9 + 3];
                  plVar9 = (long *)(long)*(int *)((long)param_12 + (long)plVar4 * 4 + 4);
                  plVar7[(long)plVar9 + 3] = lVar8;
                }
                plVar4 = (long *)((long)plVar4 + 2);
              } while (plVar5 != plVar4);
            }
            if (((uVar1 & 1) != 0) &&
               (uVar1 = *(uint *)((long)param_12 + (long)plVar4 * 4), -1 < (int)uVar1)) {
              plVar5 = (long *)plVar10[(long)plVar4];
              plVar10[(long)plVar4] = plVar7[(ulong)uVar1 + 3];
              plVar7[(long)*(int *)((long)param_12 + (long)plVar4 * 4) + 3] = (long)plVar5;
            }
          }
          plVar10 = *(long **)(lVar13 + 0x30);
          if (*(long **)(lVar13 + 0x30) == plVar7) {
            *(long **)(lVar13 + 0x30) = plVar6;
            plVar6[1] = plVar7[1];
          }
          else {
            do {
              plVar4 = plVar10;
              plVar10 = (long *)plVar4[1];
              if (plVar10 == (long *)0x0) {
                bug(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    "template_conformscalar",plVar9,plVar5,plVar4,param_13,param_14,(char)lVar13);
                goto LAB_0052116f;
              }
            } while (plVar10 != plVar7);
            plVar6[1] = plVar7[1];
            plVar4[1] = (long)plVar6;
          }
LAB_0052116f:
          param_1 = pd_free(plVar7);
          iVar3 = (int)param_10[3];
          plVar5 = param_10;
          plVar7 = plVar6;
          param_11 = extraout_RDX_03;
        }
        else {
          plVar9 = template_class;
          plVar5 = pd_findbyclass(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                  plVar7[2],(long)template_class);
          iVar3 = (int)plVar5[3];
          param_11 = extraout_RDX_00;
          param_1 = extraout_XMM0_Qa_00;
        }
        if (0 < iVar3) {
          lVar8 = 0;
          lVar11 = 0;
          do {
            if (*(int *)(plVar5[4] + lVar8) == 3) {
              plVar9 = param_10;
              param_1 = template_conformarray
                                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                   param_9,param_10,(long)param_12,(int *)plVar7[lVar11 + 3],
                                   param_13,param_14);
              iVar3 = (int)plVar5[3];
              param_11 = extraout_RDX_04;
            }
            lVar11 = lVar11 + 1;
            plVar4 = (long *)(long)iVar3;
            lVar8 = lVar8 + 0x18;
          } while (lVar11 < (long)plVar4);
        }
        plVar5 = (long *)PTR_scalar_class_00715810;
      }
      else if (lVar8 == *(long *)PTR_canvas_class_00715918) {
        plVar4 = param_12;
        plVar9 = param_10;
        param_1 = template_conformglist
                            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                             ,param_10,(long)plVar7,param_12,param_13,param_14);
        param_11 = extraout_RDX_01;
      }
      else {
        plVar4 = (long *)PTR_garray_class_00715780;
        if (lVar8 == *(long *)PTR_garray_class_00715780) {
          plVar4 = (long *)garray_getarray(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                                           param_8,(long)plVar7,plVar9,param_11,
                                           (int *)PTR_garray_class_00715780,param_13,param_14);
          plVar9 = param_10;
          param_1 = template_conformarray
                              (extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                               param_8,param_9,param_10,(long)param_12,(int *)plVar4,param_13,
                               param_14);
          param_11 = extraout_RDX;
        }
      }
      plVar7 = (long *)plVar7[1];
    } while (plVar7 != (long *)0x0);
  }
  return;
}


