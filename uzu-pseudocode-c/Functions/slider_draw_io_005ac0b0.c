// Function : slider_draw_io
// Namespace: 
// Entry    : 005ac0b0
// Prototype: undefined slider_draw_io(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, char * param_14)
// Body     : 005ac0b0 - 005ac35b


void slider_draw_io(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,long param_10,undefined8 param_11,undefined8 param_12,char *param_13
                   ,char *param_14)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  int iVar7;
  char cVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qa_02;
  undefined1 in_stack_fffffffffffffe08;
  char local_1b8 [128];
  char local_138 [128];
  char local_b8 [136];
  
  iVar1 = *(int *)(*(long *)(param_9 + 0x30) + 0xec);
  uVar6 = glist_getcanvas(param_10);
  iVar4 = text_xpix(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                    ,param_10,extraout_RDX,param_12,param_13,param_14);
  iVar5 = text_ypix(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    param_9,param_10,extraout_RDX_00,param_12,param_13,param_14);
  iVar7 = iVar1 * 3;
  sprintf(local_b8,"%pOBJ",(void *)param_9);
  sprintf(local_138,"%pKNOB",(void *)param_9);
  iVar2 = *(int *)(param_9 + 0x4bc);
  cVar8 = (char)iVar1 * -2;
  iVar1 = 0;
  cVar3 = cVar8;
  if (iVar2 == 0) {
    cVar3 = '\0';
    iVar1 = iVar7;
  }
  sprintf(local_1b8,"%pOUT%d",(void *)param_9,0);
  uVar9 = pdgui_vmess(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                      "crs",uVar6,"delete",local_1b8,param_14,in_stack_fffffffffffffe08);
  if ((*(byte *)(param_9 + 0x440) & 0x80) == 0) {
    if (iVar2 == 0) {
      iVar7 = 0;
    }
    uVar9 = pdgui_vmess(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                        "crr iiii rs rS",uVar6,"create","rectangle",(ulong)(uint)(iVar4 - iVar1),
                        cVar8 + (char)iVar7 + (char)iVar5 + (char)*(undefined4 *)(param_9 + 0x40));
    param_14 = local_138;
    pdgui_vmess(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crss",uVar6,"lower"
                ,local_1b8,param_14,in_stack_fffffffffffffe08);
  }
  sprintf(local_1b8,"%pIN%d",(void *)param_9,0);
  uVar9 = pdgui_vmess(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                      "crs",uVar6,"delete",local_1b8,param_14,in_stack_fffffffffffffe08);
  if ((*(byte *)(param_9 + 0x440) & 0x40) == 0) {
    uVar9 = pdgui_vmess(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                        "crr iiii rs rS",uVar6,"create","rectangle",(ulong)(uint)(iVar4 - iVar1),
                        cVar3 + (char)iVar5);
    pdgui_vmess(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crss",uVar6,"lower"
                ,local_1b8,local_138,in_stack_fffffffffffffe08);
  }
  return;
}


