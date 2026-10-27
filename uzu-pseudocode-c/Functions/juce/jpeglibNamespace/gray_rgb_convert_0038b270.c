// Function : gray_rgb_convert
// Namespace: juce:jpeglibNamespace
// Entry    : 0038b270
// Prototype: undefined gray_rgb_convert(long param_1, long * param_2, uint param_3, undefined8 * param_4, int param_5)
// Body     : 0038b270 - 0038b363


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::gray_rgb_convert(juce::jpeglibNamespace::jpeg_decompress_struct*,
   unsigned char***, unsigned int, unsigned char**, int) */

void __cdecl
juce::jpeglibNamespace::gray_rgb_convert
          (long param_1,long *param_2,uint param_3,undefined8 *param_4,int param_5)

{
  undefined1 uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (0 < param_5) {
    uVar2 = *(uint *)(param_1 + 0x74);
    if (uVar2 != 0) {
      do {
        lVar3 = *(long *)(*param_2 + (ulong)param_3 * 8);
        puVar5 = (undefined1 *)*param_4;
        uVar6 = 0;
        if (2 < (ulong)uVar2 - 1) {
          do {
            uVar1 = *(undefined1 *)(lVar3 + uVar6);
            puVar5[2] = uVar1;
            puVar5[1] = uVar1;
            *puVar5 = uVar1;
            uVar1 = *(undefined1 *)(lVar3 + 1 + uVar6);
            puVar5[5] = uVar1;
            puVar5[4] = uVar1;
            puVar5[3] = uVar1;
            uVar1 = *(undefined1 *)(lVar3 + 2 + uVar6);
            puVar5[8] = uVar1;
            puVar5[7] = uVar1;
            puVar5[6] = uVar1;
            uVar1 = *(undefined1 *)(lVar3 + 3 + uVar6);
            puVar5[0xb] = uVar1;
            puVar5[10] = uVar1;
            puVar5[9] = uVar1;
            puVar5 = puVar5 + 0xc;
            uVar6 = uVar6 + 4;
          } while ((uVar2 & 0xfffffffc) != uVar6);
        }
        if ((ulong)(uVar2 & 3) != 0) {
          puVar5 = puVar5 + 2;
          uVar7 = 0;
          do {
            uVar1 = *(undefined1 *)(lVar3 + uVar6 + uVar7);
            *puVar5 = uVar1;
            puVar5[-1] = uVar1;
            puVar5[-2] = uVar1;
            uVar7 = uVar7 + 1;
            puVar5 = puVar5 + 3;
          } while ((uVar2 & 3) != uVar7);
        }
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
        bVar4 = 1 < param_5;
        param_5 = param_5 + -1;
      } while (bVar4);
    }
  }
  return;
}


