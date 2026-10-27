// Function : emit_bits_e
// Namespace: juce:jpeglibNamespace
// Entry    : 00365420
// Prototype: undefined emit_bits_e(long param_1, uint param_2, int param_3)
// Body     : 00365420 - 0036559b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::emit_bits_e(juce::jpeglibNamespace::huff_entropy_encoder*, unsigned int,
   int) */

void __cdecl juce::jpeglibNamespace::emit_bits_e(long param_1,uint param_2,int param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  char cVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  
  if (param_3 == 0) {
    puVar3 = (undefined8 *)**(long **)(param_1 + 0xd8);
    *(undefined4 *)(puVar3 + 5) = 0x29;
    (*(code *)*puVar3)();
    cVar6 = *(char *)(param_1 + 0xc0);
  }
  else {
    cVar6 = *(char *)(param_1 + 0xc0);
  }
  if (cVar6 == '\0') {
    iVar8 = param_3 + *(int *)(param_1 + 0x20);
    uVar7 = (ulong)(~(uint)(-1L << ((byte)param_3 & 0x3f)) & param_2) <<
            (0x18U - (char)iVar8 & 0x3f) | *(ulong *)(param_1 + 0x18);
    iVar9 = iVar8;
    if (7 < iVar8) {
      do {
        puVar2 = *(undefined1 **)(param_1 + 200);
        *(undefined1 **)(param_1 + 200) = puVar2 + 1;
        *puVar2 = (char)(uVar7 >> 0x10);
        plVar1 = (long *)(param_1 + 0xd0);
        *plVar1 = *plVar1 + -1;
        if (*plVar1 == 0) {
          puVar3 = *(undefined8 **)(*(long *)(param_1 + 0xd8) + 0x28);
          cVar6 = (*(code *)puVar3[3])();
          if (cVar6 == '\0') {
            puVar4 = (undefined8 *)**(long **)(param_1 + 0xd8);
            *(undefined4 *)(puVar4 + 5) = 0x19;
            (*(code *)*puVar4)();
          }
          *(undefined8 *)(param_1 + 200) = *puVar3;
          *(undefined8 *)(param_1 + 0xd0) = puVar3[1];
        }
        if ((~(uint)uVar7 & 0xff0000) == 0) {
          puVar2 = *(undefined1 **)(param_1 + 200);
          *(undefined1 **)(param_1 + 200) = puVar2 + 1;
          *puVar2 = 0;
          plVar1 = (long *)(param_1 + 0xd0);
          *plVar1 = *plVar1 + -1;
          if (*plVar1 == 0) {
            puVar3 = *(undefined8 **)(*(long *)(param_1 + 0xd8) + 0x28);
            cVar6 = (*(code *)puVar3[3])();
            if (cVar6 == '\0') {
              puVar4 = (undefined8 *)**(long **)(param_1 + 0xd8);
              *(undefined4 *)(puVar4 + 5) = 0x19;
              (*(code *)*puVar4)();
            }
            *(undefined8 *)(param_1 + 200) = *puVar3;
            *(undefined8 *)(param_1 + 0xd0) = puVar3[1];
          }
        }
        uVar7 = uVar7 << 8;
        iVar8 = iVar9 + -8;
        bVar5 = 0xf < iVar9;
        iVar9 = iVar8;
      } while (bVar5);
    }
    *(ulong *)(param_1 + 0x18) = uVar7;
    *(int *)(param_1 + 0x20) = iVar8;
  }
  return;
}


