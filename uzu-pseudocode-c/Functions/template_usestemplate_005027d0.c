// Function : template_usestemplate
// Namespace: 
// Entry    : 005027d0
// Prototype: undefined8 template_usestemplate(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10)
// Body     : 005027d0 - 00502855


undefined8
template_usestemplate
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
          long param_10)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  lVar1 = template_findbyname(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              param_9);
  uVar2 = 0;
  if (lVar1 != 0) {
    if (lVar1 == param_10) {
LAB_00502841:
      uVar2 = 1;
    }
    else {
      iVar3 = *(int *)(lVar1 + 0x18);
      if (0 < iVar3) {
        lVar4 = 0x10;
        lVar5 = 0;
        uVar2 = extraout_XMM0_Qa;
        do {
          if (*(int *)(*(long *)(lVar1 + 0x20) + -0x10 + lVar4) == 3) {
            uVar2 = template_usestemplate
                              (uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               *(long *)(*(long *)(lVar1 + 0x20) + lVar4),param_10);
            if ((int)uVar2 != 0) goto LAB_00502841;
            iVar3 = *(int *)(lVar1 + 0x18);
            uVar2 = extraout_XMM0_Qa_00;
          }
          lVar5 = lVar5 + 1;
          lVar4 = lVar4 + 0x18;
        } while (lVar5 < iVar3);
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}


