// Function : tell
// Namespace: Steinberg:Vst:ReadOnlyBStream
// Entry    : 00199020
// Prototype: undefined8 tell(ReadOnlyBStream * this, undefined8 * param_1)
// Body     : 00199020 - 0019902e


/* Steinberg::Vst::ReadOnlyBStream::tell(long*) */

undefined8 __thiscall
Steinberg::Vst::ReadOnlyBStream::tell(ReadOnlyBStream *this,undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = *(undefined8 *)(this + 0x28);
  }
  return 0;
}


