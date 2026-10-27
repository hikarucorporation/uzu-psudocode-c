// Function : ~TimerThread
// Namespace: juce:Timer:TimerThread
// Entry    : 004848f0
// Prototype: undefined ~TimerThread(TimerThread * this)
// Body     : 004848f0 - 00484aef


/* juce::Timer::TimerThread::~TimerThread() */

void __thiscall juce::Timer::TimerThread::~TimerThread(TimerThread *this)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  int *piVar4;
  pthread_mutex_t *__mutex;
  pthread_mutex_t *__mutex_00;
  int iVar5;
  void *pvVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  
                    /* try { // try from 004848fe to 004849bb has its CatchHandler @ 00484af0 */
  Thread::signalThreadShouldExit((Thread *)this);
  iVar5 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x1e8));
  if (iVar5 != 0) {
                    /* try { // try from 00484aaa to 00484ab0 has its CatchHandler @ 00484af0 */
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  LOCK();
  this[0x240] = (TimerThread)0x1;
  UNLOCK();
  std::condition_variable::notify_all();
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x1e8));
  if (ShutdownDetector::getListeners()::listeners == '\0') {
    iVar5 = __cxa_guard_acquire(&ShutdownDetector::getListeners()::listeners);
    if (iVar5 != 0) {
      __cxa_atexit(ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>
                   ::~ListenerList,&ShutdownDetector::getListeners()::listeners,&__dso_handle);
      __cxa_guard_release(&ShutdownDetector::getListeners()::listeners);
    }
  }
  __mutex = ShutdownDetector::getListeners()::listeners;
  if (DAT_0071d168 == 2) {
    pthread_mutex_lock(ShutdownDetector::getListeners()::listeners);
    __mutex_00 = ShutdownDetector::getListeners()::listeners;
    pthread_mutex_lock(ShutdownDetector::getListeners()::listeners);
    uVar1 = *(uint *)((long)__mutex_00 + 0x34);
    if (0 < (int)uVar1) {
      lVar2 = *(long *)&__mutex_00[1].__data;
      uVar10 = 0;
      do {
        if (*(TimerThread **)(lVar2 + uVar10 * 8) == this + 0x198) {
          uVar9 = (uint)uVar10;
          memmove((void *)(lVar2 + uVar10 * 8),(void *)(lVar2 + uVar10 * 8 + 8),
                  (long)(int)(~uVar9 + uVar1) << 3);
          iVar5 = *(int *)((long)__mutex_00 + 0x34);
          uVar1 = iVar5 - 1;
          *(uint *)((long)__mutex_00 + 0x34) = uVar1;
          iVar8 = iVar5 * 2 + -2;
          iVar5 = 0;
          if (-1 < iVar8) {
            iVar5 = iVar8;
          }
          if (iVar5 < *(int *)((long)__mutex_00 + 0x30)) {
            uVar11 = 8;
            if (8 < (int)uVar1) {
              uVar11 = uVar1;
            }
            if ((int)uVar11 < *(int *)((long)__mutex_00 + 0x30)) {
              pvVar6 = realloc((void *)__mutex_00[1].__align,(ulong)uVar11 << 3);
              __mutex_00[1].__align = (long)pvVar6;
              *(uint *)((long)__mutex_00 + 0x30) = uVar11;
            }
          }
          pthread_mutex_unlock(__mutex_00);
          if (-1 < (int)uVar9) {
            puVar3 = (undefined8 *)DAT_0071d158[1];
            for (puVar7 = (undefined8 *)*DAT_0071d158; puVar7 != puVar3; puVar7 = puVar7 + 1) {
              piVar4 = (int *)*puVar7;
              if ((int)uVar9 < piVar4[1]) {
                piVar4[1] = piVar4[1] + -1;
              }
              if ((int)uVar9 <= *piVar4) {
                *piVar4 = *piVar4 + -1;
              }
            }
          }
          goto LAB_004849a7;
        }
        uVar10 = uVar10 + 1;
      } while (uVar1 != uVar10);
    }
    pthread_mutex_unlock(__mutex_00);
LAB_004849a7:
    pthread_mutex_unlock(__mutex);
  }
  Thread::stopThread((Thread *)this,-1);
  std::condition_variable::~condition_variable((condition_variable *)(this + 0x210));
  if (*(void **)(this + 0x1c8) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x1c8));
  }
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x1a0));
  Thread::~Thread((Thread *)this);
  return;
}


