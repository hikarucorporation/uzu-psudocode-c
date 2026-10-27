// Function : modf
// Namespace: _EXTERNAL_
// Entry    : 0015eba0
// Prototype: double modf(double __x, double * __iptr)
// Body     : 0015eba0 - 0015eba5


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double modf(double __x,double *__iptr)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_modf_00717dd0)();
  return dVar1;
}


