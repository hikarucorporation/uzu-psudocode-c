// Function : queryInterface
// Namespace: Steinberg:Vst:PlugInterfaceSupport
// Entry    : 00199770
// Prototype: undefined8 queryInterface(PlugInterfaceSupport * this, long * param_1, undefined8 * param_2)
// Body     : 00199770 - 001997d2


/* Steinberg::Vst::PlugInterfaceSupport::queryInterface(char const*, void**) */

undefined8 __thiscall
Steinberg::Vst::PlugInterfaceSupport::queryInterface
          (PlugInterfaceSupport *this,long *param_1,undefined8 *param_2)

{
  if (((*param_1 == FUnknown::iid._8_8_) && (param_1[1] == FUnknown::iid._16_8_)) ||
     ((*param_1 == IPlugInterfaceSupport::iid._8_8_ &&
      (param_1[1] == IPlugInterfaceSupport::iid._16_8_)))) {
    (**(code **)(*(long *)this + 8))(this);
    *param_2 = this;
    return 0;
  }
  *param_2 = 0;
  return 0xffffffff;
}


