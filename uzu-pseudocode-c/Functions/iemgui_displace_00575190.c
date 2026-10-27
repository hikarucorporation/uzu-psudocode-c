// Function : iemgui_displace
// Namespace: 
// Entry    : 00575190
// Prototype: undefined iemgui_displace(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, short param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00575190 - 005751f6


void iemgui_displace(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,undefined8 param_10,short param_11,undefined8 param_12,
                    char *param_13,undefined8 param_14)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  undefined6 uVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar7;
  
  sVar5 = (short)param_12;
  uVar6 = (undefined6)((ulong)param_12 >> 0x10);
  *(short *)(param_9 + 0x28) = *(short *)(param_9 + 0x28) + param_11;
  *(short *)(param_9 + 0x2a) = *(short *)(param_9 + 0x2a) + sVar5;
  uVar2 = glist_isvisible(*(long *)(param_9 + 0x30));
  if (uVar2 == 0) {
    return;
  }
  iVar3 = text_xpix(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                    ,*(long *)(param_9 + 0x30),extraout_RDX,CONCAT62(uVar6,sVar5),param_13,param_14)
  ;
  iVar4 = text_ypix(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    param_9,*(long *)(param_9 + 0x30),extraout_RDX_00,CONCAT62(uVar6,sVar5),param_13
                    ,param_14);
  uVar7 = (**(code **)(param_9 + 0x38))(param_9,*(undefined8 *)(param_9 + 0x30),1);
  piVar1 = *(int **)(param_9 + 0x48);
  *piVar1 = iVar3;
  piVar1[1] = iVar4;
  canvas_fixlinesfor(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     *(long *)(param_9 + 0x30),param_9);
  return;
}


