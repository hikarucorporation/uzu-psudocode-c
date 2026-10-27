// Function : qlist_bang
// Namespace: 
// Entry    : 0055aab0
// Prototype: undefined qlist_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, uint * param_13, uint * param_14)
// Body     : 0055aab0 - 0055ab0e


void qlist_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
               undefined8 param_10,undefined8 param_11,undefined8 param_12,uint *param_13,
               uint *param_14)

{
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  *(undefined4 *)(param_9 + 0x58) = 0;
  if (*(double **)(param_9 + 0x60) != (double *)0x0) {
    param_1 = clock_unset(*(double **)(param_9 + 0x60));
  }
  *(undefined8 *)(param_9 + 0x70) = 0;
  *(undefined4 *)(param_9 + 0x7c) = 1;
  if (*(int *)(param_9 + 0x80) == 0) {
    qlist_donext(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,0,1,
                 param_12,param_13,param_14);
    return;
  }
  clock_getlogicaltime();
  *(ulong *)(param_9 + 0x70) = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  *(undefined4 *)(param_9 + 0x78) = 0;
  clock_delay(0.0,*(double **)(param_9 + 0x60));
  return;
}


