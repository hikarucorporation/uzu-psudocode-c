// Function : write
// Namespace: Steinberg:Vst:BufferStream
// Entry    : 001991c0
// Prototype: byte write(BufferStream * this, void * param_1, uint param_2, uint * param_3)
// Body     : 001991c0 - 0019925a


/* Steinberg::Vst::BufferStream::write(void*, int, int*) */

byte __thiscall
Steinberg::Vst::BufferStream::write(BufferStream *this,void *param_1,uint param_2,uint *param_3)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  
  if (param_1 == (void *)0x0) {
    bVar3 = 0;
  }
  else {
    uVar4 = *(uint *)(this + 0x24);
    if (*(uint *)(this + 0x20) < uVar4 + param_2) {
      uVar2 = *(uint *)(this + 0x28);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x28) = 0x1000;
        uVar2 = 0x1000;
      }
      uVar4 = (uVar4 + param_2 + uVar2) - 1;
      bVar3 = 0;
      bVar1 = Buffer::setSize((Buffer *)(this + 0x10),uVar4 - uVar4 % uVar2);
      if (!bVar1) goto joined_r0x00199257;
      uVar4 = *(uint *)(this + 0x24);
    }
    memcpy((void *)((ulong)uVar4 + *(long *)(this + 0x18)),param_1,(ulong)param_2);
    *(uint *)(this + 0x24) = *(int *)(this + 0x24) + param_2;
    bVar3 = 1;
  }
joined_r0x00199257:
  if (param_3 != (uint *)0x0) {
    uVar4 = 0;
    if (bVar3 != 0) {
      uVar4 = param_2;
    }
    *param_3 = uVar4;
  }
  return bVar3 ^ 1;
}


