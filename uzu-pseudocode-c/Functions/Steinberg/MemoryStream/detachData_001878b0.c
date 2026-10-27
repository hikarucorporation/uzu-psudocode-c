// Function : detachData
// Namespace: Steinberg:MemoryStream
// Entry    : 001878b0
// Prototype: undefined8 detachData(MemoryStream * this)
// Body     : 001878b0 - 001878c8


/* Steinberg::MemoryStream::detachData() */

undefined8 __thiscall Steinberg::MemoryStream::detachData(MemoryStream *this)

{
  undefined8 uVar1;
  
  if (this[0x30] == (MemoryStream)0x0) {
    return 0;
  }
  uVar1 = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  return uVar1;
}


