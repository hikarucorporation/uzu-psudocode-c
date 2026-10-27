// Function : pass2_fs_dither
// Namespace: juce:jpeglibNamespace
// Entry    : 0038cc50
// Prototype: undefined pass2_fs_dither(long param_1, long param_2, long param_3, uint param_4)
// Body     : 0038cc50 - 0038d058


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::pass2_fs_dither(juce::jpeglibNamespace::jpeg_decompress_struct*, unsigned
   char**, unsigned char**, int) */

void __cdecl
juce::jpeglibNamespace::pass2_fs_dither(long param_1,long param_2,long param_3,uint param_4)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  long lVar33;
  int iVar34;
  int iVar35;
  bool bVar36;
  char cVar37;
  int local_f8;
  int local_f4;
  char *local_f0;
  long local_c8;
  
  if ((int)param_4 < 1) {
    return;
  }
  lVar7 = *(long *)(param_1 + 0x270);
  iVar6 = *(int *)(param_1 + 0x74);
  if (iVar6 != 0) {
    lVar28 = *(long *)(lVar7 + 0x30);
    lVar22 = *(long *)(lVar7 + 0x50);
    lVar8 = *(long *)(param_1 + 0x198);
    plVar9 = *(long **)(param_1 + 0x90);
    lVar10 = *plVar9;
    lVar11 = plVar9[1];
    lVar12 = plVar9[2];
    uVar17 = 0;
    do {
      lVar33 = *(long *)(param_2 + uVar17 * 8);
      local_f0 = *(char **)(param_3 + uVar17 * 8);
      bVar36 = *(char *)(lVar7 + 0x48) == '\0';
      if (bVar36) {
        lVar20 = *(long *)(lVar7 + 0x40);
        iVar13 = 3;
        local_c8 = 1;
      }
      else {
        lVar33 = lVar33 + (ulong)((iVar6 - 1U) * 3);
        lVar20 = (ulong)(iVar6 * 3 + 3) * 2 + *(long *)(lVar7 + 0x40);
        local_f0 = local_f0 + (iVar6 - 1U);
        iVar13 = -3;
        local_c8 = -1;
      }
      *(bool *)(lVar7 + 0x48) = bVar36;
      lVar1 = lVar20 + (long)iVar13 * 2;
      iVar14 = 0;
      lVar29 = 2;
      iVar16 = 0;
      iVar19 = 0;
      local_f8 = 0;
      local_f4 = 0;
      iVar24 = 0;
      iVar23 = 0;
      iVar31 = 0;
      iVar35 = 0;
      iVar25 = iVar6;
      do {
        bVar2 = *(byte *)(lVar8 + (ulong)*(byte *)(lVar33 + -2 + lVar29) +
                                  (long)*(int *)(lVar22 + (long)(iVar14 + *(short *)(lVar1 + -4 +
                                                                                    lVar29 * 2) + 8
                                                                >> 4) * 4));
        bVar3 = *(byte *)(lVar8 + (ulong)*(byte *)(lVar33 + -1 + lVar29) +
                                  (long)*(int *)(lVar22 + (long)(iVar16 + *(short *)(lVar1 + -2 +
                                                                                    lVar29 * 2) + 8
                                                                >> 4) * 4));
        bVar4 = *(byte *)(lVar8 + (ulong)*(byte *)(lVar33 + lVar29) +
                                  (long)*(int *)(lVar22 + (long)(iVar19 + *(short *)(lVar1 + lVar29 
                                                  * 2) + 8 >> 4) * 4));
        uVar27 = (ulong)(bVar2 >> 3);
        uVar21 = (ulong)(bVar3 >> 2);
        uVar18 = (ulong)(bVar4 >> 3);
        lVar15 = uVar21 * 0x40 + *(long *)(lVar28 + uVar27 * 8);
        uVar5 = *(ushort *)(lVar15 + uVar18 * 2);
        if (uVar5 == 0) {
          fill_inverse_cmap(param_1,uVar27,uVar21,uVar18);
          uVar5 = *(ushort *)(lVar15 + uVar18 * 2);
        }
        uVar18 = (ulong)uVar5;
        *local_f0 = (char)uVar5 + -1;
        iVar30 = (uint)bVar2 - (uint)*(byte *)(lVar10 + -1 + uVar18);
        iVar34 = (uint)bVar3 - (uint)*(byte *)(lVar11 + -1 + uVar18);
        iVar32 = (uint)bVar4 - (uint)*(byte *)(lVar12 + -1 + uVar18);
        *(short *)(lVar20 + -4 + lVar29 * 2) = (short)iVar30 * 3 + (short)local_f8;
        local_f8 = iVar30 * 5 + iVar31;
        iVar14 = iVar30 * 7;
        *(short *)(lVar20 + -2 + lVar29 * 2) = (short)iVar34 * 3 + (short)local_f4;
        local_f4 = iVar34 * 5 + iVar35;
        iVar16 = iVar34 * 7;
        *(short *)(lVar20 + lVar29 * 2) = (short)iVar32 * 3 + (short)iVar24;
        iVar24 = iVar32 * 5 + iVar23;
        iVar19 = iVar32 * 7;
        local_f0 = local_f0 + local_c8;
        lVar29 = lVar29 + iVar13;
        iVar25 = iVar25 + -1;
        iVar23 = iVar32;
        iVar31 = iVar30;
        iVar35 = iVar34;
      } while (iVar25 != 0);
      *(short *)(lVar20 + -4 + lVar29 * 2) = (short)local_f8;
      *(short *)(lVar20 + -2 + lVar29 * 2) = (short)local_f4;
      *(short *)(lVar20 + lVar29 * 2) = (short)iVar24;
      uVar17 = uVar17 + 1;
    } while (uVar17 != param_4);
    return;
  }
  cVar37 = *(char *)(lVar7 + 0x48);
  if (param_4 == 1) {
    lVar28 = *(long *)(lVar7 + 0x40);
  }
  else {
    uVar26 = param_4 & 0xfffffffe;
    lVar28 = *(long *)(lVar7 + 0x40);
    do {
      cVar37 = cVar37 != '\0';
      lVar22 = 3;
      if (!(bool)cVar37) {
        lVar22 = 0;
      }
      *(undefined4 *)(lVar28 + lVar22 * 2) = 0;
      *(undefined2 *)(lVar28 + 4 + lVar22 * 2) = 0;
      lVar22 = 0;
      if (!(bool)cVar37) {
        lVar22 = 3;
      }
      *(undefined4 *)(lVar28 + lVar22 * 2) = 0;
      *(undefined2 *)(lVar28 + 4 + lVar22 * 2) = 0;
      uVar26 = uVar26 - 2;
    } while (uVar26 != 0);
    if ((param_4 & 1) == 0) goto LAB_0038d044;
  }
  cVar37 = cVar37 == '\0';
  lVar22 = 3;
  if ((bool)cVar37) {
    lVar22 = 0;
  }
  *(undefined4 *)(lVar28 + lVar22 * 2) = 0;
  *(undefined2 *)(lVar28 + 4 + lVar22 * 2) = 0;
LAB_0038d044:
  *(char *)(lVar7 + 0x48) = cVar37;
  return;
}


