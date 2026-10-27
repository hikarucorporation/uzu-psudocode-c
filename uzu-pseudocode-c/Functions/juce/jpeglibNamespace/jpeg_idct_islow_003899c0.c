// Function : jpeg_idct_islow
// Namespace: juce:jpeglibNamespace
// Entry    : 003899c0
// Prototype: undefined jpeg_idct_islow(long param_1, long param_2, long param_3, long param_4, uint param_5)
// Body     : 003899c0 - 00389eb4


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_idct_islow(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, short*, unsigned char**, unsigned int) */

void __cdecl
juce::jpeglibNamespace::jpeg_idct_islow
          (long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  short sVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  short sVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  int iVar26;
  long lVar27;
  int iVar28;
  int iVar29;
  long lVar30;
  short sVar31;
  long lVar32;
  long *plVar33;
  int aiStack_138 [66];
  
  lVar3 = *(long *)(param_1 + 0x198);
  lVar21 = *(long *)(param_2 + 0x58);
  uVar13 = 9;
  lVar6 = 0;
  do {
    sVar1 = *(short *)(param_3 + 0x10 + lVar6);
    sVar17 = *(short *)(param_3 + 0x20 + lVar6);
    sVar31 = *(short *)(param_3 + 0x30 + lVar6);
    if (sVar1 == 0 && sVar17 == 0) {
      if (sVar31 != 0) {
LAB_00389a4a:
        sVar17 = 0;
        goto LAB_00389a4c;
      }
      if ((((*(short *)(param_3 + 0x40 + lVar6) != 0) || (*(short *)(param_3 + 0x50 + lVar6) != 0))
          || (*(short *)(param_3 + 0x60 + lVar6) != 0)) || (*(short *)(param_3 + 0x70 + lVar6) != 0)
         ) {
        sVar31 = 0;
        goto LAB_00389a4a;
      }
      iVar26 = (int)*(short *)(param_3 + lVar6) * *(int *)(lVar21 + lVar6 * 2) * 4;
      *(int *)((long)aiStack_138 + lVar6 * 2) = iVar26;
      *(int *)((long)aiStack_138 + lVar6 * 2 + 0x20) = iVar26;
      *(int *)((long)aiStack_138 + lVar6 * 2 + 0x40) = iVar26;
      *(int *)((long)aiStack_138 + lVar6 * 2 + 0x60) = iVar26;
      *(int *)((long)aiStack_138 + lVar6 * 2 + 0x80) = iVar26;
      *(int *)((long)aiStack_138 + lVar6 * 2 + 0xa0) = iVar26;
      *(int *)((long)aiStack_138 + lVar6 * 2 + 0xc0) = iVar26;
      lVar10 = 0x38;
    }
    else {
LAB_00389a4c:
      lVar10 = (long)*(int *)(lVar21 + 0x80 + lVar6 * 2) * (long)*(short *)(param_3 + 0x40 + lVar6);
      uVar15 = (long)*(int *)(lVar21 + lVar6 * 2) * (long)*(short *)(param_3 + lVar6) * 0x2000;
      lVar27 = lVar10 * 0x2000 + uVar15 + 0x400;
      lVar16 = (uVar15 | 0x400) + lVar10 * -0x2000;
      lVar19 = (long)sVar17 * (long)*(int *)(lVar21 + 0x40 + lVar6 * 2);
      lVar10 = (long)*(int *)(lVar21 + 0xc0 + lVar6 * 2) * (long)*(short *)(param_3 + 0x60 + lVar6);
      lVar7 = (lVar10 + lVar19) * 0x1151;
      lVar19 = lVar19 * 0x187e + lVar7;
      lVar7 = lVar10 * -0x3b21 + lVar7;
      lVar10 = lVar19 + lVar27;
      lVar27 = lVar27 - lVar19;
      lVar19 = lVar7 + lVar16;
      lVar16 = lVar16 - lVar7;
      lVar11 = (long)*(int *)(lVar21 + 0xe0 + lVar6 * 2) * (long)*(short *)(param_3 + 0x70 + lVar6);
      lVar7 = (long)*(int *)(lVar21 + 0xa0 + lVar6 * 2) * (long)*(short *)(param_3 + 0x50 + lVar6);
      lVar32 = (long)sVar31 * (long)*(int *)(lVar21 + 0x60 + lVar6 * 2);
      lVar20 = (long)*(int *)(lVar21 + 0x20 + lVar6 * 2) * (long)sVar1;
      lVar24 = (lVar20 + lVar7 + lVar32 + lVar11) * 0x25a1;
      lVar23 = (lVar32 + lVar11) * -0x3ec5 + lVar24;
      lVar24 = (lVar20 + lVar7) * -0xc7c + lVar24;
      lVar12 = (lVar20 + lVar11) * -0x1ccd;
      lVar30 = lVar11 * 0x98e + lVar12 + lVar23;
      lVar12 = lVar20 * 0x300b + lVar12 + lVar24;
      lVar11 = (lVar32 + lVar7) * -0x5203;
      lVar24 = lVar7 * 0x41b3 + lVar11 + lVar24;
      lVar23 = lVar32 * 0x6254 + lVar11 + lVar23;
      *(int *)((long)aiStack_138 + lVar6 * 2) = (int)((ulong)(lVar12 + lVar10) >> 0xb);
      *(int *)((long)aiStack_138 + lVar6 * 2 + 0xe0) = (int)((ulong)(lVar10 - lVar12) >> 0xb);
      *(int *)((long)aiStack_138 + lVar6 * 2 + 0x20) = (int)((ulong)(lVar23 + lVar19) >> 0xb);
      *(int *)((long)aiStack_138 + lVar6 * 2 + 0xc0) = (int)((ulong)(lVar19 - lVar23) >> 0xb);
      *(int *)((long)aiStack_138 + lVar6 * 2 + 0x40) = (int)((ulong)(lVar24 + lVar16) >> 0xb);
      *(int *)((long)aiStack_138 + lVar6 * 2 + 0xa0) = (int)((ulong)(lVar16 - lVar24) >> 0xb);
      *(int *)((long)aiStack_138 + lVar6 * 2 + 0x60) = (int)((ulong)(lVar30 + lVar27) >> 0xb);
      iVar26 = (int)((ulong)(lVar27 - lVar30) >> 0xb);
      lVar10 = 0x20;
    }
    *(int *)((long)aiStack_138 + lVar6 * 2 + lVar10 * 4) = iVar26;
    uVar13 = uVar13 - 1;
    lVar6 = lVar6 + 2;
  } while (1 < uVar13);
  lVar21 = 0;
  do {
    while( true ) {
      plVar33 = (long *)(*(long *)(param_4 + lVar21) + (ulong)param_5);
      iVar26 = aiStack_138[lVar21 + 1];
      iVar4 = aiStack_138[lVar21 + 2];
      iVar8 = aiStack_138[lVar21 + 3];
      if ((iVar26 == 0 && iVar4 == 0) && (iVar4 = 0, iVar8 == 0)) break;
LAB_00389cc0:
      iVar2 = (int)((long)aiStack_138[lVar21] + 0x4010U);
      iVar22 = (iVar2 + aiStack_138[lVar21 + 4]) * 0x2000;
      iVar18 = (iVar2 - aiStack_138[lVar21 + 4]) * 0x2000;
      iVar2 = aiStack_138[lVar21 + 5];
      iVar29 = (aiStack_138[lVar21 + 6] + iVar4) * 0x1151;
      iVar4 = iVar4 * 0x187e + iVar29;
      iVar29 = aiStack_138[lVar21 + 6] * -0x3b21 + iVar29;
      iVar5 = iVar22 + iVar4;
      iVar22 = iVar22 - iVar4;
      iVar25 = iVar29 + iVar18;
      iVar18 = iVar18 - iVar29;
      iVar4 = aiStack_138[lVar21 + 7];
      iVar29 = (iVar8 + iVar4 + iVar2 + iVar26) * 0x25a1;
      iVar14 = (iVar8 + iVar4) * -0x3ec5 + iVar29;
      iVar29 = (iVar2 + iVar26) * -0xc7c + iVar29;
      iVar9 = (iVar4 + iVar26) * -0x1ccd;
      iVar28 = iVar4 * 0x98e + iVar9 + iVar14;
      iVar4 = iVar26 * 0x300b + iVar9 + iVar29;
      iVar26 = (iVar8 + iVar2) * -0x5203;
      iVar29 = iVar2 * 0x41b3 + iVar26 + iVar29;
      iVar14 = iVar8 * 0x6254 + iVar26 + iVar14;
      *(undefined1 *)plVar33 =
           *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar4 + iVar5) >> 0x12 & 0x3ff));
      *(undefined1 *)((long)plVar33 + 7) =
           *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar5 - iVar4) >> 0x12 & 0x3ff));
      *(undefined1 *)((long)plVar33 + 1) =
           *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar14 + iVar25) >> 0x12 & 0x3ff));
      *(undefined1 *)((long)plVar33 + 6) =
           *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar25 - iVar14) >> 0x12 & 0x3ff));
      *(undefined1 *)((long)plVar33 + 2) =
           *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar29 + iVar18) >> 0x12 & 0x3ff));
      *(undefined1 *)((long)plVar33 + 5) =
           *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar18 - iVar29) >> 0x12 & 0x3ff));
      *(undefined1 *)((long)plVar33 + 3) =
           *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar22 + iVar28) >> 0x12 & 0x3ff));
      *(undefined1 *)((long)plVar33 + 4) =
           *(undefined1 *)(lVar3 + -0x180 + (ulong)((uint)(iVar22 - iVar28) >> 0x12 & 0x3ff));
      lVar21 = lVar21 + 8;
      if (lVar21 == 0x40) {
        return;
      }
    }
    iVar8 = 0;
    if ((aiStack_138[lVar21 + 4] != 0) ||
       ((aiStack_138[lVar21 + 5] != 0 || (aiStack_138[lVar21 + 6] != 0)))) {
      iVar4 = 0;
      goto LAB_00389cc0;
    }
    iVar4 = 0;
    if (aiStack_138[lVar21 + 7] != 0) goto LAB_00389cc0;
    *plVar33 = (ulong)*(byte *)(lVar3 + -0x180 +
                               (ulong)((uint)((long)aiStack_138[lVar21] + 0x4010U >> 5) & 0x3ff)) *
               0x101010101010101;
    lVar21 = lVar21 + 8;
    if (lVar21 == 0x40) {
      return;
    }
  } while( true );
}


