// Function : sendMessageID
// Namespace: Steinberg:Vst:ComponentBase
// Entry    : 00192080
// Prototype: undefined4 sendMessageID(ComponentBase * this, undefined8 param_1)
// Body     : 00192080 - 0019215e


/* Steinberg::Vst::ComponentBase::sendMessageID(char const*) const */

undefined4 __thiscall
Steinberg::Vst::ComponentBase::sendMessageID(ComponentBase *this,undefined8 param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  long *local_50;
  long *local_48 [3];
  
  puVar1 = *(undefined8 **)(this + 0x20);
  local_48[0] = (long *)0x0;
  if ((puVar1 == (undefined8 *)0x0) ||
     (iVar4 = (**(code **)*puVar1)(puVar1,0x71ac80,local_48), plVar2 = local_48[0], iVar4 != 0)) {
    return 1;
  }
  if (local_48[0] == (long *)0x0) {
    return 1;
  }
  local_48[0] = (long *)CONCAT44(IMessage::iid._12_4_,IMessage::iid._8_4_);
  local_48[1]._0_4_ = IMessage::iid._16_4_;
  local_48[1]._4_4_ = IMessage::iid._20_4_;
  local_50 = (long *)0x0;
                    /* try { // try from 001920f9 to 0019210b has its CatchHandler @ 00192185 */
  iVar4 = (**(code **)(*plVar2 + 0x20))(plVar2,local_48,local_48,&local_50);
  plVar3 = local_50;
  plVar6 = (long *)0x0;
  if (iVar4 == 0) {
    plVar6 = local_50;
  }
                    /* try { // try from 0019211e to 00192123 has its CatchHandler @ 00192167 */
  (**(code **)(*plVar2 + 0x10))(plVar2);
  if (plVar6 == (long *)0x0) {
    return 1;
  }
                    /* try { // try from 0019212d to 00192147 has its CatchHandler @ 0019216f */
  (**(code **)(*plVar6 + 0x20))(plVar6,param_1);
  plVar2 = *(long **)(this + 0x28);
  if (plVar2 == (long *)0x0) {
    uVar5 = 1;
  }
  else {
    uVar5 = (**(code **)(*plVar2 + 0x28))(plVar2,plVar6);
  }
                    /* try { // try from 00192154 to 00192159 has its CatchHandler @ 0019215f */
  (**(code **)(*plVar3 + 0x10))(plVar3);
  return uVar5;
}


