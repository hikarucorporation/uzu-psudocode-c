// Function : removeAudioBusses
// Namespace: Steinberg:Vst:Component
// Entry    : 00191110
// Prototype: undefined8 removeAudioBusses(Component * this)
// Body     : 00191110 - 001911a4


/* Steinberg::Vst::Component::removeAudioBusses() */

undefined8 __thiscall Steinberg::Vst::Component::removeAudioBusses(Component *this)

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
                    /* try { // try from 0019114b to 0019114d has its CatchHandler @ 001911ad */
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
                    /* try { // try from 0019118b to 0019118d has its CatchHandler @ 001911a5 */
        (**(code **)(*(long *)*plVar3 + 0x10))();
        *plVar3 = 0;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2);
    *(long **)(this + 0x98) = plVar1;
  }
  return 0;
}


