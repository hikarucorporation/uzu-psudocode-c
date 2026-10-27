// Function : ~StringObject
// Namespace: Steinberg:StringObject
// Entry    : 0019fbc0
// Prototype: undefined ~StringObject(StringObject * this)
// Body     : 0019fbc0 - 0019fbe5


/* non-virtual thunk to Steinberg::StringObject::~StringObject() */

void __thiscall Steinberg::StringObject::~StringObject(StringObject *this)

{
  *(undefined ***)this = &PTR__String_00702c10;
  if (*(void **)(this + 8) != (void *)0x0) {
    free(*(void **)(this + 8));
  }
  operator_delete(this + -0x10);
  return;
}


