// Function : my_numbox_draw_config
// Namespace: 
// Entry    : 005a64b0
// Prototype: undefined my_numbox_draw_config(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005a64b0 - 005a68ab


void my_numbox_draw_config
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,long param_10,undefined8 param_11,undefined8 param_12,char *param_13,
               undefined8 param_14)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  char *pcVar7;
  char *pcVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined8 uVar9;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  char cVar10;
  char cVar11;
  char local_b8 [136];
  
  iVar1 = *(int *)(*(long *)(param_9 + 0x30) + 0xec);
  uVar5 = glist_getcanvas(param_10);
  uVar3 = text_xpix(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                    param_6,param_7,param_8,param_9,param_10,extraout_RDX,param_12,param_13,param_14
                   );
  iVar4 = text_ypix(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,param_9,param_10,extraout_RDX_00,param_12,
                    param_13,param_14);
  iVar2 = *(int *)(param_9 + 0x40);
  iVar6 = iVar2 / 2;
  gensym((char *)(param_9 + 0x58));
  gensym(PTR_sys_fontweight_00715e60);
  my_numbox_ftoa(param_9);
  sprintf(local_b8,"%pBASE1",(void *)param_9);
  cVar10 = (char)iVar4;
  uVar9 = pdgui_vmess(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,0,"crs  ii ii ii ii ii ii",uVar5,"coords",
                      local_b8,(ulong)uVar3,cVar10);
  cVar11 = (char)iVar1;
  pdgui_vmess(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs  ri rk rk",uVar5,
              "itemconfigure",local_b8,"-width",cVar11);
  sprintf(local_b8,"%pBASE2",(void *)param_9);
  uVar9 = pdgui_vmess(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,0,"crs  ii ii ii",uVar5,"coords",local_b8,
                      (ulong)(uVar3 + iVar1),cVar10 + cVar11);
  pdgui_vmess(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs  ri rk",uVar5,
              "itemconfigure",local_b8,"-width",cVar11);
  sprintf(local_b8,"%pLABEL",(void *)param_9);
  uVar9 = pdgui_vmess(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,0,"crs  ii",uVar5,"coords",local_b8,
                      (ulong)(*(int *)(param_9 + 0x50) * iVar1 + uVar3),
                      (char)*(undefined4 *)(param_9 + 0x54) * cVar11 + cVar10);
  pcVar8 = "-font";
  pcVar7 = local_b8;
  uVar9 = pdgui_vmess(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs  rA rk",
                      uVar5,"itemconfigure",local_b8,"-font",3);
  iemgui_dolabel(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_9,
                 *(undefined8 **)(param_9 + 0x468),1,pcVar7,pcVar8);
  sprintf(local_b8,"%pNUMBER",(void *)param_9);
  uVar9 = pdgui_vmess(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,0,"crs  ii",uVar5,"coords",local_b8,
                      (ulong)(iVar6 + uVar3 + iVar1 * 2),
                      (char)iVar6 + cVar10 + cVar11 + (char)(iVar2 / (iVar1 * 0x22)));
  pdgui_vmess(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs  rs rA rk",uVar5,
              "itemconfigure",local_b8,"-text",(char)param_9 + -0x3c);
  *(undefined1 *)(param_9 + 0x4c4) = 0;
  return;
}


