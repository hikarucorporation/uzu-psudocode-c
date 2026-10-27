// Function : bindlist_pointer
// Namespace: 
// Entry    : 0053a840
// Prototype: undefined bindlist_pointer(long param_1, undefined8 param_2)
// Body     : 0053a840 - 0053a86c


void bindlist_pointer(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  for (puVar1 = *(undefined8 **)(param_1 + 8); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)puVar1[1]) {
    (**(code **)(*(long *)*puVar1 + 0x40))((long *)*puVar1,param_2);
  }
  return;
}


