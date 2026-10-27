// Function : emit_restart_e
// Namespace: juce:jpeglibNamespace
// Entry    : 00365210
// Prototype: undefined emit_restart_e(long param_1, char param_2)
// Body     : 00365210 - 0036533c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::emit_restart_e(juce::jpeglibNamespace::huff_entropy_encoder*, int) */

void __cdecl juce::jpeglibNamespace::emit_restart_e(long param_1,char param_2)

{
  long *plVar1;
  int iVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  char *pcVar8;
  long lVar9;
  
  emit_eobrun(param_1);
  if (*(char *)(param_1 + 0xc0) == '\0') {
    flush_bits_e(param_1);
    puVar3 = *(undefined1 **)(param_1 + 200);
    *(undefined1 **)(param_1 + 200) = puVar3 + 1;
    *puVar3 = 0xff;
    plVar1 = (long *)(param_1 + 0xd0);
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      plVar1 = *(long **)(*(long *)(param_1 + 0xd8) + 0x28);
      cVar7 = (*(code *)plVar1[3])();
      if (cVar7 == '\0') {
        puVar5 = (undefined8 *)**(long **)(param_1 + 0xd8);
        *(undefined4 *)(puVar5 + 5) = 0x19;
        (*(code *)*puVar5)();
      }
      pcVar8 = (char *)*plVar1;
      *(long *)(param_1 + 0xd0) = plVar1[1];
    }
    else {
      pcVar8 = *(char **)(param_1 + 200);
    }
    *(char **)(param_1 + 200) = pcVar8 + 1;
    *pcVar8 = param_2 + -0x30;
    plVar1 = (long *)(param_1 + 0xd0);
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      puVar5 = *(undefined8 **)(*(long *)(param_1 + 0xd8) + 0x28);
      cVar7 = (*(code *)puVar5[3])();
      if (cVar7 == '\0') {
        puVar6 = (undefined8 *)**(long **)(param_1 + 0xd8);
        *(undefined4 *)(puVar6 + 5) = 0x19;
        (*(code *)*puVar6)();
      }
      *(undefined8 *)(param_1 + 200) = *puVar5;
      *(undefined8 *)(param_1 + 0xd0) = puVar5[1];
      lVar4 = *(long *)(param_1 + 0xd8);
      iVar2 = *(int *)(lVar4 + 0x1bc);
      goto joined_r0x00365311;
    }
  }
  lVar4 = *(long *)(param_1 + 0xd8);
  iVar2 = *(int *)(lVar4 + 0x1bc);
joined_r0x00365311:
  if (iVar2 == 0) {
    if (0 < *(int *)(lVar4 + 0x164)) {
      lVar9 = 0;
      do {
        *(undefined4 *)(param_1 + 0x24 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)(lVar4 + 0x164));
    }
  }
  else {
    *(undefined8 *)(param_1 + 0xe4) = 0;
  }
  return;
}


