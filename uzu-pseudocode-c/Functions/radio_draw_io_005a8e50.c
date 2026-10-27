// Function : radio_draw_io
// Namespace: 
// Entry    : 005a8e50
// Prototype: undefined radio_draw_io(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, char * param_14)
// Body     : 005a8e50 - 005a90a6


void radio_draw_io(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,long param_10,undefined8 param_11,undefined8 param_12,char *param_13,
                  char *param_14)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 extraout_RDX;
  char cVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar6;
  undefined8 extraout_XMM0_Qa_01;
  char local_1b8 [128];
  char local_138 [128];
  char local_b8 [136];
  
  uVar1 = *(undefined4 *)(*(long *)(param_9 + 0x30) + 0xec);
  iVar2 = text_xpix(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
                    ,param_11,param_12,param_13,param_14);
  uVar3 = CONCAT44(extraout_var,iVar2);
  iVar2 = text_ypix(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                    ,param_10,extraout_RDX,param_12,param_13,param_14);
  uVar4 = glist_getcanvas(param_10);
  sprintf(local_b8,"%pOBJ",(void *)param_9);
  sprintf(local_138,"%pBUT",(void *)param_9);
  sprintf(local_1b8,"%pOUT%d",(void *)param_9,0);
  uVar6 = pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                      "crs",uVar4,"delete",local_1b8,param_14,(char)uVar3);
  if ((*(byte *)(param_9 + 0x440) & 0x80) == 0) {
    if (*(int *)(param_9 + 0x4a8) == 0) {
      cVar5 = '\x01';
    }
    else {
      cVar5 = (char)*(undefined4 *)(param_9 + 0x49c);
    }
    uVar6 = pdgui_vmess(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                        "crr iiii rs rS",uVar4,"create","rectangle",uVar3,
                        cVar5 * (char)*(undefined4 *)(param_9 + 0x40) + (char)iVar2 +
                        (char)uVar1 * -2);
    param_14 = local_138;
    pdgui_vmess(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crss",uVar4,"lower"
                ,local_1b8,param_14,(char)uVar3);
  }
  sprintf(local_1b8,"%pIN%d",(void *)param_9,0);
  uVar6 = pdgui_vmess(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                      "crs",uVar4,"delete",local_1b8,param_14,(char)uVar3);
  if ((*(byte *)(param_9 + 0x440) & 0x40) == 0) {
    uVar6 = pdgui_vmess(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                        "crr iiii rs rS",uVar4,"create","rectangle",uVar3,(char)iVar2);
    pdgui_vmess(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crss",uVar4,"lower"
                ,local_1b8,local_138,(char)uVar3);
  }
  return;
}


