// Function : ~String
// Namespace: Steinberg:String
// Entry    : 0017f6a0
// Prototype: undefined ~String(String * this)
// Body     : 0017f6a0 - 0017f6c4


/* Steinberg::String::~String() */

void __thiscall Steinberg::String::~String(String *this)

{
  *(undefined ***)this = &PTR__String_00702c10;
  if (*(void **)(this + 8) != (void *)0x0) {
    free(*(void **)(this + 8));
  }
  operator_delete(this);
  return;
}


