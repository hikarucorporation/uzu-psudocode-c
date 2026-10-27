// Function : getEntry
// Namespace: Steinberg:Vst:PresetFile
// Entry    : 00197c10
// Prototype: PresetFile * getEntry(PresetFile * this, uint param_1)
// Body     : 00197c10 - 00197c45


/* Steinberg::Vst::PresetFile::getEntry(Steinberg::Vst::ChunkType) const */

PresetFile * __thiscall Steinberg::Vst::PresetFile::getEntry(PresetFile *this,uint param_1)

{
  ulong uVar1;
  PresetFile *pPVar2;
  
  uVar1 = (ulong)*(uint *)(this + 0xc28);
  if ((int)*(uint *)(this + 0xc28) < 1) {
    return (PresetFile *)0x0;
  }
  pPVar2 = this + 0x28;
  do {
    if (*(int *)pPVar2 ==
        *(int *)("VST3CompContProgInfoListN9Steinberg7FObjectE" + (ulong)param_1 * 4)) {
      return pPVar2;
    }
    pPVar2 = pPVar2 + 0x18;
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  return (PresetFile *)0x0;
}


