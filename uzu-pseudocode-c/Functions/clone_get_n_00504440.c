// Function : clone_get_n
// Namespace: 
// Entry    : 00504440
// Prototype: undefined4 clone_get_n(long * param_1)
// Body     : 00504440 - 00504455


undefined4 clone_get_n(long *param_1)

{
  if (*param_1 == *(long *)PTR_clone_class_00715970) {
    return (int)param_1[7];
  }
  return 0;
}


