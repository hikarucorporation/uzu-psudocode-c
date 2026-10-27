// Function : sep_upsample
// Namespace: juce:jpeglibNamespace
// Entry    : 0038a9d0
// Prototype: undefined sep_upsample(long param_1, long param_2, int * param_3, undefined8 param_4, long param_5, uint * param_6, int param_7)
// Body     : 0038a9d0 - 0038ab03


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::sep_upsample(juce::jpeglibNamespace::jpeg_decompress_struct*, unsigned
   char***, unsigned int*, unsigned int, unsigned char**, unsigned int*, unsigned int) */

void __cdecl
juce::jpeglibNamespace::sep_upsample
          (long param_1,long param_2,int *param_3,undefined8 param_4,long param_5,uint *param_6,
          int param_7)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = *(long *)(param_1 + 0x260);
  iVar5 = *(int *)(lVar1 + 0xb8);
  iVar2 = *(int *)(param_1 + 0x184);
  if (iVar2 <= iVar5) {
    iVar5 = *(int *)(param_1 + 0x38);
    if (0 < iVar5) {
      lVar6 = *(long *)(param_1 + 0x120);
      lVar8 = lVar1 + 0x18;
      lVar7 = 0;
      do {
        if (*(char *)(lVar6 + 0x34) != '\0') {
          (**(code **)(lVar1 + 0x68 + lVar7 * 8))
                    (param_1,lVar6,
                     (ulong)(uint)(*(int *)(lVar1 + 0xc0 + lVar7 * 4) * *param_3) * 8 +
                     *(long *)(param_2 + lVar7 * 8),lVar8);
          iVar5 = *(int *)(param_1 + 0x38);
        }
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + 0x60;
        lVar8 = lVar8 + 8;
      } while (lVar7 < iVar5);
      iVar2 = *(int *)(param_1 + 0x184);
    }
    *(undefined4 *)(lVar1 + 0xb8) = 0;
    iVar5 = 0;
  }
  uVar3 = iVar2 - iVar5;
  if (*(uint *)(lVar1 + 0xbc) < (uint)(iVar2 - iVar5)) {
    uVar3 = *(uint *)(lVar1 + 0xbc);
  }
  uVar4 = param_7 - *param_6;
  if (uVar3 <= uVar4) {
    uVar4 = uVar3;
  }
  (**(code **)(*(long *)(param_1 + 0x268) + 8))
            (param_1,lVar1 + 0x18,iVar5,param_5 + (ulong)*param_6 * 8,uVar4);
  *param_6 = *param_6 + uVar4;
  *(int *)(lVar1 + 0xbc) = *(int *)(lVar1 + 0xbc) - uVar4;
  iVar5 = uVar4 + *(int *)(lVar1 + 0xb8);
  *(int *)(lVar1 + 0xb8) = iVar5;
  if (*(int *)(param_1 + 0x184) <= iVar5) {
    *param_3 = *param_3 + 1;
  }
  return;
}


