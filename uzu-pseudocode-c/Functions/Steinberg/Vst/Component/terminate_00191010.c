// Function : terminate
// Namespace: Steinberg:Vst:Component
// Entry    : 00191010
// Prototype: undefined8 terminate(Component * this)
// Body     : 00191010 - 0019106d


/* non-virtual thunk to Steinberg::Vst::Component::terminate() */

undefined8 __thiscall Steinberg::Vst::Component::terminate(Component *this)

{
  long *plVar1;
  
  removeAllBusses(this + -0x10);
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


