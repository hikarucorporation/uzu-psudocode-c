// Function : canvas_menuarray
// Namespace: 
// Entry    : 004f9f90
// Prototype: undefined canvas_menuarray(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 004f9f90 - 004fa02a


void canvas_menuarray(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  int param2;
  bool bVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  char acStack_78 [80];
  
  puVar1 = PTR_garray_class_00715780;
  param2 = 1;
  do {
    sprintf(acStack_78,"array%d",param2);
    puVar2 = gensym(acStack_78);
    plVar3 = pd_findbyclass(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                            ,(long)puVar2,*(long *)puVar1);
    if (plVar3 == (long *)0x0) break;
    bVar4 = param2 != 999;
    param2 = param2 + 1;
  } while (bVar4);
  pdgui_stub_vnew(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  param_9,"pdtk_array_dialog",(char *)param_9,"siii",acStack_78,100,3);
  return;
}


