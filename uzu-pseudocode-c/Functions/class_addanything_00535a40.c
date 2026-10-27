// Function : class_addanything
// Namespace: 
// Entry    : 00535a40
// Prototype: undefined class_addanything(long param_1, undefined8 param_2)
// Body     : 00535a40 - 00535a49


void class_addanything(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x60) = param_2;
  }
  return;
}


