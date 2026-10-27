// Function : tell
// Namespace: Steinberg:MemoryStream
// Entry    : 00187870
// Prototype: undefined8 tell(MemoryStream * this, undefined8 * param_1)
// Body     : 00187870 - 00187884


/* Steinberg::MemoryStream::tell(long*) */

undefined8 __thiscall Steinberg::MemoryStream::tell(MemoryStream *this,undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return 2;
  }
  *param_1 = *(undefined8 *)(this + 0x28);
  return 0;
}


