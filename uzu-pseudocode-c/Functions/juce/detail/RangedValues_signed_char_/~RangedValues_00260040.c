// Function : ~RangedValues
// Namespace: juce:detail:RangedValues_signed_char_
// Entry    : 00260040
// Prototype: undefined ~RangedValues(RangedValues<signed_char> * this)
// Body     : 00260040 - 00260061


/* juce::detail::RangedValues<signed char>::~RangedValues() */

void __thiscall
juce::detail::RangedValues<signed_char>::~RangedValues(RangedValues<signed_char> *this)

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


