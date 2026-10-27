// Function : ~IPtr
// Namespace: Steinberg:IPtr_Steinberg__Vst__PlugInterfaceSupport_
// Entry    : 0019eef0
// Prototype: undefined ~IPtr(IPtr<Steinberg::Vst::PlugInterfaceSupport> * this)
// Body     : 0019eef0 - 0019ef0a


/* Steinberg::IPtr<Steinberg::Vst::PlugInterfaceSupport>::~IPtr() */

void __thiscall
Steinberg::IPtr<Steinberg::Vst::PlugInterfaceSupport>::~IPtr
          (IPtr<Steinberg::Vst::PlugInterfaceSupport> *this)

{
  if (*(long **)this != (long *)0x0) {
                    /* try { // try from 0019eeff to 0019ef01 has its CatchHandler @ 0019ef0b */
    (**(code **)(**(long **)this + 0x10))();
    *(undefined8 *)this = 0;
  }
  return;
}


