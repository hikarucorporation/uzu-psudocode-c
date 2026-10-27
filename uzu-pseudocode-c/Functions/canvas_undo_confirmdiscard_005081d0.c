// Function : canvas_undo_confirmdiscard
// Namespace: 
// Entry    : 005081d0
// Prototype: undefined8 canvas_undo_confirmdiscard(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9)
// Body     : 005081d0 - 005082f6


undefined8
canvas_undo_confirmdiscard
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long *param_9)

{
  bool bVar1;
  undefined7 extraout_var;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auStack_c7 [31];
  char *pcVar6;
  char local_78 [88];
  
  uVar3 = 0;
  if (*param_9 == *(long *)PTR_canvas_class_00715918) {
    puVar5 = PTR_canvas_class_00715918;
    bVar1 = canvas_isabstraction((long)param_9);
    if ((int)CONCAT71(extraout_var,bVar1) != 0) {
      lVar2 = glist_finddirty((long)param_9);
      if (lVar2 != 0) {
        uVar3 = canvas_getrootfor(lVar2);
        pcVar6 = "Discard changes to \'%s\'?";
        sprintf(local_78,".x%lx",lVar2);
        gensym("dirty");
        puVar4 = gensym("menu-open");
        pd_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar2,
                 puVar4,0x5e2ee7,puVar5,in_R8,in_R9,(double)pcVar6);
        puVar4 = gensym(local_78);
        pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    0x654838,"^ Sms",uVar3,2,auStack_c7 + 0x1f,puVar4,2);
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}


