// Function : qlist_clear
// Namespace: 
// Entry    : 0055a810
// Prototype: undefined qlist_clear(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0055a810 - 0055a841


void qlist_clear(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9)

{
  *(undefined4 *)(param_9 + 0x58) = 0;
  if (*(double **)(param_9 + 0x60) != (double *)0x0) {
    param_1 = clock_unset(*(double **)(param_9 + 0x60));
  }
  *(undefined8 *)(param_9 + 0x70) = 0;
  *(undefined4 *)(param_9 + 0x7c) = 1;
  binbuf_clear(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(int **)(param_9 + 0x30));
  return;
}


