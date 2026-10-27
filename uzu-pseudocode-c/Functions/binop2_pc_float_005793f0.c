// Function : binop2_pc_float
// Namespace: 
// Entry    : 005793f0
// Prototype: undefined binop2_pc_float(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005793f0 - 0057942a


void binop2_pc_float(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)*(float *)(param_9 + 0x34);
  if (iVar1 == -1) {
    outlet_float(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 *(long **)(param_9 + 0x18));
    return;
  }
  *(float *)(param_9 + 0x30) = param_1;
  iVar2 = 1;
  if (iVar1 != 0) {
    iVar2 = iVar1;
  }
  outlet_float((ulong)(uint)(float)((int)param_1 % iVar2),param_2,param_3,param_4,param_5,param_6,
               param_7,param_8,*(long **)(param_9 + 0x18));
  return;
}


