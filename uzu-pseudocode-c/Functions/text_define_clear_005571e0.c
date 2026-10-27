// Function : text_define_clear
// Namespace: 
// Entry    : 005571e0
// Prototype: undefined text_define_clear(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14, undefined1 param_15)
// Body     : 005571e0 - 00557265


void text_define_clear(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                      undefined8 param_13,undefined8 param_14,undefined1 param_15)

{
  undefined1 in_AL;
  uint uVar1;
  undefined8 uVar2;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar3;
  
  uVar2 = binbuf_clear(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       *(int **)(param_9 + 0x30));
  if (*(long *)(param_9 + 0x40) == 0) {
    return;
  }
  pdgui_vmess(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x65a110,"^",param_9,
              param_12,param_13,param_14,in_AL);
  uVar1 = binbuf_getnatom(*(undefined4 **)(param_9 + 0x30));
  uVar2 = binbuf_getvec(*(long *)(param_9 + 0x30));
  uVar3 = pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      0x65a126,"^A",param_9,(ulong)uVar1,uVar2,param_14,in_AL);
  pdgui_vmess(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x65a145,"^i",param_9,0,
              uVar2,param_14,param_15);
  return;
}


