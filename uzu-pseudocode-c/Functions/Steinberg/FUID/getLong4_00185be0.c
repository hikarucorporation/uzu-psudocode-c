// Function : getLong4
// Namespace: Steinberg:FUID
// Entry    : 00185be0
// Prototype: uint getLong4(FUID * this)
// Body     : 00185be0 - 00185be5


/* Steinberg::FUID::getLong4() const */

uint __thiscall Steinberg::FUID::getLong4(FUID *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x14);
  return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
}


