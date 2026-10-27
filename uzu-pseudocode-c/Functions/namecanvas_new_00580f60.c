// Function : namecanvas_new
// Namespace: 
// Entry    : 00580f60
// Prototype: long * namecanvas_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00580f60 - 00580fa0


long * namecanvas_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     undefined8 *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12
                     ,char *param_13,undefined8 param_14)

{
  long *plVar1;
  long lVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,namecanvas_class,
                  param_10,param_11,param_12,param_13,param_14);
  lVar2 = canvas_getcurrent(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                           );
  plVar1[7] = lVar2;
  plVar1[6] = (long)param_9;
  if (*(char *)*param_9 != '\0') {
    pd_bind(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar2,
            (long)param_9,extraout_RDX,(char *)*param_9,param_13,param_14);
  }
  return plVar1;
}


