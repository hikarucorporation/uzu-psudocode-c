// Function : binop2_rs_float
// Namespace: 
// Entry    : 00579320
// Prototype: undefined binop2_rs_float(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00579320 - 00579342


void binop2_rs_float(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9)

{
  *(float *)(param_9 + 0x30) = param_1;
  outlet_float((ulong)(uint)(float)((int)param_1 >> ((byte)(int)*(float *)(param_9 + 0x34) & 0x1f)),
               param_2,param_3,param_4,param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x18));
  return;
}


