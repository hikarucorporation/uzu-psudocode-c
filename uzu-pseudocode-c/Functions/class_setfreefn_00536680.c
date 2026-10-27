// Function : class_setfreefn
// Namespace: 
// Entry    : 00536680
// Prototype: undefined class_setfreefn(long param_1, undefined8 param_2)
// Body     : 00536680 - 00536687


void class_setfreefn(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x98) = param_2;
  return;
}


