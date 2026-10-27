// Function : isValid
// Namespace: juce:detail:RangedIteratorWrapper_juce__detail__LineMetrics_const_
// Entry    : 00261200
// Prototype: undefined8 isValid(RangedIteratorWrapper<juce::detail::LineMetrics_const> * this)
// Body     : 00261200 - 0026120b


/* juce::detail::RangedIteratorWrapper<juce::detail::LineMetrics const>::isValid() const */

undefined8 __thiscall
juce::detail::RangedIteratorWrapper<juce::detail::LineMetrics_const>::isValid
          (RangedIteratorWrapper<juce::detail::LineMetrics_const> *this)

{
  return CONCAT71((int7)((ulong)*(long *)(this + 0x18) >> 8),
                  *(long *)(this + 0x18) != *(long *)(this + 0x30));
}


