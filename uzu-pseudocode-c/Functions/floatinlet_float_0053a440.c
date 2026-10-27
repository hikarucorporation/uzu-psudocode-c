// Function : floatinlet_float
// Namespace: 
// Entry    : 0053a440
// Prototype: undefined floatinlet_float(undefined4 param_1, long param_2)
// Body     : 0053a440 - 0053a448


void floatinlet_float(undefined4 param_1,long param_2)

{
  **(undefined4 **)(param_2 + 0x28) = param_1;
  return;
}


