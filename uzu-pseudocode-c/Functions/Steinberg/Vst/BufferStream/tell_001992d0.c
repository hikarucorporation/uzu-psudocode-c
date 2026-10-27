// Function : tell
// Namespace: Steinberg:Vst:BufferStream
// Entry    : 001992d0
// Prototype: bool tell(BufferStream * this, ulong * param_1)
// Body     : 001992d0 - 001992e3


/* Steinberg::Vst::BufferStream::tell(long*) */

bool __thiscall Steinberg::Vst::BufferStream::tell(BufferStream *this,ulong *param_1)

{
  if (param_1 != (ulong *)0x0) {
    *param_1 = (ulong)*(uint *)(this + 0x24);
  }
  return param_1 == (ulong *)0x0;
}


