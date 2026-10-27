// Function : addRef
// Namespace: Steinberg:Vst:HostMessage
// Entry    : 00187fc0
// Prototype: undefined4 addRef(HostMessage * this)
// Body     : 00187fc0 - 00187fc8


/* Steinberg::Vst::HostMessage::addRef() */

undefined4 __thiscall Steinberg::Vst::HostMessage::addRef(HostMessage *this)

{
  LOCK();
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  UNLOCK();
  return *(undefined4 *)(this + 8);
}


