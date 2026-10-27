// Function : adler32_z
// Namespace: juce:zlibNamespace
// Entry    : 004b3d00
// Prototype: ulong adler32_z(ulong param_1, byte * param_2, ulong param_3)
// Body     : 004b3d00 - 004b40f8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::zlibNamespace::adler32_z(unsigned long, unsigned char const*, unsigned long) */

ulong __cdecl juce::zlibNamespace::adler32_z(ulong param_1,byte *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  
  uVar13 = param_1 & 0xffff;
  uVar3 = param_1 >> 0x10 & 0xffff;
  if (param_3 == 1) {
    uVar2 = uVar13 + *param_2;
    uVar13 = (uVar13 - 0xfff1) + (ulong)*param_2;
    if (uVar2 < 0xfff1) {
      uVar13 = uVar2;
    }
    uVar4 = (uVar3 + uVar13) * 0x10000;
    uVar2 = uVar4 - 0xfff10000;
    if (uVar3 + uVar13 < 0xfff1) {
      uVar2 = uVar4;
    }
    return uVar2 | uVar13;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  if (param_3 < 0x10) {
    if (param_3 != 0) {
      uVar2 = param_3 - 1;
      uVar4 = param_3 & 3;
      if (uVar4 != 0) {
        param_3 = param_3 & 0xfffffffffffffffc;
        uVar1 = 0;
        do {
          uVar13 = uVar13 + param_2[uVar1];
          uVar3 = uVar3 + uVar13;
          uVar1 = uVar1 + 1;
        } while (uVar4 != uVar1);
        param_2 = param_2 + uVar4;
      }
      if (2 < uVar2) {
        uVar2 = 0;
        do {
          lVar5 = param_2[uVar2] + uVar13;
          lVar14 = (ulong)param_2[uVar2 + 1] + lVar5;
          lVar6 = (ulong)param_2[uVar2 + 2] + lVar14;
          uVar13 = (ulong)param_2[uVar2 + 3] + lVar6;
          uVar3 = uVar3 + lVar5 + lVar14 + lVar6 + uVar13;
          uVar2 = uVar2 + 4;
        } while (param_3 != uVar2);
      }
    }
    uVar2 = uVar13 - 0xfff1;
    if (uVar13 < 0xfff1) {
      uVar2 = uVar13;
    }
    return (uVar3 % 0xfff1) * 0x10000 | uVar2;
  }
  if (param_3 < 0x15b0) {
LAB_004b3f80:
    do {
      param_3 = param_3 - 0x10;
      lVar5 = *param_2 + uVar13;
      lVar12 = (ulong)param_2[1] + lVar5;
      lVar6 = (ulong)param_2[2] + lVar12;
      lVar15 = (ulong)param_2[3] + lVar6;
      lVar14 = (ulong)param_2[4] + lVar15;
      lVar16 = (ulong)param_2[5] + lVar14;
      lVar7 = (ulong)param_2[6] + lVar16;
      lVar17 = (ulong)param_2[7] + lVar7;
      lVar8 = (ulong)param_2[8] + lVar17;
      lVar18 = (ulong)param_2[9] + lVar8;
      lVar9 = (ulong)param_2[10] + lVar18;
      lVar19 = (ulong)param_2[0xb] + lVar9;
      lVar10 = (ulong)param_2[0xc] + lVar19;
      lVar20 = (ulong)param_2[0xd] + lVar10;
      lVar11 = (ulong)param_2[0xe] + lVar20;
      uVar13 = (ulong)param_2[0xf] + lVar11;
      uVar3 = uVar3 + lVar5 + lVar12 + lVar6 + lVar15 + lVar14 + lVar16 + lVar7 + lVar17 + lVar8 +
              lVar18 + lVar9 + lVar19 + lVar10 + lVar20 + lVar11 + uVar13;
      param_2 = param_2 + 0x10;
    } while (0xf < param_3);
    if (param_3 != 0) goto LAB_004b4036;
  }
  else {
    do {
      lVar5 = 0;
      do {
        lVar6 = param_2[lVar5] + uVar13;
        lVar15 = (ulong)param_2[lVar5 + 1] + lVar6;
        lVar14 = (ulong)param_2[lVar5 + 2] + lVar15;
        lVar16 = (ulong)param_2[lVar5 + 3] + lVar14;
        lVar7 = (ulong)param_2[lVar5 + 4] + lVar16;
        lVar17 = (ulong)param_2[lVar5 + 5] + lVar7;
        lVar8 = (ulong)param_2[lVar5 + 6] + lVar17;
        lVar18 = (ulong)param_2[lVar5 + 7] + lVar8;
        lVar9 = (ulong)param_2[lVar5 + 8] + lVar18;
        lVar19 = (ulong)param_2[lVar5 + 9] + lVar9;
        lVar10 = (ulong)param_2[lVar5 + 10] + lVar19;
        lVar20 = (ulong)param_2[lVar5 + 0xb] + lVar10;
        lVar11 = (ulong)param_2[lVar5 + 0xc] + lVar20;
        lVar21 = (ulong)param_2[lVar5 + 0xd] + lVar11;
        lVar12 = (ulong)param_2[lVar5 + 0xe] + lVar21;
        uVar13 = (ulong)param_2[lVar5 + 0xf] + lVar12;
        uVar3 = uVar3 + lVar6 + lVar15 + lVar14 + lVar16 + lVar7 + lVar17 + lVar8 + lVar18 + lVar9 +
                lVar19 + lVar10 + lVar20 + lVar11 + lVar21 + lVar12 + uVar13;
        lVar5 = lVar5 + 0x10;
      } while ((int)lVar5 != 0x15b0);
      param_3 = param_3 - 0x15b0;
      param_2 = param_2 + 0x15b0;
      uVar13 = uVar13 % 0xfff1;
      uVar3 = uVar3 % 0xfff1;
    } while (0x15af < param_3);
    if (param_3 == 0) goto LAB_004b40ee;
    if (0xf < param_3) goto LAB_004b3f80;
LAB_004b4036:
    uVar2 = param_3 - 1;
    uVar4 = param_3 & 3;
    if (uVar4 != 0) {
      param_3 = param_3 & 0xfffffffffffffffc;
      uVar1 = 0;
      do {
        uVar13 = uVar13 + param_2[uVar1];
        uVar3 = uVar3 + uVar13;
        uVar1 = uVar1 + 1;
      } while (uVar4 != uVar1);
      param_2 = param_2 + uVar4;
    }
    if (2 < uVar2) {
      uVar2 = 0;
      do {
        lVar5 = param_2[uVar2] + uVar13;
        lVar14 = (ulong)param_2[uVar2 + 1] + lVar5;
        lVar6 = (ulong)param_2[uVar2 + 2] + lVar14;
        uVar13 = (ulong)param_2[uVar2 + 3] + lVar6;
        uVar3 = uVar3 + lVar5 + lVar14 + lVar6 + uVar13;
        uVar2 = uVar2 + 4;
      } while (param_3 != uVar2);
    }
  }
  uVar13 = uVar13 % 0xfff1;
  uVar3 = uVar3 % 0xfff1;
LAB_004b40ee:
  return uVar3 << 0x10 | uVar13;
}


