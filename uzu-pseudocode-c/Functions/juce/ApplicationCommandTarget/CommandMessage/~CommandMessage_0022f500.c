// Function : ~CommandMessage
// Namespace: juce:ApplicationCommandTarget:CommandMessage
// Entry    : 0022f500
// Prototype: undefined ~CommandMessage(CommandMessage * this)
// Body     : 0022f500 - 0022f522


/* juce::ApplicationCommandTarget::CommandMessage::~CommandMessage() */

void __thiscall
juce::ApplicationCommandTarget::CommandMessage::~CommandMessage(CommandMessage *this)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x10);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  operator_delete(this);
  return;
}


