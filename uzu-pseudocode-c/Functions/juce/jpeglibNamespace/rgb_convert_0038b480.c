// Function : rgb_convert
// Namespace: juce:jpeglibNamespace
// Entry    : 0038b480
// Prototype: undefined rgb_convert(long param_1, long * param_2, uint param_3, undefined8 * param_4, int param_5)
// Body     : 0038b480 - 0038b557


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::rgb_convert(juce::jpeglibNamespace::jpeg_decompress_struct*, unsigned
   char***, unsigned int, unsigned char**, int) */

void __cdecl
juce::jpeglibNamespace::rgb_convert
          (long param_1,long *param_2,uint param_3,undefined8 *param_4,int param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  undefined1 *puVar6;
  ulong uVar7;
  
  if ((0 < param_5) && (uVar1 = *(uint *)(param_1 + 0x74), uVar1 != 0)) {
    do {
      uVar7 = (ulong)param_3;
      lVar2 = *(long *)(*param_2 + uVar7 * 8);
      lVar3 = *(long *)(param_2[1] + uVar7 * 8);
      lVar4 = *(long *)(param_2[2] + uVar7 * 8);
      puVar6 = (undefined1 *)*param_4;
      uVar7 = 0;
      if (uVar1 != 1) {
        do {
          *puVar6 = *(undefined1 *)(lVar2 + uVar7);
          puVar6[1] = *(undefined1 *)(lVar3 + uVar7);
          puVar6[2] = *(undefined1 *)(lVar4 + uVar7);
          puVar6[3] = *(undefined1 *)(lVar2 + 1 + uVar7);
          puVar6[4] = *(undefined1 *)(lVar3 + 1 + uVar7);
          puVar6[5] = *(undefined1 *)(lVar4 + 1 + uVar7);
          puVar6 = puVar6 + 6;
          uVar7 = uVar7 + 2;
        } while ((uVar1 & 0xfffffffe) != uVar7);
      }
      if ((uVar1 & 1) != 0) {
        *puVar6 = *(undefined1 *)(lVar2 + uVar7);
        puVar6[1] = *(undefined1 *)(lVar3 + uVar7);
        puVar6[2] = *(undefined1 *)(lVar4 + uVar7);
      }
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
      bVar5 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar5);
  }
  return;
}


