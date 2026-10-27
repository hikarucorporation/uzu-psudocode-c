// Function : jpeg_fdct_9x9
// Namespace: juce:jpeglibNamespace
// Entry    : 00368a20
// Prototype: undefined jpeg_fdct_9x9(int * param_1, long param_2, uint param_3)
// Body     : 00368a20 - 00368d7d


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_fdct_9x9(int*, unsigned char**, unsigned int) */

void __cdecl juce::jpeglibNamespace::jpeg_fdct_9x9(int *param_1,long param_2,uint param_3)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  int local_58 [10];
  
  uVar19 = (ulong)param_3;
  lVar2 = 0;
  piVar17 = param_1;
  do {
    lVar8 = *(long *)(param_2 + lVar2 * 8);
    uVar5 = (ulong)*(byte *)(lVar8 + 8 + uVar19);
    lVar4 = uVar5 + *(byte *)(lVar8 + uVar19);
    uVar20 = (ulong)*(byte *)(lVar8 + 1 + uVar19);
    uVar9 = (ulong)*(byte *)(lVar8 + 7 + uVar19);
    lVar18 = uVar9 + uVar20;
    uVar13 = (ulong)*(byte *)(lVar8 + 2 + uVar19);
    uVar12 = (ulong)*(byte *)(lVar8 + 6 + uVar19);
    lVar6 = uVar12 + uVar13;
    uVar15 = (ulong)*(byte *)(lVar8 + 3 + uVar19);
    uVar7 = (ulong)*(byte *)(lVar8 + 5 + uVar19);
    lVar3 = *(byte *)(lVar8 + uVar19) - uVar5;
    lVar11 = uVar7 + uVar15;
    uVar5 = (ulong)*(byte *)(lVar8 + 4 + uVar19);
    lVar21 = uVar20 - uVar9;
    lVar14 = uVar13 - uVar12;
    lVar16 = uVar15 - uVar7;
    lVar8 = lVar6 + lVar4 + lVar11;
    lVar10 = uVar5 + lVar18;
    *piVar17 = ((int)lVar10 + (int)lVar8) * 2 + -0x900;
    piVar17[6] = (int)((ulong)((lVar8 + lVar10 * -2) * 0x16a1) >> 0xc);
    lVar18 = lVar18 + uVar5 * -2;
    lVar8 = (lVar4 - lVar6) * 0x2a87;
    piVar17[2] = (int)((ulong)((lVar6 - lVar11) * 0x22ab + lVar8 + lVar18 * 0x16a1) >> 0xc);
    piVar17[4] = (int)((ulong)((lVar11 - lVar4) * 0x7dc + lVar8 + lVar18 * -0x16a1) >> 0xc);
    piVar17[3] = (((int)lVar3 - (int)lVar16) - (int)lVar14) * 0x2731 >> 0xc;
    lVar18 = (lVar14 + lVar3) * 0x1d17;
    lVar4 = (lVar3 + lVar16) * 0xf7a;
    piVar17[1] = (int)((ulong)(lVar18 + lVar21 * 0x2731 + lVar4) >> 0xc);
    piVar17[5] = (int)((ulong)(lVar18 + (lVar14 - lVar16) * -0x2c91 + lVar21 * -0x2731) >> 0xc);
    piVar17[7] = (int)((ulong)(lVar4 + lVar21 * -0x2731 + (lVar14 - lVar16) * 0x2c91) >> 0xc);
    piVar1 = local_58;
    if ((int)lVar2 != 7) {
      if ((int)lVar2 == 8) {
        lVar2 = 0;
        do {
          lVar3 = (long)(local_58[lVar2] + param_1[lVar2]);
          lVar21 = (long)(param_1[lVar2 + 0x38] + param_1[lVar2 + 8]);
          lVar18 = (long)(param_1[lVar2 + 0x30] + param_1[lVar2 + 0x10]);
          lVar14 = (long)(param_1[lVar2 + 0x28] + param_1[lVar2 + 0x18]);
          lVar16 = (long)(param_1[lVar2] - local_58[lVar2]);
          lVar11 = (long)(param_1[lVar2 + 8] - param_1[lVar2 + 0x38]);
          lVar10 = (long)(param_1[lVar2 + 0x10] - param_1[lVar2 + 0x30]);
          lVar8 = (long)(param_1[lVar2 + 0x18] - param_1[lVar2 + 0x28]);
          lVar6 = lVar18 + lVar3 + lVar14;
          lVar4 = param_1[lVar2 + 0x20] + lVar21;
          param_1[lVar2] = (int)((ulong)((lVar6 + lVar4) * 0x3291) >> 0xf);
          param_1[lVar2 + 0x30] = (int)((ulong)((lVar6 + lVar4 * -2) * 0x23c2) >> 0xf);
          lVar4 = (lVar3 - lVar18) * 0x4333;
          lVar21 = lVar21 + (long)param_1[lVar2 + 0x20] * -2;
          param_1[lVar2 + 0x10] =
               (int)((ulong)((lVar18 - lVar14) * 0x36c8 + lVar4 + lVar21 * 0x23c2) >> 0xf);
          param_1[lVar2 + 0x20] =
               (int)((ulong)((lVar14 - lVar3) * 0xc6b + lVar4 + lVar21 * -0x23c2) >> 0xf);
          param_1[lVar2 + 0x18] = (int)((ulong)(((lVar16 - lVar10) - lVar8) * 0x3def) >> 0xf);
          lVar4 = (lVar10 + lVar16) * 0x2df8;
          lVar18 = (lVar16 + lVar8) * 0x1876;
          param_1[lVar2 + 8] = (int)((ulong)(lVar4 + lVar11 * 0x3def + lVar18) >> 0xf);
          param_1[lVar2 + 0x28] =
               (int)((ulong)(lVar4 + lVar11 * -0x3def + (lVar10 - lVar8) * -0x466d) >> 0xf);
          param_1[lVar2 + 0x38] =
               (int)((ulong)(lVar18 + lVar11 * -0x3def + (lVar10 - lVar8) * 0x466d) >> 0xf);
          lVar2 = lVar2 + 1;
        } while ((int)lVar2 != 8);
        return;
      }
      piVar1 = piVar17 + 8;
    }
    lVar2 = lVar2 + 1;
    piVar17 = piVar1;
  } while( true );
}


