// Function : jpeg_idct_5x5
// Namespace: juce:jpeglibNamespace
// Entry    : 00388680
// Prototype: undefined jpeg_idct_5x5(long param_1, long param_2, short * param_3, long * param_4, uint param_5)
// Body     : 00388680 - 003890bd


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_idct_5x5(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, short*, unsigned char**, unsigned int) */

void __cdecl
juce::jpeglibNamespace::jpeg_idct_5x5
          (long param_1,long param_2,short *param_3,long *param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  int iVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  int iVar34;
  int iVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  int iVar39;
  long lVar40;
  int iVar41;
  long lVar42;
  int iVar43;
  int iVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  ulong uVar51;
  int iVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  
  piVar16 = *(int **)(param_2 + 0x58);
  lVar1 = (ulong)(uint)((int)param_3[0x20] * piVar16[0x20]) +
          (ulong)(uint)((int)param_3[0x10] * piVar16[0x10]);
  lVar28 = (ulong)(uint)((int)param_3[0x10] * piVar16[0x10]) -
           (ulong)(uint)((int)param_3[0x20] * piVar16[0x20]);
  lVar2 = (long)piVar16[0x21] * (long)param_3[0x21] + (long)piVar16[0x11] * (long)param_3[0x11];
  lVar45 = (long)piVar16[0x11] * (long)param_3[0x11] - (long)piVar16[0x21] * (long)param_3[0x21];
  sVar10 = param_3[0x19];
  iVar27 = piVar16[0x19];
  lVar3 = (long)piVar16[0x22] * (long)param_3[0x22] + (long)piVar16[0x12] * (long)param_3[0x12];
  lVar54 = (long)piVar16[0x12] * (long)param_3[0x12] - (long)piVar16[0x22] * (long)param_3[0x22];
  sVar11 = param_3[0x1a];
  iVar35 = piVar16[0x1a];
  lVar4 = (long)piVar16[0x13] * (long)param_3[0x13] + (long)piVar16[0x23] * (long)param_3[0x23];
  lVar29 = (long)piVar16[0x13] * (long)param_3[0x13] - (long)piVar16[0x23] * (long)param_3[0x23];
  sVar12 = param_3[0x1b];
  iVar15 = piVar16[0x1b];
  lVar5 = (long)piVar16[0x24] * (long)param_3[0x24] + (long)piVar16[0x14] * (long)param_3[0x14];
  lVar40 = (long)piVar16[0x14] * (long)param_3[0x14] - (long)piVar16[0x24] * (long)param_3[0x24];
  sVar13 = param_3[0x18];
  iVar41 = piVar16[0x18];
  sVar14 = param_3[0x1c];
  iVar43 = piVar16[0x1c];
  lVar48 = (long)piVar16[2] * (long)param_3[2] * 0x2000;
  lVar55 = lVar54 * 0xb50 + lVar48 + 0x400;
  lVar49 = ((long)iVar35 * (long)sVar11 + (long)piVar16[10] * (long)param_3[10]) * 0x1a9a;
  lVar30 = (long)piVar16[10] * (long)param_3[10] * 0x1071 + lVar49;
  lVar6 = lVar3 * 0x194c + lVar55;
  lVar46 = (long)piVar16[4] * (long)param_3[4] * 0x2000;
  lVar47 = lVar46 + lVar40 * 0xb50 + 0x400;
  lVar31 = ((long)iVar43 * (long)sVar14 + (long)piVar16[0xc] * (long)param_3[0xc]) * 0x1a9a;
  lVar36 = (long)piVar16[0xc] * (long)param_3[0xc] * 0x1071 + lVar31;
  lVar7 = lVar47 + lVar5 * 0x194c;
  iVar20 = (int)((ulong)(lVar6 + lVar30) >> 0xb);
  iVar52 = (int)((ulong)(lVar7 + lVar36) >> 0xb);
  iVar26 = iVar52 + iVar20;
  iVar20 = iVar20 - iVar52;
  lVar37 = (long)*piVar16 * (long)*param_3 * 0x2000;
  lVar50 = lVar28 * 0xb50 + lVar37 + 0x400;
  lVar21 = ((ulong)(uint)(sVar13 * iVar41) + (ulong)(uint)((int)param_3[8] * piVar16[8])) * 0x1a9a;
  lVar38 = (ulong)(uint)((int)param_3[8] * piVar16[8]) * 0x1071 + lVar21;
  lVar8 = lVar50 + lVar1 * 0x194c;
  uVar19 = (int)((lVar38 + lVar8) * 0x200000 >> 0x13) + 0x8020000U & 0xffffe000;
  iVar52 = iVar20 * 0xb50 + uVar19;
  iVar34 = iVar52 + iVar26 * 0x194c;
  iVar52 = iVar52 + iVar26 * -0x194c;
  lVar22 = (long)piVar16[1] * (long)param_3[1] * 0x2000;
  lVar42 = lVar45 * 0xb50 + lVar22 + 0x400;
  lVar23 = ((long)iVar27 * (long)sVar10 + (long)piVar16[9] * (long)param_3[9]) * 0x1a9a;
  lVar32 = (long)piVar16[9] * (long)param_3[9] * 0x1071 + lVar23;
  lVar9 = lVar2 * 0x194c + lVar42;
  lVar56 = (long)piVar16[3] * (long)param_3[3] * 0x2000;
  lVar24 = lVar29 * 0xb50 + lVar56 + 0x400;
  lVar53 = ((long)iVar15 * (long)sVar12 + (long)piVar16[0xb] * (long)param_3[0xb]) * 0x1a9a;
  lVar33 = (long)piVar16[0xb] * (long)param_3[0xb] * 0x1071 + lVar53;
  lVar25 = lVar24 + lVar4 * 0x194c;
  iVar39 = (int)((ulong)(lVar32 + lVar9) >> 0xb);
  iVar44 = (int)((ulong)(lVar33 + lVar25) >> 0xb);
  iVar26 = (iVar44 + iVar39) * 0x1a9a;
  iVar39 = iVar39 * 0x1071 + iVar26;
  iVar26 = iVar44 * -0x45a4 + iVar26;
  lVar17 = *(long *)(param_1 + 0x198);
  uVar51 = (ulong)param_5;
  lVar18 = *param_4;
  *(undefined1 *)(lVar18 + uVar51) =
       *(undefined1 *)(lVar17 + -0x180 + (ulong)((uint)(iVar39 + iVar34) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar18 + 4 + uVar51) =
       *(undefined1 *)(lVar17 + -0x180 + (ulong)((uint)(iVar34 - iVar39) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar18 + 1 + uVar51) =
       *(undefined1 *)(lVar17 + -0x180 + (ulong)((uint)(iVar26 + iVar52) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar18 + 3 + uVar51) =
       *(undefined1 *)(lVar17 + -0x180 + (ulong)((uint)(iVar52 - iVar26) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar18 + 2 + uVar51) =
       *(undefined1 *)(lVar17 + -0x180 + (ulong)(uVar19 + iVar20 * -0x2d40 >> 0x12 & 0x3ff));
  lVar50 = lVar50 + lVar1 * -0x194c;
  lVar21 = (ulong)(uint)(sVar13 * iVar41) * -0x45a4 + lVar21;
  lVar42 = lVar42 + lVar2 * -0x194c;
  lVar23 = (long)iVar27 * (long)sVar10 * -0x45a4 + lVar23;
  lVar55 = lVar55 + lVar3 * -0x194c;
  lVar49 = (long)iVar35 * (long)sVar11 * -0x45a4 + lVar49;
  lVar24 = lVar24 + lVar4 * -0x194c;
  lVar53 = (long)iVar15 * (long)sVar12 * -0x45a4 + lVar53;
  lVar47 = lVar47 + lVar5 * -0x194c;
  lVar31 = (long)iVar43 * (long)sVar14 * -0x45a4 + lVar31;
  iVar15 = (int)((ulong)(lVar49 + lVar55) >> 0xb);
  iVar27 = (int)((ulong)(lVar47 + lVar31) >> 0xb);
  iVar35 = iVar27 + iVar15;
  iVar15 = iVar15 - iVar27;
  uVar19 = (int)((lVar21 + lVar50) * 0x200000 >> 0x13) + 0x8020000U & 0xffffe000;
  iVar27 = iVar15 * 0xb50 + uVar19;
  iVar52 = iVar27 + iVar35 * 0x194c;
  iVar27 = iVar27 + iVar35 * -0x194c;
  iVar41 = (int)((ulong)(lVar23 + lVar42) >> 0xb);
  iVar43 = (int)((ulong)(lVar53 + lVar24) >> 0xb);
  iVar35 = (iVar43 + iVar41) * 0x1a9a;
  iVar41 = iVar41 * 0x1071 + iVar35;
  iVar35 = iVar43 * -0x45a4 + iVar35;
  lVar1 = param_4[1];
  *(undefined1 *)(lVar1 + uVar51) =
       *(undefined1 *)(lVar17 + -0x180 + (ulong)((uint)(iVar52 + iVar41) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar1 + 4 + uVar51) =
       *(undefined1 *)(lVar17 + -0x180 + (ulong)((uint)(iVar52 - iVar41) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar1 + 1 + uVar51) =
       *(undefined1 *)(lVar17 + -0x180 + (ulong)((uint)(iVar27 + iVar35) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar1 + 3 + uVar51) =
       *(undefined1 *)(lVar17 + -0x180 + (ulong)((uint)(iVar27 - iVar35) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar1 + 2 + uVar51) =
       *(undefined1 *)(lVar17 + -0x180 + (ulong)(uVar19 + iVar15 * -0x2d40 >> 0x12 & 0x3ff));
  iVar15 = (int)(lVar54 * -0x2d40 + lVar48 + 0x400U >> 0xb);
  iVar27 = (int)(lVar40 * -0x2d40 + lVar46 + 0x400U >> 0xb);
  iVar35 = iVar27 + iVar15;
  iVar15 = iVar15 - iVar27;
  uVar19 = (int)((lVar28 * -0x2d40 + lVar37 + 0x400) * 0x200000 >> 0x13) + 0x8020000U & 0xffffe000;
  iVar27 = iVar15 * 0xb50 + uVar19;
  iVar43 = iVar27 + iVar35 * 0x194c;
  iVar27 = iVar27 + iVar35 * -0x194c;
  iVar41 = (int)(lVar45 * -0x2d40 + lVar22 + 0x400U >> 0xb);
  iVar52 = (int)(lVar29 * -0x2d40 + lVar56 + 0x400U >> 0xb);
  iVar35 = (iVar52 + iVar41) * 0x1a9a;
  iVar41 = iVar41 * 0x1071 + iVar35;
  iVar35 = iVar52 * -0x45a4 + iVar35;
  lVar1 = param_4[2];
  *(undefined1 *)(lVar1 + uVar51) =
       *(undefined1 *)(lVar17 + -0x180 + (ulong)((uint)(iVar41 + iVar43) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar1 + 4 + uVar51) =
       *(undefined1 *)(lVar17 + -0x180 + (ulong)((uint)(iVar43 - iVar41) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar1 + 1 + uVar51) =
       *(undefined1 *)(lVar17 + -0x180 + (ulong)((uint)(iVar27 + iVar35) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar1 + 3 + uVar51) =
       *(undefined1 *)(lVar17 + -0x180 + (ulong)((uint)(iVar27 - iVar35) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar1 + 2 + uVar51) =
       *(undefined1 *)(lVar17 + -0x180 + (ulong)(uVar19 + iVar15 * -0x2d40 >> 0x12 & 0x3ff));
  uVar19 = (int)((lVar50 - lVar21) * 0x200000 >> 0x13) + 0x8020000U & 0xffffe000;
  iVar15 = (int)((ulong)(lVar55 - lVar49) >> 0xb);
  iVar27 = (int)((ulong)(lVar47 - lVar31) >> 0xb);
  iVar35 = iVar27 + iVar15;
  iVar15 = iVar15 - iVar27;
  iVar27 = iVar15 * 0xb50 + uVar19;
  iVar41 = iVar27 + iVar35 * 0x194c;
  iVar27 = iVar27 + iVar35 * -0x194c;
  iVar43 = (int)((ulong)(lVar42 - lVar23) >> 0xb);
  iVar52 = (int)((ulong)(lVar24 - lVar53) >> 0xb);
  iVar35 = (iVar52 + iVar43) * 0x1a9a;
  iVar43 = iVar43 * 0x1071 + iVar35;
  iVar35 = iVar52 * -0x45a4 + iVar35;
  lVar1 = param_4[3];
  *(undefined1 *)(lVar1 + uVar51) =
       *(undefined1 *)(lVar17 + -0x180 + (ulong)((uint)(iVar41 + iVar43) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar1 + 4 + uVar51) =
       *(undefined1 *)(lVar17 + -0x180 + (ulong)((uint)(iVar41 - iVar43) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar1 + 1 + uVar51) =
       *(undefined1 *)(lVar17 + -0x180 + (ulong)((uint)(iVar35 + iVar27) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar1 + 3 + uVar51) =
       *(undefined1 *)(lVar17 + -0x180 + (ulong)((uint)(iVar27 - iVar35) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar1 + 2 + uVar51) =
       *(undefined1 *)(lVar17 + -0x180 + (ulong)(uVar19 + iVar15 * -0x2d40 >> 0x12 & 0x3ff));
  uVar19 = (int)((lVar8 - lVar38) * 0x200000 >> 0x13) + 0x8020000U & 0xffffe000;
  iVar15 = (int)((ulong)(lVar6 - lVar30) >> 0xb);
  iVar27 = (int)((ulong)(lVar7 - lVar36) >> 0xb);
  iVar35 = iVar27 + iVar15;
  iVar15 = iVar15 - iVar27;
  iVar27 = iVar15 * 0xb50 + uVar19;
  iVar41 = iVar27 + iVar35 * 0x194c;
  iVar27 = iVar27 + iVar35 * -0x194c;
  iVar52 = (int)((ulong)(lVar9 - lVar32) >> 0xb);
  iVar43 = (int)((ulong)(lVar25 - lVar33) >> 0xb);
  iVar35 = (iVar43 + iVar52) * 0x1a9a;
  iVar52 = iVar52 * 0x1071 + iVar35;
  iVar35 = iVar43 * -0x45a4 + iVar35;
  lVar1 = param_4[4];
  *(undefined1 *)(lVar1 + uVar51) =
       *(undefined1 *)(lVar17 + -0x180 + (ulong)((uint)(iVar41 + iVar52) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar1 + 4 + uVar51) =
       *(undefined1 *)(lVar17 + -0x180 + (ulong)((uint)(iVar41 - iVar52) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar1 + 1 + uVar51) =
       *(undefined1 *)(lVar17 + -0x180 + (ulong)((uint)(iVar35 + iVar27) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar1 + 3 + uVar51) =
       *(undefined1 *)(lVar17 + -0x180 + (ulong)((uint)(iVar27 - iVar35) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar1 + 2 + uVar51) =
       *(undefined1 *)(lVar17 + -0x180 + (ulong)(uVar19 + iVar15 * -0x2d40 >> 0x12 & 0x3ff));
  return;
}


