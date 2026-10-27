// Function : openpanel_bang
// Namespace: 
// Entry    : 0054f990
// Prototype: undefined openpanel_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0054f990 - 0054f9f8


void openpanel_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 extraout_XMM0_Qa;
  undefined1 in_stack_00000008;
  
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  puVar5 = &DAT_006559ee;
  if (*(undefined **)(*plVar3 + 0x168) != (undefined *)0x0) {
    puVar5 = *(undefined **)(*plVar3 + 0x168);
  }
  uVar2 = **(undefined8 **)(param_9 + 0x38);
  uVar1 = *(uint *)(param_9 + 0x40);
  uVar4 = glist_getcanvas(*(long *)(param_9 + 0x30));
  pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x659d96,
              "ssic",uVar2,puVar5,(ulong)uVar1,uVar4,in_stack_00000008);
  return;
}


