// Function : bag_clear
// Namespace: 
// Entry    : 00555c80
// Prototype: undefined bag_clear(long param_1)
// Body     : 00555c80 - 00555cab


void bag_clear(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  while (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = *puVar1;
    freebytes(puVar1);
    puVar1 = *(undefined8 **)(param_1 + 0x38);
  }
  return;
}


