// Function : rtext_activate
// Namespace: 
// Entry    : 0051e860
// Prototype: undefined rtext_activate(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, int param_10)
// Body     : 0051e860 - 0051e93c


void rtext_activate(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long *param_9,int param_10)

{
  byte *pbVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  byte *in_R9;
  undefined8 extraout_XMM0_Qa;
  undefined1 in_stack_ffffffffffffffd8;
  uint local_24 [3];
  
  local_24[1] = 0;
  local_24[0] = 0;
  lVar2 = param_9[6];
  uVar3 = glist_getcanvas(lVar2);
  if (param_10 == 0) {
    uVar4 = 0;
    uVar3 = pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        0x655262,"^si",uVar3,&DAT_005e2ee7,0,in_R9,in_stack_ffffffffffffffd8);
    if (*(long **)(*(long *)(lVar2 + 0xc0) + 0x28) == param_9) {
      *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x28) = 0;
    }
  }
  else {
    uVar4 = 1;
    uVar3 = pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        0x655262,"^si",uVar3,param_9 + 7,1,in_R9,in_stack_ffffffffffffffd8);
    lVar2 = *(long *)(lVar2 + 0xc0);
    *(long **)(lVar2 + 0x28) = param_9;
    pbVar1 = (byte *)(lVar2 + 0x88);
    *pbVar1 = *pbVar1 & 0xef;
    *(undefined4 *)((long)param_9 + 0xc) = 0;
    *(undefined4 *)(param_9 + 3) = 0;
    *(int *)(param_9 + 2) = (int)param_9[1];
  }
  *(undefined4 *)((long)param_9 + 0x14) = uVar4;
  rtext_senditup(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,2,
                 local_24 + 1,local_24,(int *)(local_24 + 2),in_R9);
  return;
}


