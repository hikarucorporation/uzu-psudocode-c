// Function : prepareMetaInfoUpdate
// Namespace: Steinberg:Vst:PresetFile
// Entry    : 00197fb0
// Prototype: bool prepareMetaInfoUpdate(PresetFile * this)
// Body     : 00197fb0 - 00198067


/* Steinberg::Vst::PresetFile::prepareMetaInfoUpdate() */

bool __thiscall Steinberg::Vst::PresetFile::prepareMetaInfoUpdate(PresetFile *this)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long local_10;
  
  uVar1 = *(uint *)(this + 0xc28);
  lVar3 = 0x30;
  if (0 < (int)uVar1) {
    lVar2 = 0;
    do {
      if (*(int *)(this + lVar2 + 0x28) == 0x6f666e49) {
        if ((ulong)(uVar1 - 1) * 0x18 != lVar2) {
          return false;
        }
        lVar3 = *(long *)(this + lVar2 + 0x30);
        *(uint *)(this + 0xc28) = uVar1 - 1;
        goto LAB_00198035;
      }
      lVar2 = lVar2 + 0x18;
    } while ((ulong)uVar1 * 0x18 != lVar2);
    if (0 < (int)uVar1) {
      lVar3 = *(long *)(this + (ulong)(uVar1 - 1) * 0x18 + 0x38) +
              *(long *)(this + (ulong)(uVar1 - 1) * 0x18 + 0x30);
    }
  }
LAB_00198035:
  local_10 = -1;
  (**(code **)(**(long **)(this + 8) + 0x28))(*(long **)(this + 8),lVar3,0,&local_10);
  return local_10 == lVar3;
}


