// Function : text_define_send
// Namespace: 
// Entry    : 00557540
// Prototype: undefined text_define_send(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00557540 - 0055758c


void text_define_send(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                     char *param_13,undefined8 param_14)

{
  if (param_10[1] == 0) {
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "text_define_send: %s: no such object",*param_10,param_12,param_13,param_14);
    return;
  }
  gpointer_setglist(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    (undefined8 *)(param_9 + 0x70),*(long *)(param_9 + 0x38),
                    *(undefined8 *)(param_9 + 0x68),param_12,param_13,param_14);
  pd_pointer((long *)param_10[1]);
  return;
}


