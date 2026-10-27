// Function : text_define_notify
// Namespace: 
// Entry    : 00557140
// Prototype: undefined text_define_notify(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9)
// Body     : 00557140 - 005571d8


void text_define_notify(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       double param_5,double param_6,double param_7,undefined8 param_8,long param_9)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 unaff_BL;
  uint *in_R8;
  uint *in_R9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar5;
  undefined1 in_stack_00000008;
  
  plVar1 = *(long **)(param_9 + 0x58);
  puVar3 = gensym("updated");
  uVar4 = 0;
  outlet_anything(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1,
                  puVar3,0,(int *)0x0,in_R8,in_R9);
  if (*(long *)(param_9 + 0x40) == 0) {
    return;
  }
  pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x65a110,
              "^",param_9,uVar4,in_R8,in_R9,unaff_BL);
  uVar2 = binbuf_getnatom(*(undefined4 **)(param_9 + 0x30));
  uVar4 = binbuf_getvec(*(long *)(param_9 + 0x30));
  uVar5 = pdgui_vmess(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      0x65a126,"^A",param_9,(ulong)uVar2,uVar4,in_R9,unaff_BL);
  pdgui_vmess(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x65a145,"^i",param_9,0,
              uVar4,in_R9,in_stack_00000008);
  return;
}


