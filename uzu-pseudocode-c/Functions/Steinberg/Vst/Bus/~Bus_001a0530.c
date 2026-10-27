// Function : ~Bus
// Namespace: Steinberg:Vst:Bus
// Entry    : 001a0530
// Prototype: undefined ~Bus(Bus * this)
// Body     : 001a0530 - 001a054f


/* Steinberg::Vst::Bus::~Bus() */

void __thiscall Steinberg::Vst::Bus::~Bus(Bus *this)

{
  *(undefined ***)this = &PTR_queryInterface_007030c0;
  if (*(Bus **)(this + 0x10) == this + 0x20) {
    return;
  }
  operator_delete(*(Bus **)(this + 0x10));
  return;
}


