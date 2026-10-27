// Function : ~vector
// Namespace: std:vector_Steinberg__IPtr_Steinberg__Vst__Unit__std__allocator_Steinberg__IPtr_Steinberg__Vst~1fe279c0
// Entry    : 0019f4a0
// Prototype: undefined ~vector(vector<Steinberg::IPtr<Steinberg::Vst::Unit>,std::allocator<Steinberg::IPtr<Steinberg::Vst::Unit>>> * this)
// Body     : 0019f4a0 - 0019f4fa


/* std::vector<Steinberg::IPtr<Steinberg::Vst::Unit>,
   std::allocator<Steinberg::IPtr<Steinberg::Vst::Unit> > >::~vector() */

void __thiscall
std::
vector<Steinberg::IPtr<Steinberg::Vst::Unit>,std::allocator<Steinberg::IPtr<Steinberg::Vst::Unit>>>
::~vector(vector<Steinberg::IPtr<Steinberg::Vst::Unit>,std::allocator<Steinberg::IPtr<Steinberg::Vst::Unit>>>
          *this)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)this;
  plVar1 = *(long **)(this + 8);
  if (plVar2 != plVar1) {
    do {
      if ((long *)*plVar2 != (long *)0x0) {
                    /* try { // try from 0019f4db to 0019f4dd has its CatchHandler @ 0019f4fb */
        (**(code **)(*(long *)*plVar2 + 0x10))();
        *plVar2 = 0;
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    plVar2 = *(long **)this;
  }
  if (plVar2 == (long *)0x0) {
    return;
  }
  operator_delete(plVar2);
  return;
}


