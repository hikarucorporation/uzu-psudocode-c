// Function : Identifier
// Namespace: juce:Identifier
// Entry    : 004a6370
// Prototype: undefined Identifier(Identifier * this, byte * param_1)
// Body     : 004a6370 - 004a661f


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Identifier::Identifier(char const*) */

void __thiscall juce::Identifier::Identifier(Identifier *this,byte *param_1)

{
  long lVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  int *piVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  timespec local_40;
  
  if ((StringPool::getGlobalPool()::pool == '\0') &&
     (iVar5 = __cxa_guard_acquire(&StringPool::getGlobalPool()::pool), iVar5 != 0)) {
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
  if ((param_1 == (byte *)0x0) || (*param_1 == 0)) {
    *(undefined1 **)this = &DAT_0061ac58;
  }
  else {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0071d1d0);
    uVar8 = DAT_0071d1cc;
    if (300 < (int)DAT_0071d1cc) {
      uVar8 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
      if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
        clock_gettime(1,&local_40);
        auVar3 = SEXT816(local_40.tv_nsec / 1000 + local_40.tv_sec * 1000000) *
                 SEXT816(0x20c49ba5e353f7cf);
        uVar8 = (int)(auVar3._8_8_ >> 7) - (auVar3._12_4_ >> 0x1f);
        if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar8) ||
           (uVar8 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
          LOCK();
          UNLOCK();
          _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar8;
        }
      }
      if (_DAT_0071d1f8 + 30000U < uVar8) {
        StringPool::garbageCollect();
      }
      uVar8 = DAT_0071d1cc;
    }
    lVar1 = StringPool::getGlobalPool()::pool;
    uVar11 = 0;
    uVar12 = uVar11;
    if (0 < (int)uVar8) {
LAB_004a647c:
      do {
        pbVar10 = *(byte **)(lVar1 + (long)(int)uVar11 * 8);
        uVar4 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                          (param_1,pbVar10);
        if (uVar4 == 0) {
LAB_004a64dc:
          *(byte **)this = pbVar10;
          pbVar10 = pbVar10 + -0x10;
          if (pbVar10 == (byte *)&emptyString) goto LAB_004a6571;
          goto LAB_004a656d;
        }
        uVar12 = (int)(uVar11 + uVar8) / 2;
        if (uVar12 == uVar11) {
          uVar12 = uVar11 + (0 < (int)uVar4);
          break;
        }
        pbVar10 = *(byte **)(lVar1 + (long)(int)uVar12 * 8);
        uVar4 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                          (param_1,pbVar10);
        if (uVar4 == 0) goto LAB_004a64dc;
        if ((int)uVar4 < 1) {
          bVar2 = (int)uVar12 <= (int)uVar11;
          uVar8 = uVar12;
          uVar12 = uVar11;
          if (bVar2) break;
          goto LAB_004a647c;
        }
        uVar11 = uVar12;
      } while ((int)uVar12 < (int)uVar8);
    }
                    /* try { // try from 004a64ff to 004a6506 has its CatchHandler @ 004a6620 */
    puVar6 = StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(param_1);
    puVar7 = ArrayBase<juce::String,juce::DummyCriticalSection>::createInsertSpace(uVar12);
    *puVar7 = puVar6;
    piVar9 = puVar6 + -4;
    if (piVar9 == &emptyString) {
      DAT_0071d1cc = DAT_0071d1cc + 1;
    }
    else {
      LOCK();
      *piVar9 = *piVar9 + 1;
      UNLOCK();
      DAT_0071d1cc = DAT_0071d1cc + 1;
      LOCK();
      iVar5 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        operator_delete__(piVar9);
      }
    }
    lVar1 = *(long *)(StringPool::getGlobalPool()::pool + (long)(int)uVar12 * 8);
    *(long *)this = lVar1;
    pbVar10 = (byte *)(lVar1 + -0x10);
    if (pbVar10 != (byte *)&emptyString) {
LAB_004a656d:
      LOCK();
      *(int *)pbVar10 = *(int *)pbVar10 + 1;
      UNLOCK();
    }
LAB_004a6571:
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0071d1d0);
  }
  return;
}


