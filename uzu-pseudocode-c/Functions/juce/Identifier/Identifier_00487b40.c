// Function : Identifier
// Namespace: juce:Identifier
// Entry    : 00487b40
// Prototype: undefined Identifier(Identifier * this, long * param_1)
// Body     : 00487b40 - 00487dde


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Identifier::Identifier(juce::String const&) */

void __thiscall juce::Identifier::Identifier(Identifier *this,long *param_1)

{
  byte *pbVar1;
  long lVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  int iVar6;
  long *plVar7;
  int *piVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  timespec local_40;
  
  if ((StringPool::getGlobalPool()::pool == '\0') &&
     (iVar6 = __cxa_guard_acquire(&StringPool::getGlobalPool()::pool), iVar6 != 0)) {
    StringPool::getGlobalPool()::pool = 0;
    _DAT_0071d1c8 = 0;
    pthread_mutexattr_init((pthread_mutexattr_t *)&local_40);
    pthread_mutexattr_settype((pthread_mutexattr_t *)&local_40,1);
    pthread_mutexattr_setprotocol((pthread_mutexattr_t *)&local_40,1);
    pthread_mutex_init((pthread_mutex_t *)&DAT_0071d1d0,(pthread_mutexattr_t *)&local_40);
    pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_40);
    _DAT_0071d1f8 = 0;
    __cxa_atexit(StringPool::~StringPool,&StringPool::getGlobalPool()::pool,&__dso_handle);
    __cxa_guard_release(&StringPool::getGlobalPool()::pool);
  }
  if (*(char *)*param_1 == '\0') {
    *(undefined1 **)this = &DAT_0061ac58;
  }
  else {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0071d1d0);
    if (300 < (int)DAT_0071d1cc) {
      uVar9 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
      if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
        clock_gettime(1,&local_40);
        auVar4 = SEXT816(local_40.tv_nsec / 1000 + local_40.tv_sec * 1000000) *
                 SEXT816(0x20c49ba5e353f7cf);
        uVar9 = (int)(auVar4._8_8_ >> 7) - (auVar4._12_4_ >> 0x1f);
        if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar9) ||
           (uVar9 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
          LOCK();
          UNLOCK();
          _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar9;
        }
      }
      if (_DAT_0071d1f8 + 30000U < uVar9) {
        StringPool::garbageCollect();
      }
    }
    lVar2 = StringPool::getGlobalPool()::pool;
    if ((int)DAT_0071d1cc < 1) {
      uVar9 = 0;
    }
    else {
      pbVar1 = (byte *)*param_1;
      uVar11 = DAT_0071d1cc;
      uVar12 = 0;
LAB_00487c4c:
      do {
        pbVar10 = *(byte **)(lVar2 + (long)(int)uVar12 * 8);
        if (pbVar1 == pbVar10) {
LAB_00487cb8:
          pbVar10 = pbVar1;
LAB_00487cbb:
          *(byte **)this = pbVar10;
          pbVar10 = pbVar10 + -0x10;
          if (pbVar10 == (byte *)&emptyString) goto LAB_00487d30;
          goto LAB_00487d2c;
        }
        uVar5 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                          (pbVar1,pbVar10);
        if (uVar5 == 0) goto LAB_00487cbb;
        uVar9 = (int)(uVar12 + uVar11) / 2;
        if (uVar9 == uVar12) {
          uVar9 = uVar12 + (0 < (int)uVar5);
          break;
        }
        pbVar10 = *(byte **)(lVar2 + (long)(int)uVar9 * 8);
        if (pbVar1 == pbVar10) goto LAB_00487cb8;
        uVar5 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                          (pbVar1,pbVar10);
        if (uVar5 == 0) goto LAB_00487cbb;
        if ((int)uVar5 < 1) {
          bVar3 = (int)uVar9 <= (int)uVar12;
          uVar11 = uVar9;
          uVar9 = uVar12;
          if (bVar3) break;
          goto LAB_00487c4c;
        }
        uVar12 = uVar9;
      } while ((int)uVar9 < (int)uVar11);
    }
    plVar7 = ArrayBase<juce::String,juce::DummyCriticalSection>::createInsertSpace(uVar9);
    lVar2 = *param_1;
    *plVar7 = lVar2;
    piVar8 = (int *)(lVar2 + -0x10);
    if (piVar8 != &emptyString) {
      LOCK();
      *piVar8 = *piVar8 + 1;
      UNLOCK();
    }
    DAT_0071d1cc = DAT_0071d1cc + 1;
    lVar2 = *(long *)(StringPool::getGlobalPool()::pool + (long)(int)uVar9 * 8);
    *(long *)this = lVar2;
    pbVar10 = (byte *)(lVar2 + -0x10);
    if (pbVar10 != (byte *)&emptyString) {
LAB_00487d2c:
      LOCK();
      *(int *)pbVar10 = *(int *)pbVar10 + 1;
      UNLOCK();
    }
LAB_00487d30:
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0071d1d0);
  }
  return;
}


