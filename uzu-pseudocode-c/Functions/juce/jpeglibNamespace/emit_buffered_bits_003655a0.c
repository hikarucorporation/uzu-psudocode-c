// Function : emit_buffered_bits
// Namespace: juce:jpeglibNamespace
// Entry    : 003655a0
// Prototype: undefined emit_buffered_bits(long param_1, byte * param_2, int param_3)
// Body     : 003655a0 - 00365767


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::emit_buffered_bits(juce::jpeglibNamespace::huff_entropy_encoder*, char*,
   unsigned int) */

void __cdecl juce::jpeglibNamespace::emit_buffered_bits(long param_1,byte *param_2,int param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  
  if ((param_3 == 0) || (*(char *)(param_1 + 0xc0) != '\0')) {
    return;
  }
  do {
    iVar7 = *(int *)(param_1 + 0x20);
    uVar8 = (ulong)(*param_2 & 1) << (0x17U - (char)iVar7 & 0x3f) | *(ulong *)(param_1 + 0x18);
    if (iVar7 < 7) {
      iVar7 = iVar7 + 1;
    }
    else {
      iVar6 = iVar7 + 9;
      do {
        iVar7 = iVar6;
        puVar2 = *(undefined1 **)(param_1 + 200);
        *(undefined1 **)(param_1 + 200) = puVar2 + 1;
        *puVar2 = (char)(uVar8 >> 0x10);
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
        if ((~(uint)uVar8 & 0xff0000) == 0) {
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
        uVar8 = uVar8 << 8;
        iVar6 = iVar7 + -8;
      } while (0xf < iVar6);
      iVar7 = iVar7 + -0x10;
    }
    *(ulong *)(param_1 + 0x18) = uVar8;
    *(int *)(param_1 + 0x20) = iVar7;
    do {
      param_3 = param_3 + -1;
      if (param_3 == 0) {
        return;
      }
      param_2 = param_2 + 1;
    } while (*(char *)(param_1 + 0xc0) != '\0');
  } while( true );
}


