// Function : glob_verifyquit
// Namespace: 
// Entry    : 0050e660
// Prototype: undefined glob_verifyquit(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined * param_12, char * param_13, undefined * param_14)
// Body     : 0050e660 - 0050e7b2


void glob_verifyquit(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined *param_12,
                    char *param_13,undefined *param_14)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  char *pcVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined1 uVar6;
  undefined8 in_stack_ffffffffffffff78;
  char *local_70;
  undefined4 local_68 [2];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 local_50;
  char local_48 [48];
  
  local_70 = "really quit?";
  lVar1 = pd_getcanvaslist();
  uVar3 = extraout_RDX;
  if (lVar1 != 0) {
    do {
      plVar2 = (long *)glist_finddirty(lVar1);
      uVar6 = (undefined1)in_stack_ffffffffffffff78;
      if (plVar2 != (long *)0x0) {
        pcVar5 = ".x%lx";
        sprintf(local_48,".x%lx",plVar2);
        local_68[0] = 2;
        local_60 = gensym("menuclose");
        local_58 = 1;
        local_50 = 0x40400000;
        canvas_vis((ulong)DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   plVar2,pcVar5,extraout_RDX_01,param_12,param_13,param_14,uVar6);
        uVar3 = canvas_getrootfor((long)plVar2);
        puVar4 = gensym(local_48);
        pdgui_vmess(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                    param_6,param_7,param_8,0x65481f,"^m",uVar3,puVar4,2,local_68,uVar6);
        return;
      }
      lVar1 = *(long *)(lVar1 + 0xd8);
      uVar3 = extraout_RDX_00;
    } while (lVar1 != 0);
  }
  if ((param_1 == 0.0) && (*(int *)PTR_sys_perf_00715980 != 0)) {
    pdgui_vmess(0,(ulong)(uint)param_1,param_3,param_4,param_5,param_6,param_7,param_8,0x654838,
                "r Sss",".pdwindow",1,&local_70,"pd quit",0x5b);
    return;
  }
  glob_exit(0,(ulong)(uint)param_1,param_3,param_4,param_5,param_6,param_7,param_8,0,param_10,uVar3,
            param_12,param_13,param_14);
  return;
}


