// Function : sigwrap_perform
// Namespace: 
// Entry    : 004f4c90
// Prototype: long sigwrap_perform(long param_1)
// Body     : 004f4c90 - 004f4de4


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long sigwrap_perform(long param_1)

{
  float *pfVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  fVar10 = _UNK_0065342c;
  fVar9 = _UNK_00653428;
  fVar8 = _UNK_00653424;
  fVar7 = _DAT_00653420;
  fVar6 = _UNK_0065341c;
  fVar22 = _UNK_00653418;
  fVar5 = _UNK_00653414;
  fVar4 = _DAT_00653410;
  iVar15 = (int)*(undefined8 *)(param_1 + 0x18);
  if (iVar15 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    uVar3 = *(ulong *)(param_1 + 0x10);
    if ((iVar15 - 1U < 3) ||
       ((uVar3 < uVar2 + (ulong)(iVar15 - 1) * 4 + 4 &&
        (uVar2 < uVar3 + (ulong)(iVar15 - 1) * 4 + 4)))) {
      uVar11 = uVar2;
      uVar13 = uVar3;
    }
    else {
      uVar16 = (ulong)(iVar15 - 1U) + 1;
      uVar17 = uVar16 & 0xfffffffffffffffc;
      uVar11 = uVar2 + uVar17 * 4;
      iVar15 = iVar15 - (int)uVar17;
      uVar13 = uVar3 + uVar17 * 4;
      uVar12 = 0;
      do {
        pfVar1 = (float *)(uVar2 + uVar12);
        fVar27 = *pfVar1;
        fVar28 = pfVar1[1];
        fVar29 = pfVar1[2];
        fVar30 = pfVar1[3];
        fVar27 = (float)(~-(uint)(fVar4 < fVar27 || fVar27 < fVar7) & (uint)fVar27);
        fVar28 = (float)(~-(uint)(fVar5 < fVar28 || fVar28 < fVar8) & (uint)fVar28);
        fVar29 = (float)(~-(uint)(fVar22 < fVar29 || fVar29 < fVar9) & (uint)fVar29);
        fVar30 = (float)(~-(uint)(fVar6 < fVar30 || fVar30 < fVar10) & (uint)fVar30);
        fVar23 = (float)(int)fVar27;
        fVar24 = (float)(int)fVar28;
        fVar25 = (float)(int)fVar29;
        fVar26 = (float)(int)fVar30;
        uVar18 = -(uint)(fVar27 < fVar23);
        uVar19 = -(uint)(fVar28 < fVar24);
        uVar20 = -(uint)(fVar29 < fVar25);
        uVar21 = -(uint)(fVar30 < fVar26);
        pfVar1 = (float *)(uVar3 + uVar12);
        *pfVar1 = fVar27 - (float)(~uVar18 & (uint)fVar23 | (uint)(float)((int)fVar27 + -1) & uVar18
                                  );
        pfVar1[1] = fVar28 - (float)(~uVar19 & (uint)fVar24 |
                                    (uint)(float)((int)fVar28 + -1) & uVar19);
        pfVar1[2] = fVar29 - (float)(~uVar20 & (uint)fVar25 |
                                    (uint)(float)((int)fVar29 + -1) & uVar20);
        pfVar1[3] = fVar30 - (float)(~uVar21 & (uint)fVar26 |
                                    (uint)(float)((int)fVar30 + -1) & uVar21);
        uVar12 = uVar12 + 0x10;
      } while ((uVar16 * 4 & 0xfffffffffffffff0) != uVar12);
      if (uVar16 == uVar17) goto LAB_004f4d52;
    }
    fVar5 = DAT_00653434;
    fVar4 = DAT_00653430;
    lVar14 = 0;
    do {
      fVar22 = *(float *)(uVar11 + lVar14 * 4);
      fVar22 = (float)(~-(uint)(fVar5 < fVar22) & ~-(uint)(fVar22 < fVar4) & (uint)fVar22);
      uVar18 = -(uint)(fVar22 < (float)(int)fVar22);
      *(float *)(uVar13 + lVar14 * 4) =
           fVar22 - (float)(~uVar18 & (uint)(float)(int)fVar22 |
                           (uint)(float)((int)fVar22 + -1) & uVar18);
      lVar14 = lVar14 + 1;
    } while (iVar15 != (int)lVar14);
  }
LAB_004f4d52:
  return param_1 + 0x20;
}


