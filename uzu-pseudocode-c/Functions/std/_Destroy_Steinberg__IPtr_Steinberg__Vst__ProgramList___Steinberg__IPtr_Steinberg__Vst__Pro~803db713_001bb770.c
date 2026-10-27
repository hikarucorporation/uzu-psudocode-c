// Function : _Destroy<Steinberg::IPtr<Steinberg::Vst::ProgramList>*,Steinberg::IPtr<Steinberg::Vst::ProgramList>>
// Namespace: std
// Entry    : 001bb770
// Prototype: void _Destroy<Steinberg::IPtr<Steinberg::Vst::ProgramList>*,Steinberg::IPtr<Steinberg::Vst::ProgramList>>(long * param_1, long * param_2)
// Body     : 001bb770 - 001bb7b7


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void std::_Destroy<Steinberg::IPtr<Steinberg::Vst::ProgramList>*,
   Steinberg::IPtr<Steinberg::Vst::ProgramList> >(Steinberg::IPtr<Steinberg::Vst::ProgramList>*,
   Steinberg::IPtr<Steinberg::Vst::ProgramList>*,
   std::allocator<Steinberg::IPtr<Steinberg::Vst::ProgramList> >&) */

void __cdecl
std::
_Destroy<Steinberg::IPtr<Steinberg::Vst::ProgramList>*,Steinberg::IPtr<Steinberg::Vst::ProgramList>>
          (long *param_1,long *param_2)

{
  if (param_1 != param_2) {
    do {
      if ((long *)*param_1 != (long *)0x0) {
                    /* try { // try from 001bb7ab to 001bb7ad has its CatchHandler @ 001bb7b8 */
        (**(code **)(*(long *)*param_1 + 0x10))();
        *param_1 = 0;
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return;
}


