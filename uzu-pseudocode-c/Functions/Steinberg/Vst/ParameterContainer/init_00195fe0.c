// Function : init
// Namespace: Steinberg:Vst:ParameterContainer
// Entry    : 00195fe0
// Prototype: undefined init(long * param_1, uint param_2)
// Body     : 00195fe0 - 00196023


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::Vst::ParameterContainer::init(int, int) */

void __cdecl Steinberg::Vst::ParameterContainer::init(long *param_1,uint param_2)

{
  vector<Steinberg::IPtr<Steinberg::Vst::Parameter>,std::allocator<Steinberg::IPtr<Steinberg::Vst::Parameter>>>
  *this;
  
  if (*param_1 == 0) {
    this = operator_new(0x18);
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *param_1 = (long)this;
    if (0 < (int)param_2) {
      std::
      vector<Steinberg::IPtr<Steinberg::Vst::Parameter>,std::allocator<Steinberg::IPtr<Steinberg::Vst::Parameter>>>
      ::reserve(this,(ulong)param_2);
      return;
    }
  }
  return;
}


