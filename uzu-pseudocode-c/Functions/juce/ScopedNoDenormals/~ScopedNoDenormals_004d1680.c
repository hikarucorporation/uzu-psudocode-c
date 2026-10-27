// Function : ~ScopedNoDenormals
// Namespace: juce:ScopedNoDenormals
// Entry    : 004d1680
// Prototype: undefined ~ScopedNoDenormals(ScopedNoDenormals * this)
// Body     : 004d1680 - 004d1693


/* juce::ScopedNoDenormals::~ScopedNoDenormals() */

void __thiscall juce::ScopedNoDenormals::~ScopedNoDenormals(ScopedNoDenormals *this)

{
  MXCSR = *(undefined4 *)this;
  return;
}


