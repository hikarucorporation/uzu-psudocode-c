// Function : symbolinlet_symbol
// Namespace: 
// Entry    : 0053a450
// Prototype: undefined symbolinlet_symbol(long param_1, undefined8 param_2)
// Body     : 0053a450 - 0053a457


void symbolinlet_symbol(long param_1,undefined8 param_2)

{
  **(undefined8 **)(param_1 + 0x28) = param_2;
  return;
}


