// Function : radio_draw_config
// Namespace: 
// Entry    : 005a8a50
// Prototype: undefined radio_draw_config(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005a8a50 - 005a8e48


void radio_draw_config(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9,long param_10,undefined8 param_11,undefined8 param_12,
                      char *param_13,undefined8 param_14)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  int iVar9;
  int iVar10;
  int param3;
  char *param0;
  char *pcVar11;
  int iVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined8 uVar13;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  char cVar14;
  uint local_154;
  ulong local_118;
  char local_b8 [136];
  
  iVar1 = *(int *)(*(long *)(param_9 + 0x30) + 0xec);
  uVar6 = glist_getcanvas(param_10);
  uVar3 = text_xpix(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                    param_6,param_7,param_8,param_9,param_10,extraout_RDX,param_12,param_13,param_14
                   );
  iVar4 = text_ypix(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,param_9,param_10,extraout_RDX_00,param_12,
                    param_13,param_14);
  gensym((char *)(param_9 + 0x58));
  gensym(PTR_sys_fontweight_00715e60);
  if (*(int *)(param_9 + 0x4a8) == 0) {
    iVar8 = *(int *)(param_9 + 0x44);
    iVar9 = 0;
    iVar5 = iVar8;
  }
  else {
    iVar9 = *(int *)(param_9 + 0x40);
    iVar8 = 0;
    iVar5 = iVar9;
  }
  iVar12 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar12 = iVar5;
  }
  cVar14 = (char)iVar1;
  if (0 < *(int *)(param_9 + 0x49c)) {
    iVar10 = (iVar12 >> 2) + iVar4;
    uVar7 = (iVar12 >> 2) + uVar3;
    iVar5 = *(int *)(param_9 + 0x490);
    param3 = 0;
    local_154 = uVar3;
    iVar12 = iVar4;
    do {
      local_118 = (ulong)uVar7;
      uVar2 = *(undefined4 *)(param_9 + 0x44c + (ulong)(param3 != iVar5) * 4);
      sprintf(local_b8,"%pBASE%d",(void *)param_9,param3);
      uVar13 = pdgui_vmess(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4
                           ,param_5,param_6,param_7,param_8,0,"crs iiii",uVar6,"coords",local_b8,
                           (ulong)local_154,(char)iVar12);
      pdgui_vmess(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs ri rk",uVar6
                  ,"itemconfigure",local_b8,"-width",cVar14);
      sprintf(local_b8,"%pBUT%d",(void *)param_9,param3);
      uVar13 = pdgui_vmess(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4
                           ,param_5,param_6,param_7,param_8,0,"crs iiii",uVar6,"coords",local_b8,
                           local_118,(char)iVar10);
      pdgui_vmess(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs rk rk",uVar6
                  ,"itemconfigure",local_b8,"-fill",(char)uVar2);
      local_154 = local_154 + iVar8;
      uVar7 = uVar7 + iVar8;
      iVar12 = iVar12 + iVar9;
      iVar10 = iVar10 + iVar9;
      iVar5 = *(int *)(param_9 + 0x490);
      *(int *)(param_9 + 0x4a0) = iVar5;
      param3 = param3 + 1;
    } while (param3 < *(int *)(param_9 + 0x49c));
  }
  param0 = local_b8;
  sprintf(param0,"%pLABEL",(void *)param_9);
  uVar13 = pdgui_vmess(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,param_4,
                       param_5,param_6,param_7,param_8,0,"crs ii",uVar6,"coords",param0,
                       (ulong)(*(int *)(param_9 + 0x50) * iVar1 + uVar3),
                       cVar14 * (char)*(undefined4 *)(param_9 + 0x54) + (char)iVar4);
  pcVar11 = "-font";
  uVar6 = pdgui_vmess(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs rA rk",
                      uVar6,"itemconfigure",param0,"-font",3);
  iemgui_dolabel(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_9,
                 *(undefined8 **)(param_9 + 0x468),1,param0,pcVar11);
  return;
}


