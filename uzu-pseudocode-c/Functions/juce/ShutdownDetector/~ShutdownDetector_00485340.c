// Function : ~ShutdownDetector
// Namespace: juce:ShutdownDetector
// Entry    : 00485340
// Prototype: undefined ~ShutdownDetector(ShutdownDetector * this)
// Body     : 00485340 - 00485351


/* juce::ShutdownDetector::~ShutdownDetector() */

void __thiscall juce::ShutdownDetector::~ShutdownDetector(ShutdownDetector *this)

{
  ~ShutdownDetector(this);
  operator_delete(this);
  return;
}


