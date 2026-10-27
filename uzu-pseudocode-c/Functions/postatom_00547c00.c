// Function : postatom
// Namespace: 
// Entry    : 00547c00
// Prototype: undefined postatom(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, uint param_9, int * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00547c00 - 00547c4e


void postatom(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             uint param_9,int *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
             undefined8 param_14)

{
  undefined8 extraout_RDX;
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  char acStack_488 [128];
  undefined1 in_stack_fffffffffffffbf8;
  
  if (0 < (int)param_9) {
    uVar2 = (ulong)param_9;
    do {
      pcVar1 = acStack_488 + 0x80;
      uVar3 = atom_string(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                          acStack_488 + 0x80,(uint *)0x3e8,param_12,param_13,param_14,
                          in_stack_fffffffffffffbf8);
      param_1 = poststring(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           acStack_488 + 0x80,pcVar1,extraout_RDX,param_12,param_13,param_14,
                           in_stack_fffffffffffffbf8);
      param_10 = param_10 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}


