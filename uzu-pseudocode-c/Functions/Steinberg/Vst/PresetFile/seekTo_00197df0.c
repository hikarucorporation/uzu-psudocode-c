// Function : seekTo
// Namespace: Steinberg:Vst:PresetFile
// Entry    : 00197df0
// Prototype: bool seekTo(PresetFile * this, long param_1)
// Body     : 00197df0 - 00197e1f


/* Steinberg::Vst::PresetFile::seekTo(long) */

bool __thiscall Steinberg::Vst::PresetFile::seekTo(PresetFile *this,long param_1)

{
  long local_10;
  
  local_10 = -1;
  (**(code **)(**(long **)(this + 8) + 0x28))(*(long **)(this + 8),param_1,0,&local_10);
  return local_10 == param_1;
}


