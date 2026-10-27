// Function : readStr8
// Namespace: Steinberg:FStreamer
// Entry    : 0017a0e0
// Prototype: void * readStr8(FStreamer * this)
// Body     : 0017a0e0 - 0017a15f


/* Steinberg::FStreamer::readStr8() */

void * __thiscall Steinberg::FStreamer::readStr8(FStreamer *this)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 uVar3;
  long lVar4;
  void *pvVar5;
  ulong __size;
  undefined4 local_1c;
  
  lVar4 = (**(code **)(*(long *)this + 0x10))(this,&local_1c,4);
  if (lVar4 == 4) {
    if (*(short *)(this + 8) != 0) {
      uVar3 = (undefined1)local_1c;
      uVar1 = local_1c._1_2_ << 8;
      uVar2 = local_1c._1_2_ >> 8;
      local_1c = CONCAT13(uVar3,CONCAT21(uVar1 | uVar2,local_1c._3_1_));
    }
    __size = (ulong)local_1c;
    if ((local_1c - 1 < 0x40000) && (pvVar5 = malloc(__size), pvVar5 != (void *)0x0)) {
      (**(code **)(*(long *)this + 0x10))(this,pvVar5,__size);
      return pvVar5;
    }
  }
  return (void *)0x0;
}


