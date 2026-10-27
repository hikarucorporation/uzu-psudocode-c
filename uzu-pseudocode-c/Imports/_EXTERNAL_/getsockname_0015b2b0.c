// Function : getsockname
// Namespace: _EXTERNAL_
// Entry    : 0015b2b0
// Prototype: int getsockname(int __fd, sockaddr * __addr, socklen_t * __len)
// Body     : 0015b2b0 - 0015b2b5


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getsockname(int __fd,sockaddr *__addr,socklen_t *__len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getsockname_00716158)();
  return iVar1;
}


