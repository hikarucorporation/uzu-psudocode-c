// Function : ~HostMessage
// Namespace: Steinberg:Vst:HostMessage
// Entry    : 00188090
// Prototype: undefined ~HostMessage(HostMessage * this)
// Body     : 00188090 - 001880c2


/* Steinberg::Vst::HostMessage::~HostMessage() */

void __thiscall Steinberg::Vst::HostMessage::~HostMessage(HostMessage *this)

{
  if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x10));
  }
  *(undefined8 *)(this + 0x10) = 0;
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* try { // try from 001880b6 to 001880b8 has its CatchHandler @ 001880c3 */
    (**(code **)(**(long **)(this + 0x18) + 0x10))();
    *(undefined8 *)(this + 0x18) = 0;
  }
  return;
}


