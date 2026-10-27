// Function : String
// Namespace: Steinberg:String
// Entry    : 0017e8a0
// Prototype: undefined String(String * this)
// Body     : 0017e8a0 - 0017e8c2


/* Steinberg::String::String() */

void __thiscall Steinberg::String::String(String *this)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__String_00702c10;
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0x80000000 | 0x40000000;
  return;
}


