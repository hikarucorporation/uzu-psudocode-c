// Function : midiout_float
// Namespace: 
// Entry    : 00554f00
// Prototype: undefined midiout_float(float param_1, long param_2)
// Body     : 00554f00 - 00554f29


void midiout_float(float param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*(float *)(param_2 + 0x30) + DAT_005d9054);
  if (*(float *)(param_2 + 0x30) < DAT_005d9038) {
    uVar1 = 0;
  }
  outmidi_byte(uVar1,(int)param_1);
  return;
}


