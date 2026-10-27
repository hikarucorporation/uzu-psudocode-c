// Function : class_gethelpname
// Namespace: 
// Entry    : 005369e0
// Prototype: undefined8 class_gethelpname(long param_1)
// Body     : 005369e0 - 005369ef


undefined8 class_gethelpname(long param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return **(undefined8 **)(param_1 + 8);
}


