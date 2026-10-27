// Function : iemgui_verify_snd_ne_rcv
// Namespace: 
// Entry    : 005740e0
// Prototype: undefined iemgui_verify_snd_ne_rcv(long param_1)
// Body     : 005740e0 - 00574137


void iemgui_verify_snd_ne_rcv(long param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x440);
  *(uint *)(param_1 + 0x440) = uVar1 | 0x4000000;
  if ((~uVar1 & 0xc0) == 0) {
    iVar2 = strcmp((char *)**(undefined8 **)(param_1 + 0x458),
                   (char *)**(undefined8 **)(param_1 + 0x460));
    if (iVar2 == 0) {
      *(uint *)(param_1 + 0x440) = uVar1 & 0xfbffffff;
      return;
    }
  }
  return;
}


