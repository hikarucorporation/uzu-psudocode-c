// Function : vline_tilde_float
// Namespace: 
// Entry    : 0058fd40
// Prototype: undefined vline_tilde_float(float param_1, long param_2)
// Body     : 0058fd40 - 0058ff6a


void vline_tilde_float(float param_1,long param_2)

{
  double dVar1;
  void *pvVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  void *pvVar6;
  double *pdVar7;
  double extraout_XMM0_Qa;
  double dVar8;
  float fVar9;
  float fVar10;
  
  clock_gettimesince(*(undefined8 *)(param_2 + 0x40));
  fVar10 = 0.0;
  if ((((uint)param_1 >> 0x1d ^ (uint)param_1 >> 0x1e) & 1) != 0) {
    fVar10 = param_1;
  }
  if (*(float *)(param_2 + 0x78) < 0.0) {
    dVar8 = (double)fVar10;
    *(double *)(param_2 + 0x30) = dVar8;
    pvVar6 = *(void **)(param_2 + 0x80);
    if (pvVar6 != (void *)0x0) {
      do {
        pvVar2 = *(void **)((long)pvVar6 + 0x18);
        freebytes(pvVar6);
        pvVar6 = pvVar2;
      } while (pvVar2 != (void *)0x0);
      dVar8 = *(double *)(param_2 + 0x30);
    }
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x74) = 0;
    *(float *)(param_2 + 0x70) = (float)dVar8;
    *(undefined8 *)(param_2 + 0x68) = 0x4415af1d78b58c40;
    return;
  }
  fVar9 = 0.0;
  if (0.0 <= *(float *)(param_2 + 0x74)) {
    fVar9 = *(float *)(param_2 + 0x74);
  }
  dVar8 = extraout_XMM0_Qa + (double)*(float *)(param_2 + 0x78);
  pdVar3 = getbytes(0x20);
  pdVar5 = (double *)(param_2 + 0x80);
  pdVar7 = *(double **)(param_2 + 0x80);
  if (pdVar7 == (double *)0x0) {
LAB_0058feef:
    *pdVar5 = (double)pdVar3;
  }
  else {
    dVar1 = pdVar7[1];
    pdVar4 = pdVar7;
    if ((dVar1 <= dVar8) && ((dVar1 != dVar8 || ((*pdVar7 <= dVar1 && (0.0 < fVar9)))))) {
      pdVar4 = (double *)pdVar7[3];
      if (pdVar4 == (double *)0x0) {
LAB_0058fee8:
        pdVar5 = pdVar7 + 3;
        goto LAB_0058feef;
      }
      dVar1 = pdVar4[1];
      if (fVar9 <= 0.0) {
        if (dVar1 < dVar8) {
          do {
            pdVar7 = pdVar4;
            pdVar4 = (double *)pdVar7[3];
            if (pdVar4 == (double *)0x0) goto LAB_0058fee8;
          } while (pdVar4[1] <= dVar8 && dVar8 != pdVar4[1]);
        }
      }
      else {
        while ((dVar1 <= dVar8 && ((dVar1 != dVar8 || (*pdVar4 <= dVar1))))) {
          pdVar5 = (double *)pdVar4[3];
          pdVar7 = pdVar4;
          if (pdVar5 == (double *)0x0) goto LAB_0058fee8;
          dVar1 = pdVar5[1];
          pdVar4 = pdVar5;
        }
      }
      pdVar5 = pdVar7 + 3;
    }
    *pdVar5 = (double)pdVar3;
    do {
      pdVar5 = (double *)pdVar4[3];
      freebytes(pdVar4);
      pdVar4 = pdVar5;
    } while (pdVar5 != (double *)0x0);
  }
  pdVar3[3] = 0.0;
  *(float *)(pdVar3 + 2) = fVar10;
  pdVar3[1] = dVar8;
  *pdVar3 = (double)fVar9 + dVar8;
  *(undefined8 *)(param_2 + 0x74) = 0;
  return;
}


