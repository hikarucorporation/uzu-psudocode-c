// Function : readEqualID
// Namespace: Steinberg:Vst:PresetFile
// Entry    : 00197cd0
// Prototype: bool readEqualID(PresetFile * this, int * param_1)
// Body     : 00197cd0 - 00197d1e


/* Steinberg::Vst::PresetFile::readEqualID(char const*) */

bool __thiscall Steinberg::Vst::PresetFile::readEqualID(PresetFile *this,int *param_1)

{
  int local_10;
  int local_c;
  
  local_10 = 0;
  local_c = 0;
  (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),&local_10,4,&local_c);
  if (local_c == 4) {
    return local_10 == *param_1;
  }
  return false;
}


