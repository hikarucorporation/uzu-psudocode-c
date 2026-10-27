// Function : binop3_mod_float
// Namespace: 
// Entry    : 005794d0
// Prototype: undefined binop3_mod_float(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005794d0 - 0057950a


void binop3_mod_float(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9)

{
  uint uVar1;
  uint uVar2;
  
  *(float *)(param_9 + 0x30) = param_1;
  uVar1 = (uint)*(float *)(param_9 + 0x34);
  uVar2 = 1;
  if (uVar1 != 0) {
    uVar2 = uVar1;
  }
  if ((int)uVar1 < 0) {
    uVar2 = -uVar1;
  }
  outlet_float((ulong)(uint)(float)(int)(((int)param_1 % (int)uVar2 >> 0x1f & uVar2) +
                                        (int)param_1 % (int)uVar2),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,*(long **)(param_9 + 0x18));
  return;
}


