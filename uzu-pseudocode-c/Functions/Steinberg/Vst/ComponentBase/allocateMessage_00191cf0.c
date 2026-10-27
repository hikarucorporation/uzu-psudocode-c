// Function : allocateMessage
// Namespace: Steinberg:Vst:ComponentBase
// Entry    : 00191cf0
// Prototype: undefined8 allocateMessage(ComponentBase * this)
// Body     : 00191cf0 - 00191d77


/* Steinberg::Vst::ComponentBase::allocateMessage() const */

undefined8 __thiscall Steinberg::Vst::ComponentBase::allocateMessage(ComponentBase *this)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_30;
  long *local_28 [3];
  
  puVar1 = *(undefined8 **)(this + 0x20);
  local_28[0] = (long *)0x0;
  if (((puVar1 == (undefined8 *)0x0) ||
      (iVar3 = (**(code **)*puVar1)(puVar1,0x71ac80,local_28), plVar2 = local_28[0], iVar3 != 0)) ||
     (local_28[0] == (long *)0x0)) {
    return 0;
  }
  local_28[0] = (long *)CONCAT44(IMessage::iid._12_4_,IMessage::iid._8_4_);
  local_28[1]._0_4_ = IMessage::iid._16_4_;
  local_28[1]._4_4_ = IMessage::iid._20_4_;
  local_30 = 0;
                    /* try { // try from 00191d4d to 00191d5f has its CatchHandler @ 00191d80 */
  iVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,local_28,local_28,&local_30);
  if (iVar3 == 0) {
    uVar4 = local_30;
  }
  else {
    uVar4 = 0;
  }
                    /* try { // try from 00191d70 to 00191d75 has its CatchHandler @ 00191d78 */
  (**(code **)(*plVar2 + 0x10))(plVar2);
  return uVar4;
}


