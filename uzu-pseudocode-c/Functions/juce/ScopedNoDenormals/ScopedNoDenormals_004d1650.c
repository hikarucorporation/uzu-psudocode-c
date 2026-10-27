// Function : ScopedNoDenormals
// Namespace: juce:ScopedNoDenormals
// Entry    : 004d1650
// Prototype: undefined ScopedNoDenormals(ScopedNoDenormals * this)
// Body     : 004d1650 - 004d1672


/* juce::ScopedNoDenormals::ScopedNoDenormals() */

void __thiscall juce::ScopedNoDenormals::ScopedNoDenormals(ScopedNoDenormals *this)

{
  *(ulong *)this = (ulong)MXCSR;
  MXCSR = MXCSR | 0x8040;
  return;
}


