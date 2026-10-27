// Function : libpd_process_double
// Namespace: 
// Entry    : 004d5d70
// Prototype: undefined8 libpd_process_double(int param_1, double * param_2, double * param_3)
// Body     : 004d5d70 - 004d5fd1


undefined8 libpd_process_double(int param_1,double *param_2,double *param_3)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  long *plVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  float *pfVar9;
  long lVar10;
  int iVar11;
  
  sys_lock();
  if (0 < param_1) {
    plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar10 = *(long *)(*plVar4 + 0x50);
    iVar11 = 0;
    do {
      uVar3 = *(uint *)(lVar10 + 0x34);
      if (0 < (int)uVar3) {
        pfVar9 = *(float **)(lVar10 + 0x48);
        iVar6 = 0;
        do {
          pfVar5 = pfVar9;
          if (2 < uVar3 - 1) {
            uVar7 = uVar3 & 0xfffffffc;
            do {
              *pfVar5 = (float)*param_2;
              pfVar5[0x40] = (float)param_2[1];
              pfVar5[0x80] = (float)param_2[2];
              pdVar1 = param_2 + 3;
              param_2 = param_2 + 4;
              pfVar5[0xc0] = (float)*pdVar1;
              pfVar5 = pfVar5 + 0x100;
              uVar7 = uVar7 - 4;
            } while (uVar7 != 0);
          }
          if ((uVar3 & 3) != 0) {
            lVar8 = 0;
            do {
              dVar2 = *param_2;
              param_2 = param_2 + 1;
              *(float *)((long)pfVar5 + lVar8) = (float)dVar2;
              lVar8 = lVar8 + 0x100;
            } while ((uVar3 & 3) * 0x100 != (int)lVar8);
          }
          iVar6 = iVar6 + 1;
          pfVar9 = pfVar9 + 1;
        } while (iVar6 != 0x40);
      }
      memset(*(void **)(lVar10 + 0x40),0,(long)*(int *)(lVar10 + 0x38) << 8);
      sched_tick();
      plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
      lVar10 = *(long *)(*plVar4 + 0x50);
      uVar3 = *(uint *)(lVar10 + 0x38);
      if (0 < (int)uVar3) {
        pfVar9 = *(float **)(lVar10 + 0x40);
        iVar6 = 0;
        do {
          pfVar5 = pfVar9;
          if (2 < uVar3 - 1) {
            uVar7 = uVar3 & 0xfffffffc;
            do {
              *param_3 = (double)*pfVar5;
              param_3[1] = (double)pfVar5[0x40];
              param_3[2] = (double)pfVar5[0x80];
              param_3[3] = (double)pfVar5[0xc0];
              param_3 = param_3 + 4;
              pfVar5 = pfVar5 + 0x100;
              uVar7 = uVar7 - 4;
            } while (uVar7 != 0);
          }
          if ((uVar3 & 3) != 0) {
            lVar8 = 0;
            do {
              *param_3 = (double)*(float *)((long)pfVar5 + lVar8);
              param_3 = param_3 + 1;
              lVar8 = lVar8 + 0x100;
            } while ((uVar3 & 3) * 0x100 != (int)lVar8);
          }
          iVar6 = iVar6 + 1;
          pfVar9 = pfVar9 + 1;
        } while (iVar6 != 0x40);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != param_1);
  }
  sys_unlock();
  return 0;
}


