// Function : file_define_free
// Namespace: 
// Entry    : 0057acd0
// Prototype: undefined file_define_free(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0057acd0 - 0057ad00


void file_define_free(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                     char *param_13,undefined8 param_14)

{
  int *piVar1;
  undefined8 extraout_RDX;
  undefined8 extraout_XMM0_Qa;
  
  piVar1 = (int *)param_9[7];
  if (-1 < *piVar1) {
    sys_close(*piVar1);
    piVar1 = (int *)param_9[7];
    param_11 = extraout_RDX;
    param_1 = extraout_XMM0_Qa;
  }
  *piVar1 = -1;
  if ((undefined8 *)param_9[8] == (undefined8 *)0x0) {
    return;
  }
  pd_unbind(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
            (undefined8 *)param_9[8],param_11,param_12,param_13,param_14);
  return;
}


