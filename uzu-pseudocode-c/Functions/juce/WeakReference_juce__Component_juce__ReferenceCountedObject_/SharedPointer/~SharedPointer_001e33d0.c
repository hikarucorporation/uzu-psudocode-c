// Function : ~SharedPointer
// Namespace: juce:WeakReference_juce__Component_juce__ReferenceCountedObject_:SharedPointer
// Entry    : 001e33d0
// Prototype: undefined ~SharedPointer(SharedPointer * this)
// Body     : 001e33d0 - 001e33d4


/* juce::WeakReference<juce::Component,
   juce::ReferenceCountedObject>::SharedPointer::~SharedPointer() */

void __thiscall
juce::WeakReference<juce::Component,juce::ReferenceCountedObject>::SharedPointer::~SharedPointer
          (SharedPointer *this)

{
  (*(code *)PTR_operator_delete_00716ec8)();
  return;
}


