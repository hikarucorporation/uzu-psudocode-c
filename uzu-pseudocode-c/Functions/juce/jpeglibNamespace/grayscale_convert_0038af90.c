// Function : grayscale_convert
// Namespace: juce:jpeglibNamespace
// Entry    : 0038af90
// Prototype: undefined grayscale_convert(long param_1, long * param_2, uint param_3, undefined8 * param_4, uint param_5)
// Body     : 0038af90 - 0038b02a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::grayscale_convert(juce::jpeglibNamespace::jpeg_decompress_struct*,
   unsigned char***, unsigned int, unsigned char**, int) */

void __cdecl
juce::jpeglibNamespace::grayscale_convert
          (long param_1,long *param_2,uint param_3,undefined8 *param_4,uint param_5)

{
  void *__src;
  void *__dest;
  long lVar1;
  uint uVar2;
  ulong __n;
  undefined8 *puVar3;
  bool bVar4;
  
  if (0 < (int)param_5) {
    __n = (ulong)*(uint *)(param_1 + 0x74);
    puVar3 = (undefined8 *)((ulong)param_3 * 8 + *param_2);
    uVar2 = param_5;
    if ((param_5 & 1) != 0) {
      __src = (void *)*puVar3;
      puVar3 = puVar3 + 1;
      __dest = (void *)*param_4;
      param_4 = param_4 + 1;
      memcpy(__dest,__src,__n);
      uVar2 = param_5 - 1;
    }
    if (param_5 != 1) {
      uVar2 = uVar2 - 1;
      lVar1 = 0;
      do {
        memcpy(*(void **)((long)param_4 + lVar1),*(void **)((long)puVar3 + lVar1),__n);
        memcpy(*(void **)((long)param_4 + lVar1 + 8),*(void **)((long)puVar3 + lVar1 + 8),__n);
        lVar1 = lVar1 + 0x10;
        bVar4 = 1 < uVar2;
        uVar2 = uVar2 - 2;
      } while (bVar4);
    }
  }
  return;
}


