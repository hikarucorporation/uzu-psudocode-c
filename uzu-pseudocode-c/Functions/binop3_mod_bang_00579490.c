// Function : binop3_mod_bang
// Namespace: 
// Entry    : 00579490
// Prototype: undefined binop3_mod_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00579490 - 005794c3


void binop3_mod_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (uint)*(float *)(param_9 + 0x34);
  uVar3 = 1;
  if (uVar1 != 0) {
    uVar3 = uVar1;
  }
  if ((int)uVar1 < 0) {
    uVar3 = -uVar1;
  }
  iVar2 = (int)*(float *)(param_9 + 0x30) % (int)uVar3;
  outlet_float(CONCAT44((int)((ulong)param_1 >> 0x20),(float)(int)((iVar2 >> 0x1f & uVar3) + iVar2))
               ,param_2,param_3,param_4,param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x18));
  return;
}


