// Function : readInt32
// Namespace: Steinberg:Vst:PresetFile
// Entry    : 00197d90
// Prototype: bool readInt32(PresetFile * this, undefined8 param_1)
// Body     : 00197d90 - 00197db6


/* Steinberg::Vst::PresetFile::readInt32(int&) */

bool __thiscall Steinberg::Vst::PresetFile::readInt32(PresetFile *this,undefined8 param_1)

{
  uint in_EAX;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),param_1,4,(long)&uStack_8 + 4);
  return uStack_8._4_4_ == 4;
}


