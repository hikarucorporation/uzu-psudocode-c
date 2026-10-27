// Function : read
// Namespace: _EXTERNAL_
// Entry    : 0015dd30
// Prototype: ssize_t read(int __fd, void * __buf, size_t __nbytes)
// Body     : 0015dd30 - 0015dd35


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_00717698)();
  return sVar1;
}


