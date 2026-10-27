// Function : getpeername
// Namespace: _EXTERNAL_
// Entry    : 0015f960
// Prototype: int getpeername(int __fd, sockaddr * __addr, socklen_t * __len)
// Body     : 0015f960 - 0015f965


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getpeername(int __fd,sockaddr *__addr,socklen_t *__len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getpeername_007184b0)();
  return iVar1;
}


