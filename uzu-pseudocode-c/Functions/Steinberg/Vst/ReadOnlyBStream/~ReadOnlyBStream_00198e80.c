// Function : ~ReadOnlyBStream
// Namespace: Steinberg:Vst:ReadOnlyBStream
// Entry    : 00198e80
// Prototype: undefined8 ~ReadOnlyBStream(ReadOnlyBStream * this)
// Body     : 00198e80 - 00198e9b


/* Steinberg::Vst::ReadOnlyBStream::~ReadOnlyBStream() */

undefined8 __thiscall Steinberg::Vst::ReadOnlyBStream::~ReadOnlyBStream(ReadOnlyBStream *this)

{
  undefined8 in_RAX;
  
  *(undefined ***)this = &PTR_queryInterface_007042e0;
  if (*(long **)(this + 0x10) != (long *)0x0) {
                    /* try { // try from 00198e97 to 00198e99 has its CatchHandler @ 00198e9c */
    (**(code **)(**(long **)(this + 0x10) + 0x10))();
  }
  return in_RAX;
}


