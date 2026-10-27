// Function : setFillSize
// Namespace: Steinberg:Buffer
// Entry    : 001775b0
// Prototype: undefined4 setFillSize(Buffer * this, uint param_1)
// Body     : 001775b0 - 001775bf


/* Steinberg::Buffer::setFillSize(unsigned int) */

undefined4 __thiscall Steinberg::Buffer::setFillSize(Buffer *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x10);
  if (param_1 <= uVar1) {
    *(uint *)(this + 0x14) = param_1;
  }
  return CONCAT31((int3)(uVar1 >> 8),param_1 <= uVar1);
}


