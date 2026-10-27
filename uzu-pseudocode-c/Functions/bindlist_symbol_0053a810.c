// Function : bindlist_symbol
// Namespace: 
// Entry    : 0053a810
// Prototype: undefined bindlist_symbol(long param_1, undefined8 param_2)
// Body     : 0053a810 - 0053a83c


void bindlist_symbol(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  for (puVar1 = *(undefined8 **)(param_1 + 8); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)puVar1[1]) {
    (**(code **)(*(long *)*puVar1 + 0x50))((long *)*puVar1,param_2);
  }
  return;
}


