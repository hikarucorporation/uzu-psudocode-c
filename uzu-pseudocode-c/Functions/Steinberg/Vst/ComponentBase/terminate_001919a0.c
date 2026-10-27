// Function : terminate
// Namespace: Steinberg:Vst:ComponentBase
// Entry    : 001919a0
// Prototype: undefined8 terminate(ComponentBase * this)
// Body     : 001919a0 - 001919ec


/* non-virtual thunk to Steinberg::Vst::ComponentBase::terminate() */

undefined8 __thiscall Steinberg::Vst::ComponentBase::terminate(ComponentBase *this)

{
  long *plVar1;
  
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 0x10))();
    *(undefined8 *)(this + 0x10) = 0;
  }
  plVar1 = *(long **)(this + 0x18);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,this + 8);
    if (*(long **)(this + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x18) + 0x10))();
      *(undefined8 *)(this + 0x18) = 0;
    }
  }
  return 0;
}


