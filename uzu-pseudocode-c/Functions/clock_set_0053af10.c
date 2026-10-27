// Function : clock_set
// Namespace: 
// Entry    : 0053af10
// Prototype: undefined clock_set(double param_1, double * param_2)
// Body     : 0053af10 - 0053afaf


void clock_set(double param_1,double *param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  double *pdVar3;
  double *pdVar4;
  
  puVar2 = (undefined8 *)__tls_get_addr(&PTR_007159b0);
  pdVar4 = (double *)*puVar2;
  if (param_1 <= *pdVar4) {
    param_1 = *pdVar4;
  }
  if (0.0 < *param_2 || *param_2 == 0.0) {
    pdVar1 = (double *)pdVar4[1];
    if ((double *)pdVar4[1] == param_2) {
      pdVar3 = pdVar4 + 1;
    }
    else {
      do {
        pdVar3 = pdVar1;
        pdVar1 = (double *)pdVar3[3];
      } while (pdVar1 != param_2);
      pdVar3 = pdVar3 + 3;
    }
    *pdVar3 = param_2[3];
  }
  *param_2 = param_1;
  pdVar1 = (double *)pdVar4[1];
  if ((pdVar1 == (double *)0x0) || (param_1 < *pdVar1)) {
    param_2[3] = (double)pdVar1;
    pdVar4[1] = (double)param_2;
    return;
  }
  do {
    pdVar4 = pdVar1;
    pdVar1 = (double *)pdVar4[3];
    if (pdVar1 == (double *)0x0) break;
  } while (*pdVar1 <= param_1);
  pdVar4[3] = (double)param_2;
  param_2[3] = (double)pdVar1;
  return;
}


