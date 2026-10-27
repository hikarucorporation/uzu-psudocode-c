// Function : ~RangedValues
// Namespace: juce:detail:RangedValues_long_long_
// Entry    : 00247f40
// Prototype: undefined ~RangedValues(RangedValues<long_long> * this)
// Body     : 00247f40 - 00247f61


/* juce::detail::RangedValues<long long>::~RangedValues() */

void __thiscall juce::detail::RangedValues<long_long>::~RangedValues(RangedValues<long_long> *this)

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


