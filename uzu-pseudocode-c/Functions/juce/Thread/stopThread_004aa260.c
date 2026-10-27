// Function : stopThread
// Namespace: juce:Thread
// Entry    : 004aa260
// Prototype: ulong stopThread(Thread * this, int param_1)
// Body     : 004aa260 - 004aa568


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Thread::stopThread(int) */

ulong __thiscall juce::Thread::stopThread(Thread *this,int param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  int *piVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar8;
  byte *pbVar7;
  uint uVar9;
  undefined8 unaff_R15;
  undefined7 uVar11;
  ulong uVar10;
  timespec local_48;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x60));
  uVar11 = (undefined7)((ulong)unaff_R15 >> 8);
  if (*(long *)(this + 0x10) == 0) {
    uVar10 = CONCAT71(uVar11,1);
  }
  else {
                    /* try { // try from 004aa28c to 004aa293 has its CatchHandler @ 004aa586 */
    signalThreadShouldExit(this);
    iVar2 = pthread_mutex_lock((pthread_mutex_t *)(this + 0xf8));
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar2);
    }
    uVar10 = CONCAT71(uVar11,1);
    LOCK();
    this[0x150] = (Thread)0x1;
    UNLOCK();
    std::condition_variable::notify_all();
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0xf8));
    if (param_1 != 0) {
      clock_gettime(1,&local_48);
      auVar1 = SEXT816(local_48.tv_nsec / 1000 + local_48.tv_sec * 1000000) *
               SEXT816(0x20c49ba5e353f7cf);
      uVar9 = (int)(auVar1._8_8_ >> 7) - (auVar1._12_4_ >> 0x1f);
      if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar9) ||
         (uVar9 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
        LOCK();
        UNLOCK();
        _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar9;
      }
      if (*(long *)(this + 0x10) != 0) {
        if (param_1 < 0) {
          do {
            local_48.tv_sec = _DAT_005de320;
            local_48.tv_nsec = _UNK_005de328;
            do {
                    /* try { // try from 004aa430 to 004aa43a has its CatchHandler @ 004aa58a */
              iVar2 = nanosleep(&local_48,&local_48);
              if (iVar2 != -1) break;
              piVar3 = __errno_location();
            } while (*piVar3 == 4);
          } while (*(long *)(this + 0x10) != 0);
        }
        else {
          do {
            clock_gettime(1,&local_48);
            auVar1 = SEXT816(local_48.tv_nsec / 1000 + local_48.tv_sec * 1000000) *
                     SEXT816(0x20c49ba5e353f7cf);
            uVar6 = (int)(auVar1._8_8_ >> 7) - (auVar1._12_4_ >> 0x1f);
            if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar6) ||
               (uVar6 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
              LOCK();
              UNLOCK();
              _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar6;
            }
            if (uVar9 + param_1 < uVar6) break;
            local_48.tv_sec = _DAT_005de320;
            local_48.tv_nsec = _UNK_005de328;
            do {
                    /* try { // try from 004aa3e0 to 004aa3ea has its CatchHandler @ 004aa588 */
              iVar2 = nanosleep(&local_48,&local_48);
              if (iVar2 != -1) break;
              piVar3 = __errno_location();
            } while (*piVar3 == 4);
          } while (*(long *)(this + 0x10) != 0);
        }
      }
    }
    if (*(long *)(this + 0x10) != 0) {
                    /* try { // try from 004aa459 to 004aa462 has its CatchHandler @ 004aa584 */
      piVar3 = operator_new__(0x37);
      LOCK();
      *piVar3 = 0;
      UNLOCK();
      piVar3[2] = 0x20;
      piVar3[3] = 0;
      bVar5 = 0x21;
      lVar4 = 2;
      pbVar7 = (byte *)(piVar3 + 4);
      while( true ) {
        if ((char)bVar5 < '\0') {
          *pbVar7 = bVar5 >> 6 | 0xc0;
          pbVar7[1] = bVar5 & 0x3f | 0x80;
          pbVar8 = pbVar7 + 2;
          pbVar7 = pbVar7 + 1;
        }
        else {
          *pbVar7 = bVar5;
          pbVar8 = pbVar7 + 1;
        }
        if (lVar4 == 0x1e) break;
        bVar5 = (&UNK_005e5e6a)[lVar4];
        if ((char)bVar5 < '\0') {
          pbVar7[1] = bVar5 >> 6 | 0xc0;
          pbVar7[2] = bVar5 & 0x3f | 0x80;
        }
        else {
          *pbVar8 = bVar5;
          pbVar8 = pbVar7;
        }
        pbVar7 = pbVar8 + 2;
        bVar5 = "!! killing thread by force !!"[lVar4];
        lVar4 = lVar4 + 2;
      }
      *pbVar8 = 0;
                    /* try { // try from 004aa501 to 004aa505 has its CatchHandler @ 004aa569 */
      Logger::outputDebugString((char *)(piVar3 + 4));
      LOCK();
      iVar2 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        operator_delete__(piVar3);
        lVar4 = *(long *)(this + 0x10);
      }
      else {
        lVar4 = *(long *)(this + 0x10);
      }
      if (lVar4 != 0) {
                    /* try { // try from 004aa534 to 004aa568 has its CatchHandler @ 004aa586 */
        pthread_cancel(*(pthread_t *)(this + 0x10));
      }
      uVar10 = 0;
      LOCK();
      *(undefined8 *)(this + 0x10) = 0;
      UNLOCK();
      LOCK();
      *(undefined8 *)(this + 0x18) = 0;
      UNLOCK();
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x60));
  return uVar10 & 0xffffffff;
}


