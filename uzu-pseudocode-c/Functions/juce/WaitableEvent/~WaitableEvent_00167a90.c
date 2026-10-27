// Function : ~WaitableEvent
// Namespace: juce:WaitableEvent
// Entry    : 00167a90
// Prototype: undefined ~WaitableEvent(WaitableEvent * this)
// Body     : 00167a90 - 00167a98


/* juce::WaitableEvent::~WaitableEvent() */

void __thiscall juce::WaitableEvent::~WaitableEvent(WaitableEvent *this)

{
  std::condition_variable::~condition_variable((condition_variable *)(this + 0x30));
  return;
}


