// Function : getLong1
// Namespace: Steinberg:FUID
// Entry    : 00185bb0
// Prototype: uint getLong1(FUID * this)
// Body     : 00185bb0 - 00185bb5


/* Steinberg::FUID::getLong1() const */

uint __thiscall Steinberg::FUID::getLong1(FUID *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 8);
  return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
}


