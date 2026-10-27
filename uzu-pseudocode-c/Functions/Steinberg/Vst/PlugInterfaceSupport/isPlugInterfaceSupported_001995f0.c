// Function : isPlugInterfaceSupported
// Namespace: Steinberg:Vst:PlugInterfaceSupport
// Entry    : 001995f0
// Prototype: bool isPlugInterfaceSupported(PlugInterfaceSupport * this, undefined8 * param_1)
// Body     : 001995f0 - 0019963e


/* Steinberg::Vst::PlugInterfaceSupport::isPlugInterfaceSupported(char const*) */

bool __thiscall
Steinberg::Vst::PlugInterfaceSupport::isPlugInterfaceSupported
          (PlugInterfaceSupport *this,undefined8 *param_1)

{
  long lVar1;
  undefined **local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_20 = &PTR__FUID_00704de0;
  local_18 = 0;
  uStack_10 = 0;
  if (param_1 != (undefined8 *)0x0) {
    local_18 = *param_1;
    uStack_10 = param_1[1];
  }
  lVar1 = std::
          __find_if<__gnu_cxx::__normal_iterator<Steinberg::FUID*,std::vector<Steinberg::FUID,std::allocator<Steinberg::FUID>>>,__gnu_cxx::__ops::_Iter_equals_val<Steinberg::FUID_const>>
                    (*(long *)(this + 0x10),*(long *)(this + 0x18),(long)&local_20);
  return lVar1 == *(long *)(this + 0x18);
}


