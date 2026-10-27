// Function : text_client_free
// Namespace: 
// Entry    : 00558080
// Prototype: undefined text_client_free(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00558080 - 00558088


void text_client_free(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                     char *param_13,undefined8 param_14)

{
  gpointer_unset(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9 + 0x38,
                 param_10,param_11,param_12,param_13,param_14);
  return;
}


