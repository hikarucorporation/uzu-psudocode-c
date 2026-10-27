// Function : ~CachedParamValues
// Namespace: juce:CachedParamValues
// Entry    : 001aae30
// Prototype: undefined ~CachedParamValues(CachedParamValues * this)
// Body     : 001aae30 - 001aae5f


/* juce::CachedParamValues::~CachedParamValues() */

void __thiscall juce::CachedParamValues::~CachedParamValues(CachedParamValues *this)

{
  if (*(void **)(this + 0x30) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x30));
  }
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x18));
  }
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


