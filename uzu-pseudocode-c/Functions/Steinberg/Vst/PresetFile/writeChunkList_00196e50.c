// Function : writeChunkList
// Namespace: Steinberg:Vst:PresetFile
// Entry    : 00196e50
// Prototype: undefined8 writeChunkList(PresetFile * this)
// Body     : 00196e50 - 0019703d


/* Steinberg::Vst::PresetFile::writeChunkList() */

undefined8 __thiscall Steinberg::Vst::PresetFile::writeChunkList(PresetFile *this)

{
  ulong uVar1;
  long lVar2;
  PresetFile *pPVar3;
  int local_44;
  ulong local_40;
  ulong local_38;
  
  local_38 = 0;
  (**(code **)(**(long **)(this + 8) + 0x30))(*(long **)(this + 8),&local_38);
  local_40 = 0xffffffffffffffff;
  (**(code **)(**(long **)(this + 8) + 0x28))(*(long **)(this + 8),0x28,0,&local_40);
  if (local_40 == 0x28) {
    local_40 = local_38;
    local_44 = 0;
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),&local_40,8,&local_44);
    uVar1 = local_38;
    if (local_44 == 8) {
      local_40 = 0xffffffffffffffff;
      (**(code **)(**(long **)(this + 8) + 0x28))(*(long **)(this + 8),local_38,0,&local_40);
      if (local_40 != uVar1) {
        return 0;
      }
      local_40 = local_40 & 0xffffffff00000000;
      (**(code **)(**(long **)(this + 8) + 0x20))
                (*(long **)(this + 8),"ListN9Steinberg7FObjectE",4,&local_40);
      if ((int)local_40 == 4) {
        local_40 = CONCAT44(local_40._4_4_,*(undefined4 *)(this + 0xc28));
        local_44 = 0;
        (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),&local_40,4,&local_44);
        if (local_44 == 4) {
          if (*(int *)(this + 0xc28) < 1) {
            return 1;
          }
          pPVar3 = this + 0x28;
          lVar2 = 0;
          while( true ) {
            local_40 = local_40 & 0xffffffff00000000;
            (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),pPVar3,4,&local_40);
            if ((int)local_40 != 4) break;
            local_40 = *(ulong *)(pPVar3 + 8);
            local_44 = 0;
            (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),&local_40,8,&local_44);
            if (local_44 != 8) {
              return 0;
            }
            local_40 = *(ulong *)(pPVar3 + 0x10);
            local_44 = 0;
            (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),&local_40,8,&local_44);
            if (local_44 != 8) {
              return 0;
            }
            lVar2 = lVar2 + 1;
            pPVar3 = pPVar3 + 0x18;
            if (*(int *)(this + 0xc28) <= lVar2) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}


