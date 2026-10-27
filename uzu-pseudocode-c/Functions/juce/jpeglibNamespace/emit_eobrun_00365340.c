// Function : emit_eobrun
// Namespace: juce:jpeglibNamespace
// Entry    : 00365340
// Prototype: undefined emit_eobrun(long param_1)
// Body     : 00365340 - 0036541e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::emit_eobrun(juce::jpeglibNamespace::huff_entropy_encoder*) */

void __cdecl juce::jpeglibNamespace::emit_eobrun(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar8 = *(uint *)(param_1 + 0xe4);
  if (uVar8 != 0) {
    iVar9 = 0;
    if (uVar8 != 1) {
      uVar7 = 0xffffffff;
      do {
        uVar6 = uVar7;
        uVar7 = uVar6 + 1;
        bVar4 = 3 < uVar8;
        uVar8 = (int)uVar8 >> 1;
      } while (bVar4);
      iVar9 = uVar6 + 2;
      if (0xd < uVar7) {
        puVar2 = (undefined8 *)**(long **)(param_1 + 0xd8);
        *(undefined4 *)(puVar2 + 5) = 0x29;
        (*(code *)*puVar2)();
      }
    }
    iVar5 = iVar9 << 4;
    if (*(char *)(param_1 + 0xc0) == '\0') {
      lVar3 = *(long *)(param_1 + 0x60 + (long)*(int *)(param_1 + 0xe0) * 8);
      emit_bits_e(param_1,*(uint *)(lVar3 + (long)iVar5 * 4),
                  (int)*(char *)(lVar3 + 0x400 + (long)iVar5));
    }
    else {
      plVar1 = (long *)(*(long *)(param_1 + 0xa0 + (long)*(int *)(param_1 + 0xe0) * 8) +
                       (long)iVar5 * 8);
      *plVar1 = *plVar1 + 1;
    }
    if (iVar9 != 0) {
      emit_bits_e(param_1,*(uint *)(param_1 + 0xe4),iVar9);
    }
    *(undefined4 *)(param_1 + 0xe4) = 0;
    emit_buffered_bits(param_1,*(byte **)(param_1 + 0xf0),*(int *)(param_1 + 0xe8));
    *(undefined4 *)(param_1 + 0xe8) = 0;
  }
  return;
}


