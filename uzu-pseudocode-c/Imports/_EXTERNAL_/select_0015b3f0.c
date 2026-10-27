// Function : select
// Namespace: _EXTERNAL_
// Entry    : 0015b3f0
// Prototype: int select(int __nfds, fd_set * __readfds, fd_set * __writefds, fd_set * __exceptfds, timeval * __timeout)
// Body     : 0015b3f0 - 0015b3f5


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_select_007161f8)();
  return iVar1;
}


