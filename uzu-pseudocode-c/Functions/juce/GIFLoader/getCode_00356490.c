// Function : getCode
// Namespace: juce:GIFLoader
// Entry    : 00356490
// Prototype: uint getCode(long param_1, uint param_2)
// Body     : 00356490 - 0035661e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::GIFLoader::getCode(int, bool) */

uint __cdecl juce::GIFLoader::getCode(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 in_RAX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte local_11;
  
  local_11 = (byte)((ulong)in_RAX >> 0x38);
  iVar1 = *(int *)(param_1 + 0x518);
  if (*(int *)(param_1 + 0x51c) <= (int)(iVar1 + param_2)) {
    if (*(char *)(param_1 + 0x516) != '\0') {
      return 0xffffffff;
    }
    iVar1 = *(int *)(param_1 + 0x520);
    iVar3 = 2;
    if (2 < iVar1) {
      iVar3 = iVar1;
    }
    *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_1 + 0x10 + (ulong)(iVar3 - 2));
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_1 + 0x10 + (ulong)(iVar1 - 1));
    iVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x20))(*(long **)(param_1 + 8),&local_11,1);
    if (iVar1 == 1) {
      *(bool *)(param_1 + 0x514) = local_11 == 0;
      if (local_11 == 0) {
LAB_00356539:
        *(undefined1 *)(param_1 + 0x516) = 1;
        uVar2 = 0;
      }
      else {
        uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x20))
                          (*(long **)(param_1 + 8),param_1 + 0x12);
        if (uVar2 != local_11) goto LAB_00356544;
        if (local_11 == 0) goto LAB_00356539;
      }
    }
    else {
LAB_00356544:
      uVar2 = 0xffffffff;
    }
    *(uint *)(param_1 + 0x520) = uVar2 + 2;
    iVar1 = (*(int *)(param_1 + 0x518) - *(int *)(param_1 + 0x51c)) + 0x10;
    *(int *)(param_1 + 0x518) = iVar1;
    *(uint *)(param_1 + 0x51c) = uVar2 * 8 + 0x10;
  }
  uVar2 = 0;
  if (0 < (int)param_2) {
    uVar5 = 0;
    iVar3 = iVar1;
    if (param_2 != 1) {
      uVar5 = param_2 & 0xfffffffe;
      uVar4 = 0;
      uVar2 = 0;
      do {
        iVar3 = iVar1 + uVar4 + 1;
        uVar2 = (*(byte *)(param_1 + 0x10 + (long)(iVar3 >> 3)) >> ((byte)iVar3 & 7) & 1) <<
                ((byte)uVar4 + 1 & 0x1f) |
                (*(byte *)(param_1 + 0x10 + (long)((int)(iVar1 + uVar4) >> 3)) >>
                 ((byte)(iVar1 + uVar4) & 7) & 1) << ((byte)uVar4 & 0x1f) | uVar2;
        uVar4 = uVar4 + 2;
      } while (uVar4 != uVar5);
      if ((param_2 & 1) == 0) goto LAB_0035660e;
      iVar3 = uVar4 + iVar1;
    }
    uVar2 = uVar2 | (*(byte *)(param_1 + 0x10 + (long)(iVar3 >> 3)) >> ((byte)iVar3 & 7) & 1) <<
                    ((byte)uVar5 & 0x1f);
  }
LAB_0035660e:
  *(uint *)(param_1 + 0x518) = iVar1 + param_2;
  return uVar2;
}


