// Function : soundfile_xferin_sample
// Namespace: 
// Entry    : 0059e2e0
// Prototype: undefined soundfile_xferin_sample(long param_1, uint param_2, long param_3, uint * param_4, ulong param_5)
// Body     : 0059e2e0 - 0059e91e


void soundfile_xferin_sample(long param_1,uint param_2,long param_3,uint *param_4,ulong param_5)

{
  uint *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  double dVar11;
  uint uVar12;
  ulong uVar13;
  float *pfVar14;
  uint *puVar15;
  uint *puVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  size_t __n;
  ulong uVar23;
  
  dVar11 = DAT_0065db08;
  uVar7 = *(uint *)(param_1 + 0x14);
  uVar23 = (ulong)(int)uVar7;
  uVar12 = param_2;
  if ((int)uVar7 < (int)param_2) {
    uVar12 = uVar7;
  }
  if (0 < (int)uVar12) {
    iVar8 = *(int *)(param_1 + 0x18);
    uVar13 = param_5 & 0xfffffffffffffffe;
    lVar21 = (long)param_4 + 7;
    uVar22 = 0;
    do {
      switch(iVar8) {
      case 2:
        if (*(int *)(param_1 + 0x28) == 0) {
          if (param_5 != 0) {
            pfVar14 = *(float **)(param_3 + uVar22 * 8);
            puVar16 = param_4;
            if (param_5 != 1) {
              lVar20 = (long)*(int *)(param_1 + 0x2c);
              uVar17 = uVar13;
              do {
                *pfVar14 = (float)((double)(int)((uint)(byte)*puVar16 << 0x10 |
                                                (uint)*(byte *)((long)puVar16 + 1) << 0x18) * dVar11
                                  );
                pbVar2 = (byte *)((long)puVar16 + lVar20 + 1);
                pbVar3 = (byte *)((long)puVar16 + lVar20);
                puVar16 = (uint *)((long)puVar16 + lVar20 * 2);
                pfVar14[1] = (float)((double)(int)((uint)*pbVar3 << 0x10 | (uint)*pbVar2 << 0x18) *
                                    dVar11);
                pfVar14 = pfVar14 + 2;
                uVar17 = uVar17 - 2;
              } while (uVar17 != 0);
              if ((param_5 & 1) == 0) break;
            }
            bVar6 = *(byte *)((long)puVar16 + 1);
            bVar5 = (byte)*puVar16;
            goto LAB_0059e33e;
          }
        }
        else if (param_5 != 0) {
          pfVar14 = *(float **)(param_3 + uVar22 * 8);
          puVar16 = param_4;
          if (param_5 != 1) {
            lVar20 = (long)*(int *)(param_1 + 0x2c);
            uVar17 = uVar13;
            do {
              *pfVar14 = (float)((double)(int)((uint)*(byte *)((long)puVar16 + 1) << 0x10 |
                                              (uint)(byte)*puVar16 << 0x18) * dVar11);
              pbVar3 = (byte *)((long)puVar16 + lVar20);
              pbVar2 = (byte *)((long)puVar16 + lVar20 + 1);
              puVar16 = (uint *)((long)puVar16 + lVar20 * 2);
              pfVar14[1] = (float)((double)(int)((uint)*pbVar2 << 0x10 | (uint)*pbVar3 << 0x18) *
                                  dVar11);
              pfVar14 = pfVar14 + 2;
              uVar17 = uVar17 - 2;
            } while (uVar17 != 0);
            if ((param_5 & 1) == 0) break;
          }
          bVar6 = (byte)*puVar16;
          bVar5 = *(byte *)((long)puVar16 + 1);
LAB_0059e33e:
          uVar18 = (uint)bVar5 << 0x10 | (uint)bVar6 << 0x18;
LAB_0059e34a:
          *pfVar14 = (float)((double)(int)uVar18 * dVar11);
        }
        break;
      case 3:
        if (*(int *)(param_1 + 0x28) == 0) {
          if (param_5 != 0) {
            pfVar14 = *(float **)(param_3 + uVar22 * 8);
            puVar16 = param_4;
            if (param_5 != 1) {
              lVar20 = (long)*(int *)(param_1 + 0x2c);
              uVar17 = uVar13;
              do {
                *pfVar14 = (float)((double)(int)((uint)(byte)*puVar16 << 8 |
                                                (uint)*(byte *)((long)puVar16 + 1) << 0x10 |
                                                (uint)*(byte *)((long)puVar16 + 2) << 0x18) * dVar11
                                  );
                pbVar2 = (byte *)((long)puVar16 + lVar20 + 2);
                pbVar3 = (byte *)((long)puVar16 + lVar20 + 1);
                pbVar4 = (byte *)((long)puVar16 + lVar20);
                puVar16 = (uint *)((long)puVar16 + lVar20 * 2);
                pfVar14[1] = (float)((double)(int)((uint)*pbVar4 << 8 |
                                                  (uint)*pbVar3 << 0x10 | (uint)*pbVar2 << 0x18) *
                                    dVar11);
                pfVar14 = pfVar14 + 2;
                uVar17 = uVar17 - 2;
              } while (uVar17 != 0);
              if ((param_5 & 1) == 0) break;
            }
            uVar18 = (uint)*(byte *)((long)puVar16 + 1) << 0x10 |
                     (uint)*(byte *)((long)puVar16 + 2) << 0x18;
            bVar5 = (byte)*puVar16;
            goto LAB_0059e805;
          }
        }
        else if (param_5 != 0) {
          pfVar14 = *(float **)(param_3 + uVar22 * 8);
          puVar16 = param_4;
          if (param_5 != 1) {
            lVar20 = (long)*(int *)(param_1 + 0x2c);
            uVar17 = uVar13;
            do {
              *pfVar14 = (float)((double)(int)((uint)*(byte *)((long)puVar16 + 2) << 8 |
                                              (uint)*(byte *)((long)puVar16 + 1) << 0x10 |
                                              (uint)(byte)*puVar16 << 0x18) * dVar11);
              pbVar4 = (byte *)((long)puVar16 + lVar20);
              pbVar2 = (byte *)((long)puVar16 + lVar20 + 1);
              pbVar3 = (byte *)((long)puVar16 + lVar20 + 2);
              puVar16 = (uint *)((long)puVar16 + lVar20 * 2);
              pfVar14[1] = (float)((double)(int)((uint)*pbVar3 << 8 |
                                                (uint)*pbVar2 << 0x10 | (uint)*pbVar4 << 0x18) *
                                  dVar11);
              pfVar14 = pfVar14 + 2;
              uVar17 = uVar17 - 2;
            } while (uVar17 != 0);
            if ((param_5 & 1) == 0) break;
          }
          uVar18 = (uint)*(byte *)((long)puVar16 + 1) << 0x10 | (uint)(byte)*puVar16 << 0x18;
          bVar5 = *(byte *)((long)puVar16 + 2);
LAB_0059e805:
          uVar18 = (uint)bVar5 << 8 | uVar18;
          goto LAB_0059e34a;
        }
        break;
      case 4:
        if (*(int *)(param_1 + 0x28) == 0) {
          if (param_5 != 0) {
            puVar16 = *(uint **)(param_3 + uVar22 * 8);
            puVar15 = param_4;
            if (param_5 != 1) {
              iVar9 = *(int *)(param_1 + 0x2c);
              uVar17 = uVar13;
              do {
                *puVar16 = *puVar15;
                puVar1 = (uint *)((long)puVar15 + (long)iVar9);
                puVar15 = (uint *)((long)puVar15 + (long)iVar9 * 2);
                puVar16[1] = *puVar1;
                puVar16 = puVar16 + 2;
                uVar17 = uVar17 - 2;
              } while (uVar17 != 0);
              if ((param_5 & 1) == 0) break;
            }
            *puVar16 = *puVar15;
          }
        }
        else if (param_5 != 0) {
          puVar16 = *(uint **)(param_3 + uVar22 * 8);
          puVar15 = param_4;
          if (param_5 != 1) {
            iVar9 = *(int *)(param_1 + 0x2c);
            uVar17 = uVar13;
            do {
              uVar18 = *puVar15;
              *puVar16 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                         uVar18 << 0x18;
              uVar18 = *(uint *)((long)puVar15 + (long)iVar9);
              puVar15 = (uint *)((long)puVar15 + (long)iVar9 * 2);
              puVar16[1] = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                           uVar18 << 0x18;
              puVar16 = puVar16 + 2;
              uVar17 = uVar17 - 2;
            } while (uVar17 != 0);
            if ((param_5 & 1) == 0) break;
          }
          uVar18 = *puVar15;
          *puVar16 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                     uVar18 << 0x18;
        }
        break;
      case 8:
        if (*(int *)(param_1 + 0x28) == 0) {
          if (param_5 != 0) {
            lVar20 = *(long *)(param_3 + uVar22 * 8);
            iVar9 = *(int *)(param_1 + 0x2c);
            uVar17 = 0;
            lVar19 = lVar21;
            do {
              *(float *)(lVar20 + uVar17 * 4) = (float)*(double *)(lVar19 + -7);
              uVar17 = uVar17 + 1;
              lVar19 = lVar19 + iVar9;
            } while (param_5 != uVar17);
          }
        }
        else if (param_5 != 0) {
          lVar20 = *(long *)(param_3 + uVar22 * 8);
          iVar9 = *(int *)(param_1 + 0x2c);
          uVar17 = 0;
          lVar19 = lVar21;
          do {
            uVar10 = *(ulong *)(lVar19 + -7);
            *(float *)(lVar20 + uVar17 * 4) =
                 (float)(double)(uVar10 >> 0x38 | (uVar10 & 0xff000000000000) >> 0x28 |
                                 (uVar10 & 0xff0000000000) >> 0x18 | (uVar10 & 0xff00000000) >> 8 |
                                 (uVar10 & 0xff000000) << 8 | (uVar10 & 0xff0000) << 0x18 |
                                 (uVar10 & 0xff00) << 0x28 | uVar10 << 0x38);
            uVar17 = uVar17 + 1;
            lVar19 = lVar19 + iVar9;
          } while (param_5 != uVar17);
        }
      }
      uVar22 = uVar22 + 1;
      param_4 = (uint *)((long)param_4 + (long)iVar8);
      lVar21 = lVar21 + iVar8;
    } while (uVar22 != uVar12);
  }
  if (((int)uVar7 < (int)param_2) && (param_5 != 0)) {
    __n = param_5 << 2;
    uVar13 = ~uVar23;
    uVar22 = (ulong)(param_2 - uVar7) & 7;
    if ((param_2 - uVar7 & 7) != 0) {
      do {
        memset(*(void **)(param_3 + uVar23 * 8),0,__n);
        uVar23 = uVar23 + 1;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
    if (6 < uVar13 + (long)(int)param_2) {
      do {
        memset(*(void **)(param_3 + uVar23 * 8),0,__n);
        memset(*(void **)(param_3 + 8 + uVar23 * 8),0,__n);
        memset(*(void **)(param_3 + 0x10 + uVar23 * 8),0,__n);
        memset(*(void **)(param_3 + 0x18 + uVar23 * 8),0,__n);
        memset(*(void **)(param_3 + 0x20 + uVar23 * 8),0,__n);
        memset(*(void **)(param_3 + 0x28 + uVar23 * 8),0,__n);
        memset(*(void **)(param_3 + 0x30 + uVar23 * 8),0,__n);
        memset(*(void **)(param_3 + 0x38 + uVar23 * 8),0,__n);
        uVar23 = uVar23 + 8;
      } while ((long)(int)param_2 != uVar23);
    }
  }
  return;
}


