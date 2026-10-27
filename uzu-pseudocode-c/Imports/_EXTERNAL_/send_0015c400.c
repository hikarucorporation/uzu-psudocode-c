// Function : send
// Namespace: _EXTERNAL_
// Entry    : 0015c400
// Prototype: ssize_t send(int __fd, void * __buf, size_t __n, int __flags)
// Body     : 0015c400 - 0015c405


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_send_00716a00)();
  return sVar1;
}


