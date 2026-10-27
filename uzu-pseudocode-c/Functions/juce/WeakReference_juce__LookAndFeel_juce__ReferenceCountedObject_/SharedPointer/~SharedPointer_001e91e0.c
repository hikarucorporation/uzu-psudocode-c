// Function : ~SharedPointer
// Namespace: juce:WeakReference_juce__LookAndFeel_juce__ReferenceCountedObject_:SharedPointer
// Entry    : 001e91e0
// Prototype: undefined ~SharedPointer(SharedPointer * this)
// Body     : 001e91e0 - 001e91e4


/* juce::WeakReference<juce::LookAndFeel,
   juce::ReferenceCountedObject>::SharedPointer::~SharedPointer() */

void __thiscall
juce::WeakReference<juce::LookAndFeel,juce::ReferenceCountedObject>::SharedPointer::~SharedPointer
          (SharedPointer *this)

{
  (*(code *)PTR_operator_delete_00716ec8)();
  return;
}


