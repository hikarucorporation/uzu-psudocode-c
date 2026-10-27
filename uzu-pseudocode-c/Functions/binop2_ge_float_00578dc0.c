// Function : binop2_ge_float
// Namespace: 
// Entry    : 00578dc0
// Prototype: undefined binop2_ge_float(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00578dc0 - 00578de5


void binop2_ge_float(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9)

{
  uint uVar1;
  
  *(float *)(param_9 + 0x30) = param_1;
  uVar1 = -(uint)(*(float *)(param_9 + 0x34) <= param_1);
  outlet_float((ulong)(DAT_005d9038 & uVar1),(ulong)uVar1,param_3,param_4,param_5,param_6,param_7,
               param_8,*(long **)(param_9 + 0x18));
  return;
}


