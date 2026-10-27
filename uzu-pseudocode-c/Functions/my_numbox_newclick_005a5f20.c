// Function : my_numbox_newclick
// Namespace: 
// Entry    : 005a5f20
// Prototype: undefined8 my_numbox_newclick(long param_1, undefined8 param_2, int param_3, int param_4, int param_5, undefined8 param_6, undefined8 param_7, int param_8)
// Body     : 005a5f20 - 005a5fdc


undefined8
my_numbox_newclick(long param_1,undefined8 param_2,int param_3,int param_4,int param_5,
                  undefined8 param_6,undefined8 param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  
  if (param_8 != 0) {
    glist_grab(*(long *)(param_1 + 0x30),param_1,0x5a5380,my_numbox_key,(int)(float)param_3,
               (int)(float)param_4);
    uVar1 = *(uint *)(param_1 + 0x440);
    uVar2 = (uint)(param_5 != 0) << 0x19;
    *(uint *)(param_1 + 0x440) = uVar2 | uVar1 & 0xfdffffff;
    if ((uVar1 & 0x8000000) == 0) {
      clock_delay(DAT_005d90c0,*(double **)(param_1 + 0x498));
      *(byte *)(param_1 + 0x443) = *(byte *)(param_1 + 0x443) | 8;
      *(undefined1 *)(param_1 + 0x4c4) = 0;
    }
    else {
      *(uint *)(param_1 + 0x440) = uVar2 | uVar1 & 0xf5ffffff;
      *(undefined1 *)(param_1 + 0x4c4) = 0;
      sys_queuegui(param_1,*(long *)(param_1 + 0x30),0x5a68b0);
    }
  }
  return 1;
}


