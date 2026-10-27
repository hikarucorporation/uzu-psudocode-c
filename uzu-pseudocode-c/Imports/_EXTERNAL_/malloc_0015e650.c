// Function : malloc
// Namespace: _EXTERNAL_
// Entry    : 0015e650
// Prototype: void * malloc(size_t __size)
// Body     : 0015e650 - 0015e655


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00717b28)();
  return pvVar1;
}


