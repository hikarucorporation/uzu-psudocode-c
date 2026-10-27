// Function : tell
// Namespace: Steinberg:Vst:FileStream
// Entry    : 00198df0
// Prototype: undefined8 tell(FileStream * this, long * param_1)
// Body     : 00198df0 - 00198e08


/* Steinberg::Vst::FileStream::tell(long*) */

undefined8 __thiscall Steinberg::Vst::FileStream::tell(FileStream *this,long *param_1)

{
  long lVar1;
  
  if (param_1 != (long *)0x0) {
    lVar1 = ftell(*(FILE **)(this + 0x10));
    *param_1 = lVar1;
  }
  return 0;
}


