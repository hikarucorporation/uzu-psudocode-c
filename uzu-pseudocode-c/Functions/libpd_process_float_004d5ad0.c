// Function : libpd_process_float
// Namespace: 
// Entry    : 004d5ad0
// Prototype: undefined8 libpd_process_float(int param_1, undefined4 * param_2, undefined4 * param_3)
// Body     : 004d5ad0 - 004d5d6d


undefined8 libpd_process_float(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  long *plVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined4 *puVar9;
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
        puVar9 = *(undefined4 **)(lVar10 + 0x48);
        iVar6 = 0;
        do {
          puVar5 = puVar9;
          if (6 < uVar3 - 1) {
            uVar7 = uVar3 & 0xfffffff8;
            do {
              *puVar5 = *param_2;
              puVar5[0x40] = param_2[1];
              puVar5[0x80] = param_2[2];
              puVar5[0xc0] = param_2[3];
              puVar5[0x100] = param_2[4];
              puVar5[0x140] = param_2[5];
              puVar5[0x180] = param_2[6];
              puVar1 = param_2 + 7;
              param_2 = param_2 + 8;
              puVar5[0x1c0] = *puVar1;
              puVar5 = puVar5 + 0x200;
              uVar7 = uVar7 - 8;
            } while (uVar7 != 0);
          }
          if ((uVar3 & 7) != 0) {
            lVar8 = 0;
            do {
              uVar2 = *param_2;
              param_2 = param_2 + 1;
              *(undefined4 *)((long)puVar5 + lVar8) = uVar2;
              lVar8 = lVar8 + 0x100;
            } while ((uVar3 & 7) * 0x100 != (int)lVar8);
          }
          iVar6 = iVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (iVar6 != 0x40);
      }
      memset(*(void **)(lVar10 + 0x40),0,(long)*(int *)(lVar10 + 0x38) << 8);
      sched_tick();
      plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
      lVar10 = *(long *)(*plVar4 + 0x50);
      uVar3 = *(uint *)(lVar10 + 0x38);
      if (0 < (int)uVar3) {
        puVar9 = *(undefined4 **)(lVar10 + 0x40);
        iVar6 = 0;
        do {
          puVar5 = puVar9;
          if (6 < uVar3 - 1) {
            uVar7 = uVar3 & 0xfffffff8;
            do {
              *param_3 = *puVar5;
              param_3[1] = puVar5[0x40];
              param_3[2] = puVar5[0x80];
              param_3[3] = puVar5[0xc0];
              param_3[4] = puVar5[0x100];
              param_3[5] = puVar5[0x140];
              param_3[6] = puVar5[0x180];
              param_3[7] = puVar5[0x1c0];
              param_3 = param_3 + 8;
              puVar5 = puVar5 + 0x200;
              uVar7 = uVar7 - 8;
            } while (uVar7 != 0);
          }
          if ((uVar3 & 7) != 0) {
            lVar8 = 0;
            do {
              *param_3 = *(undefined4 *)((long)puVar5 + lVar8);
              param_3 = param_3 + 1;
              lVar8 = lVar8 + 0x100;
            } while ((uVar3 & 7) * 0x100 != (int)lVar8);
          }
          iVar6 = iVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (iVar6 != 0x40);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != param_1);
  }
  sys_unlock();
  return 0;
}


