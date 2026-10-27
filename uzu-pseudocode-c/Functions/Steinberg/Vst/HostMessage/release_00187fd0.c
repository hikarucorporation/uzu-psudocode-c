// Function : release
// Namespace: Steinberg:Vst:HostMessage
// Entry    : 00187fd0
// Prototype: int release(HostMessage * this)
// Body     : 00187fd0 - 00188017


/* Steinberg::Vst::HostMessage::release() */

int __thiscall Steinberg::Vst::HostMessage::release(HostMessage *this)

{
  int iVar1;
  
  LOCK();
  *(int *)(this + 8) = *(int *)(this + 8) + -1;
  UNLOCK();
  iVar1 = *(int *)(this + 8);
  if (iVar1 == 0) {
    if (*(void **)(this + 0x10) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x10));
    }
    *(undefined8 *)(this + 0x10) = 0;
    if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* try { // try from 00188004 to 00188006 has its CatchHandler @ 00188018 */
      (**(code **)(**(long **)(this + 0x18) + 0x10))();
    }
    operator_delete(this);
  }
  return iVar1;
}


