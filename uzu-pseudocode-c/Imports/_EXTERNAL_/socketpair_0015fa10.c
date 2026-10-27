// Function : socketpair
// Namespace: _EXTERNAL_
// Entry    : 0015fa10
// Prototype: int socketpair(int __domain, int __type, int __protocol, int * __fds)
// Body     : 0015fa10 - 0015fa15


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socketpair(int __domain,int __type,int __protocol,int *__fds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socketpair_00718508)();
  return iVar1;
}


