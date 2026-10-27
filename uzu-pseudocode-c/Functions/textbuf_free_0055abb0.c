// Function : textbuf_free
// Namespace: 
// Entry    : 0055abb0
// Prototype: undefined textbuf_free(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0055abb0 - 0055ac59


void textbuf_free(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 char *param_13,undefined8 param_14)

{
  undefined1 in_AL;
  undefined8 *puVar1;
  long *plVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  
  if (*(void **)(param_9 + 0x30) != (void *)0x0) {
    param_1 = binbuf_free(*(void **)(param_9 + 0x30));
  }
  if (*(long *)(param_9 + 0x40) != 0) {
    pdgui_vmess(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x65470f,"^",param_9
                ,param_12,param_13,param_14,in_AL);
    guiconnect_notarget(DAT_006544a0,*(long **)(param_9 + 0x40));
  }
  puVar1 = gensym("#A");
  plVar2 = pd_findbyclass(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          (long)puVar1,text_define_class);
  if (plVar2 != (long *)0x0) {
    do {
      puVar1 = gensym("#A");
      pd_unbind(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2,
                puVar1,extraout_RDX,param_12,param_13,param_14);
      puVar1 = gensym("#A");
      plVar2 = pd_findbyclass(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,(long)puVar1,text_define_class);
    } while (plVar2 != (long *)0x0);
  }
  return;
}


