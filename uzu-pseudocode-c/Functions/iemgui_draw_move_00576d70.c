// Function : iemgui_draw_move
// Namespace: 
// Entry    : 00576d70
// Prototype: undefined iemgui_draw_move(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00576d70 - 00576e04


void iemgui_draw_move(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,long param_10,undefined8 param_11,undefined8 param_12,
                     char *param_13,undefined8 param_14)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  char local_a8 [128];
  
  uVar5 = glist_getcanvas(param_10);
  iVar3 = text_xpix(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                    ,param_10,extraout_RDX,param_12,param_13,param_14);
  iVar1 = **(int **)(param_9 + 0x48);
  iVar4 = text_ypix(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    param_9,param_10,extraout_RDX_00,param_12,param_13,param_14);
  uVar2 = *(undefined4 *)(*(long *)(param_9 + 0x48) + 4);
  sprintf(local_a8,"%pOBJ",(void *)param_9);
  pdgui_vmess(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs ii"
              ,uVar5,"move",local_a8,(ulong)(uint)(iVar3 - iVar1),(char)iVar4 - (char)uVar2);
  return;
}


