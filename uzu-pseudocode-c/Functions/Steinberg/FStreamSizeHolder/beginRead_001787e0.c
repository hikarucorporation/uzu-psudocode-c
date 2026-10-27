// Function : beginRead
// Namespace: Steinberg:FStreamSizeHolder
// Entry    : 001787e0
// Prototype: undefined beginRead(FStreamSizeHolder * this)
// Body     : 001787e0 - 0017885b


/* Steinberg::FStreamSizeHolder::beginRead() */

void __thiscall Steinberg::FStreamSizeHolder::beginRead(FStreamSizeHolder *this)

{
  long *plVar1;
  uint in_EAX;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  uVar2 = (**(code **)(**(long **)this + 0x28))();
  *(undefined8 *)(this + 8) = uVar2;
  uStack_18 = (ulong)(uint)uStack_18;
  plVar1 = *(long **)this;
  lVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,(long)&uStack_18 + 4,4);
  if (lVar3 == 4) {
    if ((short)plVar1[1] != 0) {
      uStack_18 = (ulong)CONCAT13(uStack_18._4_1_,
                                  CONCAT21(uStack_18._5_2_ << 8 | uStack_18._5_2_ >> 8,
                                           uStack_18._7_1_)) << 0x20;
    }
  }
  else {
    uStack_18 = 0;
  }
  *(long *)(this + 8) = *(long *)(this + 8) + (long)uStack_18._4_4_ + 4;
  return;
}


