// Function : pgmout_float
// Namespace: 
// Entry    : 00555140
// Prototype: undefined pgmout_float(float param_1, long param_2)
// Body     : 00555140 - 00555180


void pgmout_float(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)(*(float *)(param_2 + 0x30) + DAT_005d9054);
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  uVar1 = 0x7f;
  if ((int)(param_1 + DAT_005d9054) < 0x7f) {
    uVar1 = (int)(param_1 + DAT_005d9054);
  }
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  outmidi_programchange(uVar2 >> 4,uVar2 & 0xf,uVar1);
  return;
}


