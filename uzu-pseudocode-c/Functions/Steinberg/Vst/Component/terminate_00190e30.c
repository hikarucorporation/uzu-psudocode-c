// Function : terminate
// Namespace: Steinberg:Vst:Component
// Entry    : 00190e30
// Prototype: undefined8 terminate(Component * this)
// Body     : 00190e30 - 00190e7d


/* Steinberg::Vst::Component::terminate() */

undefined8 __thiscall Steinberg::Vst::Component::terminate(Component *this)

{
  long *plVar1;
  
  removeAllBusses(this);
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


