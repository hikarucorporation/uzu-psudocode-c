// Function : ~MessageThread
// Namespace: juce:detail:MessageThread
// Entry    : 001a6700
// Prototype: undefined ~MessageThread(MessageThread * this)
// Body     : 001a6700 - 001a6711


/* juce::detail::MessageThread::~MessageThread() */

void __thiscall juce::detail::MessageThread::~MessageThread(MessageThread *this)

{
  ~MessageThread(this);
  operator_delete(this);
  return;
}


