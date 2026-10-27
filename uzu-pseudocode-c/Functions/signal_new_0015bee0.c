// Function : signal_new
// Namespace: 
// Entry    : 0015bee0
// Prototype: int * signal_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int param_9, ulong param_10, long param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0015bee0 - 0015bee5


int * signal_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                int param_9,ulong param_10,long param_11,undefined8 param_12,char *param_13,
                undefined8 param_14)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR_signal_new_00716770)();
  return piVar1;
}


