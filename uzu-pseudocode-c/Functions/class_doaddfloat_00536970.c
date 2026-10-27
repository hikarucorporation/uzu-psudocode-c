// Function : class_doaddfloat
// Namespace: 
// Entry    : 00536970
// Prototype: undefined class_doaddfloat(long param_1, undefined8 param_2)
// Body     : 00536970 - 00536979


void class_doaddfloat(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x48) = param_2;
  }
  return;
}


