// Function : slider_draw_update
// Namespace: 
// Entry    : 005ac360
// Prototype: undefined slider_draw_update(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005ac360 - 005ac489


void slider_draw_update(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,long param_10,undefined8 param_11,undefined8 param_12,
                       char *param_13,undefined8 param_14)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  int iVar6;
  char cVar7;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  char local_b8 [136];
  
  uVar2 = glist_isvisible(param_10);
  if (uVar2 != 0) {
    iVar6 = *(int *)(*(long *)(param_9 + 0x30) + 0xec);
    uVar5 = glist_getcanvas(param_10);
    text_xpix(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
              param_10,extraout_RDX,param_12,param_13,param_14);
    text_ypix(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
              param_10,extraout_RDX_00,param_12,param_13,param_14);
    iVar6 = ((*(int *)(param_9 + 0x494) + 0x32) / 100) * iVar6;
    sprintf(local_b8,"%pKNOB",(void *)param_9);
    iVar1 = *(int *)(*(long *)(param_9 + 0x30) + 0xec);
    iVar3 = text_xpix(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      param_9,param_10,extraout_RDX_01,param_12,param_13,param_14);
    iVar4 = text_ypix(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      param_9,param_10,extraout_RDX_02,param_12,param_13,param_14);
    if (*(int *)(param_9 + 0x4bc) == 0) {
      uVar2 = iVar3 + iVar6;
      cVar7 = (char)iVar4 + (char)iVar1 + '\x01';
    }
    else {
      cVar7 = ((char)iVar4 - (char)iVar6) + (char)*(undefined4 *)(param_9 + 0x40);
      uVar2 = iVar3 + iVar1 + 1;
    }
    pdgui_vmess(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                "crs iiii",uVar5,"coords",local_b8,(ulong)uVar2,cVar7);
  }
  return;
}


