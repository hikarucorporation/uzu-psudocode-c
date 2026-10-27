// Function : env_tilde_perform
// Namespace: 
// Entry    : 0058f3b0
// Prototype: long env_tilde_perform(long param_1)
// Body     : 0058f3b0 - 0058f60b


long env_tilde_perform(long param_1)

{
  ulong uVar1;
  long lVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  float *pfVar14;
  float *__dest;
  ulong uVar15;
  long lVar16;
  int iVar17;
  float *pfVar18;
  long lVar19;
  long lVar20;
  float *pfVar21;
  ulong uVar22;
  long lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  lVar7 = *(long *)(param_1 + 8);
  iVar5 = *(int *)(lVar7 + 0x48);
  __dest = (float *)(lVar7 + 0x5c);
  iVar6 = *(int *)(lVar7 + 0x54);
  iVar17 = (int)*(undefined8 *)(param_1 + 0x18);
  pfVar18 = __dest;
  if (iVar5 < iVar6) {
    iVar12 = *(int *)(lVar7 + 0x50);
    if (iVar17 < 1) {
      iVar11 = iVar5;
      do {
        pfVar18 = pfVar18 + 1;
        iVar11 = iVar11 + iVar12;
      } while (iVar11 < iVar6);
    }
    else {
      lVar8 = *(long *)(param_1 + 0x10);
      lVar2 = lVar8 + (long)iVar17 * 4;
      lVar19 = (long)iVar5;
      lVar9 = *(long *)(lVar7 + 0x40);
      uVar1 = (ulong)(iVar17 - 1U) + 1;
      uVar22 = uVar1 & 0xfffffffffffffff8;
      lVar23 = lVar9 + lVar19 * 4 + 0x10;
      do {
        pfVar21 = (float *)(lVar9 + lVar19 * 4);
        fVar24 = *pfVar18;
        if (iVar17 - 1U < 7) {
          uVar10 = 0;
          lVar16 = lVar2;
LAB_0058f524:
          lVar20 = 0;
          do {
            fVar25 = *(float *)(lVar16 + -4 + lVar20 * 4);
            fVar26 = *pfVar21;
            pfVar21 = pfVar21 + 1;
            fVar24 = fVar24 + fVar25 * fVar25 * fVar26;
            lVar20 = lVar20 + -1;
          } while (uVar10 - iVar17 != (int)lVar20);
        }
        else {
          pfVar21 = pfVar21 + uVar22;
          fVar25 = 0.0;
          fVar26 = 0.0;
          fVar27 = 0.0;
          fVar28 = 0.0;
          fVar30 = 0.0;
          fVar31 = 0.0;
          fVar29 = 0.0;
          uVar15 = 0;
          pfVar14 = (float *)(lVar8 + (long)iVar17 * 4 + -0x10);
          do {
            pfVar4 = (float *)(lVar23 + -0x10 + uVar15 * 4);
            pfVar3 = (float *)(lVar23 + uVar15 * 4);
            fVar24 = fVar24 + pfVar14[3] * pfVar14[3] * *pfVar4;
            fVar29 = fVar29 + pfVar14[2] * pfVar14[2] * pfVar4[1];
            fVar30 = fVar30 + pfVar14[1] * pfVar14[1] * pfVar4[2];
            fVar31 = fVar31 + *pfVar14 * *pfVar14 * pfVar4[3];
            fVar25 = fVar25 + pfVar14[-1] * pfVar14[-1] * *pfVar3;
            fVar26 = fVar26 + pfVar14[-2] * pfVar14[-2] * pfVar3[1];
            fVar27 = fVar27 + pfVar14[-3] * pfVar14[-3] * pfVar3[2];
            fVar28 = fVar28 + pfVar14[-4] * pfVar14[-4] * pfVar3[3];
            uVar15 = uVar15 + 8;
            pfVar14 = pfVar14 + -8;
          } while (uVar22 != uVar15);
          fVar24 = fVar28 + fVar31 + fVar26 + fVar29 + fVar27 + fVar30 + fVar25 + fVar24;
          uVar10 = (uint)uVar1 & 0xfffffff8;
          lVar16 = lVar2 + uVar22 * -4;
          if (uVar1 != uVar22) goto LAB_0058f524;
        }
        *pfVar18 = fVar24;
        lVar19 = lVar19 + iVar12;
        pfVar18 = pfVar18 + 1;
        lVar23 = lVar23 + (long)iVar12 * 4;
      } while (lVar19 < iVar6);
    }
  }
  *pfVar18 = 0.0;
  *(int *)(lVar7 + 0x48) = iVar5 - iVar17;
  if (iVar5 - iVar17 < 0) {
    *(undefined4 *)(lVar7 + 0x58) = *(undefined4 *)(lVar7 + 0x5c);
    uVar10 = *(uint *)(lVar7 + 0x50);
    if ((int)uVar10 < iVar6) {
      iVar5 = uVar10 * 2;
      iVar12 = iVar5;
      if (iVar5 < iVar6) {
        iVar12 = iVar6;
      }
      memmove(__dest,(void *)(lVar7 + 0x60),
              (ulong)((iVar12 - ((uint)(iVar5 < iVar6) + uVar10 * 2)) / uVar10 +
                     (uint)(iVar5 < iVar6)) * 4 + 4);
      uVar13 = uVar10;
      do {
        __dest = __dest + 1;
        uVar13 = uVar13 + uVar10;
      } while ((int)uVar13 < iVar6);
    }
    *__dest = 0.0;
    *(uint *)(lVar7 + 0x48) = uVar10 - iVar17;
    clock_delay(0.0,*(double **)(lVar7 + 0x38));
  }
  return param_1 + 0x20;
}


