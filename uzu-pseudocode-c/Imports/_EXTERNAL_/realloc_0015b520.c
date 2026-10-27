// Function : realloc
// Namespace: _EXTERNAL_
// Entry    : 0015b520
// Prototype: void * realloc(void * __ptr, size_t __size)
// Body     : 0015b520 - 0015b525


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_00716290)();
  return pvVar1;
}


