// Function : fullsize_downsample
// Namespace: juce:jpeglibNamespace
// Entry    : 00374290
// Prototype: undefined fullsize_downsample(long param_1, long param_2, undefined8 * param_3, undefined8 * param_4)
// Body     : 00374290 - 0037442b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::fullsize_downsample(juce::jpeglibNamespace::jpeg_compress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, unsigned char**, unsigned char**) */

void __cdecl
juce::jpeglibNamespace::fullsize_downsample
          (long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  void *__src;
  undefined8 *puVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  size_t __n;
  bool bVar9;
  
  uVar7 = *(uint *)(param_1 + 0x30);
  uVar2 = (ulong)uVar7;
  uVar3 = *(uint *)(param_1 + 0x154);
  if (0 < (int)uVar3) {
    puVar1 = param_4;
    uVar7 = uVar3;
    if ((uVar3 & 1) != 0) {
      __src = (void *)*param_3;
      param_3 = param_3 + 1;
      memcpy((void *)*param_4,__src,uVar2);
      puVar1 = param_4 + 1;
      uVar7 = uVar3 - 1;
    }
    if (uVar3 != 1) {
      uVar7 = uVar7 - 1;
      lVar4 = 0;
      do {
        memcpy(*(void **)((long)puVar1 + lVar4),*(void **)((long)param_3 + lVar4),uVar2);
        memcpy(*(void **)((long)puVar1 + lVar4 + 8),*(void **)((long)param_3 + lVar4 + 8),uVar2);
        lVar4 = lVar4 + 0x10;
        bVar9 = 1 < uVar7;
        uVar7 = uVar7 - 2;
      } while (bVar9);
    }
    uVar7 = *(uint *)(param_1 + 0x30);
    uVar3 = *(uint *)(param_1 + 0x154);
  }
  if ((0 < (int)uVar3) &&
     (iVar8 = *(int *)(param_2 + 0x24) * *(int *)(param_2 + 0x1c), 0 < (int)(iVar8 - uVar7))) {
    uVar2 = (ulong)uVar7;
    __n = (ulong)(iVar8 + ~uVar7) + 1;
    if ((ulong)uVar3 - 1 < 3) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      do {
        memset((void *)(param_4[uVar5] + uVar2),(uint)*(byte *)(param_4[uVar5] + -1 + uVar2),__n);
        memset((void *)(param_4[uVar5 + 1] + uVar2),(uint)*(byte *)(param_4[uVar5 + 1] + -1 + uVar2)
               ,__n);
        memset((void *)(param_4[uVar5 + 2] + uVar2),(uint)*(byte *)(param_4[uVar5 + 2] + -1 + uVar2)
               ,__n);
        memset((void *)(param_4[uVar5 + 3] + uVar2),(uint)*(byte *)(param_4[uVar5 + 3] + -1 + uVar2)
               ,__n);
        uVar5 = uVar5 + 4;
      } while ((uVar3 & 0xfffffffc) != uVar5);
    }
    if ((ulong)(uVar3 & 3) != 0) {
      uVar6 = 0;
      do {
        memset((void *)(param_4[uVar5 + uVar6] + uVar2),
               (uint)*(byte *)(param_4[uVar5 + uVar6] + -1 + uVar2),__n);
        uVar6 = uVar6 + 1;
      } while ((uVar3 & 3) != uVar6);
    }
  }
  return;
}


