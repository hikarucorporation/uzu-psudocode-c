// Function : ~ReadOnlyBStream
// Namespace: Steinberg:Vst:ReadOnlyBStream
// Entry    : 00198eb0
// Prototype: undefined ~ReadOnlyBStream(ReadOnlyBStream * this)
// Body     : 00198eb0 - 00198ed5


/* Steinberg::Vst::ReadOnlyBStream::~ReadOnlyBStream() */

void __thiscall Steinberg::Vst::ReadOnlyBStream::~ReadOnlyBStream(ReadOnlyBStream *this)

{
  *(undefined ***)this = &PTR_queryInterface_007042e0;
  if (*(long **)(this + 0x10) != (long *)0x0) {
                    /* try { // try from 00198eca to 00198ecc has its CatchHandler @ 00198ed6 */
    (**(code **)(**(long **)(this + 0x10) + 0x10))();
  }
  operator_delete(this);
  return;
}


