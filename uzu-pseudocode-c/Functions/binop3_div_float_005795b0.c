// Function : binop3_div_float
// Namespace: 
// Entry    : 005795b0
// Prototype: undefined binop3_div_float(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005795b0 - 005795ed


void binop3_div_float(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9)

{
  int iVar1;
  int iVar2;
  
  *(float *)(param_9 + 0x30) = param_1;
  iVar1 = (int)*(float *)(param_9 + 0x34);
  iVar2 = 1;
  if (iVar1 != 0) {
    iVar2 = iVar1;
  }
  if (iVar1 < 0) {
    iVar2 = -iVar1;
  }
  outlet_float((ulong)(uint)(float)((int)((int)param_1 - ((int)param_1 >> 0x1f & iVar2 - 1U)) /
                                   iVar2),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(long **)(param_9 + 0x18));
  return;
}


