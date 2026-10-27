// Function : readChunkList
// Namespace: Steinberg:Vst:PresetFile
// Entry    : 00197610
// Prototype: ulong readChunkList(PresetFile * this)
// Body     : 00197610 - 0019788d


/* Steinberg::Vst::PresetFile::readChunkList() */

ulong __thiscall Steinberg::Vst::PresetFile::readChunkList(PresetFile *this)

{
  ulong uVar1;
  int iVar2;
  PresetFile *pPVar3;
  long lVar4;
  undefined8 local_68;
  int local_5c;
  int local_58 [2];
  ulong local_50;
  char local_48 [40];
  
  local_48[0] = -1;
  local_48[1] = -1;
  local_48[2] = -1;
  local_48[3] = -1;
  local_48[4] = -1;
  local_48[5] = -1;
  local_48[6] = -1;
  local_48[7] = -1;
  (**(code **)(**(long **)(this + 8) + 0x28))(*(long **)(this + 8),0,0,local_48);
  *(undefined4 *)(this + 0xc28) = 0;
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[0x18] = '\0';
  local_48[0x19] = '\0';
  local_48[0x1a] = '\0';
  local_48[0x1b] = '\0';
  local_48[0x1c] = '\0';
  local_48[0x1d] = '\0';
  local_48[0x1e] = '\0';
  local_48[0x1f] = '\0';
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_48[0x20] = 0;
  local_58[1] = 0;
  local_50 = 0;
  local_5c = 0;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),&local_5c,4,&local_68);
  if (((int)local_68 == 4) && (local_5c == 0x33545356)) {
    local_68 = local_68 & 0xffffffff00000000;
    (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),local_58 + 1,4,&local_68);
    if ((int)local_68 == 4) {
      pPVar3 = (PresetFile *)0x0;
      iVar2 = (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),local_48,0x20,0);
      if ((iVar2 != 3) && (iVar2 != 0)) goto LAB_001977d8;
      local_68 = local_68 & 0xffffffff00000000;
      (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),&local_50,8,&local_68);
      uVar1 = local_50;
      pPVar3 = (PresetFile *)0x0;
      if (((int)local_68 != 8) || ((long)local_50 < 1)) goto LAB_001977d8;
      local_68 = 0xffffffffffffffff;
      pPVar3 = (PresetFile *)0x0;
      (**(code **)(**(long **)(this + 8) + 0x28))(*(long **)(this + 8),local_50,0,&local_68);
      if (local_68 != uVar1) goto LAB_001977d8;
      FUID::fromString((FUID *)(this + 0x10),local_48);
      local_58[0] = 0;
      local_5c = 0;
      local_68 = local_68 & 0xffffffff00000000;
      (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),&local_5c,4,&local_68);
      if (((int)local_68 == 4) && (local_5c == 0x7473694c)) {
        local_68 = local_68 & 0xffffffff00000000;
        (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),local_58,4,&local_68);
        if ((int)local_68 == 4) {
          if (local_58[0] < 0x81) {
            if (0 < local_58[0]) goto LAB_001977ee;
          }
          else {
            local_58[0] = 0x80;
LAB_001977ee:
            pPVar3 = this + 0x38;
            lVar4 = 0;
            do {
              local_68 = local_68 & 0xffffffff00000000;
              (**(code **)(**(long **)(this + 8) + 0x18))
                        (*(long **)(this + 8),pPVar3 + -0x10,4,&local_68);
              if ((int)local_68 != 4) break;
              local_68 = local_68 & 0xffffffff00000000;
              (**(code **)(**(long **)(this + 8) + 0x18))
                        (*(long **)(this + 8),pPVar3 + -8,8,&local_68);
              if ((int)local_68 != 8) break;
              local_68 = local_68 & 0xffffffff00000000;
              (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),pPVar3,8,&local_68);
              if ((int)local_68 != 8) break;
              *(int *)(this + 0xc28) = *(int *)(this + 0xc28) + 1;
              lVar4 = lVar4 + 1;
              pPVar3 = pPVar3 + 0x18;
            } while (lVar4 < local_58[0]);
          }
          pPVar3 = (PresetFile *)CONCAT71((int7)((ulong)pPVar3 >> 8),0 < *(int *)(this + 0xc28));
          goto LAB_001977d8;
        }
      }
    }
  }
  pPVar3 = (PresetFile *)0x0;
LAB_001977d8:
  return (ulong)pPVar3 & 0xffffffff;
}


