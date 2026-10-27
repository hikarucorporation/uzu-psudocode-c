// Function : IBStreamer
// Namespace: Steinberg:IBStreamer
// Entry    : 00178630
// Prototype: undefined IBStreamer(IBStreamer * this, undefined8 param_1, undefined2 param_2)
// Body     : 00178630 - 00178642


/* Steinberg::IBStreamer::IBStreamer(Steinberg::IBStream*, short) */

void __thiscall
Steinberg::IBStreamer::IBStreamer(IBStreamer *this,undefined8 param_1,undefined2 param_2)

{
  *(undefined2 *)(this + 8) = param_2;
  *(undefined ***)this = &PTR__FStreamer_00702bd0;
  *(undefined8 *)(this + 0x10) = param_1;
  return;
}


