// Function : text_drawborder
// Namespace: 
// Entry    : 0052bf70
// Prototype: undefined text_drawborder(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, ulong param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, int param_14)
// Body     : 0052bf70 - 0052c668


void text_drawborder(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long *param_9,ulong param_10,undefined8 param_11,undefined8 param_12,
                    undefined8 param_13,int param_14)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 uVar8;
  char *pcVar9;
  int iVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 uVar11;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined4 uStack_11c;
  char cVar12;
  uint in_stack_fffffffffffffee8;
  uint local_114;
  ulong local_110;
  ulong local_108;
  uint local_fc;
  undefined8 local_f8;
  uint local_ec;
  char *local_e8;
  char *local_e0;
  ulong local_d0;
  long *local_c8;
  ulong local_c0;
  char local_b8 [136];
  
  sprintf(local_b8,"%sR");
  pcVar9 = local_b8 + -0x60;
  text_getrect(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               (long)param_9,param_10,(int *)&local_ec,(int *)&local_fc,(int *)&local_114,
               (int *)(local_b8 + -0x60));
  uVar2 = local_fc;
  bVar3 = *(byte *)((long)param_9 + 0x2e) & 3;
  local_c8 = param_9;
  if (bVar3 == 3) {
    local_110 = CONCAT44(local_110._4_4_,param_14);
    iVar10 = (*(uint *)(param_9 + 0xf) >> 3 & 1) * *(int *)(param_10 + 0xec);
    pcVar9 = (char *)(ulong)(local_ec + iVar10);
    local_108 = (ulong)(iVar10 + local_fc);
    if ((int)param_9[6] - 1U < 2) {
      local_e0 = "atom";
      local_d0 = (ulong)in_stack_fffffffffffffee8;
      local_f8 = param_11;
      local_e8 = local_b8;
      uVar5 = glist_getcanvas(param_10);
      if ((int)local_110 != 0) {
        pdgui_vmess(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                    "crr iiiiiiiiiiii ri rr rS",uVar5,"create","line",pcVar9,(char)local_108);
        goto LAB_0052c5e8;
      }
      pdgui_vmess(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                  "crs iiiiiiiiiiii",uVar5,"coords",local_b8,pcVar9,(char)local_108);
    }
    else {
      local_e0 = "atom";
      uVar7 = (ulong)in_stack_fffffffffffffee8;
      local_f8 = param_11;
      local_e8 = local_b8;
      uVar5 = glist_getcanvas(param_10);
      local_d0 = (ulong)local_114;
      local_c0 = uVar7;
      if ((int)local_110 != 0) {
        uVar11 = extraout_XMM0_Qa_04;
        uVar7 = local_108;
        goto LAB_0052c418;
      }
      pdgui_vmess(extraout_XMM0_Qa_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                  "crs iiiiiiiiiiiiii",uVar5,"coords",local_b8,pcVar9,(char)local_108);
    }
    uVar5 = glist_getcanvas(param_10);
    pcVar9 = "-width";
    pdgui_vmess(extraout_XMM0_Qa_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                "crs ri",uVar5,"itemconfigure",local_b8,"-width",
                (char)iVar10 + (char)*(undefined4 *)(param_10 + 0xec));
  }
  else {
    if (bVar3 != 2) {
      if (bVar3 == 1) {
        uVar8 = 0xee;
        if (*param_9 == *(long *)PTR_text_class_00715c88) {
          uVar8 = 0x2b;
        }
        local_e0 = "obj";
        local_e8 = local_b8;
        uVar5 = glist_getcanvas(param_10);
        pcVar9 = (char *)(ulong)local_ec;
        local_110 = (ulong)local_114;
        if (param_14 == 0) {
          pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                      "crs iiiiiiiiii",uVar5,"coords",local_b8,pcVar9,(char)local_fc);
          uVar5 = glist_getcanvas(param_10);
          pcVar9 = "-dash";
          pdgui_vmess(extraout_XMM0_Qa_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                      "crs rr",uVar5,"itemconfigure",local_b8,"-dash",uVar8);
        }
        else {
          local_108 = param_10;
          local_f8 = param_11;
          pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                      "crr iiiiiiiiii rr ri rr rS",uVar5,"create","line",pcVar9,(char)local_fc);
        }
      }
      else if ((*(byte *)(param_10 + 0xe8) & 0x20) != 0) {
        local_e0 = "commentbar";
        local_e8 = local_b8;
        uVar5 = glist_getcanvas(param_10);
        pcVar9 = (char *)(ulong)local_114;
        if (param_14 == 0) {
          pdgui_vmess(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                      "crs iiii",uVar5,"coords",local_b8,pcVar9,(char)local_fc);
        }
        else {
          pdgui_vmess(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                      "crr iiii rS",uVar5,"create","line",pcVar9,(char)local_fc);
        }
      }
      goto LAB_0052c5f2;
    }
    uVar7 = (ulong)local_fc;
    iVar4 = in_stack_fffffffffffffee8 - local_fc;
    iVar10 = iVar4 + 3;
    if (-1 < iVar4) {
      iVar10 = iVar4;
    }
    local_e0 = "msg";
    iVar4 = *(int *)(param_10 + 0xec) * 10;
    iVar1 = iVar10 >> 2;
    if (iVar4 < iVar10 >> 2) {
      iVar1 = iVar4;
    }
    local_f8 = param_11;
    local_e8 = local_b8;
    uVar5 = glist_getcanvas(param_10);
    pcVar9 = (char *)(ulong)local_ec;
    local_110 = CONCAT44(local_110._4_4_,param_14);
    if (param_14 == 0) {
      pdgui_vmess(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                  "crs iiiiiiiiiiiiii",uVar5,"coords",local_b8,pcVar9,(char)uVar2);
    }
    else {
      uVar11 = extraout_XMM0_Qa_02;
      local_108 = (ulong)(local_114 + iVar1);
LAB_0052c418:
      pdgui_vmess(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                  "crr iiiiiiiiiiiiii ri rr rS",uVar5,"create","line",pcVar9,(char)uVar7);
    }
  }
LAB_0052c5e8:
  param_11 = local_f8;
  param_14 = (int)local_110;
LAB_0052c5f2:
  cVar12 = (char)in_stack_fffffffffffffee8;
  plVar6 = pd_checkobject(local_c8);
  if (plVar6 != (long *)0x0) {
    pcVar9 = (char *)(ulong)local_fc;
    glist_drawiofor(extraout_XMM0_Qa_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    param_10,plVar6,param_14,param_11,local_ec,(char)local_fc,local_114,cVar12);
  }
  if (param_14 != 0) {
    uVar5 = glist_getcanvas(param_10);
    pdgui_vmess(extraout_XMM0_Qa_08,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crr",
                uVar5,"raise",&DAT_006541a7,pcVar9,cVar12);
  }
  return;
}


