// Function : bindlist_bang
// Namespace: 
// Entry    : 0053a780
// Prototype: undefined bindlist_bang(long param_1)
// Body     : 0053a780 - 0053a7a3


void bindlist_bang(long param_1)

{
  undefined8 *puVar1;
  
  for (puVar1 = *(undefined8 **)(param_1 + 8); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)puVar1[1]) {
    (**(code **)(*(long *)*puVar1 + 0x38))();
  }
  return;
}


