// Function : ~PresetFile
// Namespace: Steinberg:Vst:PresetFile
// Entry    : 00197bb0
// Prototype: undefined8 ~PresetFile(PresetFile * this)
// Body     : 00197bb0 - 00197bcb


/* Steinberg::Vst::PresetFile::~PresetFile() */

undefined8 __thiscall Steinberg::Vst::PresetFile::~PresetFile(PresetFile *this)

{
  undefined8 in_RAX;
  
  *(undefined ***)this = &PTR__PresetFile_00704268;
  if (*(long **)(this + 8) != (long *)0x0) {
                    /* try { // try from 00197bc7 to 00197bc9 has its CatchHandler @ 00197bcc */
    (**(code **)(**(long **)(this + 8) + 0x10))();
  }
  return in_RAX;
}


