// Function : canvas_undo_add
// Namespace: 
// Entry    : 0052e3b0
// Prototype: long canvas_undo_add(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, int param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 0052e3b0 - 0052e49d


long canvas_undo_add(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                    int param_10,undefined8 param_11,char *param_12,uint *param_13,
                    undefined4 *param_14)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined7 extraout_var;
  undefined8 *puVar8;
  undefined7 extraout_var_00;
  char *pcVar9;
  undefined8 extraout_RDX;
  undefined1 unaff_BL;
  undefined4 in_register_00000034;
  undefined *puVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  
  puVar10 = (undefined *)CONCAT44(in_register_00000034,param_10);
  pcVar9 = param_12;
  lVar7 = canvas_undo_get(param_9);
  if ((((param_10 == 0xd) && (lVar7 != 0)) && (lVar1 = *(long *)(lVar7 + 8), lVar1 != 0)) &&
     (*(int *)(lVar1 + 8) == 0xc)) {
    *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(lVar1 + 0x20);
    canvas_undo_rebranch
              (extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               (long *)param_9,puVar10,extraout_RDX,pcVar9,param_13,param_14);
    lVar1 = *(long *)(lVar7 + 8);
    *(undefined8 *)(lVar1 + 0x28) = 0;
    canvas_undo_set_name(*(undefined8 *)(lVar1 + 0x18));
    uVar2 = *(undefined8 *)(*(long *)(lVar7 + 8) + 0x18);
    uVar5 = glist_isvisible(param_9);
    if (uVar5 == 0) {
      return 0;
    }
    bVar4 = glist_istoplevel(param_9);
    puVar8 = (undefined8 *)0x0;
    iVar6 = (int)CONCAT71(extraout_var,bVar4);
    uVar3 = extraout_XMM0_Qa_00;
  }
  else {
    puVar8 = canvas_undo_init(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,(long *)param_9,puVar10,extraout_RDX,pcVar9,param_13,param_14)
    ;
    if (puVar8 == (undefined8 *)0x0) {
      return 0;
    }
    *(int *)(puVar8 + 1) = param_10;
    puVar8[2] = param_12;
    puVar8[3] = param_11;
    canvas_undo_set_name(param_11);
    uVar2 = puVar8[3];
    uVar5 = glist_isvisible(param_9);
    if (uVar5 == 0) {
      return (long)puVar8;
    }
    bVar4 = glist_istoplevel(param_9);
    iVar6 = (int)CONCAT71(extraout_var_00,bVar4);
    uVar3 = extraout_XMM0_Qa_01;
  }
  if (iVar6 != 0) {
    pdgui_vmess(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x654682,"^ ss",
                param_9,uVar2,&DAT_0065efc5,param_14,unaff_BL);
  }
  return (long)puVar8;
}


