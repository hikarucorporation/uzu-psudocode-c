// Function : initialize
// Namespace: Steinberg:Vst:Component
// Entry    : 00190e00
// Prototype: undefined8 initialize(Component * this, long * param_1)
// Body     : 00190e00 - 00190e28


/* non-virtual thunk to Steinberg::Vst::Component::initialize(Steinberg::FUnknown*) */

undefined8 __thiscall Steinberg::Vst::Component::initialize(Component *this,long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if ((*(long *)(this + -0x10) == 0) && (uVar1 = 0, param_1 != (long *)0x0)) {
    *(long **)(this + -0x10) = param_1;
    (**(code **)(*param_1 + 8))(param_1);
    return 0;
  }
  return uVar1;
}


