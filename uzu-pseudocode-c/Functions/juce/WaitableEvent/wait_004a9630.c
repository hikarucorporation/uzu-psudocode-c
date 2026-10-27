// Function : wait
// Namespace: juce:WaitableEvent
// Entry    : 004a9630
// Prototype: ulong wait(double param_1, WaitableEvent * this)
// Body     : 004a9630 - 004a9794


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::WaitableEvent::wait(double) const */

ulong __thiscall juce::WaitableEvent::wait(double param_1,WaitableEvent *this)

{
  int iVar1;
  long lVar2;
  long lVar3;
  unique_lock *unaff_RBP;
  ulong uVar4;
  pthread_mutex_t *__mutex;
  long local_40;
  unique_lock *local_38;
  
  __mutex = (pthread_mutex_t *)(this + 8);
  iVar1 = pthread_mutex_lock(__mutex);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar1);
  }
  if (((byte)this[0x60] & 1) == 0) {
    if (0.0 <= param_1) {
      lVar2 = std::chrono::_V2::steady_clock::now();
      lVar3 = (long)(param_1 * _DAT_005de760);
      lVar2 = (ulong)((double)lVar3 < param_1 * _DAT_005de760) + lVar3 + lVar2;
      unaff_RBP = (unique_lock *)(lVar2 % 1000000000);
      do {
        if (((byte)this[0x60] & 1) != 0) goto LAB_004a975b;
        local_40 = lVar2 / 1000000000;
        local_38 = unaff_RBP;
                    /* try { // try from 004a9736 to 004a9745 has its CatchHandler @ 004a9795 */
        pthread_cond_clockwait(this + 0x30,__mutex,1,&local_40);
        lVar3 = std::chrono::_V2::steady_clock::now();
      } while (lVar3 < lVar2);
      if (((byte)this[0x60] & 1) == 0) {
        uVar4 = 0;
        goto LAB_004a9768;
      }
    }
    else if (((byte)this[0x60] & 1) == 0) {
      unaff_RBP = (unique_lock *)(this + 0x30);
      do {
                    /* try { // try from 004a9690 to 004a969a has its CatchHandler @ 004a9797 */
        std::condition_variable::wait(unaff_RBP);
      } while (((byte)this[0x60] & 1) == 0);
    }
  }
LAB_004a975b:
  uVar4 = CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
  if (*this == (WaitableEvent)0x0) {
    LOCK();
    this[0x60] = (WaitableEvent)0x0;
    UNLOCK();
  }
LAB_004a9768:
  if (__mutex != (pthread_mutex_t *)0x0) {
    pthread_mutex_unlock(__mutex);
  }
  return uVar4 & 0xffffffff;
}


