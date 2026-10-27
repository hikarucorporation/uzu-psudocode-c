// Function : ~StringObject
// Namespace: Steinberg:StringObject
// Entry    : 0019fb80
// Prototype: undefined ~StringObject(StringObject * this)
// Body     : 0019fb80 - 0019fbb6


/* non-virtual thunk to Steinberg::StringObject::~StringObject() */

void __thiscall Steinberg::StringObject::~StringObject(StringObject *this)

{
  *(undefined ***)this = &PTR__String_00702c10;
  if (*(void **)(this + 8) != (void *)0x0) {
    free(*(void **)(this + 8));
    *(undefined8 *)(this + 8) = 0;
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0x80000000;
  }
  *(undefined ***)this = &PTR__ConstString_00704d88;
  return;
}


