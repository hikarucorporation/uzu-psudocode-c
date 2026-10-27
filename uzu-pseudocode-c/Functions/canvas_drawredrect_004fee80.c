// Function : canvas_drawredrect
// Namespace: 
// Entry    : 004fee80
// Prototype: undefined canvas_drawredrect(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, int param_10)
// Body     : 004fee80 - 004fef8b


void canvas_drawredrect(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,int param_10)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 in_R9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 in_stack_00000008;
  
  if (param_10 == 0) {
    uVar4 = glist_getcanvas(param_9);
    pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs",
                uVar4,"delete",&DAT_00654031,in_R9,in_stack_00000008);
    return;
  }
  iVar1 = *(int *)(param_9 + 0xec);
  iVar2 = *(int *)(param_9 + 0x78);
  uVar3 = *(undefined4 *)(param_9 + 0x7c);
  uVar4 = glist_getcanvas(param_9);
  pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
              "crr iiiiiiiiii rr ri rr rr",uVar4,"create","line",(ulong)(uint)(iVar2 * iVar1),
              (char)uVar3 * (char)iVar1);
  return;
}


