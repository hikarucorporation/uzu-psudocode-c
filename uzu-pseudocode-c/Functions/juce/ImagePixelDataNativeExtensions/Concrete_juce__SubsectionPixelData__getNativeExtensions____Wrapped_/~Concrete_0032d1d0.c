// Function : ~Concrete
// Namespace: juce:ImagePixelDataNativeExtensions:Concrete_juce__SubsectionPixelData__getNativeExtensions____Wrapped_
// Entry    : 0032d1d0
// Prototype: undefined ~Concrete(Concrete<juce::SubsectionPixelData::getNativeExtensions()::Wrapped> * this)
// Body     : 0032d1d0 - 0032d1fc


/* juce::ImagePixelDataNativeExtensions::Concrete<juce::SubsectionPixelData::getNativeExtensions()::Wrapped>::~Concrete()
    */

void __thiscall
juce::ImagePixelDataNativeExtensions::
Concrete<juce::SubsectionPixelData::getNativeExtensions()::Wrapped>::~Concrete
          (Concrete<juce::SubsectionPixelData::getNativeExtensions()::Wrapped> *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__Concrete_00711f30;
  plVar2 = *(long **)(this + 8);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  operator_delete(this);
  return;
}


