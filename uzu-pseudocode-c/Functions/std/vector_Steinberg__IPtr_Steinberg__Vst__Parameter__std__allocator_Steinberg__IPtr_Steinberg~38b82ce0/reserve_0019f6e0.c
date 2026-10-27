// Function : reserve
// Namespace: std:vector_Steinberg__IPtr_Steinberg__Vst__Parameter__std__allocator_Steinberg__IPtr_Steinberg~38b82ce0
// Entry    : 0019f6e0
// Prototype: undefined reserve(vector<Steinberg::IPtr<Steinberg::Vst::Parameter>,std::allocator<Steinberg::IPtr<Steinberg::Vst::Parameter>>> * this, ulong param_1)
// Body     : 0019f6e0 - 0019f7ae


/* std::vector<Steinberg::IPtr<Steinberg::Vst::Parameter>,
   std::allocator<Steinberg::IPtr<Steinberg::Vst::Parameter> > >::reserve(unsigned long) */

void __thiscall
std::
vector<Steinberg::IPtr<Steinberg::Vst::Parameter>,std::allocator<Steinberg::IPtr<Steinberg::Vst::Parameter>>>
::reserve(vector<Steinberg::IPtr<Steinberg::Vst::Parameter>,std::allocator<Steinberg::IPtr<Steinberg::Vst::Parameter>>>
          *this,ulong param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  long *plVar5;
  
  if (param_1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::reserve");
  }
  lVar1 = *(long *)this;
  if ((ulong)(*(long *)(this + 0x10) - lVar1 >> 3) < param_1) {
    lVar2 = *(long *)(this + 8);
    pvVar4 = _M_allocate_and_copy<Steinberg::IPtr<Steinberg::Vst::Parameter>const*>
                       (this,param_1,lVar1,lVar2);
    plVar5 = *(long **)this;
    plVar3 = *(long **)(this + 8);
    if (plVar5 != plVar3) {
      do {
        if ((long *)*plVar5 != (long *)0x0) {
                    /* try { // try from 0019f785 to 0019f787 has its CatchHandler @ 0019f7af */
          (**(code **)(*(long *)*plVar5 + 0x10))();
          *plVar5 = 0;
        }
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar3);
      plVar5 = *(long **)this;
    }
    if (plVar5 != (long *)0x0) {
      operator_delete(plVar5);
    }
    *(void **)this = pvVar4;
    *(void **)(this + 8) = (void *)((long)pvVar4 + (lVar2 - lVar1 >> 3) * 8);
    *(void **)(this + 0x10) = (void *)((long)pvVar4 + param_1 * 8);
  }
  return;
}


