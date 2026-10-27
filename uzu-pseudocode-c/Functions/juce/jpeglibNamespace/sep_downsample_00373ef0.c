// Function : sep_downsample
// Namespace: juce:jpeglibNamespace
// Entry    : 00373ef0
// Prototype: undefined sep_downsample(long param_1, long param_2, ulong param_3, long param_4, int param_5)
// Body     : 00373ef0 - 00373f8a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::sep_downsample(juce::jpeglibNamespace::jpeg_compress_struct*, unsigned
   char***, unsigned int, unsigned char***, unsigned int) */

void __cdecl
juce::jpeglibNamespace::sep_downsample
          (long param_1,long param_2,ulong param_3,long param_4,int param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (0 < *(int *)(param_1 + 0x5c)) {
    lVar1 = *(long *)(param_1 + 0x210);
    lVar2 = *(long *)(param_1 + 0x68);
    lVar3 = 0;
    do {
      (**(code **)(lVar1 + 0x18 + lVar3 * 8))
                (param_1,lVar2,*(long *)(param_2 + lVar3 * 8) + (param_3 & 0xffffffff) * 8,
                 (ulong)(uint)(*(int *)(lVar1 + 0x68 + lVar3 * 4) * param_5) * 8 +
                 *(long *)(param_4 + lVar3 * 8));
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x60;
    } while (lVar3 < *(int *)(param_1 + 0x5c));
  }
  return;
}


