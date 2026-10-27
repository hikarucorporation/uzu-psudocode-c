// Function : ioctl
// Namespace: _EXTERNAL_
// Entry    : 0015b710
// Prototype: int ioctl(int __fd, ulong __request, ...)
// Body     : 0015b710 - 0015b715


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00716388)();
  return iVar1;
}


