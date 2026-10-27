// Function : clock_free
// Namespace: 
// Entry    : 0053b410
// Prototype: undefined clock_free(double * param_1)
// Body     : 0053b410 - 0053b477


void clock_free(double *param_1)

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
  freebytes(param_1);
  return;
}


