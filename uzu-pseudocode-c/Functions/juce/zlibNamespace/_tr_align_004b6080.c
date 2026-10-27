// Function : _tr_align
// Namespace: juce:zlibNamespace
// Entry    : 004b6080
// Prototype: undefined _tr_align(long param_1)
// Body     : 004b6080 - 004b61e1


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::zlibNamespace::_tr_align(juce::zlibNamespace::internal_state*) */

void __cdecl juce::zlibNamespace::_tr_align(long param_1)

{
  long lVar1;
  int iVar2;
  undefined1 uVar3;
  ushort uVar4;
  uint uVar5;
  
  iVar2 = *(int *)(param_1 + 0x1734);
  uVar4 = (ushort)(2 << ((byte)iVar2 & 0x1f)) | *(ushort *)(param_1 + 0x1730);
  uVar5 = (uint)uVar4;
  *(ushort *)(param_1 + 0x1730) = uVar4;
  if (iVar2 < 0xe) {
    iVar2 = iVar2 + 3;
    *(int *)(param_1 + 0x1734) = iVar2;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar1 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + lVar1) = (char)uVar4;
    lVar1 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar1 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar1) = *(undefined1 *)(param_1 + 0x1731);
    uVar5 = 2 >> (0x10U - (char)*(int *)(param_1 + 0x1734) & 0x1f);
    *(short *)(param_1 + 0x1730) = (short)uVar5;
    iVar2 = *(int *)(param_1 + 0x1734) + -0xd;
    *(int *)(param_1 + 0x1734) = iVar2;
  }
  uVar3 = (undefined1)uVar5;
  if (iVar2 < 10) {
    iVar2 = iVar2 + 7;
    *(int *)(param_1 + 0x1734) = iVar2;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar1 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar1) = uVar3;
    lVar1 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar1 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar1) = *(undefined1 *)(param_1 + 0x1731);
    *(undefined2 *)(param_1 + 0x1730) = 0;
    iVar2 = *(int *)(param_1 + 0x1734) + -9;
    uVar3 = 0;
    *(int *)(param_1 + 0x1734) = iVar2;
  }
  if (iVar2 == 0x10) {
    lVar1 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar1 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar1) = uVar3;
    lVar1 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar1 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar1) = *(undefined1 *)(param_1 + 0x1731);
    *(undefined2 *)(param_1 + 0x1730) = 0;
    iVar2 = 0;
  }
  else {
    if (iVar2 < 8) {
      return;
    }
    lVar1 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar1 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar1) = uVar3;
    *(ushort *)(param_1 + 0x1730) = (ushort)*(byte *)(param_1 + 0x1731);
    iVar2 = *(int *)(param_1 + 0x1734) + -8;
  }
  *(int *)(param_1 + 0x1734) = iVar2;
  return;
}


