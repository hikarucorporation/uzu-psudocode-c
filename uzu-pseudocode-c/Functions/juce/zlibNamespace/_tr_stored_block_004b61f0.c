// Function : _tr_stored_block
// Namespace: juce:zlibNamespace
// Entry    : 004b61f0
// Prototype: undefined _tr_stored_block(long param_1, void * param_2, size_t param_3, uint param_4)
// Body     : 004b61f0 - 004b6359


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::zlibNamespace::_tr_stored_block(juce::zlibNamespace::internal_state*, char*, unsigned long,
   int) */

void __cdecl
juce::zlibNamespace::_tr_stored_block(long param_1,void *param_2,size_t param_3,uint param_4)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_1 + 0x1734);
  if (iVar3 < 0xe) {
    uVar2 = (ushort)(param_4 << ((byte)iVar3 & 0x1f)) | *(ushort *)(param_1 + 0x1730);
    *(ushort *)(param_1 + 0x1730) = uVar2;
    iVar3 = iVar3 + 3;
    uVar4 = (uint)uVar2;
  }
  else {
    uVar2 = (ushort)(param_4 << ((byte)iVar3 & 0x1f)) | *(ushort *)(param_1 + 0x1730);
    *(ushort *)(param_1 + 0x1730) = uVar2;
    lVar1 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar1 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + lVar1) = (char)uVar2;
    lVar1 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar1 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar1) = *(undefined1 *)(param_1 + 0x1731);
    uVar4 = (param_4 & 0xffff) >> (0x10U - (char)*(int *)(param_1 + 0x1734) & 0x1f);
    *(short *)(param_1 + 0x1730) = (short)uVar4;
    iVar3 = *(int *)(param_1 + 0x1734) + -0xd;
  }
  if (iVar3 < 9) {
    if (0 < iVar3) {
      lVar1 = *(long *)(param_1 + 0x28);
      *(long *)(param_1 + 0x28) = lVar1 + 1;
      *(char *)(*(long *)(param_1 + 0x10) + lVar1) = (char)uVar4;
    }
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar1 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + lVar1) = (char)uVar4;
    lVar1 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar1 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar1) = *(undefined1 *)(param_1 + 0x1731);
  }
  *(undefined2 *)(param_1 + 0x1730) = 0;
  *(undefined4 *)(param_1 + 0x1734) = 0;
  lVar1 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar1 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + lVar1) = (char)param_3;
  lVar1 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar1 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + lVar1) = (char)(param_3 >> 8);
  lVar1 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar1 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + lVar1) = (char)~(uint)param_3;
  lVar1 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar1 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + lVar1) = (char)(~(uint)param_3 >> 8);
  if (param_3 != 0) {
    memcpy((void *)(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x28)),param_2,param_3);
  }
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + param_3;
  return;
}


