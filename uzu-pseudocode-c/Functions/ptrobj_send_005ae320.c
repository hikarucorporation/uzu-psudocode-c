// Function : ptrobj_send
// Namespace: 
// Entry    : 005ae320
// Prototype: undefined ptrobj_send(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005ae320 - 005ae386


void ptrobj_send(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                char *param_13,undefined8 param_14)

{
  bool bVar1;
  undefined7 extraout_var;
  undefined8 extraout_RDX;
  undefined8 extraout_XMM0_Qa;
  
  if (param_10[1] == 0) {
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "%s: no such object",*param_10,param_12,param_13,param_14);
    return;
  }
  bVar1 = gpointer_check((long *)(param_9 + 0x30),1);
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "pointer send: empty pointer",extraout_RDX,param_12,param_13,param_14);
    return;
  }
  pd_pointer((long *)param_10[1]);
  return;
}


