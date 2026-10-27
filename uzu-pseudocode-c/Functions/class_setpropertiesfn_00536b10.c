// Function : class_setpropertiesfn
// Namespace: 
// Entry    : 00536b10
// Prototype: undefined class_setpropertiesfn(long param_1, undefined8 param_2)
// Body     : 00536b10 - 00536b1c


void class_setpropertiesfn(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x80) = param_2;
  }
  return;
}


