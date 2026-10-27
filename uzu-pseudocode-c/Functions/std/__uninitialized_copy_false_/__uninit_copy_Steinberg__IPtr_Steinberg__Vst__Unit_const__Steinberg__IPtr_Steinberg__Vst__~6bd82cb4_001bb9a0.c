// Function : __uninit_copy<Steinberg::IPtr<Steinberg::Vst::Unit>const*,Steinberg::IPtr<Steinberg::Vst::Unit>*>
// Namespace: std:__uninitialized_copy_false_
// Entry    : 001bb9a0
// Prototype: long __uninit_copy<Steinberg::IPtr<Steinberg::Vst::Unit>const*,Steinberg::IPtr<Steinberg::Vst::Unit>*>(long param_1, long param_2, long param_3)
// Body     : 001bb9a0 - 001bb9f7


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::IPtr<Steinberg::Vst::Unit>*
   std::__uninitialized_copy<false>::__uninit_copy<Steinberg::IPtr<Steinberg::Vst::Unit> const*,
   Steinberg::IPtr<Steinberg::Vst::Unit>*>(Steinberg::IPtr<Steinberg::Vst::Unit> const*,
   Steinberg::IPtr<Steinberg::Vst::Unit> const*, Steinberg::IPtr<Steinberg::Vst::Unit>*) */

long __cdecl
std::__uninitialized_copy<false>::
__uninit_copy<Steinberg::IPtr<Steinberg::Vst::Unit>const*,Steinberg::IPtr<Steinberg::Vst::Unit>*>
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
                    /* try { // try from 001bb9e1 to 001bb9e3 has its CatchHandler @ 001bb9f8 */
        (**(code **)(*plVar2 + 8))();
      }
      lVar1 = param_1 + lVar3;
      lVar3 = lVar3 + 8;
    } while (lVar1 + 8 != param_2);
    param_3 = param_3 + lVar3;
  }
  return param_3;
}


