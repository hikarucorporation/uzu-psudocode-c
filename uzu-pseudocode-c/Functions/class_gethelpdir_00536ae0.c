// Function : class_gethelpdir
// Namespace: 
// Entry    : 00536ae0
// Prototype: undefined8 class_gethelpdir(long param_1)
// Body     : 00536ae0 - 00536aef


undefined8 class_gethelpdir(long param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return **(undefined8 **)(param_1 + 0x10);
}


