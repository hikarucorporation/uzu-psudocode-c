// Function : PresetFile
// Namespace: Steinberg:Vst:PresetFile
// Entry    : 00197b70
// Prototype: undefined PresetFile(PresetFile * this, long * param_1)
// Body     : 00197b70 - 00197bad


/* Steinberg::Vst::PresetFile::PresetFile(Steinberg::IBStream*) */

void __thiscall Steinberg::Vst::PresetFile::PresetFile(PresetFile *this,long *param_1)

{
  *(undefined ***)this = &PTR__PresetFile_00704268;
  *(long **)(this + 8) = param_1;
  *(undefined ***)(this + 0x10) = &PTR__FUID_00704de0;
  memset(this + 0x18,0,0xc14);
  if (param_1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00197ba9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}


