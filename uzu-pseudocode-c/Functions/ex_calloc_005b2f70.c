// Function : ex_calloc
// Namespace: 
// Entry    : 005b2f70
// Prototype: void * ex_calloc(size_t __nmemb, size_t __size)
// Body     : 005b2f70 - 005b2f74


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * ex_calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_007179a0)();
  return pvVar1;
}


