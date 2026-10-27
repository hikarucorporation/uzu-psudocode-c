// Function : savepanel_bang
// Namespace: 
// Entry    : 0054fb30
// Prototype: undefined savepanel_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0054fb30 - 0054fb93


void savepanel_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 in_R9;
  undefined8 extraout_XMM0_Qa;
  undefined1 in_stack_00000008;
  
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  puVar4 = &DAT_006559ee;
  if (*(undefined **)(*plVar2 + 0x168) != (undefined *)0x0) {
    puVar4 = *(undefined **)(*plVar2 + 0x168);
  }
  uVar1 = **(undefined8 **)(param_9 + 0x38);
  uVar3 = glist_getcanvas(*(long *)(param_9 + 0x30));
  pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x659db8,
              "ssc",uVar1,puVar4,uVar3,in_R9,in_stack_00000008);
  return;
}


