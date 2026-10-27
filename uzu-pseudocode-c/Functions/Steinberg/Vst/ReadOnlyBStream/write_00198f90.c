// Function : write
// Namespace: Steinberg:Vst:ReadOnlyBStream
// Entry    : 00198f90
// Prototype: undefined8 write(void)
// Body     : 00198f90 - 00198fa0


/* Steinberg::Vst::ReadOnlyBStream::write(void*, int, int*) */

undefined8 Steinberg::Vst::ReadOnlyBStream::write(void)

{
  undefined4 *in_RCX;
  
  if (in_RCX != (undefined4 *)0x0) {
    *in_RCX = 0;
  }
  return 3;
}


