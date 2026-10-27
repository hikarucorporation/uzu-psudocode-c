// Function : ptrobj_equal
// Namespace: 
// Entry    : 005ae700
// Prototype: undefined ptrobj_equal(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005ae700 - 005ae7a6


void ptrobj_equal(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,long *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
                 undefined8 param_14)

{
  bool bVar1;
  undefined7 extraout_var;
  long lVar2;
  int iVar3;
  undefined8 extraout_RDX;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  plVar5 = (long *)(param_9 + 0x30);
  bVar1 = gpointer_check(plVar5,1);
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "pointer equal: empty pointer",extraout_RDX,param_12,param_13,param_14);
    return;
  }
  if ((*(long *)param_10[2] != **(long **)(param_9 + 0x40)) || (*param_10 != *plVar5)) {
    outlet_bang(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                *(long **)(param_9 + 0x60));
    return;
  }
  lVar2 = gpointer_gettemplatesym(plVar5);
  iVar3 = *(int *)(param_9 + 0x50);
  if (iVar3 != 0) {
    puVar4 = (undefined8 *)(*(long *)(param_9 + 0x48) + 8);
    do {
      if (puVar4[-1] == lVar2) {
        plVar5 = (long *)*puVar4;
        goto LAB_005ae79a;
      }
      iVar3 = iVar3 + -1;
      puVar4 = puVar4 + 2;
    } while (iVar3 != 0);
  }
  plVar5 = *(long **)(param_9 + 0x58);
LAB_005ae79a:
  outlet_pointer(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5)
  ;
  return;
}


