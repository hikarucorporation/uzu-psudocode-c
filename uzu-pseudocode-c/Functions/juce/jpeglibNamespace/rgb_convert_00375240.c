// Function : rgb_convert
// Namespace: juce:jpeglibNamespace
// Entry    : 00375240
// Prototype: undefined rgb_convert(long param_1, undefined8 * param_2, long * param_3, uint param_4, int param_5)
// Body     : 00375240 - 00375319


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::rgb_convert(juce::jpeglibNamespace::jpeg_compress_struct*, unsigned
   char**, unsigned char***, unsigned int, int) */

void __cdecl
juce::jpeglibNamespace::rgb_convert
          (long param_1,undefined8 *param_2,long *param_3,uint param_4,int param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  undefined1 *puVar6;
  ulong uVar7;
  
  if ((0 < param_5) && (uVar1 = *(uint *)(param_1 + 0x30), uVar1 != 0)) {
    do {
      puVar6 = (undefined1 *)*param_2;
      uVar7 = (ulong)param_4;
      lVar2 = *(long *)(*param_3 + uVar7 * 8);
      lVar3 = *(long *)(param_3[1] + uVar7 * 8);
      lVar4 = *(long *)(param_3[2] + uVar7 * 8);
      uVar7 = 0;
      if (uVar1 != 1) {
        do {
          *(undefined1 *)(lVar2 + uVar7) = *puVar6;
          *(undefined1 *)(lVar3 + uVar7) = puVar6[1];
          *(undefined1 *)(lVar4 + uVar7) = puVar6[2];
          *(undefined1 *)(lVar2 + 1 + uVar7) = puVar6[3];
          *(undefined1 *)(lVar3 + 1 + uVar7) = puVar6[4];
          *(undefined1 *)(lVar4 + 1 + uVar7) = puVar6[5];
          puVar6 = puVar6 + 6;
          uVar7 = uVar7 + 2;
        } while ((uVar1 & 0xfffffffe) != uVar7);
      }
      if ((uVar1 & 1) != 0) {
        *(undefined1 *)(lVar2 + uVar7) = *puVar6;
        *(undefined1 *)(lVar3 + uVar7) = puVar6[1];
        *(undefined1 *)(lVar4 + uVar7) = puVar6[2];
      }
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
      bVar5 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar5);
  }
  return;
}


