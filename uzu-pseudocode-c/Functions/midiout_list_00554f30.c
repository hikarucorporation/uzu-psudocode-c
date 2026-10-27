// Function : midiout_list
// Namespace: 
// Entry    : 00554f30
// Prototype: undefined midiout_list(long param_1, undefined8 param_2, uint param_3, long param_4)
// Body     : 00554f30 - 00554f99


void midiout_list(long param_1,undefined8 param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = (uint)(*(float *)(param_1 + 0x30) + DAT_005d9054);
  if (*(float *)(param_1 + 0x30) < DAT_005d9038) {
    uVar2 = 0;
  }
  if (0 < (int)param_3) {
    lVar1 = 0;
    do {
      if (*(int *)(param_4 + lVar1) == 1) {
        outmidi_byte(uVar2,(int)*(float *)(param_4 + 8 + lVar1));
      }
      lVar1 = lVar1 + 0x10;
    } while ((ulong)param_3 * 0x10 != lVar1);
  }
  return;
}


