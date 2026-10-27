// Function : ~RangedValues
// Namespace: juce:detail:RangedValues_int_
// Entry    : 00260070
// Prototype: undefined ~RangedValues(RangedValues<int> * this)
// Body     : 00260070 - 00260091


/* juce::detail::RangedValues<int>::~RangedValues() */

void __thiscall juce::detail::RangedValues<int>::~RangedValues(RangedValues<int> *this)

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


