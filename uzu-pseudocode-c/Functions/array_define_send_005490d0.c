// Function : array_define_send
// Namespace: 
// Entry    : 005490d0
// Prototype: undefined array_define_send(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 * param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 005490d0 - 00549194


void array_define_send(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9,undefined8 *param_10,undefined8 param_11,undefined8 *param_12,
                      char *param_13,undefined8 param_14,undefined1 param_15)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 *puVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 local_30 [3];
  
  puVar4 = param_10;
  if (*(long **)(param_9 + 0x30) == (long *)0x0) {
    if (param_10[1] == 0) goto LAB_00549178;
  }
  else {
    plVar1 = pd_checkglist(*(long **)(param_9 + 0x30));
    param_1 = extraout_XMM0_Qa;
    if (param_10[1] == 0) {
LAB_00549178:
      pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               "array_define_send: %s: no such object",*param_10,param_12,param_13,param_14);
      return;
    }
    param_11 = extraout_RDX;
    if (((plVar1 != (long *)0x0) && ((long *)plVar1[6] != (long *)0x0)) &&
       (param_12 = (undefined8 *)PTR_garray_class_00715780,
       *(long *)plVar1[6] == *(long *)PTR_garray_class_00715780)) {
      puVar3 = PTR_garray_class_00715780;
      gpointer_init(local_30);
      uVar2 = garray_getscalar(plVar1[6]);
      gpointer_setglist(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        local_30,(long)plVar1,uVar2,puVar3,param_13,param_14);
      puVar4 = local_30;
      uVar2 = pd_pointer((long *)param_10[1]);
      gpointer_unset(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)local_30,
                     puVar4,extraout_RDX_00,puVar3,param_13,param_14);
      return;
    }
  }
  bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"array_define_send",puVar4,
      param_11,param_12,param_13,param_14,param_15);
  return;
}


