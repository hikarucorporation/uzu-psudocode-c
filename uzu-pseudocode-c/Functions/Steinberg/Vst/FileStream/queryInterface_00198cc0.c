// Function : queryInterface
// Namespace: Steinberg:Vst:FileStream
// Entry    : 00198cc0
// Prototype: undefined8 queryInterface(FileStream * this, long * param_1, undefined8 * param_2)
// Body     : 00198cc0 - 00198d22


/* Steinberg::Vst::FileStream::queryInterface(char const*, void**) */

undefined8 __thiscall
Steinberg::Vst::FileStream::queryInterface(FileStream *this,long *param_1,undefined8 *param_2)

{
  if (((*param_1 == FUnknown::iid._8_8_) && (param_1[1] == FUnknown::iid._16_8_)) ||
     ((*param_1 == IBStream::iid._8_8_ && (param_1[1] == IBStream::iid._16_8_)))) {
    (**(code **)(*(long *)this + 8))(this);
    *param_2 = this;
    return 0;
  }
  *param_2 = 0;
  return 0xffffffff;
}


