// Function : fread
// Namespace: _EXTERNAL_
// Entry    : 0015cd20
// Prototype: size_t fread(void * __ptr, size_t __size, size_t __n, FILE * __stream)
// Body     : 0015cd20 - 0015cd25


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_00716e90)();
  return sVar1;
}


