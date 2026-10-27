// Function : rgb_rgb1_convert
// Namespace: juce:jpeglibNamespace
// Entry    : 00375320
// Prototype: undefined rgb_rgb1_convert(long param_1, undefined8 * param_2, long * param_3, uint param_4, int param_5)
// Body     : 00375320 - 003753ab


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::rgb_rgb1_convert(juce::jpeglibNamespace::jpeg_compress_struct*, unsigned
   char**, unsigned char***, unsigned int, int) */

void __cdecl
juce::jpeglibNamespace::rgb_rgb1_convert
          (long param_1,undefined8 *param_2,long *param_3,uint param_4,int param_5)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  ulong uVar8;
  char *pcVar9;
  
  if ((0 < param_5) && (uVar3 = *(uint *)(param_1 + 0x30), (ulong)uVar3 != 0)) {
    do {
      pcVar9 = (char *)*param_2;
      uVar8 = (ulong)param_4;
      lVar4 = *(long *)(*param_3 + uVar8 * 8);
      lVar5 = *(long *)(param_3[1] + uVar8 * 8);
      lVar6 = *(long *)(param_3[2] + uVar8 * 8);
      uVar8 = 0;
      do {
        cVar1 = pcVar9[1];
        cVar2 = pcVar9[2];
        *(byte *)(lVar4 + uVar8) = *pcVar9 - cVar1 ^ 0x80;
        *(char *)(lVar5 + uVar8) = cVar1;
        *(byte *)(lVar6 + uVar8) = cVar2 - cVar1 ^ 0x80;
        uVar8 = uVar8 + 1;
        pcVar9 = pcVar9 + 3;
      } while (uVar3 != uVar8);
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
      bVar7 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar7);
  }
  return;
}


