// Function : merged_2v_upsample
// Namespace: juce:jpeglibNamespace
// Entry    : 0038bb80
// Prototype: undefined merged_2v_upsample(long param_1, undefined8 param_2, int * param_3, undefined8 param_4, long param_5, uint * param_6, int param_7)
// Body     : 0038bb80 - 0038bc21


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::merged_2v_upsample(juce::jpeglibNamespace::jpeg_decompress_struct*,
   unsigned char***, unsigned int*, unsigned int, unsigned char**, unsigned int*, unsigned int) */

void __cdecl
juce::jpeglibNamespace::merged_2v_upsample
          (long param_1,undefined8 param_2,int *param_3,undefined8 param_4,long param_5,
          uint *param_6,int param_7)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 local_38;
  undefined8 local_30;
  
  lVar3 = *(long *)(param_1 + 0x260);
  if (*(char *)(lVar3 + 0x48) == '\0') {
    uVar4 = 2;
    if (*(uint *)(lVar3 + 0x50) < 2) {
      uVar4 = *(uint *)(lVar3 + 0x50);
    }
    uVar2 = *param_6;
    uVar5 = param_7 - uVar2;
    if (uVar4 <= param_7 - uVar2) {
      uVar5 = uVar4;
    }
    local_38 = *(undefined8 *)(param_5 + (ulong)uVar2 * 8);
    if (uVar5 < 2) {
      local_30 = *(undefined8 *)(lVar3 + 0x40);
      *(undefined1 *)(lVar3 + 0x48) = 1;
    }
    else {
      local_30 = *(undefined8 *)(param_5 + (ulong)(uVar2 + 1) * 8);
    }
    (**(code **)(lVar3 + 0x18))(param_1,param_2,*param_3,&local_38);
    cVar1 = *(char *)(lVar3 + 0x48);
    *param_6 = *param_6 + uVar5;
    *(int *)(lVar3 + 0x50) = *(int *)(lVar3 + 0x50) - uVar5;
    if (cVar1 != '\0') {
      return;
    }
  }
  else {
    memcpy(*(void **)(param_5 + (ulong)*param_6 * 8),*(void **)(lVar3 + 0x40),
           (ulong)*(uint *)(lVar3 + 0x4c));
    *(undefined1 *)(lVar3 + 0x48) = 0;
    *param_6 = *param_6 + 1;
    *(int *)(lVar3 + 0x50) = *(int *)(lVar3 + 0x50) + -1;
  }
  *param_3 = *param_3 + 1;
  return;
}


