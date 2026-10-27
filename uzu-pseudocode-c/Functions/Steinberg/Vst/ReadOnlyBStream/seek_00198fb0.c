// Function : seek
// Namespace: Steinberg:Vst:ReadOnlyBStream
// Entry    : 00198fb0
// Prototype: undefined8 seek(ReadOnlyBStream * this, long param_1, int param_2, long * param_3)
// Body     : 00198fb0 - 00199010


/* Steinberg::Vst::ReadOnlyBStream::seek(long, int, long*) */

undefined8 __thiscall
Steinberg::Vst::ReadOnlyBStream::seek(ReadOnlyBStream *this,long param_1,int param_2,long *param_3)

{
  long lVar1;
  
  if (param_2 != 0) {
    if (param_2 != 1) {
      if (param_2 == 2) {
        param_1 = param_1 + *(long *)(this + 0x20);
        *(long *)(this + 0x28) = param_1;
      }
      else {
        param_1 = *(long *)(this + 0x28);
      }
      goto joined_r0x00198fd8;
    }
    param_1 = param_1 + *(long *)(this + 0x28);
  }
  *(long *)(this + 0x28) = param_1;
joined_r0x00198fd8:
  if (param_1 < 0) {
    *(undefined8 *)(this + 0x28) = 0;
    param_1 = 0;
  }
  lVar1 = *(long *)(this + 0x20);
  if (lVar1 < param_1) {
    *(long *)(this + 0x28) = lVar1;
    param_1 = lVar1;
  }
  if (param_3 != (long *)0x0) {
    *param_3 = param_1;
  }
  return 0;
}


