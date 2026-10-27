// Function : noteout_float
// Namespace: 
// Entry    : 00555000
// Prototype: undefined noteout_float(float param_1, long param_2)
// Body     : 00555000 - 0055502f


void noteout_float(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(*(float *)(param_2 + 0x34) + DAT_005d9054);
  uVar2 = 0;
  if (-1 < (int)uVar1) {
    uVar2 = uVar1;
  }
  outmidi_noteon(uVar2 >> 4,uVar2 & 0xf,(int)param_1,(int)*(float *)(param_2 + 0x30));
  return;
}


