// Function : sys_getblksize
// Namespace: 
// Entry    : 0015b210
// Prototype: undefined8 sys_getblksize(void)
// Body     : 0015b210 - 0015b215


undefined8 sys_getblksize(void)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)PTR_sys_getblksize_00716108)();
  return uVar1;
}


