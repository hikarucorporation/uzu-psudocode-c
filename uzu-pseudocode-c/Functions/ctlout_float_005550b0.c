// Function : ctlout_float
// Namespace: 
// Entry    : 005550b0
// Prototype: undefined ctlout_float(float param_1, long param_2)
// Body     : 005550b0 - 005550df


void ctlout_float(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(*(float *)(param_2 + 0x34) + DAT_005d9054);
  uVar2 = 0;
  if (-1 < (int)uVar1) {
    uVar2 = uVar1;
  }
  outmidi_controlchange(uVar2 >> 4,uVar2 & 0xf,(int)*(float *)(param_2 + 0x30),(int)param_1);
  return;
}


