// Function : set
// Namespace: Steinberg:Buffer
// Entry    : 001775c0
// Prototype: undefined set(Buffer * this, byte param_1)
// Body     : 001775c0 - 001775d8


/* Steinberg::Buffer::set(unsigned char) */

void __thiscall Steinberg::Buffer::set(Buffer *this,byte param_1)

{
  if (*(void **)(this + 8) == (void *)0x0) {
    return;
  }
  memset(*(void **)(this + 8),(uint)param_1,(ulong)*(uint *)(this + 0x10));
  return;
}


