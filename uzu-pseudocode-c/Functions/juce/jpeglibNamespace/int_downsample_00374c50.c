// Function : int_downsample
// Namespace: juce:jpeglibNamespace
// Entry    : 00374c50
// Prototype: undefined int_downsample(long param_1, long param_2, long param_3, undefined8 * param_4)
// Body     : 00374c50 - 00374fcf


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::int_downsample(juce::jpeglibNamespace::jpeg_compress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, unsigned char**, unsigned char**) */

void __cdecl
juce::jpeglibNamespace::int_downsample(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  byte bVar9;
  undefined1 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  size_t __n;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined1 *puVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  byte *pbVar24;
  uint uVar25;
  uint uVar26;
  
  uVar14 = *(int *)(param_2 + 0x24) * *(int *)(param_2 + 0x1c);
  bVar8 = *(byte *)(*(long *)(param_1 + 0x210) + 0x90 + (long)*(int *)(param_2 + 4));
  bVar9 = *(byte *)(*(long *)(param_1 + 0x210) + 0x9a + (long)*(int *)(param_2 + 4));
  uVar23 = (ulong)bVar9;
  uVar25 = *(uint *)(param_1 + 0x154);
  if (0 < (int)uVar25) {
    uVar21 = *(uint *)(param_1 + 0x30);
    uVar11 = (ulong)uVar21;
    iVar15 = uVar14 * bVar8;
    if (0 < (int)(iVar15 - uVar21)) {
      __n = (ulong)(iVar15 + ~uVar21) + 1;
      if ((ulong)uVar25 - 1 < 3) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        do {
          lVar18 = *(long *)(param_3 + uVar13 * 8);
          memset((void *)(lVar18 + uVar11),(uint)*(byte *)(lVar18 + -1 + uVar11),__n);
          lVar18 = *(long *)(param_3 + 8 + uVar13 * 8);
          memset((void *)(lVar18 + uVar11),(uint)*(byte *)(lVar18 + -1 + uVar11),__n);
          lVar18 = *(long *)(param_3 + 0x10 + uVar13 * 8);
          memset((void *)(lVar18 + uVar11),(uint)*(byte *)(lVar18 + -1 + uVar11),__n);
          lVar18 = *(long *)(param_3 + 0x18 + uVar13 * 8);
          memset((void *)(lVar18 + uVar11),(uint)*(byte *)(lVar18 + -1 + uVar11),__n);
          uVar13 = uVar13 + 4;
        } while ((uVar25 & 0xfffffffc) != uVar13);
      }
      if ((ulong)(uVar25 & 3) != 0) {
        uVar17 = 0;
        do {
          lVar18 = *(long *)(param_3 + uVar13 * 8 + uVar17 * 8);
          memset((void *)(lVar18 + uVar11),(uint)*(byte *)(lVar18 + -1 + uVar11),__n);
          uVar17 = uVar17 + 1;
        } while ((uVar25 & 3) != uVar17);
      }
      uVar25 = *(uint *)(param_1 + 0x154);
    }
  }
  if ((0 < (int)uVar25) && (uVar14 != 0)) {
    uVar13 = bVar8 * uVar23;
    uVar11 = uVar13 >> 1;
    if (bVar9 == 0) {
      do {
        memset((void *)*param_4,(uint)(uVar11 / uVar13) & 0xff,(ulong)uVar14);
        param_4 = param_4 + 1;
      } while (0 < *(int *)(param_1 + 0x154));
    }
    else {
      uVar25 = (uint)bVar8;
      if (bVar8 == 0) {
        iVar15 = 0;
        do {
          memset((void *)*param_4,(uint)(uVar11 / uVar13) & 0xff,(ulong)uVar14);
          iVar15 = iVar15 + (uint)bVar9;
          param_4 = param_4 + 1;
        } while (iVar15 < *(int *)(param_1 + 0x154));
      }
      else {
        lVar19 = 0;
        lVar18 = 0;
        do {
          puVar20 = (undefined1 *)param_4[lVar19];
          uVar26 = 0;
          uVar21 = 0;
          do {
            uVar17 = 0;
            lVar12 = 0;
            do {
              pbVar24 = (byte *)(*(long *)(param_3 + (uVar17 + lVar18) * 8) + (ulong)uVar26);
              if (6 < bVar8 - 1) {
                uVar22 = uVar25 & 0xfffffff8;
                do {
                  bVar9 = *pbVar24;
                  pbVar1 = pbVar24 + 1;
                  pbVar2 = pbVar24 + 2;
                  pbVar3 = pbVar24 + 3;
                  pbVar4 = pbVar24 + 4;
                  pbVar5 = pbVar24 + 5;
                  pbVar6 = pbVar24 + 6;
                  pbVar7 = pbVar24 + 7;
                  pbVar24 = pbVar24 + 8;
                  lVar12 = (ulong)*pbVar7 +
                           (ulong)*pbVar6 +
                           (ulong)*pbVar5 +
                           (ulong)*pbVar4 +
                           (ulong)*pbVar3 + (ulong)*pbVar2 + (ulong)*pbVar1 + (ulong)bVar9 + lVar12;
                  uVar22 = uVar22 - 8;
                } while (uVar22 != 0);
              }
              if ((bVar8 & 7) != 0) {
                lVar16 = 0;
                do {
                  lVar12 = lVar12 + (ulong)pbVar24[lVar16];
                  lVar16 = lVar16 + 1;
                } while ((uVar25 & 7) != (uint)lVar16);
              }
              uVar17 = uVar17 + 1;
            } while (uVar17 != uVar23);
            uVar17 = lVar12 + uVar11;
            if (uVar17 >> 0x20 == 0) {
              uVar10 = (undefined1)((uVar17 & 0xffffffff) / uVar13);
            }
            else {
              uVar10 = (undefined1)((long)uVar17 / (long)uVar13);
            }
            *puVar20 = uVar10;
            puVar20 = puVar20 + 1;
            uVar21 = uVar21 + 1;
            uVar26 = uVar26 + uVar25;
          } while (uVar21 != uVar14);
          lVar18 = lVar18 + uVar23;
          lVar19 = lVar19 + 1;
        } while (lVar18 < *(int *)(param_1 + 0x154));
      }
    }
  }
  return;
}


