// Function : seek
// Namespace: Steinberg:Vst:BufferStream
// Entry    : 00199260
// Prototype: undefined8 seek(BufferStream * this, long param_1, int param_2, ulong * param_3)
// Body     : 00199260 - 001992c7


/* Steinberg::Vst::BufferStream::seek(long, int, long*) */

undefined8 __thiscall
Steinberg::Vst::BufferStream::seek(BufferStream *this,long param_1,int param_2,ulong *param_3)

{
  long lVar1;
  uint uVar2;
  
  if (param_2 == 2) {
    lVar1 = (ulong)*(uint *)(this + 0x20) - param_1;
    uVar2 = (uint)lVar1;
    if (lVar1 < 1) {
      uVar2 = 0;
    }
    if (*(uint *)(this + 0x20) < uVar2) {
      return 1;
    }
  }
  else {
    if (param_2 != 1) {
      if (param_2 != 0) {
        return 1;
      }
      uVar2 = (uint)param_1;
      if (param_1 < 1) {
        uVar2 = 0;
      }
      if (*(uint *)(this + 0x20) < uVar2) {
        return 1;
      }
      *(uint *)(this + 0x24) = uVar2;
      if (param_3 == (ulong *)0x0) {
        return 0;
      }
      goto LAB_001992c1;
    }
    uVar2 = (uint)((ulong)*(uint *)(this + 0x24) + param_1);
    if ((long)((ulong)*(uint *)(this + 0x24) + param_1) < 1) {
      uVar2 = 0;
    }
    if (*(uint *)(this + 0x20) < uVar2) {
      return 1;
    }
  }
  *(uint *)(this + 0x24) = uVar2;
  if (param_3 == (ulong *)0x0) {
    return 0;
  }
LAB_001992c1:
  *param_3 = (ulong)*(uint *)(this + 0x24);
  return 0;
}


