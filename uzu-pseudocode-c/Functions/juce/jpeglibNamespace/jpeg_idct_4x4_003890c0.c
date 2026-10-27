// Function : jpeg_idct_4x4
// Namespace: juce:jpeglibNamespace
// Entry    : 003890c0
// Prototype: undefined jpeg_idct_4x4(long param_1, long param_2, short * param_3, long * param_4, uint param_5)
// Body     : 003890c0 - 00389617


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_idct_4x4(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, short*, unsigned char**, unsigned int) */

void __cdecl
juce::jpeglibNamespace::jpeg_idct_4x4
          (long param_1,long param_2,short *param_3,long *param_4,uint param_5)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  long lVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  long lVar38;
  ulong uVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  long lVar44;
  long lVar45;
  
  piVar15 = *(int **)(param_2 + 0x58);
  sVar1 = *param_3;
  iVar22 = *piVar15;
  sVar2 = param_3[0x10];
  iVar43 = piVar15[0x10];
  sVar3 = param_3[0x18];
  iVar26 = piVar15[0x18];
  sVar4 = param_3[1];
  iVar41 = piVar15[1];
  sVar5 = param_3[0x11];
  iVar21 = piVar15[0x11];
  sVar6 = param_3[0x19];
  iVar25 = piVar15[0x19];
  sVar7 = param_3[2];
  iVar24 = piVar15[2];
  sVar8 = param_3[0x12];
  iVar31 = piVar15[0x12];
  sVar9 = param_3[0x1a];
  iVar32 = piVar15[0x1a];
  sVar10 = param_3[3];
  iVar40 = piVar15[3];
  sVar11 = param_3[0x13];
  iVar13 = piVar15[0x13];
  sVar12 = param_3[0x1b];
  iVar14 = piVar15[0x1b];
  lVar38 = ((long)piVar15[8] * (long)param_3[8] + (long)iVar26 * (long)sVar3) * 0x1151;
  lVar27 = ((long)iVar32 * (long)sVar9 + (long)piVar15[10] * (long)param_3[10]) * 0x1151;
  iVar19 = iVar22 * sVar1 + iVar43 * sVar2;
  iVar18 = (int)(lVar38 + (long)piVar15[8] * (long)param_3[8] * 0x187e + 0x400U >> 0xb);
  iVar20 = iVar18 + iVar19 * 4 + 0x4010;
  iVar36 = iVar31 * sVar8 + iVar24 * sVar7;
  iVar33 = (int)((long)piVar15[10] * (long)param_3[10] * 0x187e + lVar27 + 0x400U >> 0xb);
  iVar28 = iVar33 + iVar36 * 4;
  lVar45 = ((long)iVar25 * (long)sVar6 + (long)piVar15[9] * (long)param_3[9]) * 0x1151;
  lVar44 = ((long)iVar14 * (long)sVar12 + (long)piVar15[0xb] * (long)param_3[0xb]) * 0x1151;
  iVar34 = iVar21 * sVar5 + iVar41 * sVar4;
  iVar35 = (int)(lVar45 + (long)piVar15[9] * (long)param_3[9] * 0x187e + 0x400U >> 0xb);
  iVar23 = iVar35 + iVar34 * 4;
  iVar29 = iVar13 * sVar11 + iVar40 * sVar10;
  iVar37 = (int)(lVar44 + (long)piVar15[0xb] * (long)param_3[0xb] * 0x187e + 0x400U >> 0xb);
  iVar30 = iVar37 + iVar29 * 4;
  iVar42 = (iVar30 + iVar23) * 0x1151;
  iVar23 = iVar23 * 0x187e + iVar42;
  iVar42 = iVar30 * -0x3b21 + iVar42;
  iVar30 = (iVar20 + iVar28) * 0x2000;
  iVar20 = (iVar20 - iVar28) * 0x2000;
  lVar16 = *(long *)(param_1 + 0x198);
  uVar39 = (ulong)param_5;
  lVar17 = *param_4;
  *(undefined1 *)(lVar17 + uVar39) =
       *(undefined1 *)(lVar16 + -0x180 + (ulong)((uint)(iVar23 + iVar30) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar17 + 3 + uVar39) =
       *(undefined1 *)(lVar16 + -0x180 + (ulong)((uint)(iVar30 - iVar23) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar17 + 1 + uVar39) =
       *(undefined1 *)(lVar16 + -0x180 + (ulong)((uint)(iVar42 + iVar20) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar17 + 2 + uVar39) =
       *(undefined1 *)(lVar16 + -0x180 + (ulong)((uint)(iVar20 - iVar42) >> 0x12 & 0x3ff));
  iVar20 = iVar22 * sVar1 - iVar43 * sVar2;
  iVar23 = iVar41 * sVar4 - iVar21 * sVar5;
  iVar28 = iVar24 * sVar7 - iVar31 * sVar8;
  iVar40 = iVar40 * sVar10 - iVar13 * sVar11;
  iVar22 = (int)(lVar38 + (long)iVar26 * (long)sVar3 * -0x3b21 + 0x400U >> 0xb);
  iVar21 = iVar22 + iVar20 * 4 + 0x4010;
  iVar43 = (int)(lVar27 + (long)iVar32 * (long)sVar9 * -0x3b21 + 0x400U >> 0xb);
  iVar24 = iVar43 + iVar28 * 4;
  iVar26 = (int)(lVar45 + (long)iVar25 * (long)sVar6 * -0x3b21 + 0x400U >> 0xb);
  iVar25 = iVar26 + iVar23 * 4;
  iVar41 = (int)(lVar44 + (long)iVar14 * (long)sVar12 * -0x3b21 + 0x400U >> 0xb);
  iVar31 = iVar41 + iVar40 * 4;
  iVar32 = (iVar31 + iVar25) * 0x1151;
  iVar25 = iVar25 * 0x187e + iVar32;
  iVar32 = iVar31 * -0x3b21 + iVar32;
  iVar31 = (iVar21 + iVar24) * 0x2000;
  iVar21 = (iVar21 - iVar24) * 0x2000;
  lVar17 = param_4[1];
  *(undefined1 *)(lVar17 + uVar39) =
       *(undefined1 *)(lVar16 + -0x180 + (ulong)((uint)(iVar25 + iVar31) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar17 + 3 + uVar39) =
       *(undefined1 *)(lVar16 + -0x180 + (ulong)((uint)(iVar31 - iVar25) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar17 + 1 + uVar39) =
       *(undefined1 *)(lVar16 + -0x180 + (ulong)((uint)(iVar32 + iVar21) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar17 + 2 + uVar39) =
       *(undefined1 *)(lVar16 + -0x180 + (ulong)((uint)(iVar21 - iVar32) >> 0x12 & 0x3ff));
  iVar26 = iVar23 * 4 - iVar26;
  iVar43 = iVar28 * 4 - iVar43;
  iVar41 = iVar40 * 4 - iVar41;
  iVar22 = (iVar20 * 4 - iVar22) + 0x4010;
  iVar21 = (iVar26 + iVar41) * 0x1151;
  iVar26 = iVar26 * 0x187e + iVar21;
  iVar21 = iVar41 * -0x3b21 + iVar21;
  iVar41 = (iVar22 + iVar43) * 0x2000;
  iVar22 = (iVar22 - iVar43) * 0x2000;
  lVar17 = param_4[2];
  *(undefined1 *)(lVar17 + uVar39) =
       *(undefined1 *)(lVar16 + -0x180 + (ulong)((uint)(iVar26 + iVar41) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar17 + 3 + uVar39) =
       *(undefined1 *)(lVar16 + -0x180 + (ulong)((uint)(iVar41 - iVar26) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar17 + 1 + uVar39) =
       *(undefined1 *)(lVar16 + -0x180 + (ulong)((uint)(iVar21 + iVar22) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar17 + 2 + uVar39) =
       *(undefined1 *)(lVar16 + -0x180 + (ulong)((uint)(iVar22 - iVar21) >> 0x12 & 0x3ff));
  iVar35 = iVar34 * 4 - iVar35;
  iVar33 = iVar36 * 4 - iVar33;
  iVar37 = iVar29 * 4 - iVar37;
  iVar22 = (iVar19 * 4 - iVar18) + 0x4010;
  iVar26 = (iVar37 + iVar35) * 0x1151;
  iVar41 = iVar35 * 0x187e + iVar26;
  iVar26 = iVar37 * -0x3b21 + iVar26;
  iVar43 = (iVar22 + iVar33) * 0x2000;
  iVar22 = (iVar22 - iVar33) * 0x2000;
  lVar17 = param_4[3];
  *(undefined1 *)(lVar17 + uVar39) =
       *(undefined1 *)(lVar16 + -0x180 + (ulong)((uint)(iVar41 + iVar43) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar17 + 3 + uVar39) =
       *(undefined1 *)(lVar16 + -0x180 + (ulong)((uint)(iVar43 - iVar41) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar17 + 1 + uVar39) =
       *(undefined1 *)(lVar16 + -0x180 + (ulong)((uint)(iVar26 + iVar22) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar17 + 2 + uVar39) =
       *(undefined1 *)(lVar16 + -0x180 + (ulong)((uint)(iVar22 - iVar26) >> 0x12 & 0x3ff));
  return;
}


