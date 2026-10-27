// Function : sigthrow_set
// Namespace: 
// Entry    : 005974c0
// Prototype: undefined sigthrow_set(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10)
// Body     : 005974c0 - 00597588


void sigthrow_set(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,long param_10)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  void *pvVar6;
  int iVar7;
  undefined8 in_R9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  *(long *)(param_9 + 0x30) = param_10;
  plVar5 = pd_findbyclass(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                          sigcatch_class);
  if (plVar5 == (long *)0x0) goto LAB_00597568;
  uVar3 = canvas_getsignallength(plVar5[7]);
  if (*(uint *)(plVar5 + 8) == uVar3) {
    iVar4 = *(int *)((long)plVar5 + 0x44);
    iVar7 = (int)plVar5[9];
    if (iVar4 != iVar7) goto LAB_00597515;
    uVar1 = *(uint *)(param_9 + 0x40);
    uVar2 = extraout_XMM0_Qa;
  }
  else {
    iVar4 = *(int *)((long)plVar5 + 0x44);
    iVar7 = (int)plVar5[9];
LAB_00597515:
    pvVar6 = resizebytes(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         (void *)plVar5[10],(long)(int)(iVar7 * *(uint *)(plVar5 + 8)) << 2,
                         (long)(int)(iVar4 * uVar3) << 2);
    plVar5[10] = (long)pvVar6;
    *(uint *)(plVar5 + 8) = uVar3;
    iVar4 = *(int *)((long)plVar5 + 0x44);
    *(int *)(plVar5 + 9) = iVar4;
    uVar1 = *(uint *)(param_9 + 0x40);
    uVar2 = extraout_XMM0_Qa_00;
  }
  if ((uVar1 == 0) || (uVar3 == uVar1)) {
    *(long *)(param_9 + 0x38) = plVar5[10];
    *(uint *)(param_9 + 0x44) = iVar4 * uVar3;
    return;
  }
  pd_error(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
           "throw~ %s: my vector size %d doesn\'t match catch~ (%d)",
           **(undefined8 **)(param_9 + 0x30),(ulong)uVar1,(char *)(ulong)uVar3,in_R9);
LAB_00597568:
  *(undefined8 *)(param_9 + 0x38) = 0;
  return;
}


