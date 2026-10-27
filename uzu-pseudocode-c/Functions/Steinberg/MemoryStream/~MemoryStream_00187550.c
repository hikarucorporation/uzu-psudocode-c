// Function : ~MemoryStream
// Namespace: Steinberg:MemoryStream
// Entry    : 00187550
// Prototype: undefined ~MemoryStream(MemoryStream * this)
// Body     : 00187550 - 0018756e


/* Steinberg::MemoryStream::~MemoryStream() */

void __thiscall Steinberg::MemoryStream::~MemoryStream(MemoryStream *this)

{
  *(undefined ***)this = &PTR_queryInterface_00702dd8;
  if ((this[0x30] == (MemoryStream)0x0) || (*(void **)(this + 0x10) == (void *)0x0)) {
    return;
  }
  free(*(void **)(this + 0x10));
  return;
}


