// Function : class_setwidget
// Namespace: 
// Entry    : 005369b0
// Prototype: undefined class_setwidget(long param_1, undefined8 param_2)
// Body     : 005369b0 - 005369b9


void class_setwidget(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x68) = param_2;
  }
  return;
}


