// Function : canvas_add_for_class
// Namespace: 
// Entry    : 005023e0
// Prototype: undefined canvas_add_for_class(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9)
// Body     : 005023e0 - 005024e4


void canvas_add_for_class
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long *param_9)

{
  int *piVar1;
  int unaff_EBX;
  undefined8 in_R9;
  undefined8 uVar2;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  
  piVar1 = (int *)gensym("restore");
  class_addmethod(extraout_XMM0_Da,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                  (long)PTR_canvas_restore_007154f8,piVar1,10,(char *)0x0,in_R9,unaff_EBX);
  piVar1 = (int *)gensym("click");
  uVar2 = 1;
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  param_9,0x502120,piVar1,1,(char *)0x1,1,1);
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  param_9,0x502130,piVar1,0xb,(char *)0x0,uVar2,unaff_EBX);
  piVar1 = (int *)gensym("map");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  param_9,(long)PTR_canvas_map_00715560,piVar1,1,(char *)0x0,uVar2,unaff_EBX);
  piVar1 = (int *)gensym("setbounds");
  uVar2 = class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,param_9,0x501d80,piVar1,1,(char *)0x1,1,1);
  uVar2 = canvas_editor_for_class
                    (uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  canvas_readwrite_for_class(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}


