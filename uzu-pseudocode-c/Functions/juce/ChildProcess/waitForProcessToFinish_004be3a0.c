// Function : waitForProcessToFinish
// Namespace: juce:ChildProcess
// Entry    : 004be3a0
// Prototype: ulong waitForProcessToFinish(ChildProcess * this, int param_1)
// Body     : 004be3a0 - 004be5d8


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::ChildProcess::waitForProcessToFinish(int) const */

ulong __thiscall juce::ChildProcess::waitForProcessToFinish(ChildProcess *this,int param_1)

{
  undefined1 auVar1 [16];
  __pid_t _Var2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  __pid_t *p_Var6;
  uint uVar7;
  undefined8 unaff_R14;
  ulong uVar8;
  timespec local_48;
  
  clock_gettime(1,&local_48);
  auVar1 = SEXT816(local_48.tv_nsec / 1000 + local_48.tv_sec * 1000000) *
           SEXT816(0x20c49ba5e353f7cf);
  uVar7 = (int)(auVar1._8_8_ >> 7) - (auVar1._12_4_ >> 0x1f);
  if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar7) ||
     (uVar7 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
    LOCK();
    UNLOCK();
    _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar7;
  }
  p_Var6 = *(__pid_t **)this;
  uVar8 = CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
  if (p_Var6 != (__pid_t *)0x0) {
    if (param_1 < 0) {
      do {
        if (*p_Var6 == 0) break;
        local_48.tv_sec = local_48.tv_sec & 0xffffffff00000000;
                    /* try { // try from 004be567 to 004be573 has its CatchHandler @ 004be5d9 */
        _Var2 = waitpid(*p_Var6,(int *)&local_48,1);
        if (_Var2 != 0) {
          if ((local_48.tv_sec & 0x7fU) == 0) goto LAB_004be5bc;
          if (0x1ffffff < (int)(((uint)local_48.tv_sec & 0x7f) * 0x1000000 + 0x1000000)) break;
        }
        local_48.tv_sec = _DAT_005de320;
        local_48.tv_nsec = _UNK_005de328;
        do {
          iVar3 = nanosleep(&local_48,&local_48);
          if (iVar3 != -1) break;
          piVar4 = __errno_location();
        } while (*piVar4 == 4);
        p_Var6 = *(__pid_t **)this;
      } while (p_Var6 != (__pid_t *)0x0);
    }
    else {
      do {
        if (*p_Var6 == 0) break;
        local_48.tv_sec = local_48.tv_sec & 0xffffffff00000000;
                    /* try { // try from 004be462 to 004be46e has its CatchHandler @ 004be5e1 */
        _Var2 = waitpid(*p_Var6,(int *)&local_48,1);
        if (_Var2 != 0) {
          if ((local_48.tv_sec & 0x7fU) == 0) goto LAB_004be5bc;
          if (0x1ffffff < (int)(((uint)local_48.tv_sec & 0x7f) * 0x1000000 + 0x1000000)) break;
        }
        local_48.tv_sec = _DAT_005de320;
        local_48.tv_nsec = _UNK_005de328;
        do {
          iVar3 = nanosleep(&local_48,&local_48);
          if (iVar3 != -1) break;
          piVar4 = __errno_location();
        } while (*piVar4 == 4);
        clock_gettime(1,&local_48);
        auVar1 = SEXT816(local_48.tv_nsec / 1000 + local_48.tv_sec * 1000000) *
                 SEXT816(0x20c49ba5e353f7cf);
        uVar5 = (int)(auVar1._8_8_ >> 7) - (auVar1._12_4_ >> 0x1f);
        if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar5) ||
           (uVar5 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
          LOCK();
          UNLOCK();
          _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar5;
        }
        if (uVar7 + param_1 <= uVar5) {
          uVar8 = 0;
          break;
        }
        p_Var6 = *(__pid_t **)this;
      } while (p_Var6 != (__pid_t *)0x0);
    }
  }
LAB_004be5c7:
  return uVar8 & 0xffffffff;
LAB_004be5bc:
  p_Var6[2] = (uint)local_48.tv_sec >> 8 & 0xff;
  goto LAB_004be5c7;
}


