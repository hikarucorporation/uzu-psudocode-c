// Function : polytouchout_float
// Namespace: 
// Entry    : 00555320
// Prototype: undefined polytouchout_float(float param_1, long param_2)
// Body     : 00555320 - 0055534f


void polytouchout_float(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(*(float *)(param_2 + 0x30) + DAT_005d9054);
  uVar2 = 0;
  if (-1 < (int)uVar1) {
    uVar2 = uVar1;
  }
  outmidi_polyaftertouch(uVar2 >> 4,uVar2 & 0xf,(int)*(float *)(param_2 + 0x34),(int)param_1);
  return;
}


