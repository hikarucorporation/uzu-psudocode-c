// Function : connect
// Namespace: Steinberg:Vst:ComponentBase
// Entry    : 001919f0
// Prototype: undefined8 connect(ComponentBase * this, long * param_1)
// Body     : 001919f0 - 00191a1b


/* Steinberg::Vst::ComponentBase::connect(Steinberg::Vst::IConnectionPoint*) */

undefined8 __thiscall Steinberg::Vst::ComponentBase::connect(ComponentBase *this,long *param_1)

{
  if (param_1 == (long *)0x0) {
    return 2;
  }
  if (*(long *)(this + 0x28) == 0) {
    *(long **)(this + 0x28) = param_1;
    (**(code **)(*param_1 + 8))(param_1);
    return 0;
  }
  return 1;
}


