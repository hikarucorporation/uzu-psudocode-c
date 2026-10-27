// Function : ~Buffer
// Namespace: Steinberg:Buffer
// Entry    : 00176910
// Prototype: undefined ~Buffer(Buffer * this)
// Body     : 00176910 - 00176935


/* Steinberg::Buffer::~Buffer() */

void __thiscall Steinberg::Buffer::~Buffer(Buffer *this)

{
  *(undefined ***)this = &PTR__Buffer_00702ba0;
  if (*(void **)(this + 8) != (void *)0x0) {
    free(*(void **)(this + 8));
  }
  *(undefined8 *)(this + 8) = 0;
  return;
}


