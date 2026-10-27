// Function : sys_isbigendian
// Namespace: 
// Entry    : 0015d610
// Prototype: undefined8 sys_isbigendian(void)
// Body     : 0015d610 - 0015d615


undefined8 sys_isbigendian(void)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)PTR_sys_isbigendian_00717308)();
  return uVar1;
}


