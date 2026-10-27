// Function : ~VSTComSmartPtr
// Namespace: juce:VSTComSmartPtr_Steinberg__Vst__IHostApplication_
// Entry    : 001a7340
// Prototype: undefined8 ~VSTComSmartPtr(VSTComSmartPtr<Steinberg::Vst::IHostApplication> * this)
// Body     : 001a7340 - 001a7350


/* juce::VSTComSmartPtr<Steinberg::Vst::IHostApplication>::~VSTComSmartPtr() */

undefined8 __thiscall
juce::VSTComSmartPtr<Steinberg::Vst::IHostApplication>::~VSTComSmartPtr
          (VSTComSmartPtr<Steinberg::Vst::IHostApplication> *this)

{
  undefined8 in_RAX;
  
  if (*(long **)this != (long *)0x0) {
                    /* try { // try from 001a734c to 001a734e has its CatchHandler @ 001a7351 */
    (**(code **)(**(long **)this + 0x10))();
  }
  return in_RAX;
}


