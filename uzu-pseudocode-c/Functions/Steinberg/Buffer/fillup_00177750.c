// Function : fillup
// Namespace: Steinberg:Buffer
// Entry    : 00177750
// Prototype: undefined fillup(Buffer * this, byte param_1)
// Body     : 00177750 - 0017776c


/* Steinberg::Buffer::fillup(unsigned char) */

void __thiscall Steinberg::Buffer::fillup(Buffer *this,byte param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(this + 0x10) - *(uint *)(this + 0x14);
  if (uVar1 == 0) {
    return;
  }
  memset((void *)((ulong)*(uint *)(this + 0x14) + *(long *)(this + 8)),(uint)param_1,(ulong)uVar1);
  return;
}


