// Function : vu_draw_config
// Namespace: 
// Entry    : 005b13e0
// Prototype: undefined vu_draw_config(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005b13e0 - 005b1af6


void vu_draw_config(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,long param_10,undefined8 param_11,undefined8 param_12,char *param_13
                   ,undefined8 param_14)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  int param3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined1 uVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined8 uVar15;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  undefined4 extraout_XMM0_Db_08;
  undefined4 extraout_XMM0_Db_09;
  char cVar16;
  ulong local_148;
  char local_b8 [136];
  
  iVar1 = *(int *)(*(long *)(param_9 + 0x30) + 0xec);
  uVar9 = glist_getcanvas(param_10);
  iVar6 = text_xpix(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                    param_6,param_7,param_8,param_9,param_10,extraout_RDX,param_12,param_13,param_14
                   );
  iVar7 = text_ypix(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,param_9,param_10,extraout_RDX_00,param_12,
                    param_13,param_14);
  cVar5 = (char)iVar1;
  cVar16 = (char)*(int *)(param_9 + 0x490) * cVar5;
  iVar2 = *(int *)(param_9 + 0x44);
  iVar8 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar8 = iVar2;
  }
  uVar10 = (iVar8 >> 2) + iVar6;
  iVar8 = (*(int *)(param_9 + 0x490) + 1) * iVar1;
  gensym((char *)(param_9 + 0x58));
  gensym(PTR_sys_fontweight_00715e60);
  sprintf(local_b8,"%pBASE",(void *)param_9);
  cVar4 = (char)iVar7;
  uVar15 = pdgui_vmess(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                       param_5,param_6,param_7,param_8,0,"crs iiii",uVar9,"coords",local_b8,
                       (ulong)(uint)(iVar6 - iVar1),cVar4 + cVar5 * -2);
  pdgui_vmess(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs ri rk",uVar9,
              "itemconfigure",local_b8,"-width",cVar5);
  sprintf(local_b8,"%pSCALE",(void *)param_9);
  local_148 = (ulong)(uint)(iVar2 + iVar6 + iVar1 * 4);
  pdgui_vmess(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5,
              param_6,param_7,param_8,0,"crs rA rk",uVar9,"itemconfigure",local_b8,"-font",3);
  sprintf(local_b8,"%pRLED",(void *)param_9);
  pdgui_vmess(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,param_4,param_5,
              param_6,param_7,param_8,0,"crs ri",uVar9,"itemconfigure",local_b8,"-width",cVar16);
  iVar7 = iVar7 + iVar8 * 0x28;
  lVar14 = 0;
  do {
    param3 = (int)lVar14 + 1;
    sprintf(local_b8,"%pRLED%d",(void *)param_9,param3);
    iVar3 = *(int *)(PTR_iemgui_vu_col_00715ae8 + lVar14 * 4 + 4);
    uVar15 = pdgui_vmess(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,param_3,param_4,
                         param_5,param_6,param_7,param_8,0,"crs iiii",uVar9,"coords",local_b8,
                         (ulong)(uVar10 + iVar1),(char)iVar7 - (char)(iVar8 / 2));
    pdgui_vmess(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs rk",uVar9,
                "itemconfigure",local_b8,"-fill",
                (char)*(undefined4 *)(PTR_iemgui_color_hex_007158b0 + (long)iVar3 * 4));
    sprintf(local_b8,"%pSCALE%d",(void *)param_9,param3);
    uVar15 = pdgui_vmess(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05),param_2,param_3,param_4,
                         param_5,param_6,param_7,param_8,0,"crs ii",uVar9,"coords",local_b8,
                         local_148,(char)iVar7);
    if (((int)lVar14 - 1U & 3) != 0) {
      uVar11 = 0xe7;
      if (*(int *)(param_9 + 0x4a4) != 0) {
        uVar11 = (undefined1)*(undefined8 *)(PTR_iemgui_vu_scale_str_00715500 + lVar14 * 8 + 8);
      }
      pdgui_vmess(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs rs",uVar9,
                  "itemconfigure",local_b8,"-text",uVar11);
    }
    lVar14 = lVar14 + 1;
    iVar7 = iVar7 - iVar8;
  } while (lVar14 != 0x29);
  sprintf(local_b8,"%pSCALE%d",(void *)param_9,0x29);
  uVar15 = pdgui_vmess(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_06),param_2,param_3,param_4,
                       param_5,param_6,param_7,param_8,0,"crs ii",uVar9,"coords",local_b8,local_148,
                       cVar4);
  if (*(int *)(param_9 + 0x4a4) == 0) {
    uVar11 = 0xe7;
  }
  else {
    uVar11 = (undefined1)*(undefined8 *)(PTR_iemgui_vu_scale_str_00715500 + 0x148);
  }
  pdgui_vmess(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs rs",uVar9,
              "itemconfigure",local_b8,"-text",uVar11);
  sprintf(local_b8,"%pRCOVER",(void *)param_9);
  uVar15 = pdgui_vmess(CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_07),param_2,param_3,param_4,
                       param_5,param_6,param_7,param_8,0,"crs iiii",uVar9,"coords",local_b8,
                       (ulong)uVar10,cVar4 - cVar5);
  pdgui_vmess(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs rk rk",uVar9,
              "itemconfigure",local_b8,"-fill",(char)*(undefined4 *)(param_9 + 0x450));
  sprintf(local_b8,"%pPLED",(void *)param_9);
  uVar15 = pdgui_vmess(CONCAT44(extraout_XMM0_Db_08,extraout_XMM0_Da_08),param_2,param_3,param_4,
                       param_5,param_6,param_7,param_8,0,"crs iiii",uVar9,"coords",local_b8,
                       (ulong)(uint)(iVar2 / 2 + iVar6),cVar4 + cVar5 * '\n');
  pdgui_vmess(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs ri rk",uVar9,
              "itemconfigure",local_b8,"-width",cVar16 + cVar5);
  sprintf(local_b8,"%pLABEL",(void *)param_9);
  uVar15 = pdgui_vmess(CONCAT44(extraout_XMM0_Db_09,extraout_XMM0_Da_09),param_2,param_3,param_4,
                       param_5,param_6,param_7,param_8,0,"crs ii",uVar9,"coords",local_b8,
                       (ulong)(uint)(*(int *)(param_9 + 0x50) * iVar1 + iVar6),
                       cVar5 * (char)*(undefined4 *)(param_9 + 0x54) + cVar4);
  pcVar13 = "-font";
  pcVar12 = local_b8;
  uVar9 = pdgui_vmess(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs rA rk",
                      uVar9,"itemconfigure",pcVar12,"-font",3);
  iemgui_dolabel(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_9,
                 *(undefined8 **)(param_9 + 0x468),1,pcVar12,pcVar13);
  *(byte *)(param_9 + 0x4b8) = *(byte *)(param_9 + 0x4b8) | 3;
  return;
}


