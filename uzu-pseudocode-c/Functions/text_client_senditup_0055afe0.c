// Function : text_client_senditup
// Namespace: 
// Entry    : 0055afe0
// Prototype: undefined text_client_senditup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 0055afe0 - 0055b126


void text_client_senditup
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               char *param_13,undefined8 param_14,undefined1 param_15)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined7 extraout_var;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined1 unaff_BL;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar6;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  
  if (*(long *)(param_9 + 0x30) == 0) {
    if (*(long *)(param_9 + 0x50) != 0) {
      lVar5 = template_findbyname(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                  *(long *)(param_9 + 0x50));
      if (lVar5 == 0) {
        pd_error(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                 ,"text: couldn\'t find struct %s",**(undefined8 **)(param_9 + 0x50),param_12,
                 param_13,param_14);
        return;
      }
      plVar3 = *(long **)(param_9 + 0x48);
      bVar1 = gpointer_check((long *)(param_9 + 0x38),0);
      if ((int)CONCAT71(extraout_var,bVar1) == 0) {
        pd_error(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                 ,"text: stale or empty pointer",extraout_RDX_00,param_12,param_13,param_14);
        return;
      }
      if ((int)plVar3[1] == 1) {
        lVar5 = *(long *)(param_9 + 0x38);
      }
      else {
        do {
          lVar5 = *plVar3;
          plVar3 = *(long **)(lVar5 + 0x30);
        } while ((int)plVar3[1] == 2);
        lVar5 = *(long *)(lVar5 + 0x20);
      }
      scalar_redraw(lVar5,*plVar3);
      return;
    }
  }
  else {
    lVar5 = text_define_class;
    plVar3 = pd_findbyclass(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            *(long *)(param_9 + 0x30),text_define_class);
    if (plVar3 == (long *)0x0) {
      bug(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
          "text_client_senditup",lVar5,extraout_RDX,param_12,param_13,param_14,param_15);
      return;
    }
    if (plVar3[8] != 0) {
      pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x65a110,
                  "^",plVar3,param_12,param_13,param_14,unaff_BL);
      uVar2 = binbuf_getnatom((undefined4 *)plVar3[6]);
      uVar4 = binbuf_getvec(plVar3[6]);
      uVar6 = pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,0x65a126,"^A",plVar3,(ulong)uVar2,uVar4,param_14,unaff_BL);
      pdgui_vmess(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x65a145,"^i",plVar3
                  ,0,uVar4,param_14,param_15);
      return;
    }
  }
  return;
}


