// Function : getChunkID
// Namespace: Steinberg:Vst
// Entry    : 00196640
// Prototype: undefined1 * getChunkID(uint param_1)
// Body     : 00196640 - 0019664d


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::Vst::getChunkID(Steinberg::Vst::ChunkType) */

undefined1 * __cdecl Steinberg::Vst::getChunkID(uint param_1)

{
  return "VST3CompContProgInfoListN9Steinberg7FObjectE" + (ulong)param_1 * 4;
}


