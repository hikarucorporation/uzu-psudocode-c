// Function : terminate
// Namespace: Steinberg:Vst:ComponentBase
// Entry    : 00190fc0
// Prototype: undefined8 terminate(ComponentBase * this)
// Body     : 00190fc0 - 00191008


/* Steinberg::Vst::ComponentBase::terminate() */

undefined8 __thiscall Steinberg::Vst::ComponentBase::terminate(ComponentBase *this)

{
  long *plVar1;
  
  if (*(long **)(this + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 0x10))();
    *(undefined8 *)(this + 0x20) = 0;
  }
  plVar1 = *(long **)(this + 0x28);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,this + 0x18);
    if (*(long **)(this + 0x28) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x28) + 0x10))();
      *(undefined8 *)(this + 0x28) = 0;
    }
  }
  return 0;
}


