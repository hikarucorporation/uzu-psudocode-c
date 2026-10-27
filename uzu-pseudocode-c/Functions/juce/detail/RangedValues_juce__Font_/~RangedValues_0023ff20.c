// Function : ~RangedValues
// Namespace: juce:detail:RangedValues_juce__Font_
// Entry    : 0023ff20
// Prototype: undefined ~RangedValues(RangedValues<juce::Font> * this)
// Body     : 0023ff20 - 0023ff90


/* juce::detail::RangedValues<juce::Font>::~RangedValues() */

void __thiscall
juce::detail::RangedValues<juce::Font>::~RangedValues(RangedValues<juce::Font> *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = *(long **)(this + 0x18);
  plVar2 = *(long **)(this + 0x20);
  if (plVar4 != plVar2) {
    do {
      plVar3 = (long *)*plVar4;
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar2);
    plVar4 = *(long **)(this + 0x18);
  }
  if (plVar4 != (long *)0x0) {
    operator_delete(plVar4);
  }
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


