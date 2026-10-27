// Function : truncateToFillSize
// Namespace: Steinberg:Buffer
// Entry    : 001775e0
// Prototype: undefined1 truncateToFillSize(Buffer * this)
// Body     : 001775e0 - 001775f1


/* Steinberg::Buffer::truncateToFillSize() */

undefined1 __thiscall Steinberg::Buffer::truncateToFillSize(Buffer *this)

{
  if (*(uint *)(this + 0x14) < *(uint *)(this + 0x10)) {
    setSize(this,*(uint *)(this + 0x14));
  }
  return 1;
}


