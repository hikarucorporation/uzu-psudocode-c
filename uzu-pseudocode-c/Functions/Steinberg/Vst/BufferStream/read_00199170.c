// Function : read
// Namespace: Steinberg:Vst:BufferStream
// Entry    : 00199170
// Prototype: undefined8 read(BufferStream * this, void * param_1, uint param_2, uint * param_3)
// Body     : 00199170 - 001991b2


/* Steinberg::Vst::BufferStream::read(void*, int, int*) */

undefined8 __thiscall
Steinberg::Vst::BufferStream::read(BufferStream *this,void *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x24);
  uVar1 = *(int *)(this + 0x20) - uVar2;
  if (param_2 <= *(int *)(this + 0x20) - uVar2) {
    uVar1 = param_2;
  }
  if (uVar1 != 0) {
    memcpy(param_1,(void *)((ulong)uVar2 + *(long *)(this + 0x18)),(ulong)uVar1);
    uVar2 = *(uint *)(this + 0x24);
  }
  *(uint *)(this + 0x24) = uVar2 + uVar1;
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar1;
  }
  return 0;
}


