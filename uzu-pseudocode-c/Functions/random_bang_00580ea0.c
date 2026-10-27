// Function : random_bang
// Namespace: 
// Entry    : 00580ea0
// Prototype: undefined random_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00580ea0 - 00580eee


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void random_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  
  iVar3 = 1;
  if (0 < (int)*(float *)(param_9 + 0x30)) {
    iVar3 = (int)*(float *)(param_9 + 0x30);
  }
  uVar1 = *(int *)(param_9 + 0x34) * 0x1c307df1 + 0x319da917;
  dVar5 = (double)uVar1 * _DAT_006597d8;
  *(uint *)(param_9 + 0x34) = uVar1;
  dVar5 = dVar5 * (double)iVar3;
  iVar2 = (int)dVar5;
  iVar4 = iVar3 + -1;
  if (iVar2 < iVar3) {
    iVar4 = iVar2;
  }
  outlet_float((ulong)(uint)(float)iVar4,dVar5,param_3,param_4,param_5,param_6,param_7,param_8,
               *(long **)(param_9 + 0x18));
  return;
}


