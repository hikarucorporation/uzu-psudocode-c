// Function : MemoryStream
// Namespace: Steinberg:MemoryStream
// Entry    : 001874f0
// Prototype: undefined MemoryStream(MemoryStream * this, undefined8 param_1, undefined8 param_2)
// Body     : 001874f0 - 0018751b


/* Steinberg::MemoryStream::MemoryStream(void*, long) */

void __thiscall
Steinberg::MemoryStream::MemoryStream(MemoryStream *this,undefined8 param_1,undefined8 param_2)

{
  *(undefined ***)this = &PTR_queryInterface_00702dd8;
  *(undefined8 *)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x18) = param_2;
  *(undefined8 *)(this + 0x20) = param_2;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined2 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 8) = 1;
  return;
}


