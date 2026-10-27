// Function : ~Buffer
// Namespace: Steinberg:Buffer
// Entry    : 00176940
// Prototype: undefined ~Buffer(Buffer * this)
// Body     : 00176940 - 00176964


/* Steinberg::Buffer::~Buffer() */

void __thiscall Steinberg::Buffer::~Buffer(Buffer *this)

{
  *(undefined ***)this = &PTR__Buffer_00702ba0;
  if (*(void **)(this + 8) != (void *)0x0) {
    free(*(void **)(this + 8));
  }
  operator_delete(this);
  return;
}


