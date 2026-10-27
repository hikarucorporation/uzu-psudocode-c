// Function : messageCallback
// Namespace: juce:MessageManager:Lock:BlockingMessage
// Entry    : 00481c40
// Prototype: undefined messageCallback(BlockingMessage * this)
// Body     : 00481c40 - 00481d05


/* juce::MessageManager::Lock::BlockingMessage::messageCallback() */

void __thiscall juce::MessageManager::Lock::BlockingMessage::messageCallback(BlockingMessage *this)

{
  pthread_mutex_t *__mutex;
  long lVar1;
  int iVar2;
  
  __mutex = (pthread_mutex_t *)(this + 0x10);
  iVar2 = pthread_mutex_lock(__mutex);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar2);
  }
  lVar1 = *(long *)(this + 0x68);
  if (lVar1 != 0) {
    iVar2 = pthread_mutex_lock((pthread_mutex_t *)(lVar1 + 0x28));
    if (iVar2 != 0) {
                    /* try { // try from 00481cff to 00481d05 has its CatchHandler @ 00481d06 */
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar2);
    }
    *(undefined2 *)(lVar1 + 0x88) = 0x101;
    pthread_mutex_unlock((pthread_mutex_t *)(lVar1 + 0x28));
    std::condition_variable::notify_one();
    if (*(long *)(this + 0x68) != 0) {
      do {
                    /* try { // try from 00481cc0 to 00481cca has its CatchHandler @ 00481d19 */
        std::condition_variable::wait((unique_lock *)(this + 0x38));
      } while (*(long *)(this + 0x68) != 0);
      if (__mutex == (pthread_mutex_t *)0x0) {
        return;
      }
    }
  }
  pthread_mutex_unlock(__mutex);
  return;
}


