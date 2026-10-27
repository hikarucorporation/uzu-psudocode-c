// Function : writeID
// Namespace: Steinberg:Vst:PresetFile
// Entry    : 00197ca0
// Prototype: bool writeID(PresetFile * this, undefined8 param_1)
// Body     : 00197ca0 - 00197cc6


/* Steinberg::Vst::PresetFile::writeID(char const*) */

bool __thiscall Steinberg::Vst::PresetFile::writeID(PresetFile *this,undefined8 param_1)

{
  uint in_EAX;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,4,(long)&uStack_8 + 4);
  return uStack_8._4_4_ == 4;
}


