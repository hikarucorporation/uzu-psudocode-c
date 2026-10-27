// Function : tell
// Namespace: Steinberg:IBStreamer
// Entry    : 001786c0
// Prototype: undefined8 tell(IBStreamer * this)
// Body     : 001786c0 - 001786db


/* Steinberg::IBStreamer::tell() */

undefined8 __thiscall Steinberg::IBStreamer::tell(IBStreamer *this)

{
  undefined8 local_8;
  
  local_8 = 0;
  (**(code **)(**(long **)(this + 0x10) + 0x30))(*(long **)(this + 0x10),&local_8);
  return local_8;
}


