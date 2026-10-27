// Function : libpd_new_instance
// Namespace: 
// Entry    : 004d7a70
// Prototype: undefined8 * libpd_new_instance(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, char * param_14)
// Body     : 004d7a70 - 004d7a8a


undefined8 *
libpd_new_instance(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  char *param_13,char *param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = pdinstance_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                          param_10,param_11,param_12,param_13,param_14);
  uVar2 = libpdimp_new();
  *(undefined8 *)(puVar1[10] + 0x60) = uVar2;
  return puVar1;
}


