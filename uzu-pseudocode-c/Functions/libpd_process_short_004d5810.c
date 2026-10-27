// Function : libpd_process_short
// Namespace: 
// Entry    : 004d5810
// Prototype: undefined8 libpd_process_short(int param_1, short * param_2, undefined2 * param_3)
// Body     : 004d5810 - 004d5ac4


undefined8 libpd_process_short(int param_1,short *param_2,undefined2 *param_3)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  float fVar4;
  long *plVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  float fVar13;
  
  sys_lock();
  if (0 < param_1) {
    plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar11 = *(long *)(*plVar5 + 0x50);
    iVar12 = 0;
    fVar13 = DAT_00651e0c;
    do {
      uVar3 = *(uint *)(lVar11 + 0x34);
      if (0 < (int)uVar3) {
        pfVar6 = *(float **)(lVar11 + 0x48);
        iVar8 = 0;
        do {
          pfVar7 = pfVar6;
          if (2 < uVar3 - 1) {
            uVar9 = uVar3 & 0xfffffffc;
            do {
              *pfVar7 = (float)(int)*param_2 * fVar13;
              pfVar7[0x40] = (float)(int)param_2[1] * fVar13;
              pfVar7[0x80] = (float)(int)param_2[2] * fVar13;
              psVar1 = param_2 + 3;
              param_2 = param_2 + 4;
              pfVar7[0xc0] = (float)(int)*psVar1 * fVar13;
              pfVar7 = pfVar7 + 0x100;
              uVar9 = uVar9 - 4;
            } while (uVar9 != 0);
          }
          if ((uVar3 & 3) != 0) {
            lVar10 = 0;
            do {
              sVar2 = *param_2;
              param_2 = param_2 + 1;
              *(float *)((long)pfVar7 + lVar10) = (float)(int)sVar2 * fVar13;
              lVar10 = lVar10 + 0x100;
            } while ((uVar3 & 3) * 0x100 != (int)lVar10);
          }
          iVar8 = iVar8 + 1;
          pfVar6 = pfVar6 + 1;
        } while (iVar8 != 0x40);
      }
      memset(*(void **)(lVar11 + 0x40),0,(long)*(int *)(lVar11 + 0x38) << 8);
      sched_tick();
      plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
      fVar4 = DAT_00651e10;
      fVar13 = DAT_00651e0c;
      lVar11 = *(long *)(*plVar5 + 0x50);
      uVar3 = *(uint *)(lVar11 + 0x38);
      if (0 < (int)uVar3) {
        pfVar6 = *(float **)(lVar11 + 0x40);
        iVar8 = 0;
        do {
          pfVar7 = pfVar6;
          if (2 < uVar3 - 1) {
            uVar9 = uVar3 & 0xfffffffc;
            do {
              *param_3 = (short)(int)(*pfVar7 * fVar4);
              param_3[1] = (short)(int)(pfVar7[0x40] * fVar4);
              param_3[2] = (short)(int)(pfVar7[0x80] * fVar4);
              param_3[3] = (short)(int)(pfVar7[0xc0] * fVar4);
              param_3 = param_3 + 4;
              pfVar7 = pfVar7 + 0x100;
              uVar9 = uVar9 - 4;
            } while (uVar9 != 0);
          }
          if ((uVar3 & 3) != 0) {
            lVar10 = 0;
            do {
              *param_3 = (short)(int)(*(float *)((long)pfVar7 + lVar10) * fVar4);
              param_3 = param_3 + 1;
              lVar10 = lVar10 + 0x100;
            } while ((uVar3 & 3) * 0x100 != (int)lVar10);
          }
          iVar8 = iVar8 + 1;
          pfVar6 = pfVar6 + 1;
        } while (iVar8 != 0x40);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 != param_1);
  }
  sys_unlock();
  return 0;
}


