// Function : ~BlockingMessage
// Namespace: juce:MessageManager:Lock:BlockingMessage
// Entry    : 00481c20
// Prototype: undefined ~BlockingMessage(BlockingMessage * this)
// Body     : 00481c20 - 00481c35


/* juce::MessageManager::Lock::BlockingMessage::~BlockingMessage() */

void __thiscall juce::MessageManager::Lock::BlockingMessage::~BlockingMessage(BlockingMessage *this)

{
  std::condition_variable::~condition_variable((condition_variable *)(this + 0x38));
  operator_delete(this);
  return;
}


