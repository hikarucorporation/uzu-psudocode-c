// Function : _Destroy<Steinberg::IPtr<Steinberg::Vst::Unit>*,Steinberg::IPtr<Steinberg::Vst::Unit>>
// Namespace: std
// Entry    : 001bb720
// Prototype: void _Destroy<Steinberg::IPtr<Steinberg::Vst::Unit>*,Steinberg::IPtr<Steinberg::Vst::Unit>>(long * param_1, long * param_2)
// Body     : 001bb720 - 001bb767


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void std::_Destroy<Steinberg::IPtr<Steinberg::Vst::Unit>*, Steinberg::IPtr<Steinberg::Vst::Unit>
   >(Steinberg::IPtr<Steinberg::Vst::Unit>*, Steinberg::IPtr<Steinberg::Vst::Unit>*,
   std::allocator<Steinberg::IPtr<Steinberg::Vst::Unit> >&) */

void __cdecl
std::_Destroy<Steinberg::IPtr<Steinberg::Vst::Unit>*,Steinberg::IPtr<Steinberg::Vst::Unit>>
          (long *param_1,long *param_2)

{
  if (param_1 != param_2) {
    do {
      if ((long *)*param_1 != (long *)0x0) {
                    /* try { // try from 001bb75b to 001bb75d has its CatchHandler @ 001bb768 */
        (**(code **)(*(long *)*param_1 + 0x10))();
        *param_1 = 0;
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return;
}


