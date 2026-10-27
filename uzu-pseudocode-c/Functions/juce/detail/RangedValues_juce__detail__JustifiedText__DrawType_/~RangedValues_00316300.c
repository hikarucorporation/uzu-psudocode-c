// Function : ~RangedValues
// Namespace: juce:detail:RangedValues_juce__detail__JustifiedText__DrawType_
// Entry    : 00316300
// Prototype: undefined ~RangedValues(RangedValues<juce::detail::JustifiedText::DrawType> * this)
// Body     : 00316300 - 00316321


/* juce::detail::RangedValues<juce::detail::JustifiedText::DrawType>::~RangedValues() */

void __thiscall
juce::detail::RangedValues<juce::detail::JustifiedText::DrawType>::~RangedValues
          (RangedValues<juce::detail::JustifiedText::DrawType> *this)

{
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x18));
  }
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


