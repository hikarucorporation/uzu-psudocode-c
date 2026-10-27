// Function : clock_delay
// Namespace: 
// Entry    : 0053afb0
// Prototype: undefined clock_delay(double param_1, double * param_2)
// Body     : 0053afb0 - 0053b0bf


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clock_delay(double param_1,double *param_2)

{
  float fVar1;
  double *pdVar2;
  undefined8 *puVar3;
  double *pdVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  
  fVar1 = *(float *)(param_2 + 4);
  puVar3 = (undefined8 *)__tls_get_addr(&PTR_007159b0);
  pdVar5 = (double *)*puVar3;
  dVar6 = *pdVar5;
  dVar7 = (double)fVar1;
  if (fVar1 <= 0.0) {
    dVar7 = (param_1 * _DAT_00656b78 * dVar7) / (double)*(float *)((long)pdVar5[10] + 0x30) + dVar6;
    if (dVar6 <= dVar7) {
      dVar6 = dVar7;
    }
    if (0.0 < *param_2 || *param_2 == 0.0) goto LAB_0053b052;
  }
  else {
    dVar7 = dVar7 * param_1 + dVar6;
    if (dVar6 <= dVar7) {
      dVar6 = dVar7;
    }
    if (0.0 < *param_2 || *param_2 == 0.0) {
LAB_0053b052:
      pdVar2 = (double *)pdVar5[1];
      if ((double *)pdVar5[1] == param_2) {
        pdVar4 = pdVar5 + 1;
      }
      else {
        do {
          pdVar4 = pdVar2;
          pdVar2 = (double *)pdVar4[3];
        } while (pdVar2 != param_2);
        pdVar4 = pdVar4 + 3;
      }
      *pdVar4 = param_2[3];
      *param_2 = dVar6;
      pdVar2 = (double *)pdVar5[1];
      goto joined_r0x0053b015;
    }
  }
  *param_2 = dVar6;
  pdVar2 = (double *)pdVar5[1];
joined_r0x0053b015:
  if ((pdVar2 == (double *)0x0) || (dVar6 < *pdVar2)) {
    param_2[3] = (double)pdVar2;
    pdVar5[1] = (double)param_2;
    return;
  }
  do {
    pdVar5 = pdVar2;
    pdVar2 = (double *)pdVar5[3];
    if (pdVar2 == (double *)0x0) break;
  } while (*pdVar2 <= dVar6);
  pdVar5[3] = (double)param_2;
  param_2[3] = (double)pdVar2;
  return;
}


