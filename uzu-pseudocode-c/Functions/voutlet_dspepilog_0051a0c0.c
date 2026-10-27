// Function : voutlet_dspepilog
// Namespace: 
// Entry    : 0051a0c0
// Prototype: undefined voutlet_dspepilog(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, ulong param_11, undefined8 param_12, undefined8 param_13, ulong param_14, undefined8 param_15, uint param_16, int param_17, int param_18)
// Body     : 0051a0c0 - 0051a3d5


void voutlet_dspepilog(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9,undefined8 param_10,ulong param_11,undefined8 param_12,
                      undefined8 param_13,ulong param_14,undefined8 param_15,uint param_16,
                      int param_17,int param_18)

{
  uint uVar1;
  undefined8 *puVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  int iVar15;
  uint uVar14;
  undefined8 uVar16;
  undefined1 in_stack_ffffffffffffff98;
  long lVar17;
  
  if ((*(long *)(param_9 + 0x68) != 0) &&
     (puVar2 = *(undefined8 **)(param_9 + 0x58), puVar2 != (undefined8 *)0x0)) {
    if (param_17 == 0) {
      if ((param_18 != 0) && (piVar3 = (int *)*puVar2, piVar3 != (int *)0x0)) {
        dsp_add_zero(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     *(undefined8 *)(piVar3 + 2),piVar3[5] * *piVar3,param_11,param_12,param_13,
                     param_14,param_15);
        return;
      }
    }
    else {
      uVar1 = *(uint *)*puVar2;
      lVar6 = (long)(int)uVar1;
      uVar7 = (long)(int)(uVar1 * param_16) / (long)(int)param_15;
      uVar10 = (uint)uVar7;
      iVar15 = (int)((long)((ulong)(uint)((int)param_11 >> 0x1f) << 0x20 | param_11 & 0xffffffff) /
                    (long)(int)uVar10);
      uVar14 = iVar15 - 1;
      if (iVar15 == 0) {
        uVar14 = 0;
      }
      iVar5 = (int)param_13;
      iVar12 = uVar10 * iVar5;
      iVar15 = *(int *)(param_9 + 0x40);
      if (iVar15 < iVar12) {
        param_1 = bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      "voutlet_dspepilog",(ulong)param_16,0,param_12,(char *)(uVar7 & 0xffffffff),
                      param_14,in_stack_ffffffffffffff98);
        param_14 = param_14 & 0xffffffff;
        iVar15 = *(int *)(param_9 + 0x40);
      }
      iVar11 = (-iVar5 & ((uint)param_12 + iVar5) - 1 & uVar14) * uVar10;
      if (iVar11 == iVar15) {
        iVar11 = 0;
      }
      *(int *)(param_9 + 0x48) = iVar11;
      if ((iVar5 == 1) && (1 < (int)param_14)) {
        iVar12 = (int)uVar10 / (int)param_14;
      }
      *(int *)(param_9 + 0x4c) = iVar12;
      if (*(long **)(param_9 + 0x58) != (long *)0x0) {
        *(uint *)(param_9 + 0x44) = (uVar14 & (uint)param_12) * uVar10;
        uVar14 = *(uint *)(param_9 + 0x60);
        uVar7 = (ulong)uVar14;
        if (0 < (int)uVar14) {
          if (param_16 * (int)param_15 == 1) {
            uVar16 = dsp_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             voutlet_doepilog,5,param_9,
                             *(undefined8 *)(**(long **)(param_9 + 0x58) + 8),
                             **(undefined8 **)(param_9 + 0x68),(ulong)(uVar14 == 1),lVar6);
            uVar7 = (ulong)*(uint *)(param_9 + 0x60);
            if (1 < (int)*(uint *)(param_9 + 0x60)) {
              uVar9 = 1;
              lVar13 = 0x48;
              lVar8 = lVar6 * 4;
              do {
                uVar16 = dsp_add(uVar16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 voutlet_doepilog,5,param_9,
                                 *(long *)(**(long **)(param_9 + 0x58) + 8) + lVar8,
                                 *(undefined8 *)(*(long *)(param_9 + 0x68) + lVar13),
                                 (ulong)(uVar9 == (int)uVar7 - 1),lVar6);
                uVar9 = uVar9 + 1;
                uVar7 = (ulong)*(int *)(param_9 + 0x60);
                lVar8 = lVar8 + lVar6 * 4;
                lVar13 = lVar13 + 0x48;
              } while ((long)uVar9 < (long)uVar7);
            }
          }
          else {
            lVar13 = 8;
            lVar8 = 0;
            uVar9 = 0;
            do {
              uVar14 = (uint)(0x2b < *(int *)PTR_pd_compatibilitylevel_00715a40);
              if (-1 < (int)*(uint *)(param_9 + 0x50)) {
                uVar14 = *(uint *)(param_9 + 0x50);
              }
              lVar4 = *(long *)(param_9 + 0x68);
              *(int *)(lVar4 + 4 + lVar13) = (int)param_15;
              *(uint *)(lVar4 + 8 + lVar13) = param_16;
              uVar7 = (ulong)(uVar9 == (int)uVar7 - 1);
              lVar17 = (long)(int)uVar10;
              uVar16 = dsp_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               voutlet_doepilog_resample,5,param_9,lVar4 + lVar13,
                               *(undefined8 *)(lVar4 + -8 + lVar13),uVar7,(long)(int)uVar10);
              param_1 = resampleto_dsp(uVar16,param_2,param_3,param_4,param_5,param_6,param_7,
                                       param_8,*(long *)(param_9 + 0x68) + lVar13,
                                       *(long *)(**(long **)(param_9 + 0x58) + 8) + lVar8,uVar10,
                                       uVar1,uVar14,uVar7,lVar17);
              uVar9 = uVar9 + 1;
              uVar7 = (ulong)*(int *)(param_9 + 0x60);
              lVar8 = lVar8 + lVar6 * 4;
              lVar13 = lVar13 + 0x48;
            } while ((long)uVar9 < (long)uVar7);
          }
        }
      }
    }
  }
  return;
}


