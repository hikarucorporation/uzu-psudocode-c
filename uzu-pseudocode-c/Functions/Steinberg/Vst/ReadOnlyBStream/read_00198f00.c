// Function : read
// Namespace: Steinberg:Vst:ReadOnlyBStream
// Entry    : 00198f00
// Prototype: undefined8 read(ReadOnlyBStream * this, undefined8 param_1, int param_2, uint * param_3)
// Body     : 00198f00 - 00198f8e


/* Steinberg::Vst::ReadOnlyBStream::read(void*, int, int*) */

undefined8 __thiscall
Steinberg::Vst::ReadOnlyBStream::read
          (ReadOnlyBStream *this,undefined8 param_1,int param_2,uint *param_3)

{
  long *plVar1;
  uint in_EAX;
  undefined8 uVar2;
  int iVar3;
  undefined8 uStack_28;
  
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  plVar1 = *(long **)(this + 0x10);
  if (plVar1 == (long *)0x0) {
    uVar2 = 5;
  }
  else {
    iVar3 = *(int *)(this + 0x20) - (int)*(long *)(this + 0x28);
    if (param_2 <= iVar3) {
      iVar3 = param_2;
    }
    if (iVar3 < 1) {
      uVar2 = 0;
    }
    else {
      uStack_28._0_4_ = in_EAX;
      uVar2 = (**(code **)(*plVar1 + 0x28))
                        (plVar1,*(long *)(this + 0x28) + *(long *)(this + 0x18),0,0);
      if ((int)uVar2 == 0) {
        uStack_28 = (ulong)(uint)uStack_28;
        uVar2 = (**(code **)(**(long **)(this + 0x10) + 0x18))
                          (*(long **)(this + 0x10),param_1,iVar3,(long)&uStack_28 + 4);
        if (0 < (int)uStack_28._4_4_) {
          *(ulong *)(this + 0x28) = *(long *)(this + 0x28) + (ulong)uStack_28._4_4_;
        }
        if (param_3 != (uint *)0x0) {
          *param_3 = uStack_28._4_4_;
        }
      }
    }
  }
  return uVar2;
}


