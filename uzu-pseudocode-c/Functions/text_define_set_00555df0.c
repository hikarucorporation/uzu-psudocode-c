// Function : text_define_set
// Namespace: 
// Entry    : 00555df0
// Prototype: undefined text_define_set(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, int param_11, int * param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 00555df0 - 00555e85


void text_define_set(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,undefined8 param_10,int param_11,int *param_12,char *param_13,
                    undefined8 param_14,undefined1 param_15)

{
  uint uVar1;
  int *piVar2;
  undefined1 unaff_BL;
  undefined8 uVar3;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar4;
  
  piVar2 = param_12;
  uVar3 = binbuf_clear(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       *(int **)(param_9 + 0x30));
  uVar3 = binbuf_restore(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         *(int **)(param_9 + 0x30),param_11,param_12,piVar2,param_13,param_14);
  if (*(long *)(param_9 + 0x40) == 0) {
    return;
  }
  pdgui_vmess(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x65a110,"^",param_9,
              piVar2,param_13,param_14,unaff_BL);
  uVar1 = binbuf_getnatom(*(undefined4 **)(param_9 + 0x30));
  uVar3 = binbuf_getvec(*(long *)(param_9 + 0x30));
  uVar4 = pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      0x65a126,"^A",param_9,(ulong)uVar1,uVar3,param_14,unaff_BL);
  pdgui_vmess(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x65a145,"^i",param_9,0,
              uVar3,param_14,param_15);
  return;
}


