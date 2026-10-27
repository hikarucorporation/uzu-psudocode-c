// Function : endChunk
// Namespace: Steinberg:Vst:PresetFile
// Entry    : 00197e70
// Prototype: bool endChunk(PresetFile * this, undefined8 * param_1)
// Body     : 00197e70 - 00197ee5


/* Steinberg::Vst::PresetFile::endChunk(Steinberg::Vst::PresetFile::Entry&) */

bool __thiscall Steinberg::Vst::PresetFile::endChunk(PresetFile *this,undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long local_20;
  
  iVar1 = *(int *)(this + 0xc28);
  if (iVar1 < 0x80) {
    local_20 = 0;
    (**(code **)(**(long **)(this + 8) + 0x30))(*(long **)(this + 8),&local_20);
    param_1[2] = local_20 - param_1[1];
    iVar2 = *(int *)(this + 0xc28);
    *(int *)(this + 0xc28) = iVar2 + 1;
    uVar3 = param_1[1];
    *(undefined8 *)(this + (long)iVar2 * 0x18 + 0x28) = *param_1;
    *(undefined8 *)(this + (long)iVar2 * 0x18 + 0x28 + 8) = uVar3;
    *(undefined8 *)(this + (long)iVar2 * 0x18 + 0x38) = param_1[2];
  }
  return iVar1 < 0x80;
}


