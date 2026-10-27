// Function : clock_unset
// Namespace: 
// Entry    : 0053aeb0
// Prototype: undefined clock_unset(double * param_1)
// Body     : 0053aeb0 - 0053af0b


void clock_unset(double *param_1)

{
  double *pdVar1;
  long *plVar2;
  double *pdVar3;
  
  if (0.0 < *param_1 || *param_1 == 0.0) {
    plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
    pdVar1 = *(double **)(*plVar2 + 8);
    if (pdVar1 == param_1) {
      pdVar3 = (double *)(*plVar2 + 8);
    }
    else {
      do {
        pdVar3 = pdVar1;
        pdVar1 = (double *)pdVar3[3];
      } while (pdVar1 != param_1);
      pdVar3 = pdVar3 + 3;
    }
    *pdVar3 = param_1[3];
    *param_1 = -1.0;
  }
  return;
}


