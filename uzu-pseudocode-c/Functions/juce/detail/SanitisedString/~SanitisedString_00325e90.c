// Function : ~SanitisedString
// Namespace: juce:detail:SanitisedString
// Entry    : 00325e90
// Prototype: undefined ~SanitisedString(SanitisedString * this)
// Body     : 00325e90 - 00325eb1


/* juce::detail::SanitisedString::~SanitisedString() */

void __thiscall juce::detail::SanitisedString::~SanitisedString(SanitisedString *this)

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


