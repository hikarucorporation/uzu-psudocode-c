// Function : readSize
// Namespace: Steinberg:Vst:PresetFile
// Entry    : 00197d20
// Prototype: bool readSize(PresetFile * this, undefined8 param_1)
// Body     : 00197d20 - 00197d46


/* Steinberg::Vst::PresetFile::readSize(long&) */

bool __thiscall Steinberg::Vst::PresetFile::readSize(PresetFile *this,undefined8 param_1)

{
  uint in_EAX;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),param_1,8,(long)&uStack_8 + 4);
  return uStack_8._4_4_ == 8;
}


