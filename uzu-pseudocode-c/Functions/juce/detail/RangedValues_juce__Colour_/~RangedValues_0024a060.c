// Function : ~RangedValues
// Namespace: juce:detail:RangedValues_juce__Colour_
// Entry    : 0024a060
// Prototype: undefined ~RangedValues(RangedValues<juce::Colour> * this)
// Body     : 0024a060 - 0024a081


/* juce::detail::RangedValues<juce::Colour>::~RangedValues() */

void __thiscall
juce::detail::RangedValues<juce::Colour>::~RangedValues(RangedValues<juce::Colour> *this)

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


