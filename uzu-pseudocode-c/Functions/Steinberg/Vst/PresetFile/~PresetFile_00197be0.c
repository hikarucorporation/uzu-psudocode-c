// Function : ~PresetFile
// Namespace: Steinberg:Vst:PresetFile
// Entry    : 00197be0
// Prototype: undefined ~PresetFile(PresetFile * this)
// Body     : 00197be0 - 00197c05


/* Steinberg::Vst::PresetFile::~PresetFile() */

void __thiscall Steinberg::Vst::PresetFile::~PresetFile(PresetFile *this)

{
  *(undefined ***)this = &PTR__PresetFile_00704268;
  if (*(long **)(this + 8) != (long *)0x0) {
                    /* try { // try from 00197bfa to 00197bfc has its CatchHandler @ 00197c06 */
    (**(code **)(**(long **)(this + 8) + 0x10))();
  }
  operator_delete(this);
  return;
}


