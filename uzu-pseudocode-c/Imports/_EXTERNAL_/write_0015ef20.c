// Function : write
// Namespace: _EXTERNAL_
// Entry    : 0015ef20
// Prototype: ssize_t write(int __fd, void * __buf, size_t __n)
// Body     : 0015ef20 - 0015ef25


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_00717f90)();
  return sVar1;
}


