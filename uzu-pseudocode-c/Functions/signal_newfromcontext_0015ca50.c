// Function : signal_newfromcontext
// Namespace: 
// Entry    : 0015ca50
// Prototype: int * signal_newfromcontext(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int param_9, ulong param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0015ca50 - 0015ca55


int * signal_newfromcontext
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                int param_9,ulong param_10,undefined8 param_11,undefined8 param_12,char *param_13,
                undefined8 param_14)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR_signal_newfromcontext_00716d28)();
  return piVar1;
}


