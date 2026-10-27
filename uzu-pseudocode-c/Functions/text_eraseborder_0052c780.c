// Function : text_eraseborder
// Namespace: 
// Entry    : 0052c780
// Prototype: undefined text_eraseborder(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, long param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 0052c780 - 0052c7fe


void text_eraseborder(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long *param_9,long param_10,undefined8 param_11,undefined8 param_12,
                     undefined8 param_13,undefined8 param_14)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 extraout_XMM0_Qa;
  char acStack_488 [128];
  undefined1 in_stack_fffffffffffffbf8;
  
  pcVar3 = acStack_488 + 0x80;
  if (((*(byte *)((long)param_9 + 0x2e) & 3) != 0) || ((*(byte *)(param_10 + 0xe8) & 0x20) != 0)) {
    sprintf(acStack_488 + 0x80,"%sR",param_11);
    uVar1 = glist_getcanvas(param_10);
    pcVar2 = "delete";
    uVar1 = pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                        "crs",uVar1,"delete",acStack_488 + 0x80,param_14,in_stack_fffffffffffffbf8);
    glist_eraseiofor(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,param_9,
                     param_11,pcVar2,pcVar3,param_14);
  }
  return;
}


