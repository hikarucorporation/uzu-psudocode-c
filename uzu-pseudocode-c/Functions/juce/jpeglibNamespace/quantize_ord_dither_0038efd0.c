// Function : quantize_ord_dither
// Namespace: juce:jpeglibNamespace
// Entry    : 0038efd0
// Prototype: undefined quantize_ord_dither(long param_1, long param_2, long param_3, uint param_4)
// Body     : 0038efd0 - 0038f25a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::quantize_ord_dither(juce::jpeglibNamespace::jpeg_decompress_struct*,
   unsigned char**, unsigned char**, int) */

void __cdecl
juce::jpeglibNamespace::quantize_ord_dither(long param_1,long param_2,long param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong __n;
  long lVar12;
  ulong uVar13;
  char *pcVar14;
  ulong uVar15;
  
  if (0 < (int)param_4) {
    lVar5 = *(long *)(param_1 + 0x270);
    uVar2 = *(uint *)(param_1 + 0x7c);
    uVar3 = *(uint *)(param_1 + 0x74);
    __n = (ulong)uVar3;
    if ((int)uVar2 < 1) {
      if (param_4 == 1) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        do {
          memset(*(void **)(param_3 + uVar15 * 8),0,__n);
          *(uint *)(lVar5 + 0x4c) = *(int *)(lVar5 + 0x4c) + 1U & 0xf;
          memset(*(void **)(param_3 + 8 + uVar15 * 8),0,__n);
          *(uint *)(lVar5 + 0x4c) = *(int *)(lVar5 + 0x4c) + 1U & 0xf;
          uVar15 = uVar15 + 2;
        } while ((param_4 & 0xfffffffe) != uVar15);
      }
    }
    else {
      if (__n != 0) {
        uVar15 = 0;
        do {
          memset(*(void **)(param_3 + uVar15 * 8),0,__n);
          iVar4 = *(int *)(lVar5 + 0x4c);
          uVar13 = 0;
          do {
            pbVar11 = (byte *)(*(long *)(param_2 + uVar15 * 8) + uVar13);
            uVar9 = 0;
            pcVar14 = *(char **)(param_3 + uVar15 * 8);
            lVar6 = *(long *)(*(long *)(lVar5 + 0x30) + uVar13 * 8);
            lVar7 = *(long *)(lVar5 + 0x50 + uVar13 * 8);
            if (uVar3 == 1) {
LAB_0038f137:
              *pcVar14 = *pcVar14 +
                         *(char *)(lVar6 + (long)*(int *)(lVar7 + (long)iVar4 * 0x40 +
                                                         (ulong)uVar9 * 4) + (ulong)*pbVar11);
            }
            else {
              uVar10 = 0;
              uVar8 = uVar3 & 0xfffffffe;
              do {
                lVar12 = (long)iVar4 * 0x40 + lVar7;
                *pcVar14 = *pcVar14 +
                           *(char *)(lVar6 + (long)*(int *)(lVar12 + uVar10 * 4) + (ulong)*pbVar11);
                pbVar1 = pbVar11 + (int)uVar2;
                pbVar11 = pbVar11 + (long)(int)uVar2 * 2;
                pcVar14[1] = pcVar14[1] +
                             *(char *)(lVar6 + (long)*(int *)(lVar12 + (ulong)((int)uVar10 + 1) * 4)
                                               + (ulong)*pbVar1);
                pcVar14 = pcVar14 + 2;
                uVar9 = (int)uVar10 + 2U & 0xf;
                uVar10 = (ulong)uVar9;
                uVar8 = uVar8 - 2;
              } while (uVar8 != 0);
              if ((uVar3 & 1) != 0) goto LAB_0038f137;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 != uVar2);
          *(uint *)(lVar5 + 0x4c) = iVar4 + 1U & 0xf;
          uVar15 = uVar15 + 1;
          if (uVar15 == param_4) {
            return;
          }
        } while( true );
      }
      if (param_4 == 1) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        do {
          memset(*(void **)(param_3 + uVar15 * 8),0,0);
          *(uint *)(lVar5 + 0x4c) = *(int *)(lVar5 + 0x4c) + 1U & 0xf;
          memset(*(void **)(param_3 + 8 + uVar15 * 8),0,0);
          *(uint *)(lVar5 + 0x4c) = *(int *)(lVar5 + 0x4c) + 1U & 0xf;
          uVar15 = uVar15 + 2;
        } while ((param_4 & 0xfffffffe) != uVar15);
      }
    }
    if ((param_4 & 1) != 0) {
      memset(*(void **)(param_3 + uVar15 * 8),0,__n);
      *(uint *)(lVar5 + 0x4c) = *(int *)(lVar5 + 0x4c) + 1U & 0xf;
    }
  }
  return;
}


