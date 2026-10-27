// Function : _M_realloc_insert<Steinberg::Vst::Unit*&,bool>
// Namespace: std:vector_Steinberg__IPtr_Steinberg__Vst__Unit__std__allocator_Steinberg__IPtr_Steinberg__Vst~1fe279c0
// Entry    : 001bb7c0
// Prototype: void _M_realloc_insert<Steinberg::Vst::Unit*&,bool>(vector<Steinberg::IPtr<Steinberg::Vst::Unit>,std::allocator<Steinberg::IPtr<Steinberg::Vst::Unit>>> * this, long param_1, long * param_2, char * param_3)
// Body     : 001bb7c0 - 001bb922


/* void std::vector<Steinberg::IPtr<Steinberg::Vst::Unit>,
   std::allocator<Steinberg::IPtr<Steinberg::Vst::Unit> >
   >::_M_realloc_insert<Steinberg::Vst::Unit*&,
   bool>(__gnu_cxx::__normal_iterator<Steinberg::IPtr<Steinberg::Vst::Unit>*,
   std::vector<Steinberg::IPtr<Steinberg::Vst::Unit>,
   std::allocator<Steinberg::IPtr<Steinberg::Vst::Unit> > > >, Steinberg::Vst::Unit*&, bool&&) */

void __thiscall
std::
vector<Steinberg::IPtr<Steinberg::Vst::Unit>,std::allocator<Steinberg::IPtr<Steinberg::Vst::Unit>>>
::_M_realloc_insert<Steinberg::Vst::Unit*&,bool>
          (vector<Steinberg::IPtr<Steinberg::Vst::Unit>,std::allocator<Steinberg::IPtr<Steinberg::Vst::Unit>>>
           *this,long param_1,long *param_2,char *param_3)

{
  char cVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  plVar2 = *(long **)this;
  plVar3 = *(long **)(this + 8);
  lVar4 = (long)plVar3 - (long)plVar2;
  if (lVar4 == 0x7ffffffffffffff8) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar8 = lVar4 >> 3;
  uVar5 = 1;
  if (lVar4 != 0) {
    uVar5 = uVar8;
  }
  uVar9 = uVar5 + uVar8;
  if (uVar9 >> 0x3c != 0) {
    uVar9 = 0xfffffffffffffff;
  }
  if (CARRY8(uVar5,uVar8)) {
    uVar9 = 0xfffffffffffffff;
  }
  if (uVar9 == 0) {
    pvVar6 = (void *)0x0;
  }
  else {
    pvVar6 = operator_new(uVar9 * 8);
  }
  plVar7 = (long *)*param_2;
  cVar1 = *param_3;
  *(long **)((long)pvVar6 + (param_1 - (long)plVar2 >> 3) * 8) = plVar7;
  if ((plVar7 != (long *)0x0) && (cVar1 != '\0')) {
                    /* try { // try from 001bb877 to 001bb87e has its CatchHandler @ 001bb956 */
    (**(code **)(*plVar7 + 8))();
  }
                    /* try { // try from 001bb87f to 001bb88e has its CatchHandler @ 001bb923 */
  lVar4 = __uninitialized_copy<false>::
          __uninit_copy<Steinberg::IPtr<Steinberg::Vst::Unit>const*,Steinberg::IPtr<Steinberg::Vst::Unit>*>
                    ((long)plVar2,param_1,(long)pvVar6);
                    /* try { // try from 001bb896 to 001bb8a3 has its CatchHandler @ 001bb956 */
  lVar4 = __uninitialized_copy<false>::
          __uninit_copy<Steinberg::IPtr<Steinberg::Vst::Unit>const*,Steinberg::IPtr<Steinberg::Vst::Unit>*>
                    (param_1,(long)plVar3,lVar4 + 8);
  if (plVar2 != plVar3) {
    plVar7 = plVar2;
    do {
      if ((long *)*plVar7 != (long *)0x0) {
                    /* try { // try from 001bb8dd to 001bb8df has its CatchHandler @ 001bb997 */
        (**(code **)(*(long *)*plVar7 + 0x10))();
        *plVar7 = 0;
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar3);
  }
  if (plVar2 != (long *)0x0) {
    operator_delete(plVar2);
  }
  *(void **)this = pvVar6;
  *(long *)(this + 8) = lVar4;
  *(void **)(this + 0x10) = (void *)((long)pvVar6 + uVar9 * 8);
  return;
}


