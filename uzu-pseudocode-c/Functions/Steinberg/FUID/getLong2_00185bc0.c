// Function : getLong2
// Namespace: Steinberg:FUID
// Entry    : 00185bc0
// Prototype: uint getLong2(FUID * this)
// Body     : 00185bc0 - 00185bc5


/* Steinberg::FUID::getLong2() const */

uint __thiscall Steinberg::FUID::getLong2(FUID *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xc);
  return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
}


