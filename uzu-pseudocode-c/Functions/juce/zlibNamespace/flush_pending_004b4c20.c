// Function : flush_pending
// Namespace: juce:zlibNamespace
// Entry    : 004b4c20
// Prototype: undefined flush_pending(long param_1)
// Body     : 004b4c20 - 004b4cfe


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::zlibNamespace::flush_pending(juce::zlibNamespace::z_stream_s*) */

void __cdecl juce::zlibNamespace::flush_pending(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  ulong __n;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if (*(int *)(lVar2 + 0x1734) == 0x10) {
    lVar3 = *(long *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = lVar3 + 1;
    *(undefined1 *)(*(long *)(lVar2 + 0x10) + lVar3) = *(undefined1 *)(lVar2 + 0x1730);
    lVar3 = *(long *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = lVar3 + 1;
    *(undefined1 *)(*(long *)(lVar2 + 0x10) + lVar3) = *(undefined1 *)(lVar2 + 0x1731);
    *(undefined2 *)(lVar2 + 0x1730) = 0;
    iVar4 = 0;
  }
  else {
    if (*(int *)(lVar2 + 0x1734) < 8) goto LAB_004b4cb3;
    lVar3 = *(long *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = lVar3 + 1;
    *(undefined1 *)(*(long *)(lVar2 + 0x10) + lVar3) = *(undefined1 *)(lVar2 + 0x1730);
    *(ushort *)(lVar2 + 0x1730) = (ushort)*(byte *)(lVar2 + 0x1731);
    iVar4 = *(int *)(lVar2 + 0x1734) + -8;
  }
  *(int *)(lVar2 + 0x1734) = iVar4;
LAB_004b4cb3:
  uVar5 = *(uint *)(lVar2 + 0x28);
  if (*(uint *)(param_1 + 0x20) < *(uint *)(lVar2 + 0x28)) {
    uVar5 = *(uint *)(param_1 + 0x20);
  }
  if (uVar5 != 0) {
    __n = (ulong)uVar5;
    memcpy(*(void **)(param_1 + 0x18),*(void **)(lVar2 + 0x20),__n);
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + __n;
    *(long *)(lVar2 + 0x20) = *(long *)(lVar2 + 0x20) + __n;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + __n;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - uVar5;
    plVar1 = (long *)(lVar2 + 0x28);
    *plVar1 = *plVar1 - __n;
    if (*plVar1 == 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar2 + 0x10);
    }
  }
  return;
}


