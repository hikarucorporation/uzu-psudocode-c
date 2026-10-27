// Function : canvas_redrawallfortemplate
// Namespace: 
// Entry    : 00500630
// Prototype: undefined canvas_redrawallfortemplate(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, int param_10)
// Body     : 00500630 - 0050066e


void canvas_redrawallfortemplate
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,int param_10)

{
  long *plVar1;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar2;
  
  plVar1 = (long *)pd_getcanvaslist();
  if (plVar1 != (long *)0x0) {
    uVar2 = extraout_XMM0_Qa;
    do {
      uVar2 = glist_doredrawfortemplate
                        (uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1,
                         param_9,param_10);
      plVar1 = (long *)plVar1[0x1b];
    } while (plVar1 != (long *)0x0);
  }
  return;
}


