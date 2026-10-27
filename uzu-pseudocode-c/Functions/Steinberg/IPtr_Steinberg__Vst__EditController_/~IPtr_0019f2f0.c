// Function : ~IPtr
// Namespace: Steinberg:IPtr_Steinberg__Vst__EditController_
// Entry    : 0019f2f0
// Prototype: undefined ~IPtr(IPtr<Steinberg::Vst::EditController> * this)
// Body     : 0019f2f0 - 0019f30a


/* Steinberg::IPtr<Steinberg::Vst::EditController>::~IPtr() */

void __thiscall
Steinberg::IPtr<Steinberg::Vst::EditController>::~IPtr(IPtr<Steinberg::Vst::EditController> *this)

{
  if (*(long **)this != (long *)0x0) {
                    /* try { // try from 0019f2ff to 0019f301 has its CatchHandler @ 0019f30b */
    (**(code **)(**(long **)this + 0x10))();
    *(undefined8 *)this = 0;
  }
  return;
}


