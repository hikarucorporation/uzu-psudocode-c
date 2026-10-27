// Function : Unit
// Namespace: Steinberg:Vst:Unit
// Entry    : 00193990
// Prototype: undefined Unit(Unit * this)
// Body     : 00193990 - 001939b0


/* Steinberg::Vst::Unit::Unit() */

void __thiscall Steinberg::Vst::Unit::Unit(Unit *this)

{
  *(undefined4 *)(this + 8) = 1;
  *(undefined ***)this = &PTR_queryInterface_00704e88;
  memset(this + 0xc,0,0x10c);
  return;
}


