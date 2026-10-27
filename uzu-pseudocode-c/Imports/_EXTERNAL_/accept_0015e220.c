// Function : accept
// Namespace: _EXTERNAL_
// Entry    : 0015e220
// Prototype: int accept(int __fd, sockaddr * __addr, socklen_t * __addr_len)
// Body     : 0015e220 - 0015e225


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_accept_00717910)();
  return iVar1;
}


