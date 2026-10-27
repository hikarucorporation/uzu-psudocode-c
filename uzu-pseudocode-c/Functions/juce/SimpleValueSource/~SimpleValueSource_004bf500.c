// Function : ~SimpleValueSource
// Namespace: juce:SimpleValueSource
// Entry    : 004bf500
// Prototype: undefined ~SimpleValueSource(SimpleValueSource * this)
// Body     : 004bf500 - 004bf578


/* juce::SimpleValueSource::~SimpleValueSource() */

void __thiscall juce::SimpleValueSource::~SimpleValueSource(SimpleValueSource *this)

{
  int *piVar1;
  void *pvVar2;
  
                    /* try { // try from 004bf50e to 004bf510 has its CatchHandler @ 004bf579 */
  (**(code **)(*(long *)(this + 0x30) + 0x58))(this + 0x38);
  *(undefined ***)this = &PTR__ValueSource_00713e98;
  *(undefined ***)(this + 0x10) = &PTR__ValueSource_00713ed0;
  LOCK();
  *(undefined4 *)(*(long *)(this + 0x18) + 0x18) = 0;
  UNLOCK();
  *(undefined4 *)(this + 0x2c) = 0;
  free(*(void **)(this + 0x20));
  *(undefined ***)(this + 0x10) = &PTR__AsyncUpdater_00712b58;
  LOCK();
  *(undefined4 *)(*(long *)(this + 0x18) + 0x18) = 0;
  UNLOCK();
  pvVar2 = *(void **)(this + 0x18);
  if (pvVar2 != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((long)pvVar2 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      operator_delete(pvVar2);
    }
  }
  *(undefined ***)this = &PTR__ReferenceCountedObject_00706828;
  return;
}


