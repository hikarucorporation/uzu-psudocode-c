// Function : removeAllBusses
// Namespace: Steinberg:Vst:Component
// Entry    : 00190e80
// Prototype: undefined8 removeAllBusses(Component * this)
// Body     : 00190e80 - 00190f94


/* Steinberg::Vst::Component::removeAllBusses() */

undefined8 __thiscall Steinberg::Vst::Component::removeAllBusses(Component *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = *(long **)(this + 0x60);
  plVar2 = *(long **)(this + 0x68);
  if (plVar2 != plVar1) {
    plVar3 = plVar1;
    do {
      if ((long *)*plVar3 != (long *)0x0) {
                    /* try { // try from 00190ebb to 00190ebd has its CatchHandler @ 00190fad */
        (**(code **)(*(long *)*plVar3 + 0x10))();
        *plVar3 = 0;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2);
    *(long **)(this + 0x68) = plVar1;
  }
  plVar1 = *(long **)(this + 0x90);
  plVar2 = *(long **)(this + 0x98);
  if (plVar2 != plVar1) {
    plVar3 = plVar1;
    do {
      if ((long *)*plVar3 != (long *)0x0) {
                    /* try { // try from 00190efb to 00190efd has its CatchHandler @ 00190fa5 */
        (**(code **)(*(long *)*plVar3 + 0x10))();
        *plVar3 = 0;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2);
    *(long **)(this + 0x98) = plVar1;
  }
  plVar1 = *(long **)(this + 0xc0);
  plVar2 = *(long **)(this + 200);
  if (plVar2 != plVar1) {
    plVar3 = plVar1;
    do {
      if ((long *)*plVar3 != (long *)0x0) {
                    /* try { // try from 00190f3b to 00190f3d has its CatchHandler @ 00190f9d */
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
                    /* try { // try from 00190f7b to 00190f7d has its CatchHandler @ 00190f95 */
        (**(code **)(*(long *)*plVar3 + 0x10))();
        *plVar3 = 0;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2);
    *(long **)(this + 0xf8) = plVar1;
  }
  return 0;
}


