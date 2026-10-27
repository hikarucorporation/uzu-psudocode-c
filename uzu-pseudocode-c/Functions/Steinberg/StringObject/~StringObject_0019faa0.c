// Function : ~StringObject
// Namespace: Steinberg:StringObject
// Entry    : 0019faa0
// Prototype: undefined ~StringObject(StringObject * this)
// Body     : 0019faa0 - 0019fad8


/* Steinberg::StringObject::~StringObject() */

void __thiscall Steinberg::StringObject::~StringObject(StringObject *this)

{
  *(undefined ***)(this + 0x10) = &PTR__String_00702c10;
  if (*(void **)(this + 0x18) != (void *)0x0) {
    free(*(void **)(this + 0x18));
    *(undefined8 *)(this + 0x18) = 0;
    *(uint *)(this + 0x20) = *(uint *)(this + 0x20) & 0x80000000;
  }
  *(undefined ***)(this + 0x10) = &PTR__ConstString_00704d88;
  return;
}


