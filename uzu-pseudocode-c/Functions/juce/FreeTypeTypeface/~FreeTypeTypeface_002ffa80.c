// Function : ~FreeTypeTypeface
// Namespace: juce:FreeTypeTypeface
// Entry    : 002ffa80
// Prototype: undefined ~FreeTypeTypeface(FreeTypeTypeface * this)
// Body     : 002ffa80 - 002ffa91


/* juce::FreeTypeTypeface::~FreeTypeTypeface() */

void __thiscall juce::FreeTypeTypeface::~FreeTypeTypeface(FreeTypeTypeface *this)

{
  ~FreeTypeTypeface(this);
  operator_delete(this);
  return;
}


