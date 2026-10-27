// Function : ~EventBus
// Namespace: Steinberg:Vst:EventBus
// Entry    : 001a0470
// Prototype: undefined ~EventBus(EventBus * this)
// Body     : 001a0470 - 001a0498


/* Steinberg::Vst::EventBus::~EventBus() */

void __thiscall Steinberg::Vst::EventBus::~EventBus(EventBus *this)

{
  *(undefined ***)this = &PTR_queryInterface_007030c0;
  if (*(EventBus **)(this + 0x10) != this + 0x20) {
    operator_delete(*(EventBus **)(this + 0x10));
  }
  operator_delete(this);
  return;
}


