// Function : ~BufferStream
// Namespace: Steinberg:Vst:BufferStream
// Entry    : 00199100
// Prototype: undefined ~BufferStream(BufferStream * this)
// Body     : 00199100 - 00199130


/* Steinberg::Vst::BufferStream::~BufferStream() */

void __thiscall Steinberg::Vst::BufferStream::~BufferStream(BufferStream *this)

{
  *(undefined ***)this = &PTR_queryInterface_00704338;
  *(undefined ***)(this + 0x10) = &PTR__Buffer_00702ba0;
  if (*(void **)(this + 0x18) != (void *)0x0) {
    free(*(void **)(this + 0x18));
  }
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


