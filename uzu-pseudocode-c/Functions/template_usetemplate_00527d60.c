// Function : template_usetemplate
// Namespace: 
// Entry    : 00527d60
// Prototype: undefined8 template_usetemplate(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, int param_11, long param_12, long * param_13, long param_14)
// Body     : 00527d60 - 00527ed5


undefined8
template_usetemplate
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined8 param_9,undefined8 param_10,int param_11,long param_12,long *param_13,
          long param_14)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  long lVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 uVar11;
  
  lVar10 = param_12;
  puVar2 = (undefined8 *)atom_getsymbolarg(0,param_11,param_12);
  puVar2 = (undefined8 *)
           canvas_makebindsym(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,puVar2);
  if (param_11 != 0) {
    uVar9 = param_11 - 1;
    piVar8 = (int *)(param_12 + 0x10);
    plVar3 = pd_findbyclass(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8,(long)puVar2,template_class);
    if (plVar3 == (long *)0x0) {
      template_new(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   puVar2,(ulong)uVar9,piVar8,lVar10,(char *)param_13,param_14);
    }
    else {
      plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
      plVar4 = template_new(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8,(undefined8 *)(*plVar4 + 0x168),(ulong)uVar9,piVar8,lVar10,
                            (char *)param_13,param_14);
      uVar5 = *(uint *)(plVar3 + 3);
      uVar6 = (ulong)uVar5;
      uVar1 = *(uint *)(plVar4 + 3);
      piVar7 = (int *)(long)(int)uVar1;
      if ((int)uVar5 < (int)uVar1) {
LAB_00527ddc:
        if (plVar3[1] == 0) {
          template_conform(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,
                           param_8,(long)plVar3,plVar4,piVar7,uVar6,param_13,param_14);
          uVar11 = pd_free(plVar3);
          plVar3 = template_new(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                puVar2,(ulong)uVar9,piVar8,uVar6,(char *)param_13,param_14);
          plVar3[1] = 0;
        }
        else {
          pd_error(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                   "%s: template mismatch",*puVar2,uVar6,(char *)param_13,param_14);
        }
      }
      else {
        if ((int)uVar1 < (int)uVar5) {
          uVar5 = uVar5 - uVar1;
          piVar7 = (int *)((long)piVar7 * 0x18 + plVar3[4]);
          do {
            uVar6 = (ulong)uVar5;
            if (*piVar7 == 3) goto LAB_00527ddc;
            piVar7 = piVar7 + 6;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        if (0 < (int)uVar1) {
          uVar6 = plVar3[4];
          piVar7 = (int *)plVar4[4];
          lVar10 = 0;
          do {
            if (((*(long *)(uVar6 + 8 + lVar10) != *(long *)((long)piVar7 + lVar10 + 8)) ||
                (*(int *)(uVar6 + lVar10) != *(int *)((long)piVar7 + lVar10))) ||
               ((*(int *)(uVar6 + lVar10) == 3 &&
                (*(long *)(uVar6 + 0x10 + lVar10) != *(long *)((long)piVar7 + lVar10 + 0x10)))))
            goto LAB_00527ddc;
            lVar10 = lVar10 + 0x18;
          } while ((ulong)uVar1 * 0x18 != lVar10);
        }
      }
      pd_free(plVar4);
    }
  }
  return 0;
}


