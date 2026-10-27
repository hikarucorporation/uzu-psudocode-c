// Function : canvas_finderror
// Namespace: 
// Entry    : 0050ea50
// Prototype: undefined canvas_finderror(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, undefined8 * param_12, char * param_13, undefined * param_14)
// Body     : 0050ea50 - 0050eaa9


void canvas_finderror(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long *param_9,undefined8 param_10,undefined8 param_11,undefined8 *param_12,
                     char *param_13,undefined *param_14)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar3;
  
  plVar1 = (long *)pd_getcanvaslist();
  uVar2 = extraout_RDX;
  uVar3 = extraout_XMM0_Qa;
  if (plVar1 != (long *)0x0) {
    do {
      uVar2 = glist_dofinderror(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                                ,param_9,uVar2,param_12,param_13,param_14);
      if ((int)uVar2 != 0) {
        return;
      }
      plVar1 = (long *)plVar1[0x1b];
      uVar2 = extraout_RDX_00;
      uVar3 = extraout_XMM0_Qa_00;
    } while (plVar1 != (long *)0x0);
  }
  pd_error(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
           "... sorry, I couldn\'t find the source of that error.",uVar2,param_12,param_13,param_14)
  ;
  return;
}


