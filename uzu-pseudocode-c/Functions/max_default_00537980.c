// Function : max_default
// Namespace: 
// Entry    : 00537980
// Prototype: undefined max_default(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, undefined8 param_10, uint param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 00537980 - 005379ef


void max_default(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 *param_9,undefined8 param_10,uint param_11,int *param_12,char *param_13,
                undefined8 param_14)

{
  int *piVar1;
  undefined8 extraout_RDX;
  ulong uVar2;
  char *pcVar3;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar4;
  char acStack_e8 [128];
  undefined1 in_stack_ffffffffffffff98;
  
  piVar1 = param_12;
  class_getname((undefined8 *)*param_9);
  uVar4 = startpost(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    "%s: unknown message %s ");
  if (0 < (int)param_11) {
    uVar2 = (ulong)param_11;
    do {
      pcVar3 = acStack_e8 + 0x80;
      uVar4 = atom_string(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_12,
                          acStack_e8 + 0x80,(uint *)0x50,piVar1,param_13,param_14,
                          in_stack_ffffffffffffff98);
      uVar4 = poststring(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         acStack_e8 + 0x80,pcVar3,extraout_RDX,piVar1,param_13,param_14,
                         in_stack_ffffffffffffff98);
      param_12 = param_12 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  endpost(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


