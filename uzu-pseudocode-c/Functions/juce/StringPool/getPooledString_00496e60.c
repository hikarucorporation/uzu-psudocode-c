// Function : getPooledString
// Namespace: juce:StringPool
// Entry    : 00496e60
// Prototype: undefined getPooledString(StringPool * this, char * param_1, char * param_2)
// Body     : 00496e60 - 004970d9


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::StringPool::getPooledString(juce::CharPointer_UTF8, juce::CharPointer_UTF8) */

void __thiscall juce::StringPool::getPooledString(StringPool *this,char *param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  char *__src;
  uint uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  undefined4 *__dest;
  int *piVar11;
  byte *pbVar12;
  uint uVar13;
  size_t __n;
  timespec local_50;
  char *local_40;
  char *local_38;
  
  if ((*param_1 == '\0') || (param_1 == param_2)) {
    *(undefined1 **)this = &DAT_0061ac58;
  }
  else {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0071d1d0);
    if (300 < (int)DAT_0071d1cc) {
      uVar8 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
      if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
        clock_gettime(1,&local_50);
        auVar4 = SEXT816(local_50.tv_nsec / 1000 + local_50.tv_sec * 1000000) *
                 SEXT816(0x20c49ba5e353f7cf);
        uVar8 = (int)(auVar4._8_8_ >> 7) - (auVar4._12_4_ >> 0x1f);
        if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar8) ||
           (uVar8 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
          LOCK();
          UNLOCK();
          _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar8;
        }
      }
      if (_DAT_0071d1f8 + 30000U < uVar8) {
        garbageCollect();
      }
    }
    lVar2 = getGlobalPool()::pool;
    uVar8 = 0;
    local_50.tv_sec = (__time_t)param_1;
    local_50.tv_nsec = (long)param_2;
    local_40 = param_2;
    local_38 = param_1;
    if (0 < (int)DAT_0071d1cc) {
      uVar13 = DAT_0071d1cc;
      uVar9 = 0;
LAB_00496f7c:
      do {
        pbVar12 = *(byte **)(lVar2 + (long)(int)uVar9 * 8);
        uVar5 = compareStrings(&local_50.tv_sec,pbVar12);
        if (uVar5 == 0) {
LAB_00496fd9:
          *(byte **)this = pbVar12;
          pbVar12 = pbVar12 + -0x10;
          if (pbVar12 == (byte *)&emptyString) goto LAB_004970bf;
          goto LAB_004970ba;
        }
        uVar8 = (int)(uVar13 + uVar9) / 2;
        if (uVar8 == uVar9) {
          uVar8 = uVar9 + (0 < (int)uVar5);
          break;
        }
        pbVar12 = *(byte **)(lVar2 + (long)(int)uVar8 * 8);
        uVar5 = compareStrings(&local_50.tv_sec,pbVar12);
        if (uVar5 == 0) goto LAB_00496fd9;
        if ((int)uVar5 < 1) {
          bVar3 = (int)uVar8 <= (int)uVar9;
          uVar13 = uVar8;
          uVar8 = uVar9;
          if (bVar3) break;
          goto LAB_00496f7c;
        }
        uVar9 = uVar8;
      } while ((int)uVar8 < (int)uVar13);
    }
    __src = local_38;
    if (*local_38 == '\0') {
      __dest = (undefined4 *)&DAT_0061ac58;
    }
    else {
      __n = (long)local_40 - (long)local_38;
      uVar10 = __n + 4 & 0xfffffffffffffffc;
                    /* try { // try from 00497021 to 00497025 has its CatchHandler @ 004970da */
      puVar6 = operator_new__(uVar10 + 0x17);
      LOCK();
      *puVar6 = 0;
      UNLOCK();
      *(ulong *)(puVar6 + 2) = uVar10;
      __dest = puVar6 + 4;
      memcpy(__dest,__src,__n);
      *(undefined1 *)((long)puVar6 + __n + 0x10) = 0;
    }
    puVar7 = ArrayBase<juce::String,juce::DummyCriticalSection>::createInsertSpace(uVar8);
    *puVar7 = __dest;
    piVar11 = __dest + -4;
    if (piVar11 == &emptyString) {
      DAT_0071d1cc = DAT_0071d1cc + 1;
    }
    else {
      LOCK();
      *piVar11 = *piVar11 + 1;
      UNLOCK();
      DAT_0071d1cc = DAT_0071d1cc + 1;
      LOCK();
      iVar1 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar11);
      }
    }
    lVar2 = *(long *)(getGlobalPool()::pool + (long)(int)uVar8 * 8);
    *(long *)this = lVar2;
    pbVar12 = (byte *)(lVar2 + -0x10);
    if (pbVar12 != (byte *)&emptyString) {
LAB_004970ba:
      LOCK();
      *(int *)pbVar12 = *(int *)pbVar12 + 1;
      UNLOCK();
    }
LAB_004970bf:
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0071d1d0);
  }
  return;
}


