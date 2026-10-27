// Function : sys_gui_preferences
// Namespace: 
// Entry    : 0053f930
// Prototype: undefined sys_gui_preferences(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0053f930 - 0053fc67


void sys_gui_preferences(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        )

{
  long *plVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  undefined *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  void *pvVar13;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 uVar14;
  void *pvVar15;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar1 = *(long **)(*(long *)(*plVar1 + 0x50) + 8);
  if (plVar1 == (long *)0x0) {
    uVar11 = 0;
    pvVar13 = (void *)0x0;
  }
  else {
    uVar11 = 0;
    pvVar13 = (void *)0x0;
    uVar14 = extraout_XMM0_Qa;
    do {
      uVar9 = (ulong)((int)uVar11 + 1);
      pvVar2 = resizebytes(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pvVar13,
                           uVar11 * 8,uVar9 * 8);
      if (pvVar2 == (void *)0x0) break;
      *(long *)((long)pvVar2 + uVar11 * 8) = plVar1[1];
      plVar1 = (long *)*plVar1;
      uVar11 = uVar9;
      pvVar13 = pvVar2;
      uVar14 = extraout_XMM0_Qa_00;
    } while (plVar1 != (long *)0x0);
  }
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar1 = *(long **)(*(long *)(*plVar1 + 0x50) + 0x20);
  if (plVar1 == (long *)0x0) {
    uVar9 = 0;
    pvVar2 = (void *)0x0;
  }
  else {
    uVar9 = 0;
    pvVar2 = (void *)0x0;
    uVar14 = extraout_XMM0_Qa_01;
    do {
      uVar8 = (ulong)((int)uVar9 + 1);
      pvVar3 = resizebytes(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pvVar2,
                           uVar9 * 8,uVar8 * 8);
      if (pvVar3 == (void *)0x0) break;
      *(long *)((long)pvVar3 + uVar9 * 8) = plVar1[1];
      plVar1 = (long *)*plVar1;
      uVar9 = uVar8;
      pvVar2 = pvVar3;
      uVar14 = extraout_XMM0_Qa_02;
    } while (plVar1 != (long *)0x0);
  }
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar1 = *(long **)(*(long *)(*plVar1 + 0x50) + 0x10);
  uVar8 = 0;
  if (plVar1 == (long *)0x0) {
    uVar10 = 0;
    pvVar3 = (void *)0x0;
  }
  else {
    uVar10 = 0;
    pvVar3 = (void *)0x0;
    uVar14 = extraout_XMM0_Qa_03;
    do {
      uVar12 = (ulong)((int)uVar10 + 1);
      pvVar4 = resizebytes(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pvVar3,
                           uVar10 * 8,uVar12 * 8);
      if (pvVar4 == (void *)0x0) break;
      *(long *)((long)pvVar4 + uVar10 * 8) = plVar1[1];
      plVar1 = (long *)*plVar1;
      uVar10 = uVar12;
      pvVar3 = pvVar4;
      uVar14 = extraout_XMM0_Qa_04;
    } while (plVar1 != (long *)0x0);
  }
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar1 = (long *)**(long **)(*plVar1 + 0x50);
  if (plVar1 == (long *)0x0) {
    pvVar4 = (void *)0x0;
    uVar14 = extraout_XMM0_Qa_05;
  }
  else {
    uVar8 = 0;
    pvVar4 = (void *)0x0;
    uVar14 = extraout_XMM0_Qa_05;
    do {
      uVar7 = (int)uVar8 + 1;
      pvVar5 = resizebytes(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pvVar4,
                           uVar8 * 8,(ulong)uVar7 * 8);
      uVar14 = extraout_XMM0_Qa_06;
      if (pvVar5 == (void *)0x0) goto LAB_0053fb36;
      *(long *)((long)pvVar5 + uVar8 * 8) = plVar1[1];
      plVar1 = (long *)*plVar1;
      uVar8 = (ulong)uVar7;
      pvVar4 = pvVar5;
    } while (plVar1 != (long *)0x0);
    uVar8 = (ulong)uVar7;
  }
LAB_0053fb36:
  pvVar15 = pvVar2;
  uVar14 = pdgui_vmess(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x6570b0,"SSS"
                       ,uVar11,pvVar13,uVar9,pvVar2,(char)uVar10);
  pvVar5 = pvVar4;
  uVar14 = pdgui_vmess(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x6570cd,"S",
                       uVar8,pvVar4,uVar9,pvVar2,(char)pvVar15);
  uVar14 = sys_vgui(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    "set_escaped ::sys_verbose %d\n");
  uVar14 = sys_vgui(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    "set_escaped ::sys_use_stdpath %d\n");
  uVar14 = sys_vgui(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    "set_escaped ::sys_defeatrt %d\n");
  uVar14 = sys_vgui(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    "set_escaped ::sys_zoom_open %d\n");
  if (*(undefined8 **)PTR_sys_flags_007153e8 == (undefined8 *)0x0) {
    puVar6 = &DAT_005e2ee7;
  }
  else {
    puVar6 = (undefined *)**(undefined8 **)PTR_sys_flags_007153e8;
  }
  pdgui_vmess(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x65716c,"s",puVar6,
              pvVar5,uVar9,pvVar2,(char)pvVar15);
  freebytes(pvVar13);
  freebytes(pvVar15);
  freebytes(pvVar3);
  freebytes(pvVar4);
  return;
}


