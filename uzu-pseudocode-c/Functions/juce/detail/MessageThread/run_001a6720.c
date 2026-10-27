// Function : run
// Namespace: juce:detail:MessageThread
// Entry    : 001a6720
// Prototype: undefined run(MessageThread * this)
// Body     : 001a6720 - 001a6777


/* juce::detail::MessageThread::run() */

void __thiscall juce::detail::MessageThread::run(MessageThread *this)

{
  byte bVar1;
  MessageManager *this_00;
  undefined8 uVar2;
  
  this_00 = (MessageManager *)MessageManager::getInstance();
  MessageManager::setCurrentThreadAsMessageThread(this_00);
  SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
            ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
             XWindowSystem::singletonHolder);
  WaitableEvent::signal((WaitableEvent *)(this + 0x198));
  while( true ) {
    bVar1 = Thread::threadShouldExit((Thread *)this);
    if (bVar1 != 0) break;
    uVar2 = dispatchNextMessageOnSystemQueue(1);
    if ((char)uVar2 == '\0') {
      Thread::sleep(1);
    }
  }
  return;
}


