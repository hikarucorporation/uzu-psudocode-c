// Function : iemgui_dolabel
// Namespace: 
// Entry    : 00574a90
// Prototype: undefined iemgui_dolabel(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined8 * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00574a90 - 00574c6b


void iemgui_dolabel(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,long param_10,undefined8 *param_11,undefined8 param_12,
                   char *param_13,undefined8 param_14)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  int iVar11;
  char cVar12;
  char *pcVar13;
  bool bVar14;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined1 in_stack_fffffffffffffea8;
  char local_138 [128];
  char local_b8 [136];
  
  iVar11 = (int)param_12;
  pcVar13 = "";
  puVar7 = gensym("");
  lVar2 = *(long *)(param_10 + 0x468);
  if ((((param_11 == (undefined8 *)0x0) ||
       (puVar8 = canvas_realizedollar
                           (extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                            ,*(long *)(param_10 + 0x30),param_11,extraout_RDX,param_12,param_13,
                            param_14), puVar8 == (undefined8 *)0x0)) ||
      (pcVar10 = (char *)*puVar8, pcVar10 == (char *)0x0)) ||
     ((*pcVar10 == '\0' || (iVar3 = strcmp(pcVar10,"empty"), iVar3 == 0)))) {
    puVar8 = puVar7;
  }
  *(undefined8 **)(param_10 + 0x468) = puVar8;
  if (iVar11 < 0) {
    uVar4 = glist_isvisible(*(long *)(param_10 + 0x30));
    if (uVar4 == 0) {
      return;
    }
    if (*(long *)(param_10 + 0x468) == lVar2) {
      return;
    }
  }
  else if (iVar11 == 0) {
    return;
  }
  sprintf(local_138,"%pLABEL",(void *)param_9);
  uVar9 = glist_getcanvas(*(long *)(param_10 + 0x30));
  if (puVar8 != puVar7) {
    pcVar13 = (char *)*puVar8;
  }
  pcVar10 = local_138;
  pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x655293,
              "cs s",uVar9,pcVar10,pcVar13,param_14,in_stack_fffffffffffffea8);
  iVar3 = glist_getzoom(*(long *)(param_10 + 0x30));
  iVar5 = text_xpix(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    param_9,*(long *)(param_10 + 0x30),extraout_RDX_00,pcVar10,pcVar13,param_14);
  iVar6 = text_ypix(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    param_9,*(long *)(param_10 + 0x30),extraout_RDX_01,pcVar10,pcVar13,param_14);
  iVar11 = *(int *)(param_10 + 0x50);
  uVar1 = *(undefined4 *)(param_10 + 0x54);
  sprintf(local_b8,"%pLABEL",(void *)param_9);
  puVar7 = gensym("");
  bVar14 = puVar7 == *(undefined8 **)(param_10 + 0x468);
  if (bVar14) {
    iVar11 = 0;
  }
  cVar12 = '\a';
  if (!bVar14) {
    cVar12 = (char)uVar1;
  }
  uVar9 = glist_getcanvas(*(long *)(param_10 + 0x30));
  pdgui_vmess(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs ii"
              ,uVar9,"coords",local_b8,(ulong)(uint)(iVar11 * iVar3 + iVar5),
              cVar12 * (char)iVar3 + (char)iVar6);
  return;
}


