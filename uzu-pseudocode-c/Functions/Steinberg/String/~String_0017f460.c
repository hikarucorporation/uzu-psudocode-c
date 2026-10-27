// Function : ~String
// Namespace: Steinberg:String
// Entry    : 0017f460
// Prototype: undefined ~String(String * this)
// Body     : 0017f460 - 0017f496


/* Steinberg::String::~String() */

void __thiscall Steinberg::String::~String(String *this)

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


