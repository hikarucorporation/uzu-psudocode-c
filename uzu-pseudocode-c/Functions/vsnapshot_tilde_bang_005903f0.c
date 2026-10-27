// Function : vsnapshot_tilde_bang
// Namespace: 
// Entry    : 005903f0
// Prototype: undefined vsnapshot_tilde_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005903f0 - 0059044a


void vsnapshot_tilde_bang
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9)

{
  int iVar1;
  long lVar2;
  int iVar3;
  double extraout_XMM0_Qa;
  double dVar4;
  
  if (*(int *)(param_9 + 0x34) == 0) {
    outlet_float(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 *(long **)(param_9 + 0x18));
    return;
  }
  clock_gettimesince(*(undefined8 *)(param_9 + 0x48));
  dVar4 = (double)*(float *)(param_9 + 0x44) * extraout_XMM0_Qa;
  iVar1 = (int)dVar4;
  if (iVar1 < 0) {
    lVar2 = 0;
  }
  else {
    iVar3 = *(int *)(param_9 + 0x30) + -1;
    if (iVar1 < *(int *)(param_9 + 0x30)) {
      iVar3 = iVar1;
    }
    lVar2 = (long)iVar3;
  }
  outlet_float((ulong)*(uint *)(*(long *)(param_9 + 0x38) + lVar2 * 4),dVar4,param_3,param_4,param_5
               ,param_6,param_7,param_8,*(long **)(param_9 + 0x18));
  return;
}


