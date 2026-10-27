// Function : removeEventBusses
// Namespace: Steinberg:Vst:Component
// Entry    : 001911c0
// Prototype: undefined8 removeEventBusses(Component * this)
// Body     : 001911c0 - 00191264


/* Steinberg::Vst::Component::removeEventBusses() */

undefined8 __thiscall Steinberg::Vst::Component::removeEventBusses(Component *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = *(long **)(this + 0xc0);
  plVar2 = *(long **)(this + 200);
  if (plVar2 != plVar1) {
    plVar3 = plVar1;
    do {
      if ((long *)*plVar3 != (long *)0x0) {
                    /* try { // try from 0019120b to 0019120d has its CatchHandler @ 0019126d */
        (**(code **)(*(long *)*plVar3 + 0x10))();
        *plVar3 = 0;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2);
    *(long **)(this + 200) = plVar1;
  }
  plVar1 = *(long **)(this + 0xf0);
  plVar2 = *(long **)(this + 0xf8);
  if (plVar2 != plVar1) {
    plVar3 = plVar1;
    do {
      if ((long *)*plVar3 != (long *)0x0) {
                    /* try { // try from 0019124b to 0019124d has its CatchHandler @ 00191265 */
        (**(code **)(*(long *)*plVar3 + 0x10))();
        *plVar3 = 0;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2);
    *(long **)(this + 0xf8) = plVar1;
  }
  return 0;
}


