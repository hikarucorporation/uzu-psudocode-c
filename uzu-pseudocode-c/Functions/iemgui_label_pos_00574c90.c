// Function : iemgui_label_pos
// Namespace: 
// Entry    : 00574c90
// Prototype: undefined iemgui_label_pos(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00574c90 - 00574da2


void iemgui_label_pos(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,long param_10,undefined8 param_11,undefined8 param_12,
                     char *param_13,undefined8 param_14)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  char cVar9;
  char *pcVar10;
  bool bVar11;
  float fVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  char local_b8 [136];
  
  iVar8 = (int)param_12;
  pcVar10 = param_13;
  fVar12 = (float)atom_getfloatarg(0,iVar8,(long)param_13);
  *(int *)(param_10 + 0x50) = (int)fVar12;
  fVar12 = (float)atom_getfloatarg(1,iVar8,(long)param_13);
  *(int *)(param_10 + 0x54) = (int)fVar12;
  uVar2 = glist_isvisible(*(long *)(param_10 + 0x30));
  if (uVar2 != 0) {
    iVar3 = glist_getzoom(*(long *)(param_10 + 0x30));
    iVar4 = text_xpix(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                      param_6,param_7,param_8,param_9,*(long *)(param_10 + 0x30),extraout_RDX,
                      param_12,pcVar10,param_14);
    iVar5 = text_ypix(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,param_9,*(long *)(param_10 + 0x30),
                      extraout_RDX_00,param_12,pcVar10,param_14);
    iVar8 = *(int *)(param_10 + 0x50);
    uVar1 = *(undefined4 *)(param_10 + 0x54);
    sprintf(local_b8,"%pLABEL",(void *)param_9);
    puVar6 = gensym("");
    bVar11 = puVar6 == *(undefined8 **)(param_10 + 0x468);
    if (bVar11) {
      iVar8 = 0;
    }
    cVar9 = '\a';
    if (!bVar11) {
      cVar9 = (char)uVar1;
    }
    uVar7 = glist_getcanvas(*(long *)(param_10 + 0x30));
    pdgui_vmess(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
                param_6,param_7,param_8,0,"crs ii",uVar7,"coords",local_b8,
                (ulong)(uint)(iVar8 * iVar3 + iVar4),cVar9 * (char)iVar3 + (char)iVar5);
  }
  return;
}


