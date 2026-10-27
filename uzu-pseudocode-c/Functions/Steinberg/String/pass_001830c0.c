// Function : pass
// Namespace: Steinberg:String
// Entry    : 001830c0
// Prototype: undefined8 pass(String * this)
// Body     : 001830c0 - 001830d3


/* Steinberg::String::pass() */

undefined8 __thiscall Steinberg::String::pass(String *this)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(this + 8);
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xc0000000;
  *(undefined8 *)(this + 8) = 0;
  return uVar1;
}


