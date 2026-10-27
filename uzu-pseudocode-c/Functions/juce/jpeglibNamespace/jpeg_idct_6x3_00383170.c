// Function : jpeg_idct_6x3
// Namespace: juce:jpeglibNamespace
// Entry    : 00383170
// Prototype: undefined jpeg_idct_6x3(long param_1, long param_2, short * param_3, long * param_4, uint param_5)
// Body     : 00383170 - 003837cf


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_idct_6x3(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, short*, unsigned char**, unsigned int) */

void __cdecl
juce::jpeglibNamespace::jpeg_idct_6x3
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
  int iVar15;
  int iVar16;
  int *piVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  long lVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  long lVar28;
  int iVar29;
  int iVar30;
  long lVar31;
  int iVar32;
  long lVar33;
  long lVar34;
  ulong uVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  long lVar39;
  int iVar40;
  long lVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  
  piVar17 = *(int **)(param_2 + 0x58);
  sVar1 = param_3[0x11];
  iVar23 = piVar17[0x11];
  sVar2 = param_3[9];
  iVar13 = piVar17[9];
  sVar3 = param_3[0x12];
  iVar29 = piVar17[0x12];
  sVar4 = param_3[10];
  iVar27 = piVar17[10];
  sVar5 = param_3[0x13];
  iVar30 = piVar17[0x13];
  sVar6 = param_3[0xb];
  iVar14 = piVar17[0xb];
  sVar7 = param_3[0x14];
  iVar22 = piVar17[0x14];
  sVar8 = param_3[0xc];
  iVar37 = piVar17[0xc];
  sVar9 = param_3[0x10];
  iVar26 = piVar17[0x10];
  sVar10 = param_3[8];
  iVar15 = piVar17[8];
  sVar11 = param_3[0x15];
  iVar44 = piVar17[0x15];
  sVar12 = param_3[0xd];
  iVar16 = piVar17[0xd];
  lVar39 = (long)*piVar17 * (long)*param_3 * 0x2000;
  lVar48 = (ulong)(uint)(sVar9 * iVar26) * 0x16a1 + lVar39 + 0x400;
  lVar47 = (long)piVar17[4] * (long)param_3[4] * 0x2000;
  lVar24 = (long)iVar22 * (long)sVar7 * 0x16a1 + lVar47 + 0x400;
  uVar20 = (int)((long)((lVar48 + (ulong)(uint)(sVar10 * iVar15) * 0x2731) * 0x200000) >> 0x13) +
           0x8020000U & 0xffffe000;
  iVar40 = (int)((ulong)((long)iVar37 * (long)sVar8 * 0x2731 + lVar24) >> 0xb);
  iVar38 = iVar40 * 0x16a1 + uVar20;
  iVar21 = uVar20 + iVar40 * -0x2d42;
  lVar45 = (long)piVar17[2] * (long)param_3[2] * 0x2000;
  lVar28 = (long)iVar29 * (long)sVar3 * 0x16a1 + lVar45 + 0x400;
  iVar40 = (int)((ulong)(lVar28 + (long)iVar27 * (long)sVar4 * 0x2731) >> 0xb);
  iVar43 = iVar38 + iVar40 * 0x2731;
  iVar38 = iVar38 + iVar40 * -0x2731;
  lVar33 = (long)piVar17[1] * (long)param_3[1] * 0x2000;
  lVar31 = (long)iVar23 * (long)sVar1 * 0x16a1 + lVar33 + 0x400;
  lVar41 = (long)piVar17[3] * (long)param_3[3] * 0x2000;
  lVar46 = (long)iVar30 * (long)sVar5 * 0x16a1 + lVar41 + 0x400;
  lVar49 = (long)piVar17[5] * (long)param_3[5] * 0x2000;
  lVar34 = (long)iVar44 * (long)sVar11 * 0x16a1 + lVar49 + 0x400;
  iVar36 = (int)((ulong)((long)iVar13 * (long)sVar2 * 0x2731 + lVar31) >> 0xb);
  iVar32 = (int)((ulong)(lVar34 + (long)iVar16 * (long)sVar12 * 0x2731) >> 0xb);
  iVar42 = (iVar32 + iVar36) * 0xbb6;
  iVar40 = (int)((ulong)((long)iVar14 * (long)sVar6 * 0x2731 + lVar46) >> 0xb);
  iVar25 = (iVar40 + iVar36) * 0x2000 + iVar42;
  iVar42 = (iVar32 - iVar40) * 0x2000 + iVar42;
  iVar36 = iVar36 - (iVar40 + iVar32);
  lVar18 = *(long *)(param_1 + 0x198);
  uVar35 = (ulong)param_5;
  lVar19 = *param_4;
  *(undefined1 *)(lVar19 + uVar35) =
       *(undefined1 *)(lVar18 + -0x180 + (ulong)((uint)(iVar25 + iVar43) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar19 + 5 + uVar35) =
       *(undefined1 *)(lVar18 + -0x180 + (ulong)((uint)(iVar43 - iVar25) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar19 + 1 + uVar35) =
       *(undefined1 *)(lVar18 + -0x180 + (ulong)((uint)(iVar36 * 0x2000 + iVar21) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar19 + 4 + uVar35) =
       *(undefined1 *)(lVar18 + -0x180 + (ulong)((uint)(iVar21 + iVar36 * -0x2000) >> 0x12 & 0x3ff))
  ;
  *(undefined1 *)(lVar19 + 2 + uVar35) =
       *(undefined1 *)(lVar18 + -0x180 + (ulong)((uint)(iVar42 + iVar38) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar19 + 3 + uVar35) =
       *(undefined1 *)(lVar18 + -0x180 + (ulong)((uint)(iVar38 - iVar42) >> 0x12 & 0x3ff));
  uVar20 = (int)((long)((lVar39 + (ulong)(uint)(sVar9 * iVar26) * -0x2d42 + 0x400) * 0x200000) >>
                0x13) + 0x8020000U & 0xffffe000;
  iVar26 = (int)((long)iVar22 * (long)sVar7 * -0x2d42 + lVar47 + 0x400U >> 0xb);
  iVar22 = iVar26 * 0x16a1 + uVar20;
  iVar26 = uVar20 + iVar26 * -0x2d42;
  iVar29 = (int)((long)iVar29 * (long)sVar3 * -0x2d42 + lVar45 + 0x400U >> 0xb);
  iVar40 = iVar22 + iVar29 * 0x2731;
  iVar22 = iVar22 + iVar29 * -0x2731;
  iVar38 = (int)((long)iVar23 * (long)sVar1 * -0x2d42 + lVar33 + 0x400U >> 0xb);
  iVar44 = (int)((long)iVar44 * (long)sVar11 * -0x2d42 + lVar49 + 0x400U >> 0xb);
  iVar21 = (iVar44 + iVar38) * 0xbb6;
  iVar23 = (int)((long)iVar30 * (long)sVar5 * -0x2d42 + lVar41 + 0x400U >> 0xb);
  iVar29 = (iVar23 + iVar38) * 0x2000 + iVar21;
  iVar21 = (iVar44 - iVar23) * 0x2000 + iVar21;
  iVar38 = iVar38 - (iVar23 + iVar44);
  lVar19 = param_4[1];
  *(undefined1 *)(lVar19 + uVar35) =
       *(undefined1 *)(lVar18 + -0x180 + (ulong)((uint)(iVar29 + iVar40) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar19 + 5 + uVar35) =
       *(undefined1 *)(lVar18 + -0x180 + (ulong)((uint)(iVar40 - iVar29) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar19 + 1 + uVar35) =
       *(undefined1 *)(lVar18 + -0x180 + (ulong)((uint)(iVar38 * 0x2000 + iVar26) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar19 + 4 + uVar35) =
       *(undefined1 *)(lVar18 + -0x180 + (ulong)((uint)(iVar26 + iVar38 * -0x2000) >> 0x12 & 0x3ff))
  ;
  *(undefined1 *)(lVar19 + 2 + uVar35) =
       *(undefined1 *)(lVar18 + -0x180 + (ulong)((uint)(iVar22 + iVar21) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar19 + 3 + uVar35) =
       *(undefined1 *)(lVar18 + -0x180 + (ulong)((uint)(iVar22 - iVar21) >> 0x12 & 0x3ff));
  uVar20 = (int)((long)((lVar48 + (ulong)(uint)(sVar10 * iVar15) * -0x2731) * 0x200000) >> 0x13) +
           0x8020000U & 0xffffe000;
  iVar29 = (int)((ulong)(lVar24 + (long)iVar37 * (long)sVar8 * -0x2731) >> 0xb);
  iVar23 = iVar29 * 0x16a1 + uVar20;
  iVar26 = uVar20 + iVar29 * -0x2d42;
  iVar29 = (int)((ulong)(lVar28 + (long)iVar27 * (long)sVar4 * -0x2731) >> 0xb);
  iVar27 = iVar23 + iVar29 * 0x2731;
  iVar23 = iVar23 + iVar29 * -0x2731;
  iVar29 = (int)((ulong)(lVar31 + (long)iVar13 * (long)sVar2 * -0x2731) >> 0xb);
  iVar37 = (int)((ulong)(lVar34 + (long)iVar16 * (long)sVar12 * -0x2731) >> 0xb);
  iVar22 = (iVar37 + iVar29) * 0xbb6;
  iVar13 = (int)((ulong)(lVar46 + (long)iVar14 * (long)sVar6 * -0x2731) >> 0xb);
  iVar30 = (iVar13 + iVar29) * 0x2000 + iVar22;
  iVar22 = (iVar37 - iVar13) * 0x2000 + iVar22;
  iVar29 = iVar29 - (iVar13 + iVar37);
  lVar19 = param_4[2];
  *(undefined1 *)(lVar19 + uVar35) =
       *(undefined1 *)(lVar18 + -0x180 + (ulong)((uint)(iVar30 + iVar27) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar19 + 5 + uVar35) =
       *(undefined1 *)(lVar18 + -0x180 + (ulong)((uint)(iVar27 - iVar30) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar19 + 1 + uVar35) =
       *(undefined1 *)(lVar18 + -0x180 + (ulong)((uint)(iVar29 * 0x2000 + iVar26) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar19 + 4 + uVar35) =
       *(undefined1 *)(lVar18 + -0x180 + (ulong)((uint)(iVar26 + iVar29 * -0x2000) >> 0x12 & 0x3ff))
  ;
  *(undefined1 *)(lVar19 + 2 + uVar35) =
       *(undefined1 *)(lVar18 + -0x180 + (ulong)((uint)(iVar23 + iVar22) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar19 + 3 + uVar35) =
       *(undefined1 *)(lVar18 + -0x180 + (ulong)((uint)(iVar23 - iVar22) >> 0x12 & 0x3ff));
  return;
}


