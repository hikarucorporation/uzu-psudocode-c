// Function : getDefaultLookAndFeel
// Namespace: juce:Desktop
// Entry    : 001e5d00
// Prototype: LookAndFeel_V4 * getDefaultLookAndFeel(Desktop * this)
// Body     : 001e5d00 - 001e5e02


/* juce::Desktop::getDefaultLookAndFeel() */

LookAndFeel_V4 * __thiscall juce::Desktop::getDefaultLookAndFeel(Desktop *this)

{
  long *plVar1;
  long *plVar2;
  LookAndFeel_V4 *pLVar3;
  undefined8 *puVar4;
  
  if ((*(long *)(this + 0x100) != 0) &&
     (pLVar3 = *(LookAndFeel_V4 **)(*(long *)(this + 0x100) + 0x10), pLVar3 != (LookAndFeel_V4 *)0x0
     )) {
    return pLVar3;
  }
  pLVar3 = *(LookAndFeel_V4 **)(this + 0xf8);
  if (pLVar3 == (LookAndFeel_V4 *)0x0) {
                    /* try { // try from 001e5d64 to 001e5d6d has its CatchHandler @ 001e5e0b */
    pLVar3 = operator_new(0x180);
    LookAndFeel_V4::LookAndFeel_V4(pLVar3);
    plVar2 = *(long **)(this + 0xf8);
    *(LookAndFeel_V4 **)(this + 0xf8) = pLVar3;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
      pLVar3 = *(LookAndFeel_V4 **)(this + 0xf8);
      if (pLVar3 == (LookAndFeel_V4 *)0x0) {
        pLVar3 = (LookAndFeel_V4 *)0x0;
        puVar4 = (undefined8 *)0x0;
        goto LAB_001e5d39;
      }
    }
  }
  puVar4 = *(undefined8 **)(pLVar3 + 0x120);
  if (puVar4 == (undefined8 *)0x0) {
                    /* try { // try from 001e5da4 to 001e5dad has its CatchHandler @ 001e5e03 */
    puVar4 = operator_new(0x18);
    *(undefined4 *)(puVar4 + 1) = 0;
    *puVar4 = &PTR__ReferenceCountedObject_00710ff8;
    puVar4[2] = pLVar3;
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
    plVar2 = *(long **)(pLVar3 + 0x120);
    *(undefined8 **)(pLVar3 + 0x120) = puVar4;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar2 + 8))();
      }
      puVar4 = *(undefined8 **)(pLVar3 + 0x120);
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)0x0;
        goto LAB_001e5d39;
      }
    }
  }
  LOCK();
  *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
  UNLOCK();
LAB_001e5d39:
  plVar2 = *(long **)(this + 0x100);
  *(undefined8 **)(this + 0x100) = puVar4;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  return pLVar3;
}


