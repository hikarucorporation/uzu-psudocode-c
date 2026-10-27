// Function : getsockopt
// Namespace: _EXTERNAL_
// Entry    : 0015dcc0
// Prototype: int getsockopt(int __fd, int __level, int __optname, void * __optval, socklen_t * __optlen)
// Body     : 0015dcc0 - 0015dcc5


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t *__optlen)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getsockopt_00717660)();
  return iVar1;
}


