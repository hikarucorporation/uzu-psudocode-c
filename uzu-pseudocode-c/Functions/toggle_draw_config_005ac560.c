// Function : toggle_draw_config
// Namespace: 
// Entry    : 005ac560
// Prototype: undefined toggle_draw_config(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005ac560 - 005ac910


void toggle_draw_config(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,long param_10,undefined8 param_11,undefined8 param_12,
                       char *param_13,undefined8 param_14)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined8 uVar11;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  char cVar12;
  undefined1 uVar13;
  char local_b8 [136];
  
  iVar1 = *(int *)(*(long *)(param_9 + 0x30) + 0xec);
  uVar6 = glist_getcanvas(param_10);
  uVar3 = text_xpix(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                    param_6,param_7,param_8,param_9,param_10,extraout_RDX,param_12,param_13,param_14
                   );
  iVar4 = text_ypix(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,param_9,param_10,extraout_RDX_00,param_12,
                    param_13,param_14);
  iVar5 = *(int *)(param_9 + 0x44) / iVar1;
  gensym((char *)(param_9 + 0x58));
  gensym(PTR_sys_fontweight_00715e60);
  iVar7 = 3;
  if (iVar5 < 0x3c) {
    iVar7 = (0x1d < iVar5) + 1;
  }
  sprintf(local_b8,"%pBASE",(void *)param_9);
  cVar12 = (char)iVar4;
  uVar11 = pdgui_vmess(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                       param_5,param_6,param_7,param_8,0,"crs iiii",uVar6,"coords",local_b8,
                       (ulong)uVar3,cVar12);
  pdgui_vmess(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs ri rk",uVar6,
              "itemconfigure",local_b8,"-width",(char)iVar1);
  sprintf(local_b8,"%pX1",param_9);
  iVar4 = iVar7 * iVar1 + iVar1;
  uVar9 = iVar4 + uVar3;
  cVar2 = (char)iVar4;
  uVar11 = pdgui_vmess(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,
                       param_5,param_6,param_7,param_8,0,"crs iiii",uVar6,"coords",local_b8,
                       (ulong)uVar9,cVar2 + cVar12);
  uVar13 = (undefined1)(iVar7 * iVar1);
  pdgui_vmess(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs ri rk",uVar6,
              "itemconfigure",local_b8,"-width",uVar13);
  sprintf(local_b8,"%pX2",param_9);
  uVar11 = pdgui_vmess(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,param_4,
                       param_5,param_6,param_7,param_8,0,"crs iiii",uVar6,"coords",local_b8,
                       (ulong)uVar9,(cVar12 - cVar2) + (char)*(undefined4 *)(param_9 + 0x40));
  pdgui_vmess(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs ri rk",uVar6,
              "itemconfigure",local_b8,"-width",uVar13);
  sprintf(local_b8,"%pLABEL",(void *)param_9);
  uVar11 = pdgui_vmess(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,param_3,param_4,
                       param_5,param_6,param_7,param_8,0,"crs ii",uVar6,"coords",local_b8,
                       (ulong)(*(int *)(param_9 + 0x50) * iVar1 + uVar3),
                       (char)iVar1 * (char)*(undefined4 *)(param_9 + 0x54) + cVar12);
  pcVar10 = "-font";
  pcVar8 = local_b8;
  uVar6 = pdgui_vmess(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs rA rk",
                      uVar6,"itemconfigure",pcVar8,"-font",3);
  iemgui_dolabel(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_9,
                 *(undefined8 **)(param_9 + 0x468),1,pcVar8,pcVar10);
  return;
}


