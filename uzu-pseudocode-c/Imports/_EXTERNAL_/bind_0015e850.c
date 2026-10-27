// Function : bind
// Namespace: _EXTERNAL_
// Entry    : 0015e850
// Prototype: int bind(int __fd, sockaddr * __addr, socklen_t __len)
// Body     : 0015e850 - 0015e855


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_00717c28)();
  return iVar1;
}


