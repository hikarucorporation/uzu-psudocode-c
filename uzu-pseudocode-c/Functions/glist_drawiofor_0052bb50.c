// Function : glist_drawiofor
// Namespace: 
// Entry    : 0052bb50
// Prototype: undefined glist_drawiofor(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, int param_11, undefined8 param_12, int param_13, undefined1 param_14, int param_15, char param_16)
// Body     : 0052bb50 - 0052bf6e


void glist_drawiofor(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,long *param_10,int param_11,char *param_12,int param_13,
                    undefined1 param_14,int param_15,char param_16)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  char local_b8 [136];
  
  iVar2 = obj_noutlets((long)param_10);
  iVar7 = iVar2 + -1;
  if (iVar2 == 1) {
    iVar7 = 1;
  }
  iVar4 = *(int *)(param_9 + 0xec);
  if (0 < iVar2) {
    iVar5 = (param_15 - param_13) + iVar4 * -7;
    cVar1 = param_16 + (char)iVar4 * -3;
    if (param_11 == 0) {
      iVar8 = 0;
      iVar6 = 0;
      do {
        sprintf(local_b8,"%so%d",param_12,iVar6);
        uVar3 = glist_getcanvas(param_9);
        pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                    "crs iiii",uVar3,"coords",local_b8,(ulong)(uint)(iVar8 / iVar7 + param_13),
                    (char)*(undefined4 *)(param_9 + 0xec) + cVar1);
        iVar6 = iVar6 + 1;
        iVar8 = iVar8 + iVar5;
      } while (iVar2 != iVar6);
    }
    else {
      iVar6 = 0;
      iVar8 = 0;
      do {
        sprintf(local_b8,"%so%d",param_12,iVar8);
        uVar3 = glist_getcanvas(param_9);
        pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                    "crr iiii rS rr",uVar3,"create","rectangle",
                    (ulong)(uint)(iVar6 / iVar7 + param_13),
                    (char)*(undefined4 *)(param_9 + 0xec) + cVar1);
        iVar8 = iVar8 + 1;
        iVar6 = iVar6 + iVar5;
      } while (iVar2 != iVar8);
    }
  }
  iVar2 = obj_ninlets(param_10);
  iVar7 = iVar2 + -1;
  if (iVar2 == 1) {
    iVar7 = 1;
  }
  if (0 < iVar2) {
    iVar4 = (param_15 - param_13) + iVar4 * -7;
    if (param_11 == 0) {
      iVar5 = 0;
      iVar6 = 0;
      do {
        sprintf(local_b8,"%si%d",param_12,iVar6);
        uVar3 = glist_getcanvas(param_9);
        pdgui_vmess(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                    "crs iiii",uVar3,"coords",local_b8,(ulong)(uint)(iVar5 / iVar7 + param_13),
                    param_14);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + iVar4;
      } while (iVar2 != iVar6);
    }
    else {
      iVar5 = 0;
      iVar6 = 0;
      do {
        sprintf(local_b8,"%si%d",param_12,iVar6);
        uVar3 = glist_getcanvas(param_9);
        pdgui_vmess(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                    "crr iiii rS rr",uVar3,"create","rectangle",
                    (ulong)(uint)(iVar5 / iVar7 + param_13),param_14);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + iVar4;
      } while (iVar2 != iVar6);
    }
  }
  return;
}


