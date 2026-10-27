// Function : ptrobj_rewind
// Namespace: 
// Entry    : 005ae840
// Prototype: undefined ptrobj_rewind(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005ae840 - 005ae8f2


void ptrobj_rewind(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  char *param_13,undefined8 param_14)

{
  bool bVar1;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar2;
  int iVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  long *plVar7;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar8;
  
  plVar7 = (long *)(param_9 + 0x30);
  bVar1 = gpointer_check(plVar7,1);
  uVar5 = extraout_RDX;
  uVar8 = extraout_XMM0_Qa;
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    pcVar6 = "pointer rewind: empty pointer";
  }
  else if ((int)(*(long **)(param_9 + 0x40))[1] == 1) {
    gpointer_setglist(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      plVar7,**(long **)(param_9 + 0x40),0,param_12,param_13,param_14);
    bVar1 = gpointer_check(plVar7,1);
    if ((int)CONCAT71(extraout_var_00,bVar1) != 0) {
      lVar2 = gpointer_gettemplatesym(plVar7);
      iVar3 = *(int *)(param_9 + 0x50);
      if (iVar3 != 0) {
        puVar4 = (undefined8 *)(*(long *)(param_9 + 0x48) + 8);
        do {
          if (puVar4[-1] == lVar2) {
            plVar7 = (long *)*puVar4;
            goto LAB_005ae8e4;
          }
          iVar3 = iVar3 + -1;
          puVar4 = puVar4 + 2;
        } while (iVar3 != 0);
      }
      plVar7 = *(long **)(param_9 + 0x58);
LAB_005ae8e4:
      outlet_pointer(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     plVar7);
      return;
    }
    pcVar6 = "pointer bang: empty pointer";
    uVar5 = extraout_RDX_00;
    uVar8 = extraout_XMM0_Qa_00;
  }
  else {
    pcVar6 = "pointer rewind: sorry, unavailable for arrays";
  }
  pd_error(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar6,uVar5,
           param_12,param_13,param_14);
  return;
}


