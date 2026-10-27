// Function : addParameterListener
// Namespace: juce:AudioProcessorValueTreeState
// Entry    : 001c4450
// Prototype: undefined addParameterListener(AudioProcessorValueTreeState * this, byte * param_1, long param_2)
// Body     : 001c4450 - 001c472b


/* juce::AudioProcessorValueTreeState::addParameterListener(juce::StringRef,
   juce::AudioProcessorValueTreeState::Listener*) */

void __thiscall
juce::AudioProcessorValueTreeState::addParameterListener
          (AudioProcessorValueTreeState *this,byte *param_1,long param_2)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long lVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  void *__ptr;
  int iVar8;
  AudioProcessorValueTreeState *pAVar9;
  long lVar10;
  AudioProcessorValueTreeState *pAVar11;
  AudioProcessorValueTreeState *pAVar12;
  AudioProcessorValueTreeState *pAVar13;
  bool bVar14;
  
  pAVar12 = *(AudioProcessorValueTreeState **)(this + 0x98);
  if (pAVar12 != (AudioProcessorValueTreeState *)0x0) {
    pAVar13 = this + 0x90;
    pAVar11 = pAVar13;
    do {
      uVar4 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        (*(byte **)(pAVar12 + 0x20),param_1);
      pAVar9 = pAVar12 + 0x18;
      if (-1 < (int)uVar4) {
        pAVar9 = pAVar12 + 0x10;
        pAVar11 = pAVar12;
      }
      pAVar12 = *(AudioProcessorValueTreeState **)pAVar9;
    } while (pAVar12 != (AudioProcessorValueTreeState *)0x0);
    if (pAVar11 != pAVar13) {
      uVar4 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        (param_1,*(byte **)(pAVar11 + 0x20));
      if ((int)uVar4 < 0) {
        pAVar11 = pAVar13;
      }
      if ((pAVar11 != pAVar13) && (lVar2 = *(long *)(pAVar11 + 0x28), lVar2 != 0)) {
        pthread_mutex_lock((pthread_mutex_t *)(lVar2 + 0x40));
        if (*(int *)(lVar2 + 0x88) != 2) {
          LOCK();
          bVar14 = *(int *)(lVar2 + 0x88) == 0;
          if (bVar14) {
            *(int *)(lVar2 + 0x88) = 1;
          }
          UNLOCK();
          if (bVar14) {
                    /* try { // try from 001c4503 to 001c450c has its CatchHandler @ 001c4734 */
            puVar5 = operator_new(0x20);
            puVar5[1] = 0x100000001;
            *puVar5 = &PTR___Sp_counted_base_00706e40;
            puVar5[2] = 0;
            puVar5[3] = 0;
            *(undefined8 **)(lVar2 + 0x68) = puVar5 + 2;
            p_Var3 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(lVar2 + 0x70);
            *(undefined8 **)(lVar2 + 0x70) = puVar5;
            if (p_Var3 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
              uVar6 = *(ulong *)(p_Var3 + 8);
              if (uVar6 == 0x100000001) {
                *(undefined8 *)(p_Var3 + 8) = 0;
                (**(code **)(*(long *)p_Var3 + 0x10))(p_Var3);
                (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
              }
              else {
                if (*PTR___libc_single_threaded_00715c50 == '\0') {
                  LOCK();
                  p_Var1 = p_Var3 + 8;
                  uVar6 = (ulong)*(uint *)p_Var1;
                  *(uint *)p_Var1 = *(uint *)p_Var1 - 1;
                  UNLOCK();
                }
                else {
                  *(int *)(p_Var3 + 8) = (int)uVar6 + -1;
                }
                if ((int)uVar6 == 1) {
                  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                            (p_Var3);
                }
              }
            }
                    /* try { // try from 001c45c1 to 001c45ca has its CatchHandler @ 001c472c */
            puVar5 = operator_new(0x28);
            puVar5[1] = 0x100000001;
            *puVar5 = &PTR___Sp_counted_base_00706e90;
            puVar5[2] = 0;
            puVar5[3] = 0;
            puVar5[4] = 0;
            *(undefined8 **)(lVar2 + 0x78) = puVar5 + 2;
            p_Var3 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(lVar2 + 0x80);
            *(undefined8 **)(lVar2 + 0x80) = puVar5;
            if (p_Var3 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
              uVar6 = *(ulong *)(p_Var3 + 8);
              if (uVar6 == 0x100000001) {
                *(undefined8 *)(p_Var3 + 8) = 0;
                (**(code **)(*(long *)p_Var3 + 0x10))(p_Var3);
                (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
              }
              else {
                if (*PTR___libc_single_threaded_00715c50 == '\0') {
                  LOCK();
                  p_Var1 = p_Var3 + 8;
                  uVar6 = (ulong)*(uint *)p_Var1;
                  *(uint *)p_Var1 = *(uint *)p_Var1 - 1;
                  UNLOCK();
                }
                else {
                  *(int *)(p_Var3 + 8) = (int)uVar6 + -1;
                }
                if ((int)uVar6 == 1) {
                  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                            (p_Var3);
                }
              }
            }
            LOCK();
            *(undefined4 *)(lVar2 + 0x88) = 2;
            UNLOCK();
          }
          else {
            while (*(int *)(lVar2 + 0x88) != 2) {
              sched_yield();
            }
          }
        }
        if (param_2 != 0) {
          puVar5 = *(undefined8 **)(lVar2 + 0x68);
          __ptr = (void *)*puVar5;
          iVar8 = *(int *)((long)puVar5 + 0xc);
          lVar7 = (long)iVar8;
          if (lVar7 != 0) {
            lVar10 = 0;
            do {
              if (*(long *)((long)__ptr + lVar10) == param_2) goto LAB_001c46fc;
              lVar10 = lVar10 + 8;
            } while (lVar7 * 8 != lVar10);
          }
          if ((int)*(uint *)(puVar5 + 1) <= iVar8) {
            uVar4 = iVar8 + ((iVar8 - (iVar8 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
            if (*(uint *)(puVar5 + 1) != uVar4) {
              if ((int)uVar4 < 1) {
                free(__ptr);
                *puVar5 = 0;
                __ptr = (void *)0x0;
              }
              else {
                __ptr = realloc(__ptr,(ulong)uVar4 << 3);
                *puVar5 = __ptr;
              }
            }
            *(uint *)(puVar5 + 1) = uVar4;
            iVar8 = *(int *)((long)puVar5 + 0xc);
            lVar7 = (long)iVar8;
          }
          *(int *)((long)puVar5 + 0xc) = iVar8 + 1;
          *(long *)((long)__ptr + lVar7 * 8) = param_2;
        }
LAB_001c46fc:
        pthread_mutex_unlock((pthread_mutex_t *)(lVar2 + 0x40));
        return;
      }
    }
  }
  return;
}


