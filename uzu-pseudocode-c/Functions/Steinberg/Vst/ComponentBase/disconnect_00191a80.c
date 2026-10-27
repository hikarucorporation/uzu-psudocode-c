// Function : disconnect
// Namespace: Steinberg:Vst:ComponentBase
// Entry    : 00191a80
// Prototype: undefined8 disconnect(ComponentBase * this, long * param_1)
// Body     : 00191a80 - 00191aab


/* non-virtual thunk to Steinberg::Vst::ComponentBase::disconnect(Steinberg::Vst::IConnectionPoint*)
    */

undefined8 __thiscall Steinberg::Vst::ComponentBase::disconnect(ComponentBase *this,long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if ((*(long **)(this + 0x10) != (long *)0x0) && (*(long **)(this + 0x10) == param_1)) {
    (**(code **)(*param_1 + 0x10))(param_1);
    *(undefined8 *)(this + 0x10) = 0;
    uVar1 = 0;
  }
  return uVar1;
}


