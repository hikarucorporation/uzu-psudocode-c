// Function : WaitableEvent
// Namespace: juce:WaitableEvent
// Entry    : 004be320
// Prototype: undefined WaitableEvent(WaitableEvent * this, WaitableEvent param_2)
// Body     : 004be320 - 004be348


/* juce::WaitableEvent::WaitableEvent(bool) */

void __thiscall juce::WaitableEvent::WaitableEvent(WaitableEvent *this,WaitableEvent param_2)

{
  *this = param_2;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  std::condition_variable::condition_variable((condition_variable *)(this + 0x30));
  this[0x60] = (WaitableEvent)0x0;
  return;
}


