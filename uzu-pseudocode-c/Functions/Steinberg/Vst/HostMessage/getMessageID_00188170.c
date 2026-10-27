// Function : getMessageID
// Namespace: Steinberg:Vst:HostMessage
// Entry    : 00188170
// Prototype: undefined8 getMessageID(HostMessage * this)
// Body     : 00188170 - 00188174


/* Steinberg::Vst::HostMessage::getMessageID() */

undefined8 __thiscall Steinberg::Vst::HostMessage::getMessageID(HostMessage *this)

{
  return *(undefined8 *)(this + 0x10);
}


