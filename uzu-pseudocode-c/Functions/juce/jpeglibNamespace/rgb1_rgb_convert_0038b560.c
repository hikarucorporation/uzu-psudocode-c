// Function : rgb1_rgb_convert
// Namespace: juce:jpeglibNamespace
// Entry    : 0038b560
// Prototype: undefined rgb1_rgb_convert(long param_1, long * param_2, uint param_3, undefined8 * param_4, int param_5)
// Body     : 0038b560 - 0038b660


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::rgb1_rgb_convert(juce::jpeglibNamespace::jpeg_decompress_struct*,
   unsigned char***, unsigned int, unsigned char**, int) */

void __cdecl
juce::jpeglibNamespace::rgb1_rgb_convert
          (long param_1,long *param_2,uint param_3,undefined8 *param_4,int param_5)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  byte *pbVar8;
  ulong uVar9;
  
  if ((0 < param_5) && (uVar3 = *(uint *)(param_1 + 0x74), uVar3 != 0)) {
    do {
      uVar9 = (ulong)param_3;
      lVar4 = *(long *)(*param_2 + uVar9 * 8);
      lVar5 = *(long *)(param_2[1] + uVar9 * 8);
      lVar6 = *(long *)(param_2[2] + uVar9 * 8);
      pbVar8 = (byte *)*param_4;
      uVar9 = 0;
      if (uVar3 != 1) {
        do {
          bVar1 = *(byte *)(lVar5 + uVar9);
          cVar2 = *(char *)(lVar6 + uVar9);
          *pbVar8 = *(char *)(lVar4 + uVar9) + bVar1 ^ 0x80;
          pbVar8[1] = bVar1;
          pbVar8[2] = cVar2 + bVar1 ^ 0x80;
          bVar1 = *(byte *)(lVar5 + 1 + uVar9);
          cVar2 = *(char *)(lVar6 + 1 + uVar9);
          pbVar8[3] = *(char *)(lVar4 + 1 + uVar9) + bVar1 ^ 0x80;
          pbVar8[4] = bVar1;
          pbVar8[5] = cVar2 + bVar1 ^ 0x80;
          pbVar8 = pbVar8 + 6;
          uVar9 = uVar9 + 2;
        } while ((uVar3 & 0xfffffffe) != uVar9);
      }
      if ((uVar3 & 1) != 0) {
        bVar1 = *(byte *)(lVar5 + uVar9);
        cVar2 = *(char *)(lVar6 + uVar9);
        *pbVar8 = *(char *)(lVar4 + uVar9) + bVar1 ^ 0x80;
        pbVar8[1] = bVar1;
        pbVar8[2] = cVar2 + bVar1 ^ 0x80;
      }
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
      bVar7 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar7);
  }
  return;
}


