// Function : ~Bus
// Namespace: Steinberg:Vst:Bus
// Entry    : 001a03d0
// Prototype: undefined ~Bus(Bus * this)
// Body     : 001a03d0 - 001a03f8


/* Steinberg::Vst::Bus::~Bus() */

void __thiscall Steinberg::Vst::Bus::~Bus(Bus *this)

{
  *(undefined ***)this = &PTR_queryInterface_007030c0;
  if (*(Bus **)(this + 0x10) != this + 0x20) {
    operator_delete(*(Bus **)(this + 0x10));
  }
  operator_delete(this);
  return;
}


