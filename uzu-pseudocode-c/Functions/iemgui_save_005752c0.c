// Function : iemgui_save
// Namespace: 
// Entry    : 005752c0
// Prototype: undefined iemgui_save(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005752c0 - 00575529


void iemgui_save(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,undefined8 *param_10,undefined8 *param_11,undefined8 param_12,
                char *param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  char acStack_488 [128];
  
  *param_10 = *(undefined8 *)(param_9 + 0x458);
  param_10[1] = *(undefined8 *)(param_9 + 0x460);
  param_10[2] = *(undefined8 *)(param_9 + 0x468);
  uVar6 = iemgui_init_sym2dollararg
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     (long *)(param_9 + 0x470),*(int *)(param_9 + 0x488) + 1,
                     *(long *)(param_9 + 0x458),param_13,param_14);
  uVar6 = iemgui_init_sym2dollararg
                    (uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     (long *)(param_9 + 0x478),*(int *)(param_9 + 0x488) + 2,
                     *(long *)(param_9 + 0x460),param_13,param_14);
  uVar6 = iemgui_init_sym2dollararg
                    (uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     (long *)(param_9 + 0x480),*(int *)(param_9 + 0x48c),*(long *)(param_9 + 0x468),
                     param_13,param_14);
  puVar3 = *(undefined8 **)(param_9 + 0x470);
  *param_10 = puVar3;
  puVar1 = *(undefined8 **)(param_9 + 0x478);
  param_10[1] = puVar1;
  param_10[2] = *(undefined8 *)(param_9 + 0x480);
  if (((puVar3 == (undefined8 *)0x0) || ((char *)*puVar3 == (char *)0x0)) ||
     (*(char *)*puVar3 == '\0')) {
    puVar3 = gensym("empty");
    *param_10 = puVar3;
    puVar1 = (undefined8 *)param_10[1];
    uVar6 = extraout_XMM0_Qa;
  }
  if (((puVar1 == (undefined8 *)0x0) || ((char *)*puVar1 == (char *)0x0)) ||
     (*(char *)*puVar1 == '\0')) {
    puVar3 = gensym("empty");
    param_10[1] = puVar3;
    puVar3 = (undefined8 *)param_10[2];
    uVar6 = extraout_XMM0_Qa_00;
  }
  else {
    puVar3 = (undefined8 *)param_10[2];
  }
  if (((puVar3 == (undefined8 *)0x0) || ((char *)*puVar3 == (char *)0x0)) ||
     (*(char *)*puVar3 == '\0')) {
    puVar3 = gensym("empty");
    param_10[2] = puVar3;
    uVar6 = extraout_XMM0_Qa_01;
  }
  puVar2 = PTR_pd_compatibilitylevel_00715a40;
  uVar4 = *(uint *)(param_9 + 0x450);
  if (*(int *)PTR_pd_compatibilitylevel_00715a40 < 0x30) {
    uVar4 = ~(uVar4 >> 2 & 0x3f | uVar4 >> 4 & 0xfc0 | uVar4 >> 6 & 0x3f000);
    pcVar5 = "%d";
  }
  else {
    pcVar5 = "#%06x";
  }
  pd_snprintf(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,acStack_488 + 0x80,999,
              pcVar5,(ulong)uVar4,param_13,param_14,0);
  puVar3 = gensym(acStack_488 + 0x80);
  *param_11 = puVar3;
  uVar4 = *(uint *)(param_9 + 0x44c);
  if (*(int *)puVar2 < 0x30) {
    uVar4 = ~(uVar4 >> 2 & 0x3f | uVar4 >> 4 & 0xfc0 | uVar4 >> 6 & 0x3f000);
    pcVar5 = "%d";
  }
  else {
    pcVar5 = "#%06x";
  }
  pd_snprintf(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
              acStack_488 + 0x80,999,pcVar5,(ulong)uVar4,param_13,param_14,0);
  puVar3 = gensym(acStack_488 + 0x80);
  param_11[1] = puVar3;
  uVar4 = *(uint *)(param_9 + 0x454);
  if (*(int *)puVar2 < 0x30) {
    uVar4 = ~(uVar4 >> 2 & 0x3f | uVar4 >> 4 & 0xfc0 | uVar4 >> 6 & 0x3f000);
    pcVar5 = "%d";
  }
  else {
    pcVar5 = "#%06x";
  }
  pd_snprintf(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
              acStack_488 + 0x80,999,pcVar5,(ulong)uVar4,param_13,param_14,0);
  puVar3 = gensym(acStack_488 + 0x80);
  param_11[2] = puVar3;
  return;
}


