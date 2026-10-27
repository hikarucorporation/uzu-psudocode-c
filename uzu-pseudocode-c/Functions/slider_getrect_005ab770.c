// Function : slider_getrect
// Namespace: 
// Entry    : 005ab770
// Prototype: undefined slider_getrect(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, int * param_11, int * param_12, int * param_13, int * param_14)
// Body     : 005ab770 - 005ab82d


void slider_getrect(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,long param_10,int *param_11,int *param_12,int *param_13,
                   int *param_14)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  uint local_54;
  
  piVar4 = param_12;
  piVar5 = param_13;
  piVar6 = param_14;
  iVar1 = glist_getzoom(param_10);
  if (*(int *)(param_9 + 0x4bc) == 0) {
    iVar3 = iVar1 * -3;
    iVar7 = iVar1 * 5;
    local_54 = 0;
    iVar1 = 0;
  }
  else {
    local_54 = iVar1 * -2;
    piVar4 = (int *)(ulong)local_54;
    iVar1 = iVar1 * 5;
    iVar3 = 0;
    iVar7 = 0;
  }
  iVar2 = text_xpix(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                    ,param_10,extraout_RDX,piVar4,(char *)piVar5,piVar6);
  *param_11 = iVar2 + iVar3;
  iVar3 = text_ypix(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    param_9,param_10,extraout_RDX_00,piVar4,(char *)piVar5,piVar6);
  *param_12 = iVar3 + local_54;
  *param_13 = iVar7 + *param_11 + *(int *)(param_9 + 0x44);
  *param_14 = iVar1 + *param_12 + *(int *)(param_9 + 0x40);
  return;
}


