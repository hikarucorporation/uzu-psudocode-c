// Function : beginChunk
// Namespace: Steinberg:Vst:PresetFile
// Entry    : 00197e20
// Prototype: bool beginChunk(PresetFile * this, undefined4 * param_1, uint param_2)
// Body     : 00197e20 - 00197e64


/* Steinberg::Vst::PresetFile::beginChunk(Steinberg::Vst::PresetFile::Entry&,
   Steinberg::Vst::ChunkType) */

bool __thiscall
Steinberg::Vst::PresetFile::beginChunk(PresetFile *this,undefined4 *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0xc28);
  if (iVar1 < 0x80) {
    *param_1 = *(undefined4 *)("VST3CompContProgInfoListN9Steinberg7FObjectE" + (ulong)param_2 * 4);
    (**(code **)(**(long **)(this + 8) + 0x30))(*(long **)(this + 8),param_1 + 2);
    *(undefined8 *)(param_1 + 4) = 0;
  }
  return iVar1 < 0x80;
}


