// Function : nyquist_sec
// Namespace: 
// Entry    : 00565ae0
// Prototype: undefined nyquist_sec(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00565ae0 - 00565b3d


void nyquist_sec(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9)

{
  undefined8 extraout_XMM0_Qa;
  ulong uVar1;
  double dVar2;
  float fVar3;
  
  *(undefined8 *)(param_9 + 0x40) = 0x100000000;
  sys_getsr();
  fVar3 = (float)extraout_XMM0_Qa;
  *(float *)(param_9 + 0x38) = fVar3;
  *(float *)(param_9 + 0x3c) = fVar3;
  uVar1 = CONCAT44((int)((ulong)extraout_XMM0_Qa >> 0x20),fVar3 * DAT_005d9044);
  if (*(int *)(param_9 + 0x40) != 0) {
    dVar2 = (double)(fVar3 * DAT_005d9044) * DAT_00651e50;
    uVar1 = CONCAT44((int)((ulong)dVar2 >> 0x20),(float)dVar2);
  }
  if (*(int *)(param_9 + 0x44) != 0) {
    fVar3 = DAT_005d9038 / (float)uVar1;
    param_2 = (ulong)(uint)fVar3;
    uVar1 = (ulong)(uint)fVar3;
  }
  outlet_float(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(long **)(param_9 + 0x18));
  return;
}


