// Function : color_quantize
// Namespace: juce:jpeglibNamespace
// Entry    : 0038ebe0
// Prototype: undefined color_quantize(long param_1, long param_2, long param_3, uint param_4)
// Body     : 0038ebe0 - 0038ee27


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::color_quantize(juce::jpeglibNamespace::jpeg_decompress_struct*, unsigned
   char**, unsigned char**, int) */

void __cdecl
juce::jpeglibNamespace::color_quantize(long param_1,long param_2,long param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong __n;
  long lVar4;
  ulong uVar5;
  char cVar6;
  char cVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  char *pcVar12;
  
  if ((0 < (int)param_4) && (__n = (ulong)*(uint *)(param_1 + 0x74), *(uint *)(param_1 + 0x74) != 0)
     ) {
    uVar1 = *(uint *)(param_1 + 0x7c);
    if ((int)uVar1 < 1) {
      if ((ulong)param_4 - 1 < 7) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        do {
          memset(*(void **)(param_3 + uVar10 * 8),0,__n);
          memset(*(void **)(param_3 + 8 + uVar10 * 8),0,__n);
          memset(*(void **)(param_3 + 0x10 + uVar10 * 8),0,__n);
          memset(*(void **)(param_3 + 0x18 + uVar10 * 8),0,__n);
          memset(*(void **)(param_3 + 0x20 + uVar10 * 8),0,__n);
          memset(*(void **)(param_3 + 0x28 + uVar10 * 8),0,__n);
          memset(*(void **)(param_3 + 0x30 + uVar10 * 8),0,__n);
          memset(*(void **)(param_3 + 0x38 + uVar10 * 8),0,__n);
          uVar10 = uVar10 + 8;
        } while ((param_4 & 0xfffffff8) != uVar10);
      }
      if ((ulong)(param_4 & 7) != 0) {
        uVar8 = 0;
        do {
          memset(*(void **)(param_3 + uVar10 * 8 + uVar8 * 8),0,__n);
          uVar8 = uVar8 + 1;
        } while ((param_4 & 7) != uVar8);
      }
    }
    else {
      lVar2 = *(long *)(*(long *)(param_1 + 0x270) + 0x30);
      uVar10 = 0;
      do {
        lVar4 = *(long *)(param_2 + uVar10 * 8);
        pcVar12 = *(char **)(param_3 + uVar10 * 8);
        uVar8 = __n;
        do {
          uVar5 = 0;
          cVar7 = '\0';
          cVar6 = '\0';
          lVar3 = lVar4;
          if (2 < (ulong)uVar1 - 1) {
            do {
              cVar7 = *(char *)(*(long *)(lVar2 + 0x18 + uVar5 * 8) +
                               (ulong)*(byte *)(lVar4 + 3 + uVar5)) +
                      *(char *)(*(long *)(lVar2 + 0x10 + uVar5 * 8) +
                               (ulong)*(byte *)(lVar4 + 2 + uVar5)) +
                      *(char *)(*(long *)(lVar2 + 8 + uVar5 * 8) +
                               (ulong)*(byte *)(lVar4 + 1 + uVar5)) +
                      *(char *)(*(long *)(lVar2 + uVar5 * 8) + (ulong)*(byte *)(lVar4 + uVar5)) +
                      cVar7;
              uVar5 = uVar5 + 4;
            } while ((uVar1 & 0xfffffffc) != uVar5);
            lVar3 = lVar4 + uVar5;
            cVar6 = cVar7;
          }
          if ((ulong)(uVar1 & 3) != 0) {
            uVar9 = 0;
            do {
              cVar6 = cVar6 + *(char *)(*(long *)(lVar2 + uVar5 * 8 + uVar9 * 8) +
                                       (ulong)*(byte *)(lVar3 + uVar9));
              uVar9 = uVar9 + 1;
            } while ((uVar1 & 3) != uVar9);
          }
          lVar4 = lVar4 + (ulong)(uVar1 - 1) + 1;
          *pcVar12 = cVar6;
          pcVar12 = pcVar12 + 1;
          uVar11 = (int)uVar8 - 1;
          uVar8 = (ulong)uVar11;
        } while (uVar11 != 0);
        uVar10 = uVar10 + 1;
      } while (uVar10 != param_4);
    }
  }
  return;
}


