// Function : _M_realloc_insert<Steinberg::IPtr<Steinberg::Vst::Parameter>>
// Namespace: std:vector_Steinberg__IPtr_Steinberg__Vst__Parameter__std__allocator_Steinberg__IPtr_Steinberg~38b82ce0
// Entry    : 001bd710
// Prototype: void _M_realloc_insert<Steinberg::IPtr<Steinberg::Vst::Parameter>>(vector<Steinberg::IPtr<Steinberg::Vst::Parameter>,std::allocator<Steinberg::IPtr<Steinberg::Vst::Parameter>>> * this, long param_1, long * param_2)
// Body     : 001bd710 - 001bd852


/* void std::vector<Steinberg::IPtr<Steinberg::Vst::Parameter>,
   std::allocator<Steinberg::IPtr<Steinberg::Vst::Parameter> >
   >::_M_realloc_insert<Steinberg::IPtr<Steinberg::Vst::Parameter>
   >(__gnu_cxx::__normal_iterator<Steinberg::IPtr<Steinberg::Vst::Parameter>*,
   std::vector<Steinberg::IPtr<Steinberg::Vst::Parameter>,
   std::allocator<Steinberg::IPtr<Steinberg::Vst::Parameter> > > >,
   Steinberg::IPtr<Steinberg::Vst::Parameter>&&) */

void __thiscall
std::
vector<Steinberg::IPtr<Steinberg::Vst::Parameter>,std::allocator<Steinberg::IPtr<Steinberg::Vst::Parameter>>>
::_M_realloc_insert<Steinberg::IPtr<Steinberg::Vst::Parameter>>
          (vector<Steinberg::IPtr<Steinberg::Vst::Parameter>,std::allocator<Steinberg::IPtr<Steinberg::Vst::Parameter>>>
           *this,long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  plVar1 = *(long **)this;
  plVar2 = *(long **)(this + 8);
  lVar3 = (long)plVar2 - (long)plVar1;
  if (lVar3 == 0x7ffffffffffffff8) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar6 = lVar3 >> 3;
  uVar4 = 1;
  if (lVar3 != 0) {
    uVar4 = uVar6;
  }
  uVar8 = uVar4 + uVar6;
  if (uVar8 >> 0x3c != 0) {
    uVar8 = 0xfffffffffffffff;
  }
  if (CARRY8(uVar4,uVar6)) {
    uVar8 = 0xfffffffffffffff;
  }
  if (uVar8 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    pvVar5 = operator_new(uVar8 * 8);
  }
  plVar7 = (long *)*param_2;
  *(long **)((long)pvVar5 + (param_1 - (long)plVar1 >> 3) * 8) = plVar7;
  if (plVar7 != (long *)0x0) {
                    /* try { // try from 001bd7b0 to 001bd7b7 has its CatchHandler @ 001bd886 */
    (**(code **)(*plVar7 + 8))();
  }
                    /* try { // try from 001bd7b8 to 001bd7c7 has its CatchHandler @ 001bd853 */
  lVar3 = __uninitialized_copy<false>::
          __uninit_copy<Steinberg::IPtr<Steinberg::Vst::Parameter>const*,Steinberg::IPtr<Steinberg::Vst::Parameter>*>
                    ((long)plVar1,param_1,(long)pvVar5);
                    /* try { // try from 001bd7cf to 001bd7dc has its CatchHandler @ 001bd886 */
  lVar3 = __uninitialized_copy<false>::
          __uninit_copy<Steinberg::IPtr<Steinberg::Vst::Parameter>const*,Steinberg::IPtr<Steinberg::Vst::Parameter>*>
                    (param_1,(long)plVar2,lVar3 + 8);
  if (plVar1 != plVar2) {
    plVar7 = plVar1;
    do {
      if ((long *)*plVar7 != (long *)0x0) {
                    /* try { // try from 001bd805 to 001bd807 has its CatchHandler @ 001bd8c7 */
        (**(code **)(*(long *)*plVar7 + 0x10))();
        *plVar7 = 0;
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar2);
  }
  if (plVar1 != (long *)0x0) {
    operator_delete(plVar1);
  }
  *(void **)this = pvVar5;
  *(long *)(this + 8) = lVar3;
  *(void **)(this + 0x10) = (void *)((long)pvVar5 + uVar8 * 8);
  return;
}


