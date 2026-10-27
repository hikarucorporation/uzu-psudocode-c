// Function : jpeg_idct_ifast
// Namespace: juce:jpeglibNamespace
// Entry    : 00389ec0
// Prototype: undefined jpeg_idct_ifast(long param_1, long param_2, long param_3, long param_4, uint param_5)
// Body     : 00389ec0 - 0038a2e4


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_idct_ifast(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, short*, unsigned char**, unsigned int) */

void __cdecl
juce::jpeglibNamespace::jpeg_idct_ifast
          (long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  short sVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  short sVar18;
  long *plVar19;
  int iVar20;
  uint uVar21;
  int aiStack_138 [66];
  
  lVar2 = *(long *)(param_1 + 0x198);
  lVar16 = *(long *)(param_2 + 0x58);
  uVar3 = 9;
  lVar12 = 0;
  do {
    sVar1 = *(short *)(param_3 + 0x10 + lVar12);
    sVar7 = *(short *)(param_3 + 0x20 + lVar12);
    sVar18 = *(short *)(param_3 + 0x30 + lVar12);
    if (sVar1 == 0 && sVar7 == 0) {
      if (sVar18 != 0) {
LAB_00389f4f:
        sVar7 = 0;
        goto LAB_00389f51;
      }
      if ((((*(short *)(param_3 + 0x40 + lVar12) != 0) || (*(short *)(param_3 + 0x50 + lVar12) != 0)
           ) || (*(short *)(param_3 + 0x60 + lVar12) != 0)) ||
         (*(short *)(param_3 + 0x70 + lVar12) != 0)) {
        sVar18 = 0;
        goto LAB_00389f4f;
      }
      iVar15 = (int)*(short *)(param_3 + lVar12) * *(int *)(lVar16 + lVar12 * 2);
      *(int *)((long)aiStack_138 + lVar12 * 2) = iVar15;
      *(int *)((long)aiStack_138 + lVar12 * 2 + 0x20) = iVar15;
      *(int *)((long)aiStack_138 + lVar12 * 2 + 0x40) = iVar15;
      *(int *)((long)aiStack_138 + lVar12 * 2 + 0x60) = iVar15;
      *(int *)((long)aiStack_138 + lVar12 * 2 + 0x80) = iVar15;
      *(int *)((long)aiStack_138 + lVar12 * 2 + 0xa0) = iVar15;
      *(int *)((long)aiStack_138 + lVar12 * 2 + 0xc0) = iVar15;
      lVar10 = 0x38;
    }
    else {
LAB_00389f51:
      iVar4 = (int)*(short *)(param_3 + lVar12) * *(int *)(lVar16 + lVar12 * 2);
      iVar8 = (int)sVar7 * *(int *)(lVar16 + 0x40 + lVar12 * 2);
      iVar11 = (int)*(short *)(param_3 + 0x40 + lVar12) * *(int *)(lVar16 + 0x80 + lVar12 * 2);
      iVar5 = (int)*(short *)(param_3 + 0x60 + lVar12) * *(int *)(lVar16 + 0xc0 + lVar12 * 2);
      iVar15 = iVar11 + iVar4;
      iVar4 = iVar4 - iVar11;
      iVar11 = iVar8 + iVar5;
      iVar5 = (int)((ulong)((long)(iVar8 - iVar5) * 0x16a) >> 8) - iVar11;
      iVar20 = iVar11 + iVar15;
      iVar17 = (int)sVar1 * *(int *)(lVar16 + 0x20 + lVar12 * 2);
      iVar15 = iVar15 - iVar11;
      iVar8 = (int)sVar18 * *(int *)(lVar16 + 0x60 + lVar12 * 2);
      iVar11 = iVar5 + iVar4;
      iVar14 = (int)*(short *)(param_3 + 0x50 + lVar12) * *(int *)(lVar16 + 0xa0 + lVar12 * 2);
      iVar4 = iVar4 - iVar5;
      iVar9 = (int)*(short *)(param_3 + 0x70 + lVar12) * *(int *)(lVar16 + 0xe0 + lVar12 * 2);
      iVar5 = iVar14 + iVar8;
      iVar14 = iVar14 - iVar8;
      iVar8 = iVar9 + iVar17;
      iVar17 = iVar17 - iVar9;
      iVar13 = iVar8 + iVar5;
      iVar6 = (int)((ulong)((long)(iVar14 + iVar17) * 0x1d9) >> 8);
      iVar9 = iVar6 - ((int)((ulong)((long)iVar14 * 0x29d) >> 8) + iVar13);
      iVar5 = (int)((ulong)((long)(iVar8 - iVar5) * 0x16a) >> 8) - iVar9;
      iVar6 = iVar6 - ((int)((ulong)((long)iVar17 * 0x115) >> 8) + iVar5);
      *(int *)((long)aiStack_138 + lVar12 * 2) = iVar13 + iVar20;
      *(int *)((long)aiStack_138 + lVar12 * 2 + 0xe0) = iVar20 - iVar13;
      *(int *)((long)aiStack_138 + lVar12 * 2 + 0x20) = iVar9 + iVar11;
      *(int *)((long)aiStack_138 + lVar12 * 2 + 0xc0) = iVar11 - iVar9;
      *(int *)((long)aiStack_138 + lVar12 * 2 + 0x40) = iVar5 + iVar4;
      *(int *)((long)aiStack_138 + lVar12 * 2 + 0xa0) = iVar4 - iVar5;
      *(int *)((long)aiStack_138 + lVar12 * 2 + 0x60) = iVar15 + iVar6;
      iVar15 = iVar15 - iVar6;
      lVar10 = 0x20;
    }
    *(int *)((long)aiStack_138 + lVar12 * 2 + lVar10 * 4) = iVar15;
    uVar3 = uVar3 - 1;
    lVar12 = lVar12 + 2;
  } while (1 < uVar3);
  lVar16 = 0;
  do {
    while( true ) {
      plVar19 = (long *)(*(long *)(param_4 + lVar16) + (ulong)param_5);
      uVar3 = aiStack_138[lVar16] + 0x4010;
      iVar15 = aiStack_138[lVar16 + 1];
      iVar11 = aiStack_138[lVar16 + 2];
      iVar5 = aiStack_138[lVar16 + 3];
      if ((iVar15 == 0 && iVar11 == 0) && (iVar11 = 0, iVar5 == 0)) break;
LAB_0038a130:
      iVar8 = aiStack_138[lVar16 + 4] + uVar3;
      iVar4 = uVar3 - aiStack_138[lVar16 + 4];
      iVar9 = aiStack_138[lVar16 + 6] + iVar11;
      iVar6 = (int)((ulong)(uint)(iVar11 - aiStack_138[lVar16 + 6]) * 0x16a >> 8) - iVar9;
      iVar13 = iVar9 + iVar8;
      iVar8 = iVar8 - iVar9;
      iVar11 = iVar6 + iVar4;
      iVar4 = iVar4 - iVar6;
      iVar9 = iVar5 + aiStack_138[lVar16 + 5];
      uVar3 = aiStack_138[lVar16 + 5] - iVar5;
      iVar5 = aiStack_138[lVar16 + 7] + iVar15;
      uVar21 = iVar15 - aiStack_138[lVar16 + 7];
      iVar14 = iVar5 + iVar9;
      iVar17 = (int)((ulong)(uVar21 + uVar3) * 0x1d9 >> 8);
      iVar6 = iVar17 - ((int)((ulong)uVar3 * 0x29d >> 8) + iVar14);
      iVar15 = (int)((ulong)(uint)(iVar5 - iVar9) * 0x16a >> 8) - iVar6;
      iVar17 = iVar17 - ((int)((ulong)uVar21 * 0x115 >> 8) + iVar15);
      *(undefined1 *)plVar19 =
           *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar14 + iVar13) >> 5 & 0x3ff));
      *(undefined1 *)((long)plVar19 + 7) =
           *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar13 - iVar14) >> 5 & 0x3ff));
      *(undefined1 *)((long)plVar19 + 1) =
           *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar6 + iVar11) >> 5 & 0x3ff));
      *(undefined1 *)((long)plVar19 + 6) =
           *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar11 - iVar6) >> 5 & 0x3ff));
      *(undefined1 *)((long)plVar19 + 2) =
           *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar15 + iVar4) >> 5 & 0x3ff));
      *(undefined1 *)((long)plVar19 + 5) =
           *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar4 - iVar15) >> 5 & 0x3ff));
      *(undefined1 *)((long)plVar19 + 3) =
           *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar8 + iVar17) >> 5 & 0x3ff));
      *(undefined1 *)((long)plVar19 + 4) =
           *(undefined1 *)(lVar2 + -0x180 + (ulong)((uint)(iVar8 - iVar17) >> 5 & 0x3ff));
      lVar16 = lVar16 + 8;
      if (lVar16 == 0x40) {
        return;
      }
    }
    iVar5 = 0;
    if ((aiStack_138[lVar16 + 4] != 0) ||
       ((aiStack_138[lVar16 + 5] != 0 || (aiStack_138[lVar16 + 6] != 0)))) {
      iVar11 = 0;
      goto LAB_0038a130;
    }
    iVar11 = 0;
    if (aiStack_138[lVar16 + 7] != 0) goto LAB_0038a130;
    *plVar19 = (ulong)*(byte *)(lVar2 + -0x180 + (ulong)(uVar3 >> 5 & 0x3ff)) * 0x101010101010101;
    lVar16 = lVar16 + 8;
    if (lVar16 == 0x40) {
      return;
    }
  } while( true );
}


