// Function : queryInterface
// Namespace: Steinberg:Vst:BufferStream
// Entry    : 00199060
// Prototype: undefined8 queryInterface(BufferStream * this, long * param_1, undefined8 * param_2)
// Body     : 00199060 - 001990c2


/* Steinberg::Vst::BufferStream::queryInterface(char const*, void**) */

undefined8 __thiscall
Steinberg::Vst::BufferStream::queryInterface(BufferStream *this,long *param_1,undefined8 *param_2)

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


