// Function : g_editor_setup
// Namespace: 
// Entry    : 0050eda0
// Prototype: undefined g_editor_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0050eda0 - 0050f32b


void g_editor_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined *puVar2;
  int in_EAX;
  int *piVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Da_13;
  undefined4 extraout_XMM0_Da_14;
  undefined4 extraout_XMM0_Da_15;
  undefined4 extraout_XMM0_Da_16;
  undefined4 extraout_XMM0_Da_17;
  undefined4 extraout_XMM0_Da_18;
  undefined4 extraout_XMM0_Da_19;
  undefined4 extraout_XMM0_Da_20;
  undefined4 extraout_XMM0_Da_21;
  undefined4 extraout_XMM0_Da_22;
  undefined4 extraout_XMM0_Da_23;
  undefined4 extraout_XMM0_Da_24;
  undefined4 extraout_XMM0_Da_25;
  undefined4 extraout_XMM0_Da_26;
  undefined4 extraout_XMM0_Da_27;
  undefined4 extraout_XMM0_Da_28;
  undefined4 extraout_XMM0_Da_29;
  undefined4 extraout_XMM0_Da_30;
  
  puVar2 = PTR_canvas_class_00715918;
  plVar1 = *(long **)PTR_canvas_class_00715918;
  piVar3 = (int *)gensym("mouse");
  class_addmethod(extraout_XMM0_Da,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1,
                  (long)PTR_canvas_mouse_00715808,piVar3,1,(char *)0x1,1,1);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("mouseup");
  uVar5 = 1;
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_mouseup_00715b00,piVar3,1,(char *)0x1,1,6);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("key");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_key_00715f08,piVar3,10,(char *)0x0,uVar5,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("motion");
  uVar5 = 1;
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_motion_00715880,piVar3,1,(char *)0x1,1,0);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("menuclose");
  pcVar4 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_menuclose_00715df8,piVar3,6,(char *)0x0,uVar5,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("cut");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x50f330,piVar3,0,pcVar4,uVar5,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("copy");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x50f450,piVar3,0,pcVar4,uVar5,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("paste");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x50f520,piVar3,0,pcVar4,uVar5,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("paste-replace");
  class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x50f740,piVar3,0,pcVar4,uVar5,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("duplicate");
  class_addmethod(extraout_XMM0_Da_08,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x50fda0,piVar3,0,pcVar4,uVar5,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("selectall");
  class_addmethod(extraout_XMM0_Da_09,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x5100f0,piVar3,0,pcVar4,uVar5,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("deselectall");
  class_addmethod(extraout_XMM0_Da_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x510320,piVar3,0,pcVar4,uVar5,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("reselect");
  class_addmethod(extraout_XMM0_Da_11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x5103f0,piVar3,0,pcVar4,uVar5,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("cycleselect");
  pcVar4 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x510660,piVar3,1,(char *)0x0,uVar5,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("undo");
  class_addmethod(extraout_XMM0_Da_13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_undo_undo_00715cd8,piVar3,0,pcVar4,uVar5,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("redo");
  class_addmethod(extraout_XMM0_Da_14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_undo_redo_00715b90,piVar3,0,pcVar4,uVar5,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("tidy");
  class_addmethod(extraout_XMM0_Da_15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x510c10,piVar3,0,pcVar4,uVar5,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("connect_selection");
  class_addmethod(extraout_XMM0_Da_16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x5112e0,piVar3,0,pcVar4,uVar5,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("texteditor");
  class_addmethod(extraout_XMM0_Da_17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x512010,piVar3,0,pcVar4,uVar5,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("editmode");
  class_addmethod(extraout_XMM0_Da_18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_editmode_00715d68,piVar3,6,(char *)0x0,uVar5,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("print");
  pcVar4 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_19,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_print_00715b18,piVar3,2,(char *)0x0,uVar5,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("menufont");
  class_addmethod(extraout_XMM0_Da_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x512070,piVar3,0,pcVar4,uVar5,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("font");
  uVar5 = 1;
  class_addmethod(extraout_XMM0_Da_21,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x5120b0,piVar3,1,(char *)0x1,1,0);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("zoom");
  class_addmethod(extraout_XMM0_Da_22,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x50b8f0,piVar3,1,(char *)0x0,uVar5,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("find");
  pcVar4 = (char *)0x1;
  uVar5 = 0;
  class_addmethod(extraout_XMM0_Da_23,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x5121c0,piVar3,2,(char *)0x1,0,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("findagain");
  class_addmethod(extraout_XMM0_Da_24,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x5122e0,piVar3,0,pcVar4,uVar5,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("findparent");
  class_addmethod(extraout_XMM0_Da_25,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x5123b0,piVar3,0,pcVar4,uVar5,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("done-popup");
  uVar5 = 1;
  class_addmethod(extraout_XMM0_Da_26,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x5123d0,piVar3,1,(char *)0x1,1,0);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("donecanvasdialog");
  class_addmethod(extraout_XMM0_Da_27,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x512730,piVar3,10,(char *)0x0,uVar5,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("arraydialog");
  pcVar4 = (char *)0x1;
  uVar5 = 1;
  class_addmethod(extraout_XMM0_Da_28,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_glist_arraydialog_00715ed0,piVar3,2,(char *)0x1,1,1);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("triggerize");
  class_addmethod(extraout_XMM0_Da_29,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_triggerize_00715760,piVar3,0,pcVar4,uVar5,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("disconnect");
  class_addmethod(extraout_XMM0_Da_30,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_disconnect_00715450,piVar3,1,(char *)0x1,1,1);
  return;
}


