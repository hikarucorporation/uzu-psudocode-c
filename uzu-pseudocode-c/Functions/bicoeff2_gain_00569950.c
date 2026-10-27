// Function : bicoeff2_gain
// Namespace: 
// Entry    : 00569950
// Prototype: undefined bicoeff2_gain(undefined4 param_1, long param_2)
// Body     : 00569950 - 00569959


void bicoeff2_gain(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x38) = param_1;
  bicoeff2_bang(param_2);
  return;
}


