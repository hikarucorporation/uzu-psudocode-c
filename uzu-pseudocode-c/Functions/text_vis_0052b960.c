// Function : text_vis
// Namespace: 
// Entry    : 0052b960
// Prototype: undefined text_vis(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, long * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0052b960 - 0052ba7d


void text_vis(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long *param_9,long *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
             undefined8 param_14)

{
  bool bVar1;
  undefined7 extraout_var;
  long *plVar2;
  long lVar3;
  undefined7 extraout_var_00;
  long lVar4;
  char *pcVar5;
  undefined8 extraout_RDX;
  char *pcVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar7;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  char acStack_498 [128];
  undefined1 in_stack_fffffffffffffbe8;
  
  if ((int)param_11 == 0) {
    lVar3 = glist_findrtext(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            (long)param_10,(long)param_9,param_11,param_12,param_13,param_14);
    bVar1 = gobj_shouldvis(param_9,param_10);
    if ((int)CONCAT71(extraout_var_00,bVar1) != 0) {
      lVar4 = rtext_gettag(lVar3);
      pcVar6 = acStack_498 + 0x80;
      if (((*(byte *)((long)param_9 + 0x2e) & 3) != 0) ||
         (uVar7 = extraout_XMM0_Qa_02, (*(byte *)(param_10 + 0x1d) & 0x20) != 0)) {
        sprintf(acStack_498 + 0x80,"%sR",lVar4);
        uVar7 = glist_getcanvas((long)param_10);
        pcVar5 = "delete";
        uVar7 = pdgui_vmess(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8,0,"crs",uVar7,"delete",acStack_498 + 0x80,param_14,
                            in_stack_fffffffffffffbe8);
        uVar7 = glist_eraseiofor(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 (long)param_10,param_9,lVar4,pcVar5,pcVar6,param_14);
      }
      rtext_erase(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar3);
    }
  }
  else {
    bVar1 = gobj_shouldvis(param_9,param_10);
    if ((int)CONCAT71(extraout_var,bVar1) != 0) {
      plVar2 = (long *)glist_findrtext(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,
                                       param_7,param_8,(long)param_10,(long)param_9,extraout_RDX,
                                       param_12,param_13,param_14);
      lVar3 = rtext_gettag((long)plVar2);
      rtext_width(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                 );
      rtext_height(plVar2);
      uVar7 = text_drawborder(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,param_9,(ulong)param_10,lVar3,param_12,param_13,1);
      rtext_draw(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2);
      return;
    }
  }
  return;
}


