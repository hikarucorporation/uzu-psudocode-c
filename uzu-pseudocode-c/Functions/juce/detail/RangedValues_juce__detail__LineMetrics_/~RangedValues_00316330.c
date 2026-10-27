// Function : ~RangedValues
// Namespace: juce:detail:RangedValues_juce__detail__LineMetrics_
// Entry    : 00316330
// Prototype: undefined ~RangedValues(RangedValues<juce::detail::LineMetrics> * this)
// Body     : 00316330 - 00316351


/* juce::detail::RangedValues<juce::detail::LineMetrics>::~RangedValues() */

void __thiscall
juce::detail::RangedValues<juce::detail::LineMetrics>::~RangedValues
          (RangedValues<juce::detail::LineMetrics> *this)

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


