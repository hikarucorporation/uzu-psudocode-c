// Function : poll
// Namespace: _EXTERNAL_
// Entry    : 0015c110
// Prototype: int poll(pollfd * __fds, nfds_t __nfds, int __timeout)
// Body     : 0015c110 - 0015c115


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_poll_00716888)();
  return iVar1;
}


