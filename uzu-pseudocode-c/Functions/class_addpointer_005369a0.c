// Function : class_addpointer
// Namespace: 
// Entry    : 005369a0
// Prototype: undefined class_addpointer(long param_1, undefined8 param_2)
// Body     : 005369a0 - 005369a9


void class_addpointer(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x40) = param_2;
  }
  return;
}


