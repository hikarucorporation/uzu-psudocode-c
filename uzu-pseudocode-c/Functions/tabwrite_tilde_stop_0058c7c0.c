// Function : tabwrite_tilde_stop
// Namespace: 
// Entry    : 0058c7c0
// Prototype: undefined tabwrite_tilde_stop(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0058c7c0 - 0058c848


void tabwrite_tilde_stop(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,long param_9)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 extraout_RDX;
  undefined8 unaff_RBX;
  long lVar5;
  long lVar6;
  char *in_R8;
  undefined8 in_R9;
  long lVar7;
  undefined8 extraout_XMM0_Qa;
  
  puVar1 = PTR_garray_class_00715780;
  iVar2 = *(int *)(param_9 + 0x30);
  if (0 < iVar2) {
    lVar4 = *(long *)(param_9 + 0x38);
    lVar5 = 0x20;
    lVar7 = 0;
    do {
      if (*(int *)(lVar4 + lVar5) != 0x7fffffff) {
        lVar6 = *(long *)puVar1;
        plVar3 = pd_findbyclass(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                *(long *)(lVar4 + -0x20 + lVar5),lVar6);
        if (plVar3 == (long *)0x0) {
          param_1 = bug(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        "tabwrite_tilde_redraw",lVar6,extraout_RDX,lVar4,in_R8,in_R9,(char)unaff_RBX
                       );
        }
        else {
          param_1 = garray_redraw(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                                  param_8,(long)plVar3,lVar6,extraout_RDX,lVar4,in_R8,in_R9,
                                  (char)unaff_RBX);
        }
        lVar4 = *(long *)(param_9 + 0x38);
        *(undefined4 *)(lVar4 + lVar5) = 0x7fffffff;
        iVar2 = *(int *)(param_9 + 0x30);
      }
      lVar7 = lVar7 + 1;
      lVar5 = lVar5 + 0x30;
    } while (lVar7 < iVar2);
  }
  return;
}


