// Function : sigreceive_set
// Namespace: 
// Entry    : 00596ca0
// Prototype: undefined sigreceive_set(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, ulong param_12, char * param_13, ulong param_14)
// Body     : 00596ca0 - 00596dd9


void sigreceive_set(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 *param_10,undefined8 param_11,ulong param_12,
                   char *param_13,ulong param_14)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  void *pvVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar9;
  
  *(undefined8 **)(param_9 + 0x30) = param_10;
  plVar3 = pd_findbyclass(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          (long)param_10,sigsend_class);
  *(undefined8 *)(param_9 + 0x38) = 0;
  if (plVar3 == (long *)0x0) {
    pcVar6 = (char *)**(undefined8 **)(param_9 + 0x30);
    if (*pcVar6 == '\0') {
      return;
    }
    pcVar7 = "receive~ %s: no matching send";
    uVar9 = extraout_XMM0_Qa;
    goto LAB_00596d9b;
  }
  iVar1 = canvas_getsignallength(plVar3[7]);
  iVar2 = pd_getdspstate();
  if ((int)plVar3[8] == iVar1) {
    uVar8 = *(uint *)((long)plVar3 + 0x44);
    param_12 = (ulong)uVar8;
    uVar5 = *(uint *)(plVar3 + 9);
    if (uVar8 != uVar5) goto LAB_00596d30;
    param_14 = param_12;
    uVar9 = extraout_XMM0_Qa_00;
    if (iVar2 == 0) goto LAB_00596d63;
LAB_00596d02:
    param_12 = (ulong)*(uint *)(param_9 + 0x44);
    param_13 = (char *)(ulong)*(uint *)(param_9 + 0x40);
    if ((uint)param_14 == *(uint *)(param_9 + 0x44)) goto LAB_00596d73;
  }
  else {
    uVar8 = *(uint *)((long)plVar3 + 0x44);
    uVar5 = *(uint *)(plVar3 + 9);
LAB_00596d30:
    pvVar4 = resizebytes(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,(void *)plVar3[10],(long)(int)(uVar5 * (int)plVar3[8]) << 2,
                         (long)(int)(uVar8 * iVar1) << 2);
    plVar3[10] = (long)pvVar4;
    *(int *)(plVar3 + 8) = iVar1;
    param_12 = (ulong)*(uint *)((long)plVar3 + 0x44);
    *(uint *)(plVar3 + 9) = *(uint *)((long)plVar3 + 0x44);
    param_14 = param_12;
    uVar9 = extraout_XMM0_Qa_01;
    if (iVar2 != 0) goto LAB_00596d02;
LAB_00596d63:
    *(int *)(param_9 + 0x44) = (int)param_12;
    param_13 = (char *)(ulong)*(uint *)(param_9 + 0x40);
    param_14 = param_12;
LAB_00596d73:
    if (iVar1 == (int)param_13) {
      *(long *)(param_9 + 0x38) = plVar3[10];
      return;
    }
  }
  if ((int)param_13 != 0) {
    if ((iVar2 != 0) && (iVar1 == (int)param_13)) {
      pcVar6 = (char *)*param_10;
      pcVar7 = "receive~ (set %s) changed number of channels; restart DSP to fix";
LAB_00596d9b:
      pd_error(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar7,pcVar6,
               param_12,param_13,param_14);
      return;
    }
    pd_error(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "receive~ %s: dimensions %dx%d don\'t match the send~ (%dx%d)",
             **(undefined8 **)(param_9 + 0x30),param_12,param_13,param_14);
  }
  return;
}


