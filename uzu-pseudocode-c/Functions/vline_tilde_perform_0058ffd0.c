// Function : vline_tilde_perform
// Namespace: 
// Entry    : 0058ffd0
// Prototype: long vline_tilde_perform(long param_1)
// Body     : 0058ffd0 - 0059021f


long vline_tilde_perform(long param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  double *pdVar8;
  float *pfVar9;
  double extraout_XMM0_Qa;
  double dVar10;
  double dVar11;
  double local_50;
  double local_40;
  
  lVar6 = *(long *)(param_1 + 8);
  pfVar9 = *(float **)(param_1 + 0x10);
  iVar5 = *(int *)(param_1 + 0x18);
  local_50 = *(double *)(lVar6 + 0x30);
  local_40 = *(double *)(lVar6 + 0x38);
  dVar2 = *(double *)(lVar6 + 0x60);
  clock_gettimesince(*(undefined8 *)(lVar6 + 0x40));
  pdVar8 = *(double **)(lVar6 + 0x80);
  if (extraout_XMM0_Qa == *(double *)(lVar6 + 0x48)) {
    dVar10 = *(double *)(lVar6 + 0x50);
  }
  else {
    iVar7 = 0x40;
    if (0x40 < iVar5) {
      iVar7 = iVar5;
    }
    *(double *)(lVar6 + 0x48) = extraout_XMM0_Qa;
    dVar10 = extraout_XMM0_Qa - (double)iVar7 * dVar2;
  }
  *(double *)(lVar6 + 0x50) = (double)iVar5 * dVar2 + dVar10;
  if (0 < iVar5) {
    iVar7 = 0;
    do {
      dVar10 = dVar10 + dVar2;
      if (pdVar8 == (double *)0x0) {
        pdVar8 = (double *)0x0;
      }
      else {
        dVar3 = pdVar8[1];
        while (dVar3 < dVar10) {
          if (*(double *)(lVar6 + 0x68) <= dVar10) {
            local_50 = (double)*(float *)(lVar6 + 0x70);
          }
          dVar4 = *pdVar8;
          fVar1 = *(float *)(pdVar8 + 2);
          dVar11 = (double)fVar1;
          local_40 = 0.0;
          if (dVar4 <= dVar3) {
            local_50 = dVar11;
          }
          else {
            dVar11 = (dVar11 - local_50) / (dVar4 - dVar3);
            local_40 = dVar11 * dVar2;
            local_50 = (dVar10 - dVar3) * dVar11 + local_50;
          }
          *(double *)(lVar6 + 0x38) = local_40;
          *(float *)(lVar6 + 0x70) = fVar1;
          *(double *)(lVar6 + 0x68) = dVar4;
          *(double *)(lVar6 + 0x80) = pdVar8[3];
          freebytes(pdVar8);
          pdVar8 = *(double **)(lVar6 + 0x80);
          if (pdVar8 == (double *)0x0) {
            pdVar8 = (double *)0x0;
            if (dVar10 < *(double *)(lVar6 + 0x68)) goto LAB_005900a0;
            goto LAB_005901c3;
          }
          dVar3 = pdVar8[1];
        }
      }
      if (*(double *)(lVar6 + 0x68) <= dVar10) {
LAB_005901c3:
        local_50 = (double)*(float *)(lVar6 + 0x70);
        *(undefined8 *)(lVar6 + 0x38) = 0;
        *(undefined8 *)(lVar6 + 0x68) = 0x4415af1d78b58c40;
        local_40 = 0.0;
      }
LAB_005900a0:
      *pfVar9 = (float)local_50;
      pfVar9 = pfVar9 + 1;
      local_50 = local_50 + local_40;
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar5);
  }
  *(double *)(lVar6 + 0x30) = local_50;
  return param_1 + 0x20;
}


