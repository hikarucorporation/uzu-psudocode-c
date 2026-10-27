// Function : recvfrom
// Namespace: _EXTERNAL_
// Entry    : 0015bec0
// Prototype: ssize_t recvfrom(int __fd, void * __buf, size_t __n, int __flags, sockaddr * __addr, socklen_t * __addr_len)
// Body     : 0015bec0 - 0015bec5


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t *__addr_len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recvfrom_00716760)();
  return sVar1;
}


