// Function : class_setsavefn
// Namespace: 
// Entry    : 00536af0
// Prototype: undefined class_setsavefn(long param_1, undefined8 param_2)
// Body     : 00536af0 - 00536af9


void class_setsavefn(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x78) = param_2;
  }
  return;
}


