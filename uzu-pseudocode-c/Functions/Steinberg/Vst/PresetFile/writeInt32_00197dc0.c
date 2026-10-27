// Function : writeInt32
// Namespace: Steinberg:Vst:PresetFile
// Entry    : 00197dc0
// Prototype: bool writeInt32(PresetFile * this, uint param_1)
// Body     : 00197dc0 - 00197deb


/* Steinberg::Vst::PresetFile::writeInt32(int) */

bool __thiscall Steinberg::Vst::PresetFile::writeInt32(PresetFile *this,uint param_1)

{
  undefined8 local_8;
  
  local_8 = (ulong)param_1 << 0x20;
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),(long)&local_8 + 4,4,&local_8);
  return (int)local_8 == 4;
}


