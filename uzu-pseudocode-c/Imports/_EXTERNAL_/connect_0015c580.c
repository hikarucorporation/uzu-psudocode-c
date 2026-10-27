// Function : connect
// Namespace: _EXTERNAL_
// Entry    : 0015c580
// Prototype: int connect(int __fd, sockaddr * __addr, socklen_t __len)
// Body     : 0015c580 - 0015c585


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_connect_00716ac0)();
  return iVar1;
}


