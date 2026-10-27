// Function : operator.new
// Namespace: _EXTERNAL_
// Entry    : 0015b870
// Prototype: void * operator.new(ulong param_1)
// Body     : 0015b870 - 0015b875


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00716438)();
  return pvVar1;
}


