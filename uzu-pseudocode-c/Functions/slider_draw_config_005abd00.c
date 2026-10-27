// Function : slider_draw_config
// Namespace: 
// Entry    : 005abd00
// Prototype: undefined slider_draw_config(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005abd00 - 005ac0af


void slider_draw_config(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,long param_10,undefined8 param_11,undefined8 param_12,
                       char *param_13,undefined8 param_14)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  char *pcVar11;
  char *pcVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined8 uVar13;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  char cVar14;
  uint local_138;
  int local_134;
  char local_b8 [136];
  
  iVar1 = *(int *)(*(long *)(param_9 + 0x30) + 0xec);
  uVar10 = glist_getcanvas(param_10);
  iVar6 = text_xpix(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                    param_6,param_7,param_8,param_9,param_10,extraout_RDX,param_12,param_13,param_14
                   );
  iVar7 = text_ypix(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,param_9,param_10,extraout_RDX_00,param_12,
                    param_13,param_14);
  iVar3 = (*(int *)(param_9 + 0x494) + 0x32) / 100;
  gensym((char *)(param_9 + 0x58));
  gensym(PTR_sys_fontweight_00715e60);
  cVar14 = (char)iVar1;
  if (*(int *)(param_9 + 0x4bc) == 0) {
    local_134 = iVar1 * -3;
    cVar4 = '\0';
  }
  else {
    cVar4 = cVar14 * -2;
    local_134 = 0;
  }
  iVar2 = *(int *)(*(long *)(param_9 + 0x30) + 0xec);
  iVar8 = text_xpix(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,param_9,param_10,extraout_RDX_01,param_12,
                    param_13,param_14);
  iVar9 = text_ypix(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,param_9,param_10,extraout_RDX_02,param_12,
                    param_13,param_14);
  if (*(int *)(param_9 + 0x4bc) == 0) {
    local_138 = iVar8 + iVar3;
    cVar5 = (char)iVar2 + (char)iVar9 + '\x01';
  }
  else {
    cVar5 = ((char)iVar9 - (char)iVar3) + (char)*(undefined4 *)(param_9 + 0x40);
    local_138 = iVar2 + iVar8 + 1;
  }
  sprintf(local_b8,"%pBASE",(void *)param_9);
  uVar13 = pdgui_vmess(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,param_4,
                       param_5,param_6,param_7,param_8,0,"crs iiii",uVar10,"coords",local_b8,
                       (ulong)(uint)(local_134 + iVar6),cVar4 + (char)iVar7);
  pdgui_vmess(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs ri rk",uVar10,
              "itemconfigure",local_b8,"-width",cVar14);
  sprintf(local_b8,"%pKNOB",(void *)param_9);
  uVar13 = pdgui_vmess(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,param_3,param_4,
                       param_5,param_6,param_7,param_8,0,"crs iiii",uVar10,"coords",local_b8,
                       (ulong)local_138,cVar5);
  pdgui_vmess(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs ri rk",uVar10,
              "itemconfigure",local_b8,"-width",cVar14 * '\x02' + '\x01');
  sprintf(local_b8,"%pLABEL",(void *)param_9);
  uVar13 = pdgui_vmess(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05),param_2,param_3,param_4,
                       param_5,param_6,param_7,param_8,0,"crs ii",uVar10,"coords",local_b8,
                       (ulong)(uint)(*(int *)(param_9 + 0x50) * iVar1 + iVar6),
                       cVar14 * (char)*(undefined4 *)(param_9 + 0x54) + (char)iVar7);
  pcVar12 = "-font";
  pcVar11 = local_b8;
  uVar10 = pdgui_vmess(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs rA rk",
                       uVar10,"itemconfigure",pcVar11,"-font",3);
  iemgui_dolabel(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_9,
                 *(undefined8 **)(param_9 + 0x468),1,pcVar11,pcVar12);
  return;
}


