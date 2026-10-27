// Function : pass
// Namespace: Steinberg:Buffer
// Entry    : 00177b50
// Prototype: undefined8 pass(Buffer * this)
// Body     : 00177b50 - 00177b5b


/* Steinberg::Buffer::pass() */

undefined8 __thiscall Steinberg::Buffer::pass(Buffer *this)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return uVar1;
}


