// Function : quantize_fs_dither
// Namespace: juce:jpeglibNamespace
// Entry    : 0038f260
// Prototype: undefined quantize_fs_dither(long param_1, long param_2, long param_3, uint param_4)
// Body     : 0038f260 - 0038f6d9


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::quantize_fs_dither(juce::jpeglibNamespace::jpeg_decompress_struct*,
   unsigned char**, unsigned char**, int) */

void __cdecl
juce::jpeglibNamespace::quantize_fs_dither(long param_1,long param_2,long param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  long local_b0;
  long local_a8;
  
  if (0 < (int)param_4) {
    lVar6 = *(long *)(param_1 + 0x270);
    uVar4 = *(uint *)(param_1 + 0x74);
    uVar11 = (ulong)uVar4;
    uVar5 = *(uint *)(param_1 + 0x7c);
    if ((int)uVar5 < 1) {
      if (param_4 == 1) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        do {
          memset(*(void **)(param_3 + uVar15 * 8),0,uVar11);
          *(bool *)(lVar6 + 0x90) = *(char *)(lVar6 + 0x90) == '\0';
          memset(*(void **)(param_3 + 8 + uVar15 * 8),0,uVar11);
          *(bool *)(lVar6 + 0x90) = *(char *)(lVar6 + 0x90) == '\0';
          uVar15 = uVar15 + 2;
        } while ((param_4 & 0xfffffffe) != uVar15);
      }
      if ((param_4 & 1) != 0) {
        memset(*(void **)(param_3 + uVar15 * 8),0,uVar11);
        *(bool *)(lVar6 + 0x90) = *(char *)(lVar6 + 0x90) == '\0';
      }
    }
    else if (uVar4 == 0) {
      uVar11 = (ulong)uVar5 - 1;
      uVar15 = 0;
      do {
        memset(*(void **)(param_3 + uVar15 * 8),0,0);
        cVar3 = *(char *)(lVar6 + 0x90);
        if (cVar3 == '\0') {
          if (uVar11 < 7) {
            uVar17 = 0;
          }
          else {
            uVar17 = 0;
            do {
              **(undefined2 **)(lVar6 + 0x70 + uVar17 * 8) = 0;
              **(undefined2 **)(lVar6 + 0x78 + uVar17 * 8) = 0;
              **(undefined2 **)(lVar6 + 0x80 + uVar17 * 8) = 0;
              **(undefined2 **)(lVar6 + 0x88 + uVar17 * 8) = 0;
              **(undefined2 **)(lVar6 + 0x90 + uVar17 * 8) = 0;
              **(undefined2 **)(lVar6 + 0x98 + uVar17 * 8) = 0;
              **(undefined2 **)(lVar6 + 0xa0 + uVar17 * 8) = 0;
              **(undefined2 **)(lVar6 + 0xa8 + uVar17 * 8) = 0;
              uVar17 = uVar17 + 8;
            } while ((uVar5 & 0xfffffff8) != uVar17);
          }
          if ((ulong)(uVar5 & 7) != 0) {
            uVar14 = 0;
            do {
              **(undefined2 **)(lVar6 + 0x70 + uVar17 * 8 + uVar14 * 8) = 0;
              uVar14 = uVar14 + 1;
            } while ((uVar5 & 7) != uVar14);
          }
        }
        else {
          if (uVar11 < 3) {
            uVar17 = 0;
          }
          else {
            uVar17 = 0;
            do {
              *(undefined2 *)(*(long *)(lVar6 + 0x70 + uVar17 * 8) + 2) = 0;
              *(undefined2 *)(*(long *)(lVar6 + 0x78 + uVar17 * 8) + 2) = 0;
              *(undefined2 *)(*(long *)(lVar6 + 0x80 + uVar17 * 8) + 2) = 0;
              *(undefined2 *)(*(long *)(lVar6 + 0x88 + uVar17 * 8) + 2) = 0;
              uVar17 = uVar17 + 4;
            } while ((uVar5 & 0xfffffffc) != uVar17);
          }
          if ((ulong)(uVar5 & 3) != 0) {
            uVar14 = 0;
            do {
              *(undefined2 *)(*(long *)(lVar6 + 0x70 + uVar17 * 8 + uVar14 * 8) + 2) = 0;
              uVar14 = uVar14 + 1;
            } while ((uVar5 & 3) != uVar14);
          }
        }
        *(bool *)(lVar6 + 0x90) = cVar3 == '\0';
        uVar15 = uVar15 + 1;
      } while (uVar15 != param_4);
    }
    else {
      lVar7 = *(long *)(param_1 + 0x198);
      uVar15 = 0;
      do {
        memset(*(void **)(param_3 + uVar15 * 8),0,uVar11);
        uVar17 = 0;
        do {
          pbVar13 = (byte *)(*(long *)(param_2 + uVar15 * 8) + uVar17);
          lVar19 = *(long *)(param_3 + uVar15 * 8);
          if (*(char *)(lVar6 + 0x90) == '\0') {
            local_b0 = *(long *)(lVar6 + 0x70 + uVar17 * 8);
            local_a8 = 1;
            uVar10 = uVar5;
          }
          else {
            pbVar13 = pbVar13 + (uVar4 - 1) * uVar5;
            lVar19 = lVar19 + (ulong)(uVar4 - 1);
            local_b0 = (ulong)(uVar4 + 1) * 2 + *(long *)(lVar6 + 0x70 + uVar17 * 8);
            local_a8 = -1;
            uVar10 = -uVar5;
          }
          lVar8 = *(long *)(*(long *)(lVar6 + 0x30) + uVar17 * 8);
          lVar9 = *(long *)(*(long *)(lVar6 + 0x20) + uVar17 * 8);
          lVar12 = 0;
          iVar21 = 0;
          iVar20 = 0;
          uVar14 = uVar11;
          iVar22 = 0;
          do {
            bVar1 = *(byte *)(lVar7 + (long)(*(short *)(local_b0 + local_a8 * 2 + lVar12 * 2) +
                                             iVar21 + 8 >> 4) + (ulong)*pbVar13);
            bVar2 = *(byte *)(lVar8 + (ulong)bVar1);
            *(char *)(lVar19 + lVar12) = *(char *)(lVar19 + lVar12) + bVar2;
            iVar18 = (uint)bVar1 - (uint)*(byte *)(lVar9 + (ulong)bVar2);
            *(short *)(local_b0 + lVar12 * 2) = (short)iVar18 * 3 + (short)iVar20;
            iVar20 = iVar18 * 5 + iVar22;
            iVar21 = iVar18 * 7;
            pbVar13 = pbVar13 + (int)uVar10;
            lVar12 = lVar12 + local_a8;
            uVar16 = (int)uVar14 - 1;
            uVar14 = (ulong)uVar16;
            iVar22 = iVar18;
          } while (uVar16 != 0);
          *(short *)(local_b0 + lVar12 * 2) = (short)iVar20;
          uVar17 = uVar17 + 1;
        } while (uVar17 != uVar5);
        *(bool *)(lVar6 + 0x90) = *(char *)(lVar6 + 0x90) == '\0';
        uVar15 = uVar15 + 1;
      } while (uVar15 != param_4);
    }
  }
  return;
}


