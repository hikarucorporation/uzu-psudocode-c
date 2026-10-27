// Function : ~RangedValues
// Namespace: juce:detail:RangedValues_std__optional_juce__Font__
// Entry    : 00325200
// Prototype: undefined ~RangedValues(RangedValues<std::optional<juce::Font>> * this)
// Body     : 00325200 - 0032527a


/* juce::detail::RangedValues<std::optional<juce::Font> >::~RangedValues() */

void __thiscall
juce::detail::RangedValues<std::optional<juce::Font>>::~RangedValues
          (RangedValues<std::optional<juce::Font>> *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = *(long **)(this + 0x18);
  plVar2 = *(long **)(this + 0x20);
  if (plVar4 != plVar2) {
    do {
      if ((char)plVar4[1] != '\0') {
        *(undefined1 *)(plVar4 + 1) = 0;
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
      }
      plVar4 = plVar4 + 2;
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


