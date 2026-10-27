// Function : stripnote_float
// Namespace: 
// Entry    : 00555610
// Prototype: undefined stripnote_float(ulong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00555610 - 00555650


void stripnote_float(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  uVar1 = 0;
  uVar2 = 0;
  if (*(float *)(param_9 + 0x30) == 0.0) {
    return;
  }
  uVar3 = param_1;
  outlet_float((ulong)(uint)*(float *)(param_9 + 0x30),0,param_1,param_4,param_5,param_6,param_7,
               param_8,*(long **)(param_9 + 0x40));
  outlet_float(param_1 & 0xffffffff,CONCAT44(uVar2,uVar1),uVar3,param_4,param_5,param_6,param_7,
               param_8,*(long **)(param_9 + 0x38));
  return;
}


