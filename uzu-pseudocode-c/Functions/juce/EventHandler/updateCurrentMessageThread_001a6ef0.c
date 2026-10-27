// Function : updateCurrentMessageThread
// Namespace: juce:EventHandler
// Entry    : 001a6ef0
// Prototype: undefined updateCurrentMessageThread(EventHandler * this)
// Body     : 001a6ef0 - 001a6f67


/* juce::EventHandler::updateCurrentMessageThread() */

void __thiscall juce::EventHandler::updateCurrentMessageThread(EventHandler *this)

{
  Thread *this_00;
  int iVar1;
  MessageManager *pMVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  pMVar2 = (MessageManager *)MessageManager::getInstance();
  uVar3 = MessageManager::isThisTheMessageThread(pMVar2);
  if ((char)uVar3 != '\0') {
    return;
  }
                    /* try { // try from 001a6f0b to 001a6f0f has its CatchHandler @ 001a6f68 */
  uVar4 = Thread::isThreadRunning(*(Thread **)(this + 0x10));
  if ((char)uVar4 != '\0') {
    this_00 = *(Thread **)(this + 0x10);
    Thread::signalThreadShouldExit(this_00);
    Thread::stopThread(this_00,-1);
  }
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(hostMessageThreadState + 8));
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar1);
  }
  hostMessageThreadState._0_4_ = 1;
                    /* try { // try from 001a6f47 to 001a6f53 has its CatchHandler @ 001a6f70 */
  pMVar2 = (MessageManager *)MessageManager::getInstance();
  MessageManager::setCurrentThreadAsMessageThread(pMVar2);
  pthread_mutex_unlock((pthread_mutex_t *)(hostMessageThreadState + 8));
  return;
}


