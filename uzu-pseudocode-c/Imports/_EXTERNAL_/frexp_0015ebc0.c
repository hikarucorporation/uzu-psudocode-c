// Function : frexp
// Namespace: _EXTERNAL_
// Entry    : 0015ebc0
// Prototype: double frexp(double __x, int * __exponent)
// Body     : 0015ebc0 - 0015ebc5


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double frexp(double __x,int *__exponent)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_frexp_00717de0)();
  return dVar1;
}


