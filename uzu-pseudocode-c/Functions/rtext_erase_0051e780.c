// Function : rtext_erase
// Namespace: 
// Entry    : 0051e780
// Prototype: undefined rtext_erase(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0051e780 - 0051e7ae


void rtext_erase(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9)

{
  undefined8 uVar1;
  undefined8 in_R9;
  undefined8 extraout_XMM0_Qa;
  undefined1 in_stack_00000008;
  
  uVar1 = glist_getcanvas(*(long *)(param_9 + 0x30));
  pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs",uVar1
              ,"delete",param_9 + 0x38,in_R9,in_stack_00000008);
  return;
}


