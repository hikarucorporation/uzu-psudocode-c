// Function : FUID
// Namespace: Steinberg:FUID
// Entry    : 00185ab0
// Prototype: undefined FUID(FUID * this, long param_1)
// Body     : 00185ab0 - 00185ac2


/* Steinberg::FUID::FUID(Steinberg::FUID const&) */

void __thiscall Steinberg::FUID::FUID(FUID *this,long param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)this = &PTR__FUID_00704de0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}


