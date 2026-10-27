// Function : ~HostMessage
// Namespace: Steinberg:Vst:HostMessage
// Entry    : 00188130
// Prototype: undefined ~HostMessage(HostMessage * this)
// Body     : 00188130 - 00188161


/* Steinberg::Vst::HostMessage::~HostMessage() */

void __thiscall Steinberg::Vst::HostMessage::~HostMessage(HostMessage *this)

{
  if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x10));
  }
  *(undefined8 *)(this + 0x10) = 0;
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* try { // try from 00188156 to 00188158 has its CatchHandler @ 00188162 */
    (**(code **)(**(long **)(this + 0x18) + 0x10))();
  }
  operator_delete(this);
  return;
}


