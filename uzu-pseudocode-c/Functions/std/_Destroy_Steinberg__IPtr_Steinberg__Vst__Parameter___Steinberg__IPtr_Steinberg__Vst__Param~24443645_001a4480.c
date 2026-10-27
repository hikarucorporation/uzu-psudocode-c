// Function : _Destroy<Steinberg::IPtr<Steinberg::Vst::Parameter>*,Steinberg::IPtr<Steinberg::Vst::Parameter>>
// Namespace: std
// Entry    : 001a4480
// Prototype: void _Destroy<Steinberg::IPtr<Steinberg::Vst::Parameter>*,Steinberg::IPtr<Steinberg::Vst::Parameter>>(long * param_1, long * param_2)
// Body     : 001a4480 - 001a44c7


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void std::_Destroy<Steinberg::IPtr<Steinberg::Vst::Parameter>*,
   Steinberg::IPtr<Steinberg::Vst::Parameter> >(Steinberg::IPtr<Steinberg::Vst::Parameter>*,
   Steinberg::IPtr<Steinberg::Vst::Parameter>*,
   std::allocator<Steinberg::IPtr<Steinberg::Vst::Parameter> >&) */

void __cdecl
std::
_Destroy<Steinberg::IPtr<Steinberg::Vst::Parameter>*,Steinberg::IPtr<Steinberg::Vst::Parameter>>
          (long *param_1,long *param_2)

{
  if (param_1 != param_2) {
    do {
      if ((long *)*param_1 != (long *)0x0) {
                    /* try { // try from 001a44bb to 001a44bd has its CatchHandler @ 001a44c8 */
        (**(code **)(*(long *)*param_1 + 0x10))();
        *param_1 = 0;
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return;
}


