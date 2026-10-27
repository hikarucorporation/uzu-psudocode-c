// Function : operator=
// Namespace: Steinberg:FUID
// Entry    : 00185b80
// Prototype: FUID * operator=(FUID * this, long param_1)
// Body     : 00185b80 - 00185b8b


/* Steinberg::FUID::TEMPNAMEPLACEHOLDERVALUE(Steinberg::FUID const&) */

FUID * __thiscall Steinberg::FUID::operator=(FUID *this,long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = uVar1;
  return this;
}


