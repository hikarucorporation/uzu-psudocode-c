// Function : ptrobj_delete
// Namespace: 
// Entry    : 005ae580
// Prototype: undefined ptrobj_delete(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, long * param_12, char * param_13, undefined8 param_14)
// Body     : 005ae580 - 005ae6f2


void ptrobj_delete(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,long *param_12,char *param_13
                  ,undefined8 param_14)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  char *pcVar8;
  long *plVar9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar10;
  
  puVar5 = *(undefined8 **)(param_9 + 0x40);
  if (puVar5 == (undefined8 *)0x0) {
    pcVar8 = "pointer delete: no current pointer";
  }
  else if (*(int *)(puVar5 + 1) == 1) {
    plVar9 = (long *)*puVar5;
    if ((int)plVar9[8] == *(int *)(param_9 + 0x38)) {
      plVar1 = (long *)(param_9 + 0x30);
      if (*plVar1 == 0) {
        pcVar8 = "pointer delete: pointing to head";
      }
      else {
        puVar5 = *(undefined8 **)(*plVar1 + 0x10);
        puVar3 = gensym("pd-text");
        if (puVar5 == puVar3) {
          pcVar8 = "pointer delete: can\'t delete \'pd-text\' scalar";
          param_11 = extraout_RDX;
          param_1 = extraout_XMM0_Qa;
        }
        else {
          puVar5 = *(undefined8 **)(*plVar1 + 0x10);
          puVar3 = gensym("pd-float-array");
          if (puVar5 != puVar3) {
            plVar7 = (long *)*plVar1;
            plVar6 = (long *)plVar7[1];
            if (plVar6 != (long *)0x0) {
              do {
                if (*plVar6 == *(long *)PTR_scalar_class_00715810) {
                  uVar10 = glist_delete(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,
                                        param_7,param_8,plVar9,plVar7,extraout_RDX_00,param_12,
                                        param_13,param_14);
                  *(int *)(param_9 + 0x38) = (int)plVar9[8];
                  lVar2 = plVar6[2];
                  *(long **)(param_9 + 0x30) = plVar6;
                  iVar4 = *(int *)(param_9 + 0x50);
                  if (iVar4 == 0) goto LAB_005ae6d6;
                  puVar5 = (undefined8 *)(*(long *)(param_9 + 0x48) + 8);
                  goto LAB_005ae6c5;
                }
                plVar6 = (long *)plVar6[1];
              } while (plVar6 != (long *)0x0);
            }
            uVar10 = glist_delete(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,
                                  param_7,param_8,plVar9,plVar7,extraout_RDX_00,param_12,param_13,
                                  param_14);
            *(int *)(param_9 + 0x38) = (int)plVar9[8];
            uVar10 = gpointer_unset(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                    (long)plVar1,plVar7,extraout_RDX_01,param_12,param_13,param_14);
            outlet_bang(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        *(long **)(param_9 + 0x60));
            return;
          }
          pcVar8 = "pointer delete: can\'t delete \'pd-float-array\' scalar";
          param_11 = extraout_RDX_00;
          param_1 = extraout_XMM0_Qa_00;
        }
      }
    }
    else {
      pcVar8 = "pointer delete: stale pointer";
    }
  }
  else {
    pcVar8 = "pointer delete: lists only, not arrays";
  }
  pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar8,param_11,
           param_12,param_13,param_14);
  return;
  while( true ) {
    iVar4 = iVar4 + -1;
    puVar5 = puVar5 + 2;
    if (iVar4 == 0) break;
LAB_005ae6c5:
    if (puVar5[-1] == lVar2) {
      plVar9 = (long *)*puVar5;
      goto LAB_005ae6e0;
    }
  }
LAB_005ae6d6:
  plVar9 = *(long **)(param_9 + 0x58);
LAB_005ae6e0:
  outlet_pointer(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar9);
  return;
}


