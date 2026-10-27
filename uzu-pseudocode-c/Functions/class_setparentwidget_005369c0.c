// Function : class_setparentwidget
// Namespace: 
// Entry    : 005369c0
// Prototype: undefined class_setparentwidget(long param_1, undefined8 param_2)
// Body     : 005369c0 - 005369c9


void class_setparentwidget(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x70) = param_2;
  }
  return;
}


