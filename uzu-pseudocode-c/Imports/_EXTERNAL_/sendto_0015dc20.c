// Function : sendto
// Namespace: _EXTERNAL_
// Entry    : 0015dc20
// Prototype: ssize_t sendto(int __fd, void * __buf, size_t __n, int __flags, sockaddr * __addr, socklen_t __addr_len)
// Body     : 0015dc20 - 0015dc25


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendto(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t __addr_len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_sendto_00717610)();
  return sVar1;
}


