// Function : setsockopt
// Namespace: _EXTERNAL_
// Entry    : 0015b730
// Prototype: int setsockopt(int __fd, int __level, int __optname, void * __optval, socklen_t __optlen)
// Body     : 0015b730 - 0015b735


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setsockopt_00716398)();
  return iVar1;
}


