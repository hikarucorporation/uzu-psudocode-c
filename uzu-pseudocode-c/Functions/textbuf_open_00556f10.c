// Function : textbuf_open
// Namespace: 
// Entry    : 00556f10
// Prototype: undefined textbuf_open(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00556f10 - 00557095


void textbuf_open(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  char *pcVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  char *pcVar7;
  char *in_R8;
  char *pcVar8;
  undefined8 in_R9;
  ulong uVar9;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 uVar11;
  char acStack_128 [128];
  undefined1 in_stack_ffffffffffffff58;
  
  pcVar6 = acStack_128 + 0x80;
  if (*(long *)(param_9 + 0x40) == 0) {
    pcVar7 = "%dx%d";
    uVar10 = 0x154;
    sprintf(acStack_128 + 0x80,"%dx%d",600,0x154);
    pcVar8 = (char *)**(undefined8 **)(param_9 + 0x48);
    uVar1 = glist_getfont(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,*(long *)(param_9 + 0x38),pcVar7,extraout_RDX,uVar10,in_R8,in_R9);
    iVar2 = glist_getzoom(*(long *)(param_9 + 0x38));
    uVar1 = sys_hostfontsize(uVar1,iVar2);
    uVar9 = (ulong)uVar1;
    pdgui_vmess(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x65a1d4
                ,"^r si",param_9,acStack_128 + 0x80,pcVar8,uVar9,in_stack_ffffffffffffff58);
    sprintf(acStack_128 + 0x80,".x%lx",param_9);
    puVar3 = gensym(acStack_128 + 0x80);
    plVar4 = guiconnect_new(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8,param_9,(long)puVar3,extraout_RDX_00,pcVar6,pcVar8,uVar9);
    *(long **)(param_9 + 0x40) = plVar4;
    if (plVar4 != (long *)0x0) {
      pdgui_vmess(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  0x65a110,"^",param_9,pcVar6,pcVar8,uVar9,in_stack_ffffffffffffff58);
      uVar1 = binbuf_getnatom(*(undefined4 **)(param_9 + 0x30));
      uVar10 = binbuf_getvec(*(long *)(param_9 + 0x30));
      uVar11 = pdgui_vmess(extraout_XMM0_Qa_04,param_2,param_3,param_4,param_5,param_6,param_7,
                           param_8,0x65a126,"^A",param_9,(ulong)uVar1,uVar10,uVar9,
                           in_stack_ffffffffffffff58);
      pdgui_vmess(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x65a145,"^i",
                  param_9,0,uVar10,uVar9,in_stack_ffffffffffffff58);
    }
  }
  else {
    sprintf(acStack_128 + 0x80,".x%lx.text",param_9);
    lVar5 = param_9;
    uVar10 = pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         0x65a1be,"r^","deiconify",param_9,in_R8,in_R9,in_stack_ffffffffffffff58);
    uVar10 = pdgui_vmess(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x6546d2,"^"
                         ,param_9,lVar5,in_R8,in_R9,in_stack_ffffffffffffff58);
    pdgui_vmess(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x653dde,"s",
                acStack_128 + 0x80,lVar5,in_R8,in_R9,in_stack_ffffffffffffff58);
  }
  return;
}


