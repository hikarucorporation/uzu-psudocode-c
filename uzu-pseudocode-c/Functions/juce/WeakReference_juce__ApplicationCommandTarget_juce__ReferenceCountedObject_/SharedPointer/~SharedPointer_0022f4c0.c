// Function : ~SharedPointer
// Namespace: juce:WeakReference_juce__ApplicationCommandTarget_juce__ReferenceCountedObject_:SharedPointer
// Entry    : 0022f4c0
// Prototype: undefined ~SharedPointer(SharedPointer * this)
// Body     : 0022f4c0 - 0022f4c4


/* juce::WeakReference<juce::ApplicationCommandTarget,
   juce::ReferenceCountedObject>::SharedPointer::~SharedPointer() */

void __thiscall
juce::WeakReference<juce::ApplicationCommandTarget,juce::ReferenceCountedObject>::SharedPointer::
~SharedPointer(SharedPointer *this)

{
  (*(code *)PTR_operator_delete_00716ec8)();
  return;
}


