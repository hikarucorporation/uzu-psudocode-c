// Function : bicoeff2_Q_S
// Namespace: 
// Entry    : 00569940
// Prototype: undefined bicoeff2_Q_S(undefined4 param_1, long param_2)
// Body     : 00569940 - 00569949


void bicoeff2_Q_S(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x34) = param_1;
  bicoeff2_bang(param_2);
  return;
}


