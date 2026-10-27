// Function : canvas_menuclose
// Namespace: 
// Entry    : 0050e820
// Prototype: undefined canvas_menuclose(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, char * param_10, undefined8 param_11, undefined * param_12, char * param_13, undefined * param_14, undefined1 param_15)
// Body     : 0050e820 - 0050ea44


void canvas_menuclose(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long *param_9,char *param_10,undefined8 param_11,undefined *param_12,
                     char *param_13,undefined *param_14,undefined1 param_15)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined1 auStack_97 [31];
  undefined1 uVar6;
  undefined4 uVar7;
  undefined4 in_stack_ffffffffffffff8c;
  char *local_50;
  char local_48 [48];
  uint switchD_0050e892::switchdataD_0065461c;
  
  uVar7 = 2;
  gensym("menuclose");
  if ((param_9[9] != 0) && ((uint)(int)param_1 < 2)) {
    canvas_vis(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               extraout_RDX,param_12,param_13,param_14,param_15);
    return;
  }
  puVar5 = &switchD_0050e892::switchdataD_0065461c;
  switch((int)param_1) {
  case 0:
    lVar2 = glist_finddirty((long)param_9);
    if (lVar2 != 0) goto LAB_0050e986;
    if (*(int *)PTR_sys_perf_00715980 != 0) {
      local_50 = "Close this window?";
      sprintf(local_48,".x%lx",param_9);
      uVar4 = canvas_getrootfor((long)param_9);
      puVar3 = gensym(local_48);
      pdgui_vmess(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,0x654838,"^ Sms",uVar4,1,&local_50,puVar3,2);
      return;
    }
switchD_0050e892_caseD_1:
LAB_0050ea37:
    pd_free(param_9);
    return;
  case 1:
    goto switchD_0050e892_caseD_1;
  case 2:
    canvas_dirty(0.0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,param_10,
                 extraout_RDX,&switchD_0050e892::switchdataD_0065461c,param_13,param_14);
    plVar1 = param_9;
    do {
      param_9 = plVar1;
      if ((long *)param_9[9] == (long *)0x0) break;
      plVar1 = (long *)param_9[9];
    } while ((*(byte *)((long)param_9 + 0xe9) & 8) == 0);
    lVar2 = glist_finddirty((long)param_9);
    if (lVar2 == 0) goto LAB_0050ea37;
LAB_0050e986:
    sprintf(local_48,".x%lx",lVar2);
    puVar3 = gensym("menu-open");
    pd_vmess(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,lVar2,puVar3,0x5e2ee7,puVar5,param_13,param_14,
             (double)CONCAT44(in_stack_ffffffffffffff8c,uVar7));
    uVar6 = (undefined1)uVar7;
    uVar4 = canvas_getrootfor(lVar2);
    puVar3 = gensym(local_48);
    pdgui_vmess(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
                param_6,param_7,param_8,0x65481f,"^m",uVar4,puVar3,2,auStack_97 + 0x1f,uVar6);
switchD_0050e892_default:
    return;
  case 3:
    canvas_dirty(0.0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,param_10,
                 extraout_RDX,&switchD_0050e892::switchdataD_0065461c,param_13,param_14);
    glob_verifyquit(DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                    param_10,extraout_RDX_00,(undefined *)puVar5,param_13,param_14);
    return;
  default:
    goto switchD_0050e892_default;
  }
}


