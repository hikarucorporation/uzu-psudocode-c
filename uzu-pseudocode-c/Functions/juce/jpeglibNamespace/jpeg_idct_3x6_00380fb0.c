// Function : jpeg_idct_3x6
// Namespace: juce:jpeglibNamespace
// Entry    : 00380fb0
// Prototype: undefined jpeg_idct_3x6(long param_1, long param_2, short * param_3, long * param_4, uint param_5)
// Body     : 00380fb0 - 00381631


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_idct_3x6(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, short*, unsigned char**, unsigned int) */

void __cdecl
juce::jpeglibNamespace::jpeg_idct_3x6
          (long param_1,long param_2,short *param_3,long *param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  long lVar27;
  long lVar28;
  int iVar29;
  int iVar30;
  long lVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  uint uVar36;
  ulong uVar37;
  int iVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  int iVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  int iVar47;
  
  piVar10 = *(int **)(param_2 + 0x58);
  iVar33 = piVar10[8] * (int)param_3[8];
  iVar35 = piVar10[0x18] * (int)param_3[0x18];
  iVar47 = piVar10[0x28] * (int)param_3[0x28];
  sVar3 = param_3[0x21];
  iVar26 = piVar10[0x21];
  sVar4 = param_3[0x11];
  iVar20 = piVar10[0x11];
  lVar40 = (long)piVar10[9] * (long)param_3[9];
  lVar16 = (long)piVar10[0x19] * (long)param_3[0x19];
  lVar17 = (long)piVar10[0x29] * (long)param_3[0x29];
  sVar5 = param_3[0x22];
  iVar21 = piVar10[0x22];
  sVar6 = param_3[0x12];
  iVar30 = piVar10[0x12];
  lVar44 = (long)piVar10[10] * (long)param_3[10];
  lVar31 = (long)piVar10[0x1a] * (long)param_3[0x1a];
  sVar7 = param_3[0x20];
  iVar9 = piVar10[0x20];
  sVar8 = param_3[0x10];
  iVar34 = piVar10[0x10];
  lVar39 = (long)piVar10[0x2a] * (long)param_3[0x2a];
  lVar22 = (long)*piVar10 * (long)*param_3 * 0x2000;
  iVar13 = sVar7 * iVar9 * 0x16a1 + (int)lVar22 + 0x400;
  iVar24 = (iVar47 + iVar33) * 0xbb6;
  iVar19 = (iVar35 + iVar33) * 0x2000 + iVar24;
  lVar41 = (long)piVar10[2] * (long)param_3[2] * 0x2000;
  lVar42 = lVar41 + (long)iVar21 * (long)sVar5 * 0x16a1 + 0x400;
  lVar27 = (lVar39 + lVar44) * 0xbb6;
  lVar18 = (lVar31 + lVar44) * 0x2000 + lVar27;
  lVar1 = (long)iVar30 * (long)sVar6 * 0x2731 + lVar42;
  iVar14 = sVar8 * iVar34 * 0x2731 + iVar13;
  uVar36 = (iVar14 + iVar19) * 4 + 0x8020000U & 0xffffe000;
  iVar25 = (int)((ulong)(lVar1 + lVar18) >> 0xb);
  iVar32 = iVar25 * 0x16a1 + uVar36;
  lVar45 = (long)piVar10[1] * (long)param_3[1] * 0x2000;
  lVar46 = lVar45 + (long)iVar26 * (long)sVar3 * 0x16a1 + 0x400;
  lVar28 = (lVar17 + lVar40) * 0xbb6;
  lVar23 = (lVar16 + lVar40) * 0x2000 + lVar28;
  lVar2 = (long)iVar20 * (long)sVar4 * 0x2731 + lVar46;
  iVar15 = (int)((ulong)(lVar2 + lVar23) >> 0xb);
  lVar11 = *(long *)(param_1 + 0x198);
  uVar37 = (ulong)param_5;
  lVar12 = *param_4;
  *(undefined1 *)(lVar12 + uVar37) =
       *(undefined1 *)(lVar11 + -0x180 + (ulong)((uint)(iVar15 * 0x2731 + iVar32) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar12 + 2 + uVar37) =
       *(undefined1 *)(lVar11 + -0x180 + (ulong)((uint)(iVar32 + iVar15 * -0x2731) >> 0x12 & 0x3ff))
  ;
  *(undefined1 *)(lVar12 + 1 + uVar37) =
       *(undefined1 *)(lVar11 + -0x180 + (ulong)(iVar25 * -0x2d42 + uVar36 >> 0x12 & 0x3ff));
  iVar33 = iVar33 - (iVar35 + iVar47);
  iVar15 = (int)lVar40 - ((int)lVar16 + (int)lVar17);
  iVar25 = (int)lVar44 - ((int)lVar39 + (int)lVar31);
  iVar9 = (int)((ulong)(uint)(sVar7 * iVar9) * -0x2d42 + lVar22 + 0x400 >> 0xb);
  iVar32 = (iVar9 + iVar33 * 4) * 0x2000;
  iVar21 = (int)(lVar41 + (long)iVar21 * (long)sVar5 * -0x2d42 + 0x400 >> 0xb);
  iVar38 = iVar21 + iVar25 * 4;
  iVar43 = iVar38 * 0x16a1 + iVar32 + 0x8020000;
  iVar26 = (int)((long)iVar26 * (long)sVar3 * -0x2d42 + lVar45 + 0x400U >> 0xb);
  iVar29 = iVar26 + iVar15 * 4;
  lVar12 = param_4[1];
  *(undefined1 *)(lVar12 + uVar37) =
       *(undefined1 *)(lVar11 + -0x180 + (ulong)((uint)(iVar29 * 0x2731 + iVar43) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar12 + 2 + uVar37) =
       *(undefined1 *)(lVar11 + -0x180 + (ulong)((uint)(iVar43 + iVar29 * -0x2731) >> 0x12 & 0x3ff))
  ;
  *(undefined1 *)(lVar12 + 1 + uVar37) =
       *(undefined1 *)
        (lVar11 + -0x180 + (ulong)(iVar38 * -0x2d42 + iVar32 + 0x8020000U >> 0x12 & 0x3ff));
  iVar13 = iVar13 + sVar8 * iVar34 * -0x2731;
  iVar24 = (iVar47 - iVar35) * 0x2000 + iVar24;
  lVar46 = lVar46 + (long)iVar20 * (long)sVar4 * -0x2731;
  lVar28 = (lVar17 - lVar16) * 0x2000 + lVar28;
  lVar42 = lVar42 + (long)iVar30 * (long)sVar6 * -0x2731;
  lVar27 = (lVar39 - lVar31) * 0x2000 + lVar27;
  uVar36 = (iVar24 + iVar13) * 4 + 0x8020000U & 0xffffe000;
  iVar20 = (int)((ulong)(lVar27 + lVar42) >> 0xb);
  iVar30 = iVar20 * 0x16a1 + uVar36;
  iVar34 = (int)((ulong)(lVar28 + lVar46) >> 0xb);
  lVar12 = param_4[2];
  *(undefined1 *)(lVar12 + uVar37) =
       *(undefined1 *)(lVar11 + -0x180 + (ulong)((uint)(iVar30 + iVar34 * 0x2731) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar12 + 2 + uVar37) =
       *(undefined1 *)(lVar11 + -0x180 + (ulong)((uint)(iVar30 + iVar34 * -0x2731) >> 0x12 & 0x3ff))
  ;
  *(undefined1 *)(lVar12 + 1 + uVar37) =
       *(undefined1 *)(lVar11 + -0x180 + (ulong)(iVar20 * -0x2d42 + uVar36 >> 0x12 & 0x3ff));
  uVar36 = (iVar13 - iVar24) * 4 + 0x8020000U & 0xffffe000;
  iVar30 = (int)((ulong)(lVar42 - lVar27) >> 0xb);
  iVar20 = iVar30 * 0x16a1 + uVar36;
  iVar34 = (int)((ulong)(lVar46 - lVar28) >> 0xb);
  lVar12 = param_4[3];
  *(undefined1 *)(lVar12 + uVar37) =
       *(undefined1 *)(lVar11 + -0x180 + (ulong)((uint)(iVar20 + iVar34 * 0x2731) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar12 + 2 + uVar37) =
       *(undefined1 *)(lVar11 + -0x180 + (ulong)((uint)(iVar20 + iVar34 * -0x2731) >> 0x12 & 0x3ff))
  ;
  *(undefined1 *)(lVar12 + 1 + uVar37) =
       *(undefined1 *)(lVar11 + -0x180 + (ulong)(iVar30 * -0x2d42 + uVar36 >> 0x12 & 0x3ff));
  iVar26 = iVar26 + iVar15 * -4;
  iVar21 = iVar21 + iVar25 * -4;
  iVar30 = (iVar9 + iVar33 * -4) * 0x2000;
  iVar20 = iVar21 * 0x16a1 + iVar30 + 0x8020000;
  lVar12 = param_4[4];
  *(undefined1 *)(lVar12 + uVar37) =
       *(undefined1 *)(lVar11 + -0x180 + (ulong)((uint)(iVar20 + iVar26 * 0x2731) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar12 + 2 + uVar37) =
       *(undefined1 *)(lVar11 + -0x180 + (ulong)((uint)(iVar20 + iVar26 * -0x2731) >> 0x12 & 0x3ff))
  ;
  *(undefined1 *)(lVar12 + 1 + uVar37) =
       *(undefined1 *)
        (lVar11 + -0x180 + (ulong)(iVar21 * -0x2d42 + iVar30 + 0x8020000U >> 0x12 & 0x3ff));
  uVar36 = (iVar14 - iVar19) * 4 + 0x8020000U & 0xffffe000;
  iVar20 = (int)((ulong)(lVar1 - lVar18) >> 0xb);
  iVar26 = iVar20 * 0x16a1 + uVar36;
  iVar21 = (int)((ulong)(lVar2 - lVar23) >> 0xb);
  lVar1 = param_4[5];
  *(undefined1 *)(lVar1 + uVar37) =
       *(undefined1 *)(lVar11 + -0x180 + (ulong)((uint)(iVar26 + iVar21 * 0x2731) >> 0x12 & 0x3ff));
  *(undefined1 *)(lVar1 + 2 + uVar37) =
       *(undefined1 *)(lVar11 + -0x180 + (ulong)((uint)(iVar26 + iVar21 * -0x2731) >> 0x12 & 0x3ff))
  ;
  *(undefined1 *)(lVar1 + 1 + uVar37) =
       *(undefined1 *)(lVar11 + -0x180 + (ulong)(iVar20 * -0x2d42 + uVar36 >> 0x12 & 0x3ff));
  return;
}


