// Function : operator.new
// Namespace: _EXTERNAL_
// Entry    : 0015efb0
// Prototype: void * operator.new(ulong param_1, nothrow_t * param_2)
// Body     : 0015efb0 - 0015efb5


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1,nothrow_t *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00717fd8)();
  return pvVar1;
}


