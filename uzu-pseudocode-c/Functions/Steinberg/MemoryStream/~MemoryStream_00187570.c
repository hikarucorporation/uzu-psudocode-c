// Function : ~MemoryStream
// Namespace: Steinberg:MemoryStream
// Entry    : 00187570
// Prototype: undefined ~MemoryStream(MemoryStream * this)
// Body     : 00187570 - 0018759a


/* Steinberg::MemoryStream::~MemoryStream() */

void __thiscall Steinberg::MemoryStream::~MemoryStream(MemoryStream *this)

{
  *(undefined ***)this = &PTR_queryInterface_00702dd8;
  if ((this[0x30] != (MemoryStream)0x0) && (*(void **)(this + 0x10) != (void *)0x0)) {
    free(*(void **)(this + 0x10));
  }
  operator_delete(this);
  return;
}


