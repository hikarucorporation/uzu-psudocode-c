// Function : class_addsymbol
// Namespace: 
// Entry    : 00536980
// Prototype: undefined class_addsymbol(long param_1, undefined8 param_2)
// Body     : 00536980 - 00536989


void class_addsymbol(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x50) = param_2;
  }
  return;
}


