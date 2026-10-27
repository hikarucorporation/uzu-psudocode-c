// Function : _M_allocate_and_copy<Steinberg::IPtr<Steinberg::Vst::Parameter>const*>
// Namespace: std:vector_Steinberg__IPtr_Steinberg__Vst__Parameter__std__allocator_Steinberg__IPtr_Steinberg~38b82ce0
// Entry    : 001bd3d0
// Prototype: void * _M_allocate_and_copy<Steinberg::IPtr<Steinberg::Vst::Parameter>const*>(undefined8 param_1_00, ulong param_2, long param_3, long param_4)
// Body     : 001bd3d0 - 001bd44c


/* Steinberg::IPtr<Steinberg::Vst::Parameter>*
   std::vector<Steinberg::IPtr<Steinberg::Vst::Parameter>,
   std::allocator<Steinberg::IPtr<Steinberg::Vst::Parameter> >
   >::_M_allocate_and_copy<Steinberg::IPtr<Steinberg::Vst::Parameter> const*>(unsigned long,
   Steinberg::IPtr<Steinberg::Vst::Parameter> const*, Steinberg::IPtr<Steinberg::Vst::Parameter>
   const*) */

void * __thiscall
std::
vector<Steinberg::IPtr<Steinberg::Vst::Parameter>,std::allocator<Steinberg::IPtr<Steinberg::Vst::Parameter>>>
::_M_allocate_and_copy<Steinberg::IPtr<Steinberg::Vst::Parameter>const*>
          (undefined8 param_1_00,ulong param_2,long param_3,long param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  void *unaff_RBX;
  
  if (param_2 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    if (param_2 >> 0x3c != 0) {
      if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__throw_bad_array_new_length();
      }
      uVar2 = std::__throw_bad_alloc();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 001bd3fc with catch @ 001bd423
                        */
      __cxa_begin_catch(uVar2);
      if (unaff_RBX != (void *)0x0) {
        operator_delete(unaff_RBX);
      }
                    /* try { // try from 001bd438 to 001bd43c has its CatchHandler @ 001bd43d */
      uVar2 = __cxa_rethrow();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 001bd438 with catch @ 001bd43d
                        */
                    /* try { // try from 001bd440 to 001bd444 has its CatchHandler @ 001bd44d */
      __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar2);
    }
    pvVar1 = operator_new(param_2 << 3);
  }
                    /* try { // try from 001bd3fc to 001bd409 has its CatchHandler @ 001bd423 */
  __uninitialized_copy<false>::
  __uninit_copy<Steinberg::IPtr<Steinberg::Vst::Parameter>const*,Steinberg::IPtr<Steinberg::Vst::Parameter>*>
            (param_3,param_4,(long)pvVar1);
  return pvVar1;
}


