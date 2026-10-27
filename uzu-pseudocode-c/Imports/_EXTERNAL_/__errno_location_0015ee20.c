// Function : __errno_location
// Namespace: _EXTERNAL_
// Entry    : 0015ee20
// Prototype: int * __errno_location(void)
// Body     : 0015ee20 - 0015ee25


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00717f10)();
  return piVar1;
}


