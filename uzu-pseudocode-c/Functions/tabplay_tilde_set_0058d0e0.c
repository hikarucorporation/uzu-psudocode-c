// Function : tabplay_tilde_set
// Namespace: 
// Entry    : 0058d0e0
// Prototype: undefined tabplay_tilde_set(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, uint param_11, ulong param_12, char * param_13, undefined8 param_14)
// Body     : 0058d0e0 - 0058d0ed


void tabplay_tilde_set(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9,undefined8 param_10,uint param_11,ulong param_12,char *param_13,
                      undefined8 param_14)

{
  arrayvec_set(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               (int *)(param_9 + 0x48),(char *)(ulong)param_11,param_12,param_12,param_13,param_14);
  return;
}


