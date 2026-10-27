// Function : ~StringObject
// Namespace: Steinberg:StringObject
// Entry    : 0019fae0
// Prototype: undefined ~StringObject(StringObject * this)
// Body     : 0019fae0 - 0019fb05


/* Steinberg::StringObject::~StringObject() */

void __thiscall Steinberg::StringObject::~StringObject(StringObject *this)

{
  *(undefined ***)(this + 0x10) = &PTR__String_00702c10;
  if (*(void **)(this + 0x18) != (void *)0x0) {
    free(*(void **)(this + 0x18));
  }
  operator_delete(this);
  return;
}


