// Function : bendout_float
// Namespace: 
// Entry    : 005551f0
// Prototype: undefined bendout_float(float param_1, long param_2)
// Body     : 005551f0 - 0055521e


void bendout_float(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(*(float *)(param_2 + 0x30) + DAT_005d9054);
  uVar2 = 0;
  if (-1 < (int)uVar1) {
    uVar2 = uVar1;
  }
  outmidi_pitchbend(uVar2 >> 4,uVar2 & 0xf,(int)param_1 + 0x2000);
  return;
}


