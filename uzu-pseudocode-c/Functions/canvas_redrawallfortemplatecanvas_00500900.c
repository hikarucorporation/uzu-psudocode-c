// Function : canvas_redrawallfortemplatecanvas
// Namespace: 
// Entry    : 00500900
// Prototype: undefined canvas_redrawallfortemplatecanvas(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, int param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 00500900 - 00500985


void canvas_redrawallfortemplatecanvas
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,int param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13
               ,undefined8 param_14)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar4;
  char acStack_488 [128];
  undefined1 in_stack_fffffffffffffbf8;
  
  pd_snprintf(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,acStack_488 + 0x80,999
              ,"pd-%s",**(undefined8 **)(param_9 + 200),param_13,param_14,in_stack_fffffffffffffbf8)
  ;
  puVar1 = gensym(acStack_488 + 0x80);
  lVar2 = template_findbyname(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,(long)puVar1);
  if (lVar2 != 0) {
    plVar3 = (long *)pd_getcanvaslist();
    if (plVar3 != (long *)0x0) {
      uVar4 = extraout_XMM0_Qa_00;
      do {
        uVar4 = glist_doredrawfortemplate
                          (uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3,
                           lVar2,param_10);
        plVar3 = (long *)plVar3[0x1b];
      } while (plVar3 != (long *)0x0);
    }
  }
  return;
}


