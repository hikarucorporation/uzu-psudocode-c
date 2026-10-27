// Function : Unit
// Namespace: Steinberg:Vst:Unit
// Entry    : 00193b00
// Prototype: undefined Unit(Unit * this, void * param_1)
// Body     : 00193b00 - 00193b1e


/* Steinberg::Vst::Unit::Unit(Steinberg::Vst::UnitInfo const&) */

void __thiscall Steinberg::Vst::Unit::Unit(Unit *this,void *param_1)

{
  *(undefined4 *)(this + 8) = 1;
  *(undefined ***)this = &PTR_queryInterface_00704e88;
  memcpy(this + 0xc,param_1,0x10c);
  return;
}


