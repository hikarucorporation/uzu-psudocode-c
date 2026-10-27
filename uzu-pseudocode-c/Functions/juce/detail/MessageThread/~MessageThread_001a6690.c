// Function : ~MessageThread
// Namespace: juce:detail:MessageThread
// Entry    : 001a6690
// Prototype: undefined ~MessageThread(MessageThread * this)
// Body     : 001a6690 - 001a66dd


/* juce::detail::MessageThread::~MessageThread() */

void __thiscall juce::detail::MessageThread::~MessageThread(MessageThread *this)

{
  MessageManager *this_00;
  
  *(undefined ***)this = &PTR__MessageThread_007052e0;
                    /* try { // try from 001a66a1 to 001a66c2 has its CatchHandler @ 001a66de */
  this_00 = (MessageManager *)MessageManager::getInstance();
  MessageManager::stopDispatchLoop(this_00);
  Thread::signalThreadShouldExit((Thread *)this);
  Thread::stopThread((Thread *)this,-1);
  std::condition_variable::~condition_variable((condition_variable *)(this + 0x1c8));
  Thread::~Thread((Thread *)this);
  return;
}


