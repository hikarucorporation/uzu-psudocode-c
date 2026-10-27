// Function : ~RangedValues
// Namespace: juce:detail:RangedValues_float_
// Entry    : 003162d0
// Prototype: undefined ~RangedValues(RangedValues<float> * this)
// Body     : 003162d0 - 003162f1


/* juce::detail::RangedValues<float>::~RangedValues() */

void __thiscall juce::detail::RangedValues<float>::~RangedValues(RangedValues<float> *this)

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


