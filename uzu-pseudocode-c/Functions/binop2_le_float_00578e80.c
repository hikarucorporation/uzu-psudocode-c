// Function : binop2_le_float
// Namespace: 
// Entry    : 00578e80
// Prototype: undefined binop2_le_float(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00578e80 - 00578ea1


void binop2_le_float(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9)

{
  *(float *)(param_9 + 0x30) = param_1;
  outlet_float((ulong)(-(uint)(param_1 <= *(float *)(param_9 + 0x34)) & DAT_005d9038),
               (ulong)DAT_005d9038,param_3,param_4,param_5,param_6,param_7,param_8,
               *(long **)(param_9 + 0x18));
  return;
}


