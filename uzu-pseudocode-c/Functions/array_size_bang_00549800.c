// Function : array_size_bang
// Namespace: 
// Entry    : 00549800
// Prototype: undefined array_size_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 00549800 - 0054982e


void array_size_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,undefined8 param_10,undefined8 param_11,int *param_12,
                    char *param_13,undefined8 param_14)

{
  int *piVar1;
  undefined4 extraout_XMM0_Db;
  long local_10;
  
  piVar1 = (int *)array_client_getbuf(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                                      param_8,param_9,&local_10,param_11,param_12,param_13,param_14)
  ;
  if (piVar1 == (int *)0x0) {
    return;
  }
  outlet_float(CONCAT44(extraout_XMM0_Db,(float)*piVar1),param_2,param_3,param_4,param_5,param_6,
               param_7,param_8,*(long **)(param_9 + 0x18));
  return;
}


