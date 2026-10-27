// Function : BufferStream
// Namespace: Steinberg:Vst:BufferStream
// Entry    : 001990d0
// Prototype: undefined BufferStream(BufferStream * this)
// Body     : 001990d0 - 001990fa


/* Steinberg::Vst::BufferStream::BufferStream() */

void __thiscall Steinberg::Vst::BufferStream::BufferStream(BufferStream *this)

{
  *(undefined ***)this = &PTR_queryInterface_00704338;
  *(undefined ***)(this + 0x10) = &PTR__Buffer_00702ba0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x1000;
  *(undefined4 *)(this + 8) = 1;
  return;
}


