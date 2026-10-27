// Function : getLong3
// Namespace: Steinberg:FUID
// Entry    : 00185bd0
// Prototype: uint getLong3(FUID * this)
// Body     : 00185bd0 - 00185bd5


/* Steinberg::FUID::getLong3() const */

uint __thiscall Steinberg::FUID::getLong3(FUID *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x10);
  return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
}


