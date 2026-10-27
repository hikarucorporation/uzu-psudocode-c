// Function : ~RangedValues
// Namespace: juce:detail:RangedValues_juce__detail__GlyphLookupEntry_
// Entry    : 00314940
// Prototype: undefined ~RangedValues(RangedValues<juce::detail::GlyphLookupEntry> * this)
// Body     : 00314940 - 00314961


/* juce::detail::RangedValues<juce::detail::GlyphLookupEntry>::~RangedValues() */

void __thiscall
juce::detail::RangedValues<juce::detail::GlyphLookupEntry>::~RangedValues
          (RangedValues<juce::detail::GlyphLookupEntry> *this)

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


