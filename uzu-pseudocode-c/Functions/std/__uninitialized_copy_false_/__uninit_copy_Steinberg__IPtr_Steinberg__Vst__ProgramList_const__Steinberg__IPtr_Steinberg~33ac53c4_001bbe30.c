// Function : __uninit_copy<Steinberg::IPtr<Steinberg::Vst::ProgramList>const*,Steinberg::IPtr<Steinberg::Vst::ProgramList>*>
// Namespace: std:__uninitialized_copy_false_
// Entry    : 001bbe30
// Prototype: long __uninit_copy<Steinberg::IPtr<Steinberg::Vst::ProgramList>const*,Steinberg::IPtr<Steinberg::Vst::ProgramList>*>(long param_1, long param_2, long param_3)
// Body     : 001bbe30 - 001bbe87


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::IPtr<Steinberg::Vst::ProgramList>*
   std::__uninitialized_copy<false>::__uninit_copy<Steinberg::IPtr<Steinberg::Vst::ProgramList>
   const*,
   Steinberg::IPtr<Steinberg::Vst::ProgramList>*>(Steinberg::IPtr<Steinberg::Vst::ProgramList>
   const*, Steinberg::IPtr<Steinberg::Vst::ProgramList> const*,
   Steinberg::IPtr<Steinberg::Vst::ProgramList>*) */

long __cdecl
std::__uninitialized_copy<false>::
__uninit_copy<Steinberg::IPtr<Steinberg::Vst::ProgramList>const*,Steinberg::IPtr<Steinberg::Vst::ProgramList>*>
          (long param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1 != param_2) {
    lVar3 = 0;
    do {
      plVar2 = *(long **)(param_1 + lVar3);
      *(long **)(param_3 + lVar3) = plVar2;
      if (plVar2 != (long *)0x0) {
                    /* try { // try from 001bbe71 to 001bbe73 has its CatchHandler @ 001bbe88 */
        (**(code **)(*plVar2 + 8))();
      }
      lVar1 = param_1 + lVar3;
      lVar3 = lVar3 + 8;
    } while (lVar1 + 8 != param_2);
    param_3 = param_3 + lVar3;
  }
  return param_3;
}


