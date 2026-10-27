// Function : ~BusList
// Namespace: Steinberg:Vst:BusList
// Entry    : 001a2240
// Prototype: undefined ~BusList(BusList * this)
// Body     : 001a2240 - 001a229a


/* Steinberg::Vst::BusList::~BusList() */

void __thiscall Steinberg::Vst::BusList::~BusList(BusList *this)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x10);
  plVar1 = *(long **)(this + 0x18);
  if (plVar2 != plVar1) {
    do {
      if ((long *)*plVar2 != (long *)0x0) {
                    /* try { // try from 001a228b to 001a228d has its CatchHandler @ 001a229b */
        (**(code **)(*(long *)*plVar2 + 0x10))();
        *plVar2 = 0;
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    plVar2 = *(long **)(this + 0x10);
  }
  if (plVar2 != (long *)0x0) {
    operator_delete(plVar2);
  }
  operator_delete(this);
  return;
}


