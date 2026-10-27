// Function : usleep
// Namespace: _EXTERNAL_
// Entry    : 0015f1d0
// Prototype: int usleep(__useconds_t __useconds)
// Body     : 0015f1d0 - 0015f1d5


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_007180e8)();
  return iVar1;
}


