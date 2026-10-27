// Function : run
// Namespace: juce:Timer:TimerThread
// Entry    : 00485720
// Prototype: undefined run(TimerThread * this)
// Body     : 00485720 - 004859f0


/* juce::Timer::TimerThread::run() */

void __thiscall juce::Timer::TimerThread::run(TimerThread *this)

{
  long *plVar1;
  pthread_mutex_t *__mutex;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  timespec local_40;
  
  clock_gettime(1,&local_40);
  auVar5 = SEXT816(local_40.tv_nsec / 1000 + local_40.tv_sec * 1000000) *
           SEXT816(0x20c49ba5e353f7cf);
  uVar10 = (int)(auVar5._8_8_ >> 7) - (auVar5._12_4_ >> 0x1f);
  if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar10) ||
     (uVar10 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
    LOCK();
    UNLOCK();
    _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar10;
  }
  plVar7 = operator_new(0x10);
  *plVar7 = 0;
  plVar7[1] = 0;
  *plVar7 = (long)&PTR__ReferenceCountedObject_00712e88;
  LOCK();
  *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
  UNLOCK();
  __mutex = (pthread_mutex_t *)(this + 0x1a0);
  do {
    while( true ) {
      if (((byte)this[0x165] & 1) != 0) {
        LOCK();
        plVar1 = plVar7 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          operator_delete(plVar7);
          return;
        }
        return;
      }
      clock_gettime(1,&local_40);
      auVar5 = SEXT816(local_40.tv_nsec / 1000 + local_40.tv_sec * 1000000) *
               SEXT816(0x20c49ba5e353f7cf);
      uVar11 = (int)(auVar5._8_8_ >> 7) - (auVar5._12_4_ >> 0x1f);
      if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar11) ||
         (uVar11 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
        LOCK();
        UNLOCK();
        _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar11;
      }
      pthread_mutex_lock(__mutex);
      lVar3 = *(long *)(this + 0x1c8);
      lVar4 = *(long *)(this + 0x1d0);
      if (lVar3 != lVar4) break;
      pthread_mutex_unlock(__mutex);
      iVar6 = 100;
LAB_004857fd:
                    /* try { // try from 00485804 to 004858e9 has its CatchHandler @ 004859f1 */
      WaitableEvent::wait((double)iVar6,(WaitableEvent *)(this + 0xf0));
      uVar10 = uVar11;
    }
    lVar9 = lVar3;
    do {
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + ((uVar10 + (uVar11 < uVar10)) - uVar11);
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != lVar4);
    iVar2 = *(int *)(lVar3 + 8);
    pthread_mutex_unlock(__mutex);
    if ((0 < iVar2) ||
       (uVar8 = WaitableEvent::wait(0.0,(WaitableEvent *)(this + 0x1e0)), (char)uVar8 != '\0')) {
      iVar6 = 100;
      if (iVar2 < 100) {
        iVar6 = iVar2;
      }
      if (iVar2 < 1) {
        iVar6 = 1;
      }
      goto LAB_004857fd;
    }
    if (((MessageManager::instance == 0) || (*(int *)(MessageManager::instance + 8) != 0)) ||
       (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar7 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
    else {
      InternalMessageQueue::postMessage
                ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,(long)plVar7);
    }
                    /* try { // try from 0048594a to 0048595b has its CatchHandler @ 004859f1 */
    uVar8 = WaitableEvent::wait(DAT_005de748,(WaitableEvent *)(this + 0x1e0));
    uVar10 = uVar11;
    if ((char)uVar8 == '\0') {
      if (((MessageManager::instance == 0) || (*(int *)(MessageManager::instance + 8) != 0)) ||
         (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar7 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
      else {
        InternalMessageQueue::postMessage
                  ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,(long)plVar7
                  );
      }
    }
  } while( true );
}


