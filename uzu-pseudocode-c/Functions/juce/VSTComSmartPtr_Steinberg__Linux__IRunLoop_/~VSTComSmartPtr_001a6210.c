// Function : ~VSTComSmartPtr
// Namespace: juce:VSTComSmartPtr_Steinberg__Linux__IRunLoop_
// Entry    : 001a6210
// Prototype: undefined8 ~VSTComSmartPtr(VSTComSmartPtr<Steinberg::Linux::IRunLoop> * this)
// Body     : 001a6210 - 001a6220


/* juce::VSTComSmartPtr<Steinberg::Linux::IRunLoop>::~VSTComSmartPtr() */

undefined8 __thiscall
juce::VSTComSmartPtr<Steinberg::Linux::IRunLoop>::~VSTComSmartPtr
          (VSTComSmartPtr<Steinberg::Linux::IRunLoop> *this)

{
  undefined8 in_RAX;
  
  if (*(long **)this != (long *)0x0) {
                    /* try { // try from 001a621c to 001a621e has its CatchHandler @ 001a6221 */
    (**(code **)(**(long **)this + 0x10))();
  }
  return in_RAX;
}


