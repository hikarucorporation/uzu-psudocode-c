// Function : template_cancreate
// Namespace: 
// Entry    : 0051f7b0
// Prototype: undefined8 template_cancreate(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0051f7b0 - 0051f818


undefined8
template_cancreate(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  char *param_13,undefined8 param_14)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 extraout_RDX;
  long *plVar3;
  int iVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar5;
  
  iVar4 = *(int *)(param_9 + 0x18);
  if (0 < iVar4) {
    plVar3 = (long *)(*(long *)(param_9 + 0x20) + 0x10);
    do {
      if (((int)plVar3[-2] == 3) &&
         ((lVar1 = template_findbyname(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                                       param_8,*plVar3), uVar5 = extraout_XMM0_Qa, lVar1 == 0 ||
          (uVar2 = template_cancreate(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,
                                      param_7,param_8,lVar1,param_10,extraout_RDX,param_12,param_13,
                                      param_14), param_1 = extraout_XMM0_Qa_00,
          uVar5 = extraout_XMM0_Qa_00, (int)uVar2 == 0)))) {
        pd_error(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                 "%s: no such template",*(undefined8 *)*plVar3,param_12,param_13,param_14);
        return 0;
      }
      plVar3 = plVar3 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 1;
}


