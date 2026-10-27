// Function : writeSize
// Namespace: Steinberg:Vst:PresetFile
// Entry    : 00197d50
// Prototype: bool writeSize(PresetFile * this, undefined8 param_1)
// Body     : 00197d50 - 00197d86


/* Steinberg::Vst::PresetFile::writeSize(long) */

bool __thiscall Steinberg::Vst::PresetFile::writeSize(PresetFile *this,undefined8 param_1)

{
  int local_c;
  undefined8 local_8;
  
  local_c = 0;
  local_8 = param_1;
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),&local_8,8,&local_c);
  return local_c == 8;
}


