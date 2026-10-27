// Function : startThread
// Namespace: juce:Thread
// Entry    : 004ab530
// Prototype: ulong startThread(Thread * this, undefined4 param_1)
// Body     : 004ab530 - 004ab708


/* juce::Thread::startThread(juce::Thread::Priority) */

ulong __thiscall juce::Thread::startThread(Thread *this,undefined4 param_1)

{
  size_t __stacksize;
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  pthread_t pVar6;
  pthread_attr_t *ppVar7;
  int iVar8;
  pthread_attr_t *__attr;
  pthread_t local_70;
  pthread_attr_t local_68;
  char local_30;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x60));
  if (*(long *)(this + 0x10) == 0) {
    if (this[0x58] != (Thread)0x0) {
      this[0x58] = (Thread)0x0;
    }
    LOCK();
    this[0x165] = (Thread)0x0;
    UNLOCK();
    LOCK();
    *(undefined4 *)(this + 400) = param_1;
    UNLOCK();
    __stacksize = *(size_t *)(this + 0x158);
    __attr = &local_68;
    iVar2 = pthread_attr_init(__attr);
    local_30 = iVar2 == 0;
    if ((__stacksize != 0) && (iVar2 == 0)) {
      pthread_attr_setstacksize(&local_68,__stacksize);
    }
    uVar5 = 0;
    if (this[0x58] != (Thread)0x0) {
      iVar2 = *(int *)(this + 0x20);
      iVar3 = sched_get_priority_min(2);
      iVar8 = 0;
      if (-1 < iVar3) {
        iVar8 = iVar3;
      }
      iVar4 = sched_get_priority_max(2);
      iVar3 = 1;
      if (0 < iVar4) {
        iVar3 = iVar4;
      }
      uVar5 = (ulong)(uint)(((iVar3 - iVar8) * iVar2) / 10 + iVar8) << 0x20 | 2;
    }
    local_70 = CONCAT44(local_70._4_4_,(int)(uVar5 >> 0x20));
    ppVar7 = __attr;
    if (local_30 == '\0') {
      ppVar7 = (pthread_attr_t *)0x0;
    }
    pthread_attr_setinheritsched(ppVar7,1);
    ppVar7 = __attr;
    if (local_30 == '\0') {
      ppVar7 = (pthread_attr_t *)0x0;
    }
    pthread_attr_setschedpolicy(ppVar7,(int)uVar5);
    ppVar7 = __attr;
    if (local_30 == '\0') {
      ppVar7 = (pthread_attr_t *)0x0;
    }
    pthread_attr_setschedparam(ppVar7,(sched_param *)&local_70);
    local_70 = 0;
    if (local_30 == '\0') {
      __attr = (pthread_attr_t *)0x0;
    }
    iVar2 = pthread_create(&local_70,__attr,
                           createNativeThread(juce::Thread::Priority)::$_31::__invoke,this);
    pVar6 = 0;
    if (iVar2 == 0) {
      pthread_detach(local_70);
      pVar6 = local_70;
    }
    LOCK();
    *(pthread_t *)(this + 0x10) = pVar6;
    UNLOCK();
    LOCK();
    *(pthread_t *)(this + 0x18) = pVar6;
    UNLOCK();
    lVar1 = *(long *)(this + 0x18);
    if (local_30 != '\0') {
      pthread_attr_destroy(&local_68);
    }
    if (lVar1 != 0) {
      iVar2 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x90));
      if (iVar2 != 0) {
                    /* try { // try from 004ab702 to 004ab708 has its CatchHandler @ 004ab709 */
                    /* WARNING: Subroutine does not return */
        std::__throw_system_error(iVar2);
      }
      uVar5 = CONCAT71((int7)((ulong)lVar1 >> 8),1);
      LOCK();
      this[0xe8] = (Thread)0x1;
      UNLOCK();
      std::condition_variable::notify_all();
      pthread_mutex_unlock((pthread_mutex_t *)(this + 0x90));
      goto LAB_004ab6eb;
    }
  }
  uVar5 = 0;
LAB_004ab6eb:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x60));
  return uVar5 & 0xffffffff;
}


