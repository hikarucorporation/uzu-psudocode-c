// Function : grow
// Namespace: Steinberg:Buffer
// Entry    : 00176c40
// Prototype: bool grow(Buffer * this, uint param_1)
// Body     : 00176c40 - 00176c6c


/* Steinberg::Buffer::grow(unsigned int) */

bool __thiscall Steinberg::Buffer::grow(Buffer *this,uint param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 <= *(uint *)(this + 0x10)) {
    return true;
  }
  uVar2 = *(uint *)(this + 0x18);
  if (uVar2 == 0) {
    *(undefined4 *)(this + 0x18) = 0x1000;
    uVar2 = 0x1000;
  }
  uVar3 = (param_1 + uVar2) - 1;
  bVar1 = setSize(this,uVar3 - uVar3 % uVar2);
  return bVar1;
}


