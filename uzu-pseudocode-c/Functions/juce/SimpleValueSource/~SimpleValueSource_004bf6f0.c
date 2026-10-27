// Function : ~SimpleValueSource
// Namespace: juce:SimpleValueSource
// Entry    : 004bf6f0
// Prototype: undefined ~SimpleValueSource(SimpleValueSource * this)
// Body     : 004bf6f0 - 004bf76c


/* non-virtual thunk to juce::SimpleValueSource::~SimpleValueSource() */

void __thiscall juce::SimpleValueSource::~SimpleValueSource(SimpleValueSource *this)

{
  int *piVar1;
  void *pvVar2;
  
                    /* try { // try from 004bf6fe to 004bf700 has its CatchHandler @ 004bf76d */
  (**(code **)(*(long *)(this + 0x20) + 0x58))(this + 0x28);
  *(undefined ***)(this + -0x10) = &PTR__ValueSource_00713e98;
  *(undefined ***)this = &PTR__ValueSource_00713ed0;
  LOCK();
  *(undefined4 *)(*(long *)(this + 8) + 0x18) = 0;
  UNLOCK();
  *(undefined4 *)(this + 0x1c) = 0;
  free(*(void **)(this + 0x10));
  *(undefined ***)this = &PTR__AsyncUpdater_00712b58;
  LOCK();
  *(undefined4 *)(*(long *)(this + 8) + 0x18) = 0;
  UNLOCK();
  pvVar2 = *(void **)(this + 8);
  if (pvVar2 != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((long)pvVar2 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      operator_delete(pvVar2);
    }
  }
  *(undefined ***)(this + -0x10) = &PTR__ReferenceCountedObject_00706828;
  return;
}


