// Function : class_sethelpsymbol
// Namespace: 
// Entry    : 005369f0
// Prototype: undefined class_sethelpsymbol(long param_1, undefined8 param_2)
// Body     : 005369f0 - 005369f9


void class_sethelpsymbol(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 8) = param_2;
  }
  return;
}


