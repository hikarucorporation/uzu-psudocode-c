// Function : jpeg_idct_4x8
// Namespace: juce:jpeglibNamespace
// Entry    : 00381640
// Prototype: undefined jpeg_idct_4x8(long param_1, long param_2, long param_3, long * param_4, uint param_5)
// Body     : 00381640 - 00381dfc


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_idct_4x8(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, short*, unsigned char**, unsigned int) */

void __cdecl
juce::jpeglibNamespace::jpeg_idct_4x8
          (long param_1,long param_2,long param_3,long *param_4,uint param_5)

{
  short sVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  short sVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  short sVar21;
  long lVar22;
  int local_c8 [4];
  int local_b8 [4];
  int local_a8 [4];
  int local_98 [4];
  int local_88 [4];
  int local_78 [4];
  int local_68 [4];
  int local_58 [6];
  long *local_40;
  long local_38;
  
  local_38 = *(long *)(param_1 + 0x198);
  lVar2 = *(long *)(param_2 + 0x58);
  uVar7 = 5;
  lVar3 = 0;
  local_40 = param_4;
  do {
    sVar1 = *(short *)(param_3 + 0x10 + lVar3);
    sVar13 = *(short *)(param_3 + 0x20 + lVar3);
    sVar21 = *(short *)(param_3 + 0x30 + lVar3);
    if (sVar1 == 0 && sVar13 == 0) {
      if (sVar21 != 0) {
LAB_003816ca:
        sVar13 = 0;
        goto LAB_003816cc;
      }
      if ((((*(short *)(param_3 + 0x40 + lVar3) != 0) || (*(short *)(param_3 + 0x50 + lVar3) != 0))
          || (*(short *)(param_3 + 0x60 + lVar3) != 0)) || (*(short *)(param_3 + 0x70 + lVar3) != 0)
         ) {
        sVar21 = 0;
        goto LAB_003816ca;
      }
      iVar8 = (int)*(short *)(param_3 + lVar3) * *(int *)(lVar2 + lVar3 * 2) * 4;
      *(int *)((long)local_c8 + lVar3 * 2) = iVar8;
      *(int *)((long)local_b8 + lVar3 * 2) = iVar8;
      *(int *)((long)local_a8 + lVar3 * 2) = iVar8;
      *(int *)((long)local_98 + lVar3 * 2) = iVar8;
      *(int *)((long)local_88 + lVar3 * 2) = iVar8;
      *(int *)((long)local_78 + lVar3 * 2) = iVar8;
      *(int *)((long)local_68 + lVar3 * 2) = iVar8;
      lVar9 = 0x1c;
    }
    else {
LAB_003816cc:
      lVar9 = (long)*(int *)(lVar2 + 0x80 + lVar3 * 2) * (long)*(short *)(param_3 + 0x40 + lVar3);
      uVar11 = (long)*(int *)(lVar2 + lVar3 * 2) * (long)*(short *)(param_3 + lVar3) * 0x2000;
      lVar19 = uVar11 + lVar9 * 0x2000 + 0x400;
      lVar12 = (uVar11 | 0x400) + lVar9 * -0x2000;
      lVar15 = (long)sVar13 * (long)*(int *)(lVar2 + 0x40 + lVar3 * 2);
      lVar9 = (long)*(int *)(lVar2 + 0xc0 + lVar3 * 2) * (long)*(short *)(param_3 + 0x60 + lVar3);
      lVar5 = (lVar15 + lVar9) * 0x1151;
      lVar15 = lVar15 * 0x187e + lVar5;
      lVar5 = lVar9 * -0x3b21 + lVar5;
      lVar9 = lVar15 + lVar19;
      lVar19 = lVar19 - lVar15;
      lVar15 = lVar5 + lVar12;
      lVar12 = lVar12 - lVar5;
      lVar6 = (long)*(int *)(lVar2 + 0xe0 + lVar3 * 2) * (long)*(short *)(param_3 + 0x70 + lVar3);
      lVar18 = (long)*(int *)(lVar2 + 0xa0 + lVar3 * 2) * (long)*(short *)(param_3 + 0x50 + lVar3);
      lVar22 = (long)sVar21 * (long)*(int *)(lVar2 + 0x60 + lVar3 * 2);
      lVar16 = (long)*(int *)(lVar2 + 0x20 + lVar3 * 2) * (long)sVar1;
      lVar5 = (lVar16 + lVar18 + lVar22 + lVar6) * 0x25a1;
      lVar17 = (lVar22 + lVar6) * -0x3ec5 + lVar5;
      lVar5 = (lVar16 + lVar18) * -0xc7c + lVar5;
      lVar10 = (lVar16 + lVar6) * -0x1ccd;
      lVar20 = lVar6 * 0x98e + lVar10 + lVar17;
      lVar6 = lVar16 * 0x300b + lVar10 + lVar5;
      lVar10 = (lVar22 + lVar18) * -0x5203;
      lVar5 = lVar18 * 0x41b3 + lVar10 + lVar5;
      lVar17 = lVar22 * 0x6254 + lVar10 + lVar17;
      *(int *)((long)local_c8 + lVar3 * 2) = (int)((ulong)(lVar6 + lVar9) >> 0xb);
      *(int *)((long)local_58 + lVar3 * 2) = (int)((ulong)(lVar9 - lVar6) >> 0xb);
      *(int *)((long)local_b8 + lVar3 * 2) = (int)((ulong)(lVar17 + lVar15) >> 0xb);
      *(int *)((long)local_68 + lVar3 * 2) = (int)((ulong)(lVar15 - lVar17) >> 0xb);
      *(int *)((long)local_a8 + lVar3 * 2) = (int)((ulong)(lVar5 + lVar12) >> 0xb);
      *(int *)((long)local_78 + lVar3 * 2) = (int)((ulong)(lVar12 - lVar5) >> 0xb);
      *(int *)((long)local_98 + lVar3 * 2) = (int)((ulong)(lVar20 + lVar19) >> 0xb);
      iVar8 = (int)((ulong)(lVar19 - lVar20) >> 0xb);
      lVar9 = 0x10;
    }
    *(int *)((long)local_c8 + lVar3 * 2 + lVar9 * 4) = iVar8;
    uVar7 = uVar7 - 1;
    lVar3 = lVar3 + 2;
    if (uVar7 < 2) {
      uVar11 = (ulong)param_5;
      lVar2 = *local_40;
      iVar8 = (local_c8[3] + local_c8[1]) * 0x1151;
      iVar4 = local_c8[1] * 0x187e + iVar8;
      iVar8 = local_c8[3] * -0x3b21 + iVar8;
      iVar14 = (local_c8[0] + 0x4010 + local_c8[2]) * 0x2000;
      *(undefined1 *)(lVar2 + uVar11) =
           *(undefined1 *)(local_38 + -0x180 + (ulong)((uint)(iVar4 + iVar14) >> 0x12 & 0x3ff));
      *(undefined1 *)(lVar2 + 3 + uVar11) =
           *(undefined1 *)(local_38 + -0x180 + (ulong)((uint)(iVar14 - iVar4) >> 0x12 & 0x3ff));
      iVar4 = ((local_c8[0] + 0x4010) - local_c8[2]) * 0x2000;
      *(undefined1 *)(lVar2 + 1 + uVar11) =
           *(undefined1 *)(local_38 + -0x180 + (ulong)((uint)(iVar4 + iVar8) >> 0x12 & 0x3ff));
      *(undefined1 *)(lVar2 + 2 + uVar11) =
           *(undefined1 *)(local_38 + -0x180 + (ulong)((uint)(iVar4 - iVar8) >> 0x12 & 0x3ff));
      lVar2 = local_40[1];
      iVar4 = (local_b8[1] + local_b8[3]) * 0x1151;
      iVar8 = local_b8[1] * 0x187e + iVar4;
      iVar4 = local_b8[3] * -0x3b21 + iVar4;
      iVar14 = (local_b8[0] + 0x4010 + local_b8[2]) * 0x2000;
      *(undefined1 *)(lVar2 + uVar11) =
           *(undefined1 *)(local_38 + -0x180 + (ulong)((uint)(iVar8 + iVar14) >> 0x12 & 0x3ff));
      *(undefined1 *)(lVar2 + 3 + uVar11) =
           *(undefined1 *)(local_38 + -0x180 + (ulong)((uint)(iVar14 - iVar8) >> 0x12 & 0x3ff));
      iVar8 = ((local_b8[0] + 0x4010) - local_b8[2]) * 0x2000;
      *(undefined1 *)(lVar2 + 1 + uVar11) =
           *(undefined1 *)(local_38 + -0x180 + (ulong)((uint)(iVar8 + iVar4) >> 0x12 & 0x3ff));
      *(undefined1 *)(lVar2 + 2 + uVar11) =
           *(undefined1 *)(local_38 + -0x180 + (ulong)((uint)(iVar8 - iVar4) >> 0x12 & 0x3ff));
      lVar2 = local_40[2];
      iVar4 = (local_a8[1] + local_a8[3]) * 0x1151;
      iVar8 = local_a8[1] * 0x187e + iVar4;
      iVar4 = local_a8[3] * -0x3b21 + iVar4;
      iVar14 = (local_a8[0] + 0x4010 + local_a8[2]) * 0x2000;
      *(undefined1 *)(lVar2 + uVar11) =
           *(undefined1 *)(local_38 + -0x180 + (ulong)((uint)(iVar8 + iVar14) >> 0x12 & 0x3ff));
      *(undefined1 *)(lVar2 + 3 + uVar11) =
           *(undefined1 *)(local_38 + -0x180 + (ulong)((uint)(iVar14 - iVar8) >> 0x12 & 0x3ff));
      iVar8 = ((local_a8[0] + 0x4010) - local_a8[2]) * 0x2000;
      *(undefined1 *)(lVar2 + 1 + uVar11) =
           *(undefined1 *)(local_38 + -0x180 + (ulong)((uint)(iVar8 + iVar4) >> 0x12 & 0x3ff));
      *(undefined1 *)(lVar2 + 2 + uVar11) =
           *(undefined1 *)(local_38 + -0x180 + (ulong)((uint)(iVar8 - iVar4) >> 0x12 & 0x3ff));
      lVar2 = local_40[3];
      iVar4 = (local_98[1] + local_98[3]) * 0x1151;
      iVar8 = local_98[1] * 0x187e + iVar4;
      iVar4 = local_98[3] * -0x3b21 + iVar4;
      iVar14 = (local_98[0] + 0x4010 + local_98[2]) * 0x2000;
      *(undefined1 *)(lVar2 + uVar11) =
           *(undefined1 *)(local_38 + -0x180 + (ulong)((uint)(iVar8 + iVar14) >> 0x12 & 0x3ff));
      *(undefined1 *)(lVar2 + 3 + uVar11) =
           *(undefined1 *)(local_38 + -0x180 + (ulong)((uint)(iVar14 - iVar8) >> 0x12 & 0x3ff));
      iVar8 = ((local_98[0] + 0x4010) - local_98[2]) * 0x2000;
      *(undefined1 *)(lVar2 + 1 + uVar11) =
           *(undefined1 *)(local_38 + -0x180 + (ulong)((uint)(iVar8 + iVar4) >> 0x12 & 0x3ff));
      *(undefined1 *)(lVar2 + 2 + uVar11) =
           *(undefined1 *)(local_38 + -0x180 + (ulong)((uint)(iVar8 - iVar4) >> 0x12 & 0x3ff));
      lVar2 = local_40[4];
      iVar4 = (local_88[1] + local_88[3]) * 0x1151;
      iVar8 = local_88[1] * 0x187e + iVar4;
      iVar4 = local_88[3] * -0x3b21 + iVar4;
      iVar14 = (local_88[0] + 0x4010 + local_88[2]) * 0x2000;
      *(undefined1 *)(lVar2 + uVar11) =
           *(undefined1 *)(local_38 + -0x180 + (ulong)((uint)(iVar8 + iVar14) >> 0x12 & 0x3ff));
      *(undefined1 *)(lVar2 + 3 + uVar11) =
           *(undefined1 *)(local_38 + -0x180 + (ulong)((uint)(iVar14 - iVar8) >> 0x12 & 0x3ff));
      iVar8 = ((local_88[0] + 0x4010) - local_88[2]) * 0x2000;
      *(undefined1 *)(lVar2 + 1 + uVar11) =
           *(undefined1 *)(local_38 + -0x180 + (ulong)((uint)(iVar8 + iVar4) >> 0x12 & 0x3ff));
      *(undefined1 *)(lVar2 + 2 + uVar11) =
           *(undefined1 *)(local_38 + -0x180 + (ulong)((uint)(iVar8 - iVar4) >> 0x12 & 0x3ff));
      lVar2 = local_40[5];
      iVar4 = (local_78[1] + local_78[3]) * 0x1151;
      iVar8 = local_78[1] * 0x187e + iVar4;
      iVar4 = local_78[3] * -0x3b21 + iVar4;
      iVar14 = (local_78[0] + 0x4010 + local_78[2]) * 0x2000;
      *(undefined1 *)(lVar2 + uVar11) =
           *(undefined1 *)(local_38 + -0x180 + (ulong)((uint)(iVar8 + iVar14) >> 0x12 & 0x3ff));
      *(undefined1 *)(lVar2 + 3 + uVar11) =
           *(undefined1 *)(local_38 + -0x180 + (ulong)((uint)(iVar14 - iVar8) >> 0x12 & 0x3ff));
      iVar8 = ((local_78[0] + 0x4010) - local_78[2]) * 0x2000;
      *(undefined1 *)(lVar2 + 1 + uVar11) =
           *(undefined1 *)(local_38 + -0x180 + (ulong)((uint)(iVar8 + iVar4) >> 0x12 & 0x3ff));
      *(undefined1 *)(lVar2 + 2 + uVar11) =
           *(undefined1 *)(local_38 + -0x180 + (ulong)((uint)(iVar8 - iVar4) >> 0x12 & 0x3ff));
      lVar2 = local_40[6];
      iVar4 = (local_68[1] + local_68[3]) * 0x1151;
      iVar8 = local_68[1] * 0x187e + iVar4;
      iVar4 = local_68[3] * -0x3b21 + iVar4;
      iVar14 = (local_68[0] + 0x4010 + local_68[2]) * 0x2000;
      *(undefined1 *)(lVar2 + uVar11) =
           *(undefined1 *)(local_38 + -0x180 + (ulong)((uint)(iVar8 + iVar14) >> 0x12 & 0x3ff));
      *(undefined1 *)(lVar2 + 3 + uVar11) =
           *(undefined1 *)(local_38 + -0x180 + (ulong)((uint)(iVar14 - iVar8) >> 0x12 & 0x3ff));
      iVar8 = ((local_68[0] + 0x4010) - local_68[2]) * 0x2000;
      *(undefined1 *)(lVar2 + 1 + uVar11) =
           *(undefined1 *)(local_38 + -0x180 + (ulong)((uint)(iVar8 + iVar4) >> 0x12 & 0x3ff));
      *(undefined1 *)(lVar2 + 2 + uVar11) =
           *(undefined1 *)(local_38 + -0x180 + (ulong)((uint)(iVar8 - iVar4) >> 0x12 & 0x3ff));
      lVar2 = local_40[7];
      iVar4 = (local_58[3] + local_58[1]) * 0x1151;
      iVar8 = local_58[1] * 0x187e + iVar4;
      iVar4 = local_58[3] * -0x3b21 + iVar4;
      iVar14 = (local_58[0] + 0x4010 + local_58[2]) * 0x2000;
      *(undefined1 *)(lVar2 + uVar11) =
           *(undefined1 *)(local_38 + -0x180 + (ulong)((uint)(iVar8 + iVar14) >> 0x12 & 0x3ff));
      *(undefined1 *)(lVar2 + 3 + uVar11) =
           *(undefined1 *)(local_38 + -0x180 + (ulong)((uint)(iVar14 - iVar8) >> 0x12 & 0x3ff));
      iVar8 = ((local_58[0] + 0x4010) - local_58[2]) * 0x2000;
      *(undefined1 *)(lVar2 + 1 + uVar11) =
           *(undefined1 *)(local_38 + -0x180 + (ulong)((uint)(iVar4 + iVar8) >> 0x12 & 0x3ff));
      *(undefined1 *)(lVar2 + 2 + uVar11) =
           *(undefined1 *)(local_38 + -0x180 + (ulong)((uint)(iVar8 - iVar4) >> 0x12 & 0x3ff));
      return;
    }
  } while( true );
}


