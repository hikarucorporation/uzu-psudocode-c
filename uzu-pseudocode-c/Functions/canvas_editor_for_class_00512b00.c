// Function : canvas_editor_for_class
// Namespace: 
// Entry    : 00512b00
// Prototype: undefined canvas_editor_for_class(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9)
// Body     : 00512b00 - 00512c23


void canvas_editor_for_class
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long *param_9)

{
  int *piVar1;
  int unaff_EBX;
  char *pcVar2;
  undefined8 uVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  int in_stack_00000008;
  
  piVar1 = (int *)gensym("mouse");
  class_addmethod(extraout_XMM0_Da,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                  (long)PTR_canvas_mouse_00715808,piVar1,1,(char *)0x1,1,1);
  piVar1 = (int *)gensym("mouseup");
  uVar3 = 1;
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  param_9,(long)PTR_canvas_mouseup_00715b00,piVar1,1,(char *)0x1,1,0);
  piVar1 = (int *)gensym("key");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  param_9,(long)PTR_canvas_key_00715f08,piVar1,10,(char *)0x0,uVar3,unaff_EBX);
  piVar1 = (int *)gensym("motion");
  uVar3 = 1;
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  param_9,(long)PTR_canvas_motion_00715880,piVar1,1,(char *)0x1,1,6);
  piVar1 = (int *)gensym("menuclose");
  pcVar2 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  param_9,(long)PTR_canvas_menuclose_00715df8,piVar1,6,(char *)0x0,uVar3,unaff_EBX);
  piVar1 = (int *)gensym("findparent");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  param_9,0x5123b0,piVar1,0,pcVar2,uVar3,in_stack_00000008);
  return;
}


