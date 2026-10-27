// Function : vu_draw_io
// Namespace: 
// Entry    : 005b1b00
// Prototype: undefined vu_draw_io(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, char * param_14)
// Body     : 005b1b00 - 005b1ed9


void vu_draw_io(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,long param_10,undefined8 param_11,undefined8 param_12,char *param_13,
               char *param_14)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 uVar7;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  char cVar8;
  undefined8 uVar9;
  char local_238 [128];
  char local_1b8 [128];
  char local_138 [128];
  char local_b8 [136];
  
  iVar2 = *(int *)(*(long *)(param_9 + 0x30) + 0xec);
  uVar6 = glist_getcanvas(param_10);
  iVar4 = text_xpix(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                    ,param_10,extraout_RDX,param_12,param_13,param_14);
  iVar5 = text_ypix(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    param_9,param_10,extraout_RDX_00,param_12,param_13,param_14);
  cVar8 = (char)iVar2;
  bVar1 = *(byte *)(param_9 + 0x440);
  sprintf(local_b8,"%pOBJ",(void *)param_9);
  sprintf(local_138,"%pLABEL",(void *)param_9);
  sprintf(local_1b8,"%pOUT",(void *)param_9);
  pdgui_vmess(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs",
              uVar6,"delete",local_1b8,param_14,(char)uVar6);
  uVar9 = uVar6;
  if ((bVar1 & 0xc0) == 0) {
    sprintf(local_238,"%pOUT%d",(void *)param_9,0);
    cVar3 = (char)iVar5 + cVar8 * '\x02';
    pdgui_vmess(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                "crr iiii rs rS",uVar6,"create","rectangle",(ulong)(uint)(iVar4 - iVar2),
                (char)*(undefined4 *)(param_9 + 0x40) + cVar3 + cVar8 * -2);
    sprintf(local_238,"%pOUT%d",(void *)param_9,1);
    uVar9 = uVar6;
    uVar7 = pdgui_vmess(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        0,"crr iiii rs rS",uVar6,"create","rectangle",
                        (ulong)(uint)(iVar4 + iVar2 + *(int *)(param_9 + 0x44) + iVar2 * -7),
                        cVar3 + (char)*(undefined4 *)(param_9 + 0x40) + cVar8 * -2);
    param_14 = local_138;
    pdgui_vmess(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crss",uVar6,"lower"
                ,local_1b8,param_14,(char)uVar9);
  }
  sprintf(local_1b8,"%pIN",param_9);
  pdgui_vmess(extraout_XMM0_Qa_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs",
              uVar9,"delete",local_1b8,param_14,(char)uVar9);
  if ((*(byte *)(param_9 + 0x440) & 0x40) == 0) {
    sprintf(local_238,"%pIN%d",(void *)param_9,0);
    cVar8 = (char)iVar5 + cVar8 * -2;
    pdgui_vmess(extraout_XMM0_Qa_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                "crr iiii rs rS",uVar9,"create","rectangle",(ulong)(uint)(iVar4 - iVar2),cVar8);
    sprintf(local_238,"%pIN%d",(void *)param_9,1);
    uVar6 = uVar9;
    uVar7 = pdgui_vmess(extraout_XMM0_Qa_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        0,"crr iiii rs rS",uVar9,"create","rectangle",
                        (ulong)(uint)(iVar4 + iVar2 + *(int *)(param_9 + 0x44) + iVar2 * -7),cVar8);
    pdgui_vmess(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crss",uVar9,"lower"
                ,local_1b8,local_138,(char)uVar6);
  }
  return;
}


