// Function : recv
// Namespace: _EXTERNAL_
// Entry    : 0015ea70
// Prototype: ssize_t recv(int __fd, void * __buf, size_t __n, int __flags)
// Body     : 0015ea70 - 0015ea75


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recv_00717d38)();
  return sVar1;
}


