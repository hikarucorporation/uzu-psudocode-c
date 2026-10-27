// Function : writeChunk
// Namespace: Steinberg:Vst:PresetFile
// Entry    : 00198070
// Prototype: undefined4 writeChunk(PresetFile * this, undefined8 param_1, undefined4 param_2, ulong param_3)
// Body     : 00198070 - 0019819e


/* Steinberg::Vst::PresetFile::writeChunk(void const*, int, Steinberg::Vst::ChunkType) */

undefined4 __thiscall
Steinberg::Vst::PresetFile::writeChunk
          (PresetFile *this,undefined8 param_1,undefined4 param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  ulong local_48;
  long alStack_40 [3];
  long local_28;
  
  uVar1 = *(uint *)(this + 0xc28);
  if ((int)uVar1 < 1) {
    uVar2 = *(uint *)("VST3CompContProgInfoListN9Steinberg7FObjectE" + (param_3 & 0xffffffff) * 4);
  }
  else {
    uVar2 = *(uint *)("VST3CompContProgInfoListN9Steinberg7FObjectE" + (param_3 & 0xffffffff) * 4);
    lVar6 = 0;
    do {
      if (*(uint *)(this + lVar6 + 0x28) == uVar2) {
        return 0;
      }
      lVar6 = lVar6 + 0x18;
    } while ((ulong)uVar1 * 0x18 != lVar6);
    if (0x7f < (int)uVar1) {
      return 0;
    }
  }
  alStack_40[1] = 0;
  alStack_40[0] = 0;
  local_48 = (ulong)uVar2;
  (**(code **)(**(long **)(this + 8) + 0x30))(*(long **)(this + 8),alStack_40);
  alStack_40[1] = 0;
  uVar5 = 0;
  iVar4 = (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_2,0);
  if ((iVar4 == 3) || (iVar4 == 0)) {
    iVar4 = *(int *)(this + 0xc28);
    if (iVar4 < 0x80) {
      local_28 = 0;
      (**(code **)(**(long **)(this + 8) + 0x30))(*(long **)(this + 8),&local_28);
      iVar3 = *(int *)(this + 0xc28);
      *(int *)(this + 0xc28) = iVar3 + 1;
      *(long *)(this + (long)iVar3 * 0x18 + 0x38) = local_28 - alStack_40[0];
      *(ulong *)(this + (long)iVar3 * 0x18 + 0x28) = local_48;
      *(long *)(this + (long)iVar3 * 0x18 + 0x28 + 8) = alStack_40[0];
    }
    uVar5 = CONCAT31((int3)((uint)iVar4 >> 8),iVar4 < 0x80);
  }
  return uVar5;
}


