// Function : terminate
// Namespace: Steinberg:Vst:Component
// Entry    : 00191070
// Prototype: undefined8 terminate(Component * this)
// Body     : 00191070 - 001910c1


/* non-virtual thunk to Steinberg::Vst::Component::terminate() */

undefined8 __thiscall Steinberg::Vst::Component::terminate(Component *this)

{
  long *plVar1;
  
  removeAllBusses(this + -0x30);
  if (*(long **)(this + -0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + -0x10) + 0x10))();
    *(undefined8 *)(this + -0x10) = 0;
  }
  plVar1 = *(long **)(this + -8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,this + -0x18);
    if (*(long **)(this + -8) != (long *)0x0) {
      (**(code **)(**(long **)(this + -8) + 0x10))();
      *(undefined8 *)(this + -8) = 0;
    }
  }
  return 0;
}


