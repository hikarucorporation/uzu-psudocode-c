// Function : flush_bits_e
// Namespace: juce:jpeglibNamespace
// Entry    : 00365770
// Prototype: undefined flush_bits_e(long param_1)
// Body     : 00365770 - 003658bb


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::flush_bits_e(juce::jpeglibNamespace::huff_entropy_encoder*) */

void __cdecl juce::jpeglibNamespace::flush_bits_e(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  ulong uVar6;
  int iVar7;
  
  if ((*(char *)(param_1 + 0xc0) == '\0') && (iVar7 = *(int *)(param_1 + 0x20), 0 < iVar7)) {
    uVar6 = 0x7fL << (0x11U - (char)iVar7 & 0x3f) | *(ulong *)(param_1 + 0x18);
    iVar7 = iVar7 + 0xf;
    do {
      puVar2 = *(undefined1 **)(param_1 + 200);
      *(undefined1 **)(param_1 + 200) = puVar2 + 1;
      *puVar2 = (char)(uVar6 >> 0x10);
      plVar1 = (long *)(param_1 + 0xd0);
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        puVar3 = *(undefined8 **)(*(long *)(param_1 + 0xd8) + 0x28);
        cVar5 = (*(code *)puVar3[3])();
        if (cVar5 == '\0') {
          puVar4 = (undefined8 *)**(long **)(param_1 + 0xd8);
          *(undefined4 *)(puVar4 + 5) = 0x19;
          (*(code *)*puVar4)();
        }
        *(undefined8 *)(param_1 + 200) = *puVar3;
        *(undefined8 *)(param_1 + 0xd0) = puVar3[1];
      }
      if ((~(uint)uVar6 & 0xff0000) == 0) {
        puVar2 = *(undefined1 **)(param_1 + 200);
        *(undefined1 **)(param_1 + 200) = puVar2 + 1;
        *puVar2 = 0;
        plVar1 = (long *)(param_1 + 0xd0);
        *plVar1 = *plVar1 + -1;
        if (*plVar1 == 0) {
          puVar3 = *(undefined8 **)(*(long *)(param_1 + 0xd8) + 0x28);
          cVar5 = (*(code *)puVar3[3])();
          if (cVar5 == '\0') {
            puVar4 = (undefined8 *)**(long **)(param_1 + 0xd8);
            *(undefined4 *)(puVar4 + 5) = 0x19;
            (*(code *)*puVar4)();
          }
          *(undefined8 *)(param_1 + 200) = *puVar3;
          *(undefined8 *)(param_1 + 0xd0) = puVar3[1];
        }
      }
      uVar6 = uVar6 << 8;
      iVar7 = iVar7 + -8;
    } while (0xf < iVar7);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


