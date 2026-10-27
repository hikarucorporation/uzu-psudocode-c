// Function : text_activate
// Namespace: 
// Entry    : 0052b910
// Prototype: undefined text_activate(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0052b910 - 0052b945


void text_activate(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long *param_9,long param_10,undefined8 param_11,undefined8 param_12,char *param_13
                  ,undefined8 param_14)

{
  long *plVar1;
  undefined8 extraout_XMM0_Qa;
  
  plVar1 = (long *)glist_findrtext(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                   param_10,(long)param_9,param_11,param_12,param_13,param_14);
  if (*param_9 == gatom_class) {
    return;
  }
  rtext_activate(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1,
                 (int)param_11);
  return;
}


