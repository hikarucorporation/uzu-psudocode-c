// Function : ~vector
// Namespace: std:vector_Steinberg__IPtr_Steinberg__Vst__ProgramList__std__allocator_Steinberg__IPtr_Steinbe~6e1f8ead
// Entry    : 0019f430
// Prototype: undefined ~vector(vector<Steinberg::IPtr<Steinberg::Vst::ProgramList>,std::allocator<Steinberg::IPtr<Steinberg::Vst::ProgramList>>> * this)
// Body     : 0019f430 - 0019f48a


/* std::vector<Steinberg::IPtr<Steinberg::Vst::ProgramList>,
   std::allocator<Steinberg::IPtr<Steinberg::Vst::ProgramList> > >::~vector() */

void __thiscall
std::
vector<Steinberg::IPtr<Steinberg::Vst::ProgramList>,std::allocator<Steinberg::IPtr<Steinberg::Vst::ProgramList>>>
::~vector(vector<Steinberg::IPtr<Steinberg::Vst::ProgramList>,std::allocator<Steinberg::IPtr<Steinberg::Vst::ProgramList>>>
          *this)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)this;
  plVar1 = *(long **)(this + 8);
  if (plVar2 != plVar1) {
    do {
      if ((long *)*plVar2 != (long *)0x0) {
                    /* try { // try from 0019f46b to 0019f46d has its CatchHandler @ 0019f48b */
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


