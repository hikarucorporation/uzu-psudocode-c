// Function : vu_draw_update
// Namespace: 
// Entry    : 005b1ee0
// Prototype: undefined vu_draw_update(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined8 param_11, char * param_12, char * param_13, ulong param_14)
// Body     : 005b1ee0 - 005b21a3


void vu_draw_update(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,long param_10,undefined8 param_11,char *param_12,char *param_13,
                   ulong param_14)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 uVar8;
  char local_b8 [136];
  
  bVar1 = *(byte *)(param_9 + 0x4b8);
  if ((bVar1 & 1) != 0) {
    uVar2 = glist_isvisible(param_10);
    if (uVar2 != 0) {
      iVar7 = *(int *)(*(long *)(param_9 + 0x30) + 0xec);
      iVar3 = *(int *)(param_9 + 0x44);
      iVar5 = iVar3 + 3;
      if (-1 < iVar3) {
        iVar5 = iVar3;
      }
      iVar3 = text_ypix(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        param_9,param_10,extraout_RDX,param_12,param_13,param_14);
      iVar4 = text_xpix(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        param_9,param_10,extraout_RDX_00,param_12,param_13,param_14);
      sprintf(local_b8,"%pRCOVER",(void *)param_9);
      uVar6 = glist_getcanvas(param_10);
      param_12 = "coords";
      param_13 = local_b8;
      param_14 = (ulong)(uint)(((iVar5 >> 2) - iVar7) + iVar4);
      pdgui_vmess(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                  "crs iiii",uVar6,"coords",param_13,param_14,(char)iVar3 - (char)iVar7);
    }
    bVar1 = *(byte *)(param_9 + 0x4b8) & 0xfe;
    *(byte *)(param_9 + 0x4b8) = bVar1;
  }
  if ((bVar1 & 2) != 0) {
    uVar6 = glist_getcanvas(param_10);
    uVar2 = glist_isvisible(param_10);
    if (uVar2 != 0) {
      iVar7 = *(int *)(*(long *)(param_9 + 0x30) + 0xec);
      uVar2 = text_xpix(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        param_9,param_10,extraout_RDX_01,param_12,param_13,param_14);
      iVar5 = text_ypix(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        param_9,param_10,extraout_RDX_02,param_12,param_13,param_14);
      sprintf(local_b8,"%pPLED",(void *)param_9);
      iVar3 = *(int *)(param_9 + 0x494);
      if ((long)iVar3 == 0) {
        iVar3 = *(int *)(param_9 + 0x44);
        uVar8 = pdgui_vmess(extraout_XMM0_Qa_04,param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8,0,"crs rk",uVar6,"itemconfigure",local_b8,"-fill",
                            (char)*(undefined4 *)(param_9 + 0x450));
        pdgui_vmess(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs iiii",uVar6
                    ,"coords",local_b8,(ulong)(iVar3 / 2 + uVar2),(char)iVar5 + (char)iVar7 * '\n');
      }
      else {
        iVar4 = *(int *)(PTR_iemgui_vu_col_00715ae8 + (long)iVar3 * 4);
        iVar7 = (*(int *)(param_9 + 0x490) + 1) * iVar7;
        uVar8 = pdgui_vmess(extraout_XMM0_Qa_04,param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8,0,"crs iiii",uVar6,"coords",local_b8,(ulong)uVar2,
                            ((')' - (char)iVar3) * (char)iVar7 + (char)iVar5) - (char)(iVar7 / 2));
        pdgui_vmess(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs rk",uVar6,
                    "itemconfigure",local_b8,"-fill",
                    (char)*(undefined4 *)(PTR_iemgui_color_hex_007158b0 + (long)iVar4 * 4));
      }
    }
    *(byte *)(param_9 + 0x4b8) = *(byte *)(param_9 + 0x4b8) & 0xfd;
  }
  return;
}


