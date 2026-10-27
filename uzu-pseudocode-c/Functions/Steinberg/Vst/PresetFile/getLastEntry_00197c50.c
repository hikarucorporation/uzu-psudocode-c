// Function : getLastEntry
// Namespace: Steinberg:Vst:PresetFile
// Entry    : 00197c50
// Prototype: PresetFile * getLastEntry(PresetFile * this)
// Body     : 00197c50 - 00197c6a


/* Steinberg::Vst::PresetFile::getLastEntry() const */

PresetFile * __thiscall Steinberg::Vst::PresetFile::getLastEntry(PresetFile *this)

{
  PresetFile *pPVar1;
  
  pPVar1 = (PresetFile *)0x0;
  if (0 < *(int *)(this + 0xc28)) {
    pPVar1 = this + (ulong)(*(int *)(this + 0xc28) - 1) * 0x18 + 0x28;
  }
  return pPVar1;
}


