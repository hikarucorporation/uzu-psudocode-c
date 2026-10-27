// Function : openpanel_symbol
// Namespace: 
// Entry    : 0054fa00
// Prototype: undefined openpanel_symbol(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10)
// Body     : 0054fa00 - 0054fa5d


void openpanel_symbol(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,undefined8 *param_10)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 extraout_XMM0_Qa;
  undefined1 in_stack_00000008;
  
  if (param_10 == (undefined8 *)0x0) {
    puVar4 = &DAT_006559ee;
  }
  else {
    puVar4 = &DAT_006559ee;
    if ((undefined *)*param_10 != (undefined *)0x0) {
      puVar4 = (undefined *)*param_10;
    }
  }
  uVar2 = **(undefined8 **)(param_9 + 0x38);
  uVar1 = *(uint *)(param_9 + 0x40);
  uVar3 = glist_getcanvas(*(long *)(param_9 + 0x30));
  pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x659d96,
              "ssic",uVar2,puVar4,(ulong)uVar1,uVar3,in_stack_00000008);
  return;
}


