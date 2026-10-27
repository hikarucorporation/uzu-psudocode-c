// Function : fwrite
// Namespace: _EXTERNAL_
// Entry    : 0015f2c0
// Prototype: size_t fwrite(void * __ptr, size_t __size, size_t __n, FILE * __s)
// Body     : 0015f2c0 - 0015f2c5


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00718160)();
  return sVar1;
}


