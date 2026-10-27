// Function : powtodb_tilde_new
// Namespace: 
// Entry    : 004f3e30
// Prototype: long * powtodb_tilde_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 004f3e30 - 004f3e65


long * powtodb_tilde_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,undefined8 param_9,undefined8 param_10,undefined8 param_11,
                        undefined8 param_12,char *param_13,undefined8 param_14)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_XMM0_Qa;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long *)PTR_powtodb_tilde_class_00715ff0,param_10,param_11,param_12,param_13,
                  param_14);
  puVar2 = gensym("signal");
  outlet_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1,
             (long)puVar2,extraout_RDX,param_12,param_13,param_14);
  *(undefined4 *)(plVar1 + 6) = 0;
  return plVar1;
}


