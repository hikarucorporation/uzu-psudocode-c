// Function : queryInterface
// Namespace: Steinberg:Vst:HostMessage
// Entry    : 00188020
// Prototype: undefined8 queryInterface(HostMessage * this, long * param_1, undefined8 * param_2)
// Body     : 00188020 - 00188066


/* Steinberg::Vst::HostMessage::queryInterface(char const*, void**) */

undefined8 __thiscall
Steinberg::Vst::HostMessage::queryInterface(HostMessage *this,long *param_1,undefined8 *param_2)

{
  if (((*param_1 == FUnknown::iid._8_8_) && (param_1[1] == FUnknown::iid._16_8_)) ||
     ((*param_1 == IMessage::iid._8_8_ && (param_1[1] == IMessage::iid._16_8_)))) {
    LOCK();
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    UNLOCK();
    *param_2 = this;
    return 0;
  }
  *param_2 = 0;
  return 0xffffffff;
}


