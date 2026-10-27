// Function : nyquist_loadbang
// Namespace: 
// Entry    : 00565960
// Prototype: undefined nyquist_loadbang(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00565960 - 005659b8


void nyquist_loadbang(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9)

{
  float fVar1;
  undefined8 extraout_XMM0_Qa;
  ulong uVar2;
  double dVar3;
  float fVar4;
  undefined4 uVar5;
  
  fVar4 = 0.0;
  uVar5 = 0;
  if (param_1 != 0.0) {
    return;
  }
  sys_getsr();
  fVar1 = (float)extraout_XMM0_Qa;
  *(float *)(param_9 + 0x38) = fVar1;
  *(float *)(param_9 + 0x3c) = fVar1;
  uVar2 = CONCAT44((int)((ulong)extraout_XMM0_Qa >> 0x20),fVar1 * DAT_005d9044);
  if (*(int *)(param_9 + 0x40) != 0) {
    dVar3 = (double)(fVar1 * DAT_005d9044) * DAT_00651e50;
    uVar2 = CONCAT44((int)((ulong)dVar3 >> 0x20),(float)dVar3);
  }
  if (*(int *)(param_9 + 0x44) != 0) {
    uVar5 = 0;
    fVar4 = DAT_005d9038 / (float)uVar2;
    uVar2 = (ulong)(uint)fVar4;
  }
  outlet_float(uVar2,CONCAT44(uVar5,fVar4),param_3,param_4,param_5,param_6,param_7,param_8,
               *(long **)(param_9 + 0x18));
  return;
}


