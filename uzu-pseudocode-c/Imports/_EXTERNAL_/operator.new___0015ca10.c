// Function : operator.new[]
// Namespace: _EXTERNAL_
// Entry    : 0015ca10
// Prototype: void * operator.new[](ulong param_1)
// Body     : 0015ca10 - 0015ca15


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new__(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new___00716d08)();
  return pvVar1;
}


