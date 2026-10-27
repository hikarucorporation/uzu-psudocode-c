// Function : ~BlockingMessage
// Namespace: juce:MessageManager:Lock:BlockingMessage
// Entry    : 00481c00
// Prototype: undefined ~BlockingMessage(BlockingMessage * this)
// Body     : 00481c00 - 00481c18


/* juce::MessageManager::Lock::BlockingMessage::~BlockingMessage() */

void __thiscall juce::MessageManager::Lock::BlockingMessage::~BlockingMessage(BlockingMessage *this)

{
  std::condition_variable::~condition_variable((condition_variable *)(this + 0x38));
  *(undefined ***)this = &PTR__ReferenceCountedObject_00706828;
  return;
}


