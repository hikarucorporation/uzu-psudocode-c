// Function : ~BusList
// Namespace: Steinberg:Vst:BusList
// Entry    : 0019f280
// Prototype: undefined ~BusList(BusList * this)
// Body     : 0019f280 - 0019f2db


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
                    /* try { // try from 0019f2bb to 0019f2bd has its CatchHandler @ 0019f2dc */
        (**(code **)(*(long *)*plVar2 + 0x10))();
        *plVar2 = 0;
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    plVar2 = *(long **)(this + 0x10);
  }
  if (plVar2 == (long *)0x0) {
    return;
  }
  operator_delete(plVar2);
  return;
}


