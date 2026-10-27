// Function : bng_draw_config
// Namespace: 
// Entry    : 005a2cf0
// Prototype: undefined bng_draw_config(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005a2cf0 - 005a2fab


void bng_draw_config(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,long param_10,undefined8 param_11,undefined8 param_12,
                    char *param_13,undefined8 param_14)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  char *pcVar5;
  char *pcVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined8 uVar7;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  char cVar8;
  char cVar9;
  char local_b8 [136];
  
  iVar1 = *(int *)(*(long *)(param_9 + 0x30) + 0xec);
  uVar4 = glist_getcanvas(param_10);
  uVar2 = text_xpix(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                    param_6,param_7,param_8,param_9,param_10,extraout_RDX,param_12,param_13,param_14
                   );
  iVar3 = text_ypix(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,param_9,param_10,extraout_RDX_00,param_12,
                    param_13,param_14);
  gensym((char *)(param_9 + 0x58));
  gensym(PTR_sys_fontweight_00715e60);
  sprintf(local_b8,"%pBASE",(void *)param_9);
  cVar8 = (char)iVar3;
  uVar7 = pdgui_vmess(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,0,"crs iiii",uVar4,"coords",local_b8,
                      (ulong)uVar2,cVar8);
  cVar9 = (char)iVar1;
  pdgui_vmess(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs ri rk",uVar4,
              "itemconfigure",local_b8,"-width",cVar9);
  sprintf(local_b8,"%pBUT",(void *)param_9);
  uVar7 = pdgui_vmess(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,0,"crs iiii",uVar4,"coords",local_b8,
                      (ulong)(uVar2 + iVar1),cVar8 + cVar9);
  pdgui_vmess(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs ri rk",uVar4,
              "itemconfigure",local_b8,"-width",cVar9);
  sprintf(local_b8,"%pLABEL",(void *)param_9);
  uVar7 = pdgui_vmess(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,0,"crs ii",uVar4,"coords",local_b8,
                      (ulong)(*(int *)(param_9 + 0x50) * iVar1 + uVar2),
                      cVar9 * (char)*(undefined4 *)(param_9 + 0x54) + cVar8);
  pcVar6 = "-font";
  pcVar5 = local_b8;
  uVar4 = pdgui_vmess(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs rA rk",
                      uVar4,"itemconfigure",pcVar5,"-font",3);
  iemgui_dolabel(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_9,
                 *(undefined8 **)(param_9 + 0x468),1,pcVar5,pcVar6);
  return;
}


