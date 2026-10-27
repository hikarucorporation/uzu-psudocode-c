// Function : AudioProcessorValueTreeState
// Namespace: juce:AudioProcessorValueTreeState
// Entry    : 001c17e0
// Prototype: undefined AudioProcessorValueTreeState(AudioProcessorValueTreeState * this, undefined8 param_1, undefined8 param_2, long * param_3, long * param_4)
// Body     : 001c17e0 - 001c1c2b


/* juce::AudioProcessorValueTreeState::AudioProcessorValueTreeState(juce::AudioProcessor&,
   juce::UndoManager*, juce::Identifier const&, juce::AudioProcessorValueTreeState::ParameterLayout)
    */

void __thiscall
juce::AudioProcessorValueTreeState::AudioProcessorValueTreeState
          (AudioProcessorValueTreeState *this,undefined8 param_1,undefined8 param_2,long *param_3,
          long *param_4)

{
  ValueTree *this_00;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  void *__ptr;
  int iVar8;
  int *piVar9;
  long lVar10;
  uint uVar11;
  bool bVar12;
  undefined **local_60;
  AudioProcessorValueTreeState *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  Timer::Timer((Timer *)this);
  *(undefined ***)this = &PTR__AudioProcessorValueTreeState_00706b10;
  *(undefined ***)(this + 0x28) = &PTR__AudioProcessorValueTreeState_00706b50;
  *(undefined8 *)(this + 0x30) = param_1;
  this_00 = (ValueTree *)(this + 0x38);
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x54) = 0;
  *(undefined8 *)(this + 0x5c) = 0;
  *(undefined8 *)(this + 0x68) = param_2;
                    /* try { // try from 001c1839 to 001c1847 has its CatchHandler @ 001c1cab */
  Identifier::Identifier((Identifier *)(this + 0x70),(byte *)"PARAM");
                    /* try { // try from 001c184c to 001c185a has its CatchHandler @ 001c1c80 */
  Identifier::Identifier((Identifier *)(this + 0x78),(byte *)0x5e3da8);
                    /* try { // try from 001c1862 to 001c186d has its CatchHandler @ 001c1c55 */
  Identifier::Identifier((Identifier *)(this + 0x80),&DAT_0065bedf);
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(AudioProcessorValueTreeState **)(this + 0xa0) = this + 0x90;
  *(AudioProcessorValueTreeState **)(this + 0xa8) = this + 0x90;
  *(undefined8 *)(this + 0xb0) = 0;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_60);
  pthread_mutexattr_settype((pthread_mutexattr_t *)&local_60,1);
  pthread_mutexattr_setprotocol((pthread_mutexattr_t *)&local_60,1);
  pthread_mutex_init((pthread_mutex_t *)(this + 0xb8),(pthread_mutexattr_t *)&local_60);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_60);
  iVar8 = *(int *)(this + 0x10);
  *(undefined4 *)(this + 0x10) = 100;
  if (iVar8 == 0) {
                    /* try { // try from 001c18ff to 001c1906 has its CatchHandler @ 001c1c3c */
    Timer::TimerThread::addTimer(*(TimerThread **)(this + 0x18),(long)this);
  }
  else {
    Timer::TimerThread::resetTimerCounter(*(TimerThread **)(this + 0x18),(long)this);
  }
  if (((*(int *)(this + 0x60) != 2) || (*(int *)(*(long *)(this + 0x40) + 0xc) == 0)) &&
     (*(long *)this_00 != 0)) {
    SortedSet<juce::ValueTree*,juce::DummyCriticalSection>::add
              ((SortedSet<juce::ValueTree*,juce::DummyCriticalSection> *)(*(long *)this_00 + 0x38),
               (ulong)this_00);
  }
  if (*(int *)(this + 0x60) != 2) {
    LOCK();
    bVar12 = *(int *)(this + 0x60) == 0;
    if (bVar12) {
      *(int *)(this + 0x60) = 1;
    }
    UNLOCK();
    if (bVar12) {
                    /* try { // try from 001c194a to 001c1953 has its CatchHandler @ 001c1c34 */
      puVar5 = operator_new(0x20);
      puVar5[1] = 0x100000001;
      *puVar5 = &PTR___Sp_counted_base_00714178;
      puVar5[2] = 0;
      puVar5[3] = 0;
      *(undefined8 **)(this + 0x40) = puVar5 + 2;
      p_Var2 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x48);
      *(undefined8 **)(this + 0x48) = puVar5;
      if (p_Var2 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        uVar6 = *(ulong *)(p_Var2 + 8);
        if (uVar6 == 0x100000001) {
          *(undefined8 *)(p_Var2 + 8) = 0;
          (**(code **)(*(long *)p_Var2 + 0x10))(p_Var2);
          (**(code **)(*(long *)p_Var2 + 0x18))(p_Var2);
        }
        else {
          if (*PTR___libc_single_threaded_00715c50 == '\0') {
            LOCK();
            p_Var1 = p_Var2 + 8;
            uVar6 = (ulong)*(uint *)p_Var1;
            *(uint *)p_Var1 = *(uint *)p_Var1 - 1;
            UNLOCK();
          }
          else {
            *(int *)(p_Var2 + 8) = (int)uVar6 + -1;
          }
          if ((int)uVar6 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var2);
          }
        }
      }
                    /* try { // try from 001c19fd to 001c1a06 has its CatchHandler @ 001c1c2c */
      puVar5 = operator_new(0x28);
      puVar5[1] = 0x100000001;
      *puVar5 = &PTR___Sp_counted_base_007141c8;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      *(undefined8 **)(this + 0x50) = puVar5 + 2;
      p_Var2 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x58);
      *(undefined8 **)(this + 0x58) = puVar5;
      if (p_Var2 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        uVar6 = *(ulong *)(p_Var2 + 8);
        if (uVar6 == 0x100000001) {
          *(undefined8 *)(p_Var2 + 8) = 0;
          (**(code **)(*(long *)p_Var2 + 0x10))(p_Var2);
          (**(code **)(*(long *)p_Var2 + 0x18))(p_Var2);
        }
        else {
          if (*PTR___libc_single_threaded_00715c50 == '\0') {
            LOCK();
            p_Var1 = p_Var2 + 8;
            uVar6 = (ulong)*(uint *)p_Var1;
            *(uint *)p_Var1 = *(uint *)p_Var1 - 1;
            UNLOCK();
          }
          else {
            *(int *)(p_Var2 + 8) = (int)uVar6 + -1;
          }
          if ((int)uVar6 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var2);
          }
        }
      }
      LOCK();
      *(undefined4 *)(this + 0x60) = 2;
      UNLOCK();
    }
    else {
      while (*(int *)(this + 0x60) != 2) {
        sched_yield();
      }
    }
  }
  puVar5 = *(undefined8 **)(this + 0x40);
  __ptr = (void *)*puVar5;
  iVar8 = *(int *)((long)puVar5 + 0xc);
  lVar7 = (long)iVar8;
  if (lVar7 != 0) {
    lVar10 = 0;
    do {
      if (*(AudioProcessorValueTreeState **)((long)__ptr + lVar10) == this + 0x28)
      goto LAB_001c1b38;
      lVar10 = lVar10 + 8;
    } while (lVar7 * 8 != lVar10);
  }
  if ((int)*(uint *)(puVar5 + 1) <= iVar8) {
    uVar11 = iVar8 + ((iVar8 - (iVar8 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)(puVar5 + 1) != uVar11) {
      if ((int)uVar11 < 1) {
        free(__ptr);
        *puVar5 = 0;
        __ptr = (void *)0x0;
      }
      else {
        __ptr = realloc(__ptr,(ulong)uVar11 << 3);
        *puVar5 = __ptr;
      }
    }
    *(uint *)(puVar5 + 1) = uVar11;
    iVar8 = *(int *)((long)puVar5 + 0xc);
    lVar7 = (long)iVar8;
  }
  *(int *)((long)puVar5 + 0xc) = iVar8 + 1;
  *(AudioProcessorValueTreeState **)((long)__ptr + lVar7 * 8) = this + 0x28;
LAB_001c1b38:
  puVar5 = (undefined8 *)*param_4;
  puVar3 = (undefined8 *)param_4[1];
  if (puVar5 != puVar3) {
    do {
      local_60 = &PTR__Visitor_00706d80;
                    /* try { // try from 001c1b70 to 001c1b75 has its CatchHandler @ 001c1cc6 */
      local_58 = this;
      (**(code **)(*(long *)*puVar5 + 0x10))((long *)*puVar5,&local_60);
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar3);
  }
                    /* try { // try from 001c1b7f to 001c1b88 has its CatchHandler @ 001c1c53 */
  local_60 = operator_new(0x50);
  *(undefined4 *)(local_60 + 1) = 0;
  *local_60 = (undefined *)&PTR__SharedObject_00713ff0;
  puVar4 = (undefined *)*param_3;
  local_60[2] = puVar4;
  piVar9 = (int *)(puVar4 + -0x10);
  if (piVar9 != &emptyString) {
    LOCK();
    *piVar9 = *piVar9 + 1;
    UNLOCK();
  }
  local_60[7] = (undefined *)0x0;
  local_60[8] = (undefined *)0x0;
  local_60[5] = (undefined *)0x0;
  local_60[6] = (undefined *)0x0;
  local_60[3] = (undefined *)0x0;
  local_60[4] = (undefined *)0x0;
  local_60[9] = (undefined *)0x0;
  LOCK();
  *(int *)(local_60 + 1) = *(int *)(local_60 + 1) + 1;
  UNLOCK();
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (AudioProcessorValueTreeState *)0x0;
  uStack_50 = 0;
  local_38 = 0;
                    /* try { // try from 001c1bef to 001c1bf8 has its CatchHandler @ 001c1c44 */
  ValueTree::operator=(this_00,(long *)&local_60);
  ValueTree::~ValueTree((ValueTree *)&local_60);
  return;
}


