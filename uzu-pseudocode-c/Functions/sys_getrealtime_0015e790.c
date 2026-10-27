// Function : sys_getrealtime
// Namespace: 
// Entry    : 0015e790
// Prototype: double sys_getrealtime(void)
// Body     : 0015e790 - 0015e795


double sys_getrealtime(void)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_sys_getrealtime_00717bc8)();
  return dVar1;
}


