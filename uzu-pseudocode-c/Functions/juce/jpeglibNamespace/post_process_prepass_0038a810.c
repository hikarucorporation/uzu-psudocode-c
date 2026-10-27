// Function : post_process_prepass
// Namespace: juce:jpeglibNamespace
// Entry    : 0038a810
// Prototype: undefined post_process_prepass(long param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4, undefined8 param_5, int * param_6)
// Body     : 0038a810 - 0038a8e2


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::post_process_prepass(juce::jpeglibNamespace::jpeg_decompress_struct*,
   unsigned char***, unsigned int*, unsigned int, unsigned char**, unsigned int*, unsigned int) */

void __cdecl
juce::jpeglibNamespace::post_process_prepass
          (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5,
          int *param_6)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  
  lVar1 = *(long *)(param_1 + 0x238);
  uVar5 = *(uint *)(lVar1 + 0x28);
  if (uVar5 == 0) {
    uVar3 = (**(code **)(*(long *)(param_1 + 8) + 0x38))
                      (param_1,*(undefined8 *)(lVar1 + 0x10),*(undefined4 *)(lVar1 + 0x24),
                       *(undefined4 *)(lVar1 + 0x20),1);
    *(undefined8 *)(lVar1 + 0x18) = uVar3;
    uVar5 = *(uint *)(lVar1 + 0x28);
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
  }
  (**(code **)(*(long *)(param_1 + 0x260) + 8))
            (param_1,param_2,param_3,param_4,uVar3,lVar1 + 0x28,*(undefined4 *)(lVar1 + 0x20));
  uVar2 = *(uint *)(lVar1 + 0x28);
  iVar4 = uVar2 - uVar5;
  if (uVar5 <= uVar2 && iVar4 != 0) {
    (**(code **)(*(long *)(param_1 + 0x270) + 8))
              (param_1,(ulong)uVar5 * 8 + *(long *)(lVar1 + 0x18),0,iVar4);
    *param_6 = *param_6 + iVar4;
    uVar2 = *(uint *)(lVar1 + 0x28);
  }
  if (*(uint *)(lVar1 + 0x20) <= uVar2) {
    *(int *)(lVar1 + 0x24) = *(int *)(lVar1 + 0x24) + *(uint *)(lVar1 + 0x20);
    *(undefined4 *)(lVar1 + 0x28) = 0;
  }
  return;
}


