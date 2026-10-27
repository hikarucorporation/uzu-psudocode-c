// Function : jpeg_idct_8x4
// Namespace: juce:jpeglibNamespace
// Entry    : 003837d0
// Prototype: undefined jpeg_idct_8x4(long param_1, long param_2, short * param_3, long param_4, uint param_5)
// Body     : 003837d0 - 00383e58


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_idct_8x4(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, short*, unsigned char**, unsigned int) */

void __cdecl
juce::jpeglibNamespace::jpeg_idct_8x4
          (long param_1,long param_2,short *param_3,long param_4,uint param_5)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int local_c8 [34];
  long local_40;
  long local_38;
  
  local_38 = param_4;
  local_40 = *(long *)(param_1 + 0x198);
  piVar2 = *(int **)(param_2 + 0x58);
  iVar15 = piVar2[0x10] * (int)param_3[0x10] + *piVar2 * (int)*param_3;
  iVar5 = *piVar2 * (int)*param_3 - piVar2[0x10] * (int)param_3[0x10];
  lVar11 = ((long)piVar2[0x18] * (long)param_3[0x18] + (long)piVar2[8] * (long)param_3[8]) * 0x1151;
  iVar4 = (int)((long)piVar2[8] * (long)param_3[8] * 0x187e + lVar11 + 0x400U >> 0xb);
  local_c8[0] = iVar4 + iVar15 * 4;
  local_c8[0x18] = iVar15 * 4 - iVar4;
  iVar4 = (int)((long)piVar2[0x18] * (long)param_3[0x18] * -0x3b21 + lVar11 + 0x400U >> 0xb);
  local_c8[8] = iVar4 + iVar5 * 4;
  local_c8[0x10] = iVar5 * 4 - iVar4;
  iVar15 = piVar2[0x11] * (int)param_3[0x11] + piVar2[1] * (int)param_3[1];
  iVar5 = piVar2[1] * (int)param_3[1] - piVar2[0x11] * (int)param_3[0x11];
  lVar11 = ((long)piVar2[0x19] * (long)param_3[0x19] + (long)piVar2[9] * (long)param_3[9]) * 0x1151;
  iVar4 = (int)((long)piVar2[9] * (long)param_3[9] * 0x187e + lVar11 + 0x400U >> 0xb);
  local_c8[1] = iVar4 + iVar15 * 4;
  local_c8[0x19] = iVar15 * 4 - iVar4;
  iVar4 = (int)(lVar11 + (long)piVar2[0x19] * (long)param_3[0x19] * -0x3b21 + 0x400U >> 0xb);
  local_c8[9] = iVar4 + iVar5 * 4;
  local_c8[0x11] = iVar5 * 4 - iVar4;
  iVar15 = piVar2[0x12] * (int)param_3[0x12] + piVar2[2] * (int)param_3[2];
  iVar5 = piVar2[2] * (int)param_3[2] - piVar2[0x12] * (int)param_3[0x12];
  lVar11 = ((long)piVar2[0x1a] * (long)param_3[0x1a] + (long)piVar2[10] * (long)param_3[10]) *
           0x1151;
  iVar4 = (int)((long)piVar2[10] * (long)param_3[10] * 0x187e + lVar11 + 0x400U >> 0xb);
  local_c8[2] = iVar4 + iVar15 * 4;
  local_c8[0x1a] = iVar15 * 4 - iVar4;
  iVar4 = (int)(lVar11 + (long)piVar2[0x1a] * (long)param_3[0x1a] * -0x3b21 + 0x400U >> 0xb);
  local_c8[10] = iVar4 + iVar5 * 4;
  local_c8[0x12] = iVar5 * 4 - iVar4;
  iVar15 = piVar2[0x13] * (int)param_3[0x13] + piVar2[3] * (int)param_3[3];
  iVar5 = piVar2[3] * (int)param_3[3] - piVar2[0x13] * (int)param_3[0x13];
  lVar11 = ((long)piVar2[0x1b] * (long)param_3[0x1b] + (long)piVar2[0xb] * (long)param_3[0xb]) *
           0x1151;
  iVar4 = (int)((long)piVar2[0xb] * (long)param_3[0xb] * 0x187e + lVar11 + 0x400U >> 0xb);
  local_c8[3] = iVar4 + iVar15 * 4;
  local_c8[0x1b] = iVar15 * 4 - iVar4;
  iVar4 = (int)(lVar11 + (long)piVar2[0x1b] * (long)param_3[0x1b] * -0x3b21 + 0x400U >> 0xb);
  local_c8[0xb] = iVar4 + iVar5 * 4;
  local_c8[0x13] = iVar5 * 4 - iVar4;
  iVar15 = piVar2[0x14] * (int)param_3[0x14] + piVar2[4] * (int)param_3[4];
  iVar5 = piVar2[4] * (int)param_3[4] - piVar2[0x14] * (int)param_3[0x14];
  lVar11 = ((long)piVar2[0x1c] * (long)param_3[0x1c] + (long)piVar2[0xc] * (long)param_3[0xc]) *
           0x1151;
  iVar4 = (int)((long)piVar2[0xc] * (long)param_3[0xc] * 0x187e + lVar11 + 0x400U >> 0xb);
  local_c8[4] = iVar4 + iVar15 * 4;
  local_c8[0x1c] = iVar15 * 4 - iVar4;
  iVar4 = (int)(lVar11 + (long)piVar2[0x1c] * (long)param_3[0x1c] * -0x3b21 + 0x400U >> 0xb);
  local_c8[0xc] = iVar4 + iVar5 * 4;
  local_c8[0x14] = iVar5 * 4 - iVar4;
  iVar15 = piVar2[0x15] * (int)param_3[0x15] + piVar2[5] * (int)param_3[5];
  iVar5 = piVar2[5] * (int)param_3[5] - piVar2[0x15] * (int)param_3[0x15];
  lVar11 = ((long)piVar2[0x1d] * (long)param_3[0x1d] + (long)piVar2[0xd] * (long)param_3[0xd]) *
           0x1151;
  iVar4 = (int)((long)piVar2[0xd] * (long)param_3[0xd] * 0x187e + lVar11 + 0x400U >> 0xb);
  local_c8[5] = iVar4 + iVar15 * 4;
  local_c8[0x1d] = iVar15 * 4 - iVar4;
  iVar4 = (int)(lVar11 + (long)piVar2[0x1d] * (long)param_3[0x1d] * -0x3b21 + 0x400U >> 0xb);
  local_c8[0xd] = iVar4 + iVar5 * 4;
  local_c8[0x15] = iVar5 * 4 - iVar4;
  iVar15 = piVar2[0x16] * (int)param_3[0x16] + piVar2[6] * (int)param_3[6];
  iVar5 = piVar2[6] * (int)param_3[6] - piVar2[0x16] * (int)param_3[0x16];
  lVar11 = ((long)piVar2[0x1e] * (long)param_3[0x1e] + (long)piVar2[0xe] * (long)param_3[0xe]) *
           0x1151;
  iVar4 = (int)((long)piVar2[0xe] * (long)param_3[0xe] * 0x187e + lVar11 + 0x400U >> 0xb);
  local_c8[6] = iVar4 + iVar15 * 4;
  local_c8[0x1e] = iVar15 * 4 - iVar4;
  iVar4 = (int)(lVar11 + (long)piVar2[0x1e] * (long)param_3[0x1e] * -0x3b21 + 0x400U >> 0xb);
  local_c8[0xe] = iVar4 + iVar5 * 4;
  local_c8[0x16] = iVar5 * 4 - iVar4;
  iVar15 = piVar2[0x17] * (int)param_3[0x17] + piVar2[7] * (int)param_3[7];
  iVar5 = piVar2[7] * (int)param_3[7] - piVar2[0x17] * (int)param_3[0x17];
  lVar11 = ((long)piVar2[0x1f] * (long)param_3[0x1f] + (long)piVar2[0xf] * (long)param_3[0xf]) *
           0x1151;
  iVar4 = (int)((long)piVar2[0xf] * (long)param_3[0xf] * 0x187e + lVar11 + 0x400U >> 0xb);
  local_c8[7] = iVar4 + iVar15 * 4;
  local_c8[0x1f] = iVar15 * 4 - iVar4;
  iVar4 = (int)(lVar11 + (long)piVar2[0x1f] * (long)param_3[0x1f] * -0x3b21 + 0x400U >> 0xb);
  local_c8[0xf] = iVar4 + iVar5 * 4;
  local_c8[0x17] = iVar5 * 4 - iVar4;
  uVar12 = (ulong)param_5;
  lVar11 = 0;
  do {
    iVar15 = local_c8[lVar11 + 1];
    iVar7 = (local_c8[lVar11 + 6] + local_c8[lVar11 + 2]) * 0x1151;
    iVar5 = local_c8[lVar11 + 2] * 0x187e + iVar7;
    iVar7 = local_c8[lVar11 + 6] * -0x3b21 + iVar7;
    iVar14 = (local_c8[lVar11] + 0x4010 + local_c8[lVar11 + 4]) * 0x2000;
    iVar4 = iVar5 + iVar14;
    iVar10 = ((local_c8[lVar11] + 0x4010) - local_c8[lVar11 + 4]) * 0x2000;
    iVar14 = iVar14 - iVar5;
    iVar5 = iVar7 + iVar10;
    iVar16 = local_c8[lVar11 + 7];
    iVar1 = local_c8[lVar11 + 5];
    iVar10 = iVar10 - iVar7;
    iVar7 = local_c8[lVar11 + 3];
    iVar9 = (iVar15 + iVar16) * -0x1ccd;
    iVar6 = (iVar7 + iVar16 + iVar15 + iVar1) * 0x25a1;
    iVar8 = (iVar15 + iVar1) * -0xc7c + iVar6;
    iVar15 = iVar15 * 0x300b + iVar9 + iVar8;
    iVar6 = (iVar7 + iVar16) * -0x3ec5 + iVar6;
    iVar13 = (iVar7 + iVar1) * -0x5203;
    iVar8 = iVar1 * 0x41b3 + iVar13 + iVar8;
    iVar16 = iVar16 * 0x98e + iVar9 + iVar6;
    iVar6 = iVar7 * 0x6254 + iVar13 + iVar6;
    lVar3 = *(long *)(param_4 + lVar11);
    *(undefined1 *)(lVar3 + uVar12) =
         *(undefined1 *)(local_40 + -0x180 + (ulong)((uint)(iVar15 + iVar4) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar3 + 7 + uVar12) =
         *(undefined1 *)(local_40 + -0x180 + (ulong)((uint)(iVar4 - iVar15) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar3 + 1 + uVar12) =
         *(undefined1 *)(local_40 + -0x180 + (ulong)((uint)(iVar6 + iVar5) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar3 + 6 + uVar12) =
         *(undefined1 *)(local_40 + -0x180 + (ulong)((uint)(iVar5 - iVar6) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar3 + 2 + uVar12) =
         *(undefined1 *)(local_40 + -0x180 + (ulong)((uint)(iVar8 + iVar10) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar3 + 5 + uVar12) =
         *(undefined1 *)(local_40 + -0x180 + (ulong)((uint)(iVar10 - iVar8) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar3 + 3 + uVar12) =
         *(undefined1 *)(local_40 + -0x180 + (ulong)((uint)(iVar16 + iVar14) >> 0x12 & 0x3ff));
    *(undefined1 *)(lVar3 + 4 + uVar12) =
         *(undefined1 *)(local_40 + -0x180 + (ulong)((uint)(iVar14 - iVar16) >> 0x12 & 0x3ff));
    lVar11 = lVar11 + 8;
  } while (lVar11 != 0x20);
  return;
}


