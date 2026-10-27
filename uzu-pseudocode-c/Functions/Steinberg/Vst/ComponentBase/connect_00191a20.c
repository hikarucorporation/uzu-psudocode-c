// Function : connect
// Namespace: Steinberg:Vst:ComponentBase
// Entry    : 00191a20
// Prototype: undefined8 connect(ComponentBase * this, long * param_1)
// Body     : 00191a20 - 00191a4b


/* non-virtual thunk to Steinberg::Vst::ComponentBase::connect(Steinberg::Vst::IConnectionPoint*) */

undefined8 __thiscall Steinberg::Vst::ComponentBase::connect(ComponentBase *this,long *param_1)

{
  if (param_1 == (long *)0x0) {
    return 2;
  }
  if (*(long *)(this + 0x10) == 0) {
    *(long **)(this + 0x10) = param_1;
    (**(code **)(*param_1 + 8))(param_1);
    return 0;
  }
  return 1;
}


