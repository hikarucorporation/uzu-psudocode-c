// Function : emit_restart
// Namespace: juce:jpeglibNamespace
// Entry    : 00366ae0
// Prototype: undefined emit_restart(long * param_1, char param_2)
// Body     : 00366ae0 - 00366c6d


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::emit_restart(juce::jpeglibNamespace::jpeg_compress_struct*, int) */

void __cdecl juce::jpeglibNamespace::emit_restart(long *param_1,char param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long *plVar6;
  char *pcVar7;
  long lVar8;
  undefined8 uVar9;
  char cVar10;
  long lVar11;
  
  lVar3 = param_1[0x44];
  finish_pass(param_1);
  puVar4 = (undefined8 *)param_1[5];
  puVar5 = (undefined1 *)*puVar4;
  *puVar4 = puVar5 + 1;
  *puVar5 = 0xff;
  plVar1 = puVar4 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (cVar10 = (*(code *)puVar4[3])(param_1), cVar10 == '\0')) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 0x19;
    (*(code *)*puVar4)(param_1);
  }
  plVar6 = (long *)param_1[5];
  pcVar7 = (char *)*plVar6;
  *plVar6 = (long)(pcVar7 + 1);
  *pcVar7 = param_2 + -0x30;
  plVar1 = plVar6 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (cVar10 = (*(code *)plVar6[3])(param_1), cVar10 == '\0')) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 0x19;
    (*(code *)*puVar4)(param_1);
  }
  if (0 < *(int *)((long)param_1 + 0x164)) {
    lVar11 = 0;
    do {
      lVar8 = param_1[lVar11 + 0x2d];
      if ((*(int *)((long)param_1 + 0x1bc) == 0) && (*(int *)((long)param_1 + 0x1c4) == 0)) {
        puVar4 = *(undefined8 **)(lVar3 + 0x68 + (long)*(int *)(lVar8 + 0x14) * 8);
        puVar4[6] = 0;
        puVar4[7] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        *puVar4 = 0;
        puVar4[1] = 0;
        *(undefined4 *)(lVar3 + 0x40 + lVar11 * 4) = 0;
        *(undefined4 *)(lVar3 + 0x50 + lVar11 * 4) = 0;
        iVar2 = (int)param_1[0x38];
      }
      else {
        iVar2 = (int)param_1[0x38];
      }
      if (iVar2 != 0) {
        puVar4 = *(undefined8 **)(lVar3 + 0xe8 + (long)*(int *)(lVar8 + 0x18) * 8);
        puVar4[0x1e] = 0;
        puVar4[0x1f] = 0;
        puVar4[0x1c] = 0;
        puVar4[0x1d] = 0;
        puVar4[0x1a] = 0;
        puVar4[0x1b] = 0;
        puVar4[0x18] = 0;
        puVar4[0x19] = 0;
        puVar4[0x16] = 0;
        puVar4[0x17] = 0;
        puVar4[0x14] = 0;
        puVar4[0x15] = 0;
        puVar4[0x12] = 0;
        puVar4[0x13] = 0;
        puVar4[0x10] = 0;
        puVar4[0x11] = 0;
        puVar4[0xe] = 0;
        puVar4[0xf] = 0;
        puVar4[0xc] = 0;
        puVar4[0xd] = 0;
        puVar4[10] = 0;
        puVar4[0xb] = 0;
        puVar4[8] = 0;
        puVar4[9] = 0;
        puVar4[6] = 0;
        puVar4[7] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        *puVar4 = 0;
        puVar4[1] = 0;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)((long)param_1 + 0x164));
  }
  uVar9 = _UNK_005dd7c8;
  *(undefined8 *)(lVar3 + 0x18) = _DAT_005dd7c0;
  *(undefined8 *)(lVar3 + 0x20) = uVar9;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  *(undefined8 *)(lVar3 + 0x38) = 0xffffffff0000000b;
  return;
}


