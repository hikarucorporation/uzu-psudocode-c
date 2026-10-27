// Function : writeHeader
// Namespace: Steinberg:Vst:PresetFile
// Entry    : 00196940
// Prototype: bool writeHeader(PresetFile * this)
// Body     : 00196940 - 00196a52


/* Steinberg::Vst::PresetFile::writeHeader() */

bool __thiscall Steinberg::Vst::PresetFile::writeHeader(PresetFile *this)

{
  int iVar1;
  int local_44;
  long local_40;
  char local_38 [40];
  
  local_38[0x10] = '\0';
  local_38[0x11] = '\0';
  local_38[0x12] = '\0';
  local_38[0x13] = '\0';
  local_38[0x14] = '\0';
  local_38[0x15] = '\0';
  local_38[0x16] = '\0';
  local_38[0x17] = '\0';
  local_38[0x18] = '\0';
  local_38[0x19] = '\0';
  local_38[0x1a] = '\0';
  local_38[0x1b] = '\0';
  local_38[0x1c] = '\0';
  local_38[0x1d] = '\0';
  local_38[0x1e] = '\0';
  local_38[0x1f] = '\0';
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  local_38[8] = '\0';
  local_38[9] = '\0';
  local_38[10] = '\0';
  local_38[0xb] = '\0';
  local_38[0xc] = '\0';
  local_38[0xd] = '\0';
  local_38[0xe] = '\0';
  local_38[0xf] = '\0';
  local_38[0x20] = 0;
  FUID::toString((FUID *)(this + 0x10),local_38);
  local_40 = -1;
  (**(code **)(**(long **)(this + 8) + 0x28))(*(long **)(this + 8),0,0,&local_40);
  if (local_40 == 0) {
    local_40 = 0;
    (**(code **)(**(long **)(this + 8) + 0x20))
              (*(long **)(this + 8),"VST3CompContProgInfoListN9Steinberg7FObjectE",4,&local_40);
    if ((int)local_40 == 4) {
      local_40 = CONCAT44(local_40._4_4_,1);
      local_44 = 0;
      (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),&local_40,4,&local_44);
      if (local_44 == 4) {
        iVar1 = (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),local_38,0x20,0);
        if ((iVar1 == 3) || (iVar1 == 0)) {
          local_40 = 0;
          local_44 = 0;
          (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),&local_40,8,&local_44);
          return local_44 == 8;
        }
        return false;
      }
    }
  }
  return false;
}


