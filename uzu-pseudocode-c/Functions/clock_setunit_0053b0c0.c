// Function : clock_setunit
// Namespace: 
// Entry    : 0053b0c0
// Prototype: undefined clock_setunit(double param_1, double * param_2, int param_3)
// Body     : 0053b0c0 - 0053b2e0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clock_setunit(double param_1,double *param_2,int param_3)

{
  double dVar1;
  double *pdVar2;
  double dVar3;
  undefined8 *puVar4;
  double *pdVar5;
  double *pdVar6;
  float fVar7;
  double dVar8;
  
  dVar1 = (double)(~-(ulong)(0.0 < param_1) & _DAT_005d9000 |
                  (ulong)param_1 & -(ulong)(0.0 < param_1));
  fVar7 = *(float *)(param_2 + 4);
  if (param_3 == 0) {
    dVar3 = (double)fVar7 * _DAT_00656b80;
  }
  else {
    dVar3 = (double)(float)(_DAT_006524b0 ^ (uint)fVar7);
  }
  if (dVar1 != dVar3) {
    dVar3 = *param_2;
    dVar8 = DAT_00651e70;
    if (0.0 <= dVar3) {
      puVar4 = (undefined8 *)__tls_get_addr(&PTR_007159b0);
      dVar8 = (double)fVar7;
      if (fVar7 <= 0.0) {
        dVar8 = (dVar8 * _DAT_00656b88) / (double)*(float *)((long)((double *)*puVar4)[10] + 0x30);
      }
      dVar8 = (dVar3 - *(double *)*puVar4) / dVar8;
    }
    if (param_3 == 0) {
      fVar7 = (float)(dVar1 * _DAT_00656b80);
      *(float *)(param_2 + 4) = fVar7;
    }
    else {
      fVar7 = (float)((uint)(float)dVar1 ^ _DAT_006524b0);
      *(float *)(param_2 + 4) = fVar7;
    }
    if (0.0 <= dVar8) {
      puVar4 = (undefined8 *)__tls_get_addr(&PTR_007159b0);
      pdVar6 = (double *)*puVar4;
      dVar1 = *pdVar6;
      if (fVar7 <= 0.0) {
        dVar8 = (dVar8 * (double)fVar7 * _DAT_00656b78) /
                (double)*(float *)((long)pdVar6[10] + 0x30);
      }
      else {
        dVar8 = dVar8 * (double)fVar7;
      }
      if (dVar1 <= dVar8 + dVar1) {
        dVar1 = dVar8 + dVar1;
      }
      if (0.0 <= dVar3) {
        pdVar2 = (double *)pdVar6[1];
        if ((double *)pdVar6[1] == param_2) {
          pdVar5 = pdVar6 + 1;
        }
        else {
          do {
            pdVar5 = pdVar2;
            pdVar2 = (double *)pdVar5[3];
          } while (pdVar2 != param_2);
          pdVar5 = pdVar5 + 3;
        }
        *pdVar5 = param_2[3];
      }
      *param_2 = dVar1;
      pdVar2 = (double *)pdVar6[1];
      if ((pdVar2 == (double *)0x0) || (dVar1 < *pdVar2)) {
        param_2[3] = (double)pdVar2;
        pdVar6[1] = (double)param_2;
        return;
      }
      do {
        pdVar6 = pdVar2;
        pdVar2 = (double *)pdVar6[3];
        if (pdVar2 == (double *)0x0) break;
      } while (*pdVar2 <= dVar1);
      pdVar6[3] = (double)param_2;
      param_2[3] = (double)pdVar2;
      return;
    }
  }
  return;
}


