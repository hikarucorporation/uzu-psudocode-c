// Function : scalar_vis
// Namespace: 
// Entry    : 0051fdb0
// Prototype: undefined scalar_vis(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, int param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0051fdb0 - 0052007b


void scalar_vis(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,long param_10,int param_11,undefined8 param_12,char *param_13,
               undefined8 param_14)

{
  long lVar1;
  long extraout_RAX;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  long *plVar5;
  void *param2;
  long lVar6;
  char *pcVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  uint uVar8;
  undefined4 extraout_XMM0_Da_02;
  uint uVar9;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  float fVar10;
  float fVar11;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  uint uVar12;
  undefined4 uVar13;
  undefined1 in_stack_ffffffffffffff18;
  int local_d8;
  int local_d4;
  char local_d0 [4];
  int local_cc;
  void *local_c8;
  long local_c0;
  char local_b8 [136];
  
  lVar6 = param_10;
  lVar1 = template_findbyname(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              *(long *)(param_9 + 0x10));
  local_c0 = template_findcanvas(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4
                                 ,param_5,param_6,param_7,param_8,lVar1,lVar6,extraout_RDX,param_12,
                                 param_13,param_14);
  template_findbyname(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,*(long *)(param_9 + 0x10));
  puVar2 = gensym("x");
  lVar6 = param_9 + 0x18;
  uVar8 = template_getfloat(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,
                            param_4,param_5,param_6,param_7,param_8,extraout_RAX,puVar2,lVar6,0,
                            param_13,param_14);
  puVar2 = gensym("y");
  uVar4 = 0;
  uVar9 = template_getfloat(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,
                            param_4,param_5,param_6,param_7,param_8,extraout_RAX,puVar2,lVar6,0,
                            param_13,param_14);
  if (local_c0 == 0) {
    pcVar7 = "scalar%p";
    sprintf(local_b8,"scalar%p",(void *)param_9);
    if (param_11 == 0) {
      uVar4 = glist_getcanvas(param_10);
      pdgui_vmess(CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_07),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,0,"crs",uVar4,"delete",local_b8,param_14,
                  in_stack_ffffffffffffff18);
    }
    else {
      fVar10 = glist_xtopixels((ulong)uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               param_10,pcVar7,extraout_RDX_00,uVar4,param_13,param_14);
      fVar11 = glist_ytopixels((ulong)uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               param_10,pcVar7,extraout_RDX_01,uVar4,param_13,param_14);
      uVar4 = glist_getcanvas(param_10);
      pdgui_vmess(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_06),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,0,"crr iiii rs",uVar4,"create","rectangle",
                  (ulong)((int)fVar10 - 1),(char)(int)fVar11 + -1);
    }
  }
  else {
    local_c8 = (void *)param_9;
    for (plVar5 = *(long **)(local_c0 + 0x30); param2 = local_c8, plVar5 != (long *)0x0;
        plVar5 = (long *)plVar5[1]) {
      lVar3 = pd_getparentwidget(plVar5);
      if (lVar3 != 0) {
        uVar13 = 0;
        uVar12 = uVar9;
        (**(code **)(lVar3 + 0x20))(uVar8,plVar5,param_10,lVar6,lVar1,param_11);
        param_2 = CONCAT44(uVar13,uVar12);
      }
    }
    uVar4 = glist_isselected(param_10,(long)local_c8);
    if ((int)uVar4 != 0) {
      sprintf(local_b8,"select%p",param2);
      uVar4 = glist_getcanvas(param_10);
      pdgui_vmess(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,0,"crs",uVar4,"delete",local_b8,param_14,
                  in_stack_ffffffffffffff18);
      sprintf(local_b8,"select%p",param2);
      scalar_getrect(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,(long)param2,param_10,&local_cc,(int *)local_d0
                     ,&local_d4,&local_d8);
      uVar4 = glist_getcanvas(param_10);
      param2 = local_c8;
      pdgui_vmess(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,0,"crr iiiiiiiiii ri rr rs",uVar4,"create","line",
                  (ulong)(local_cc - 1),local_d0[0] + -1);
    }
    sys_unqueuegui((long)param2);
  }
  return;
}


