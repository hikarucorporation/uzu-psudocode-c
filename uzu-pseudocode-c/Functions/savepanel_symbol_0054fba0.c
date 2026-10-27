// Function : savepanel_symbol
// Namespace: 
// Entry    : 0054fba0
// Prototype: undefined savepanel_symbol(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10)
// Body     : 0054fba0 - 0054fbfa


void savepanel_symbol(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,undefined8 *param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 in_R9;
  undefined8 extraout_XMM0_Qa;
  undefined1 in_stack_00000008;
  
  if (param_10 == (undefined8 *)0x0) {
    puVar3 = &DAT_006559ee;
  }
  else {
    puVar3 = &DAT_006559ee;
    if ((undefined *)*param_10 != (undefined *)0x0) {
      puVar3 = (undefined *)*param_10;
    }
  }
  uVar1 = **(undefined8 **)(param_9 + 0x38);
  uVar2 = glist_getcanvas(*(long *)(param_9 + 0x30));
  pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x659db8,
              "ssc",uVar1,puVar3,uVar2,in_R9,in_stack_00000008);
  return;
}


