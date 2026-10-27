// Function : parameterValueChanged
// Namespace: juce:AudioProcessorValueTreeState:ParameterAdapter
// Entry    : 001c38b0
// Prototype: byte parameterValueChanged(long param_1)
// Body     : 001c38b0 - 001c3d93


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AudioProcessorValueTreeState::ParameterAdapter::parameterValueChanged(int, float) */

byte __cdecl
juce::AudioProcessorValueTreeState::ParameterAdapter::parameterValueChanged(long param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  byte bVar3;
  long *plVar4;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  pthread_mutex_t *__mutex;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int local_78;
  int local_74;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_70;
  pthread_mutex_t *local_68;
  long local_60;
  ulong local_58;
  undefined8 *local_50;
  undefined8 local_48;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_40;
  undefined1 *local_38;
  
  uVar22 = (**(code **)(**(long **)(param_1 + 0x38) + 0x10))();
  uVar12 = RangedAudioParameter::convertFrom0to1(uVar22,*(RangedAudioParameter **)(param_1 + 0x38));
  fVar21 = (float)uVar12;
  bVar3 = *(byte *)(param_1 + 0x95);
  if ((bVar3 & 1) == 0) {
    fVar23 = *(float *)(param_1 + 0x90);
    fVar25 = (float)((uint)fVar23 & _DAT_005d91c0);
    if ((fVar25 == DAT_005d94c8) ||
       (fVar24 = (float)(_DAT_005d91c0 & (uint)fVar21), fVar24 == DAT_005d94c8)) {
      if ((fVar21 == fVar23) && (!NAN(fVar21) && !NAN(fVar23))) {
        return bVar3;
      }
    }
    else {
      fVar23 = (float)((uint)(fVar23 - fVar21) & _DAT_005d91c0);
      if (fVar23 <= DAT_005d94cc) {
        return bVar3;
      }
      if (fVar24 <= fVar25) {
        fVar24 = fVar25;
      }
      if (fVar23 <= fVar24 * DAT_005d94d0) {
        return bVar3;
      }
    }
  }
  LOCK();
  *(float *)(param_1 + 0x90) = fVar21;
  UNLOCK();
  __mutex = (pthread_mutex_t *)(param_1 + 0x40);
  pthread_mutex_lock(__mutex);
  if (*(int *)(param_1 + 0x88) != 2) goto LAB_001c3d57;
  plVar4 = *(long **)(param_1 + 0x68);
  this = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_1 + 0x70);
  if (this != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
    }
  }
  local_78 = 0;
  local_74 = *(int *)((long)plVar4 + 0xc);
  puVar11 = *(undefined8 **)(param_1 + 0x78);
  puVar5 = (undefined8 *)puVar11[1];
  if (puVar5 == (undefined8 *)puVar11[2]) {
    puVar6 = (undefined8 *)*puVar11;
    lVar17 = (long)puVar5 - (long)puVar6;
    local_70 = this;
    local_68 = __mutex;
    local_50 = puVar11;
    if (lVar17 == 0x7ffffffffffffff8) {
                    /* try { // try from 001c3d88 to 001c3d93 has its CatchHandler @ 001c3d94 */
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
    }
    uVar19 = lVar17 >> 3;
    uVar12 = 1;
    if (lVar17 != 0) {
      uVar12 = uVar19;
    }
    local_58 = uVar12 + uVar19;
    if (local_58 >> 0x3c != 0) {
      local_58 = 0xfffffffffffffff;
    }
    if (CARRY8(uVar12,uVar19)) {
      local_58 = 0xfffffffffffffff;
    }
    if (local_58 == 0) {
      puVar11 = (undefined8 *)0x0;
      *(int **)(uVar19 * 8) = &local_78;
      if (lVar17 < 1) goto LAB_001c3abd;
LAB_001c3a5e:
      puVar20 = puVar11;
      if (puVar6 != puVar5) {
        puVar13 = puVar6;
        if (0x17 < lVar17 - 8U) {
          uVar18 = (lVar17 - 8U >> 3) + 1;
          uVar12 = uVar18 & 0xfffffffffffffffc;
          uVar15 = (uVar12 - 4 >> 2) + 1;
          uVar19 = (ulong)((uint)uVar15 & 3);
          if (uVar12 - 4 < 0xc) {
            lVar17 = 0;
          }
          else {
            uVar15 = uVar15 & 0x7ffffffffffffffc;
            lVar17 = 0;
            do {
              uVar22 = (puVar6 + lVar17)[1];
              uVar8 = puVar6[lVar17 + 2];
              uVar9 = (puVar6 + lVar17 + 2)[1];
              puVar11[lVar17] = puVar6[lVar17];
              (puVar11 + lVar17)[1] = uVar22;
              puVar11[lVar17 + 2] = uVar8;
              (puVar11 + lVar17 + 2)[1] = uVar9;
              uVar22 = (puVar6 + lVar17 + 4)[1];
              uVar8 = puVar6[lVar17 + 6];
              uVar9 = (puVar6 + lVar17 + 6)[1];
              puVar11[lVar17 + 4] = puVar6[lVar17 + 4];
              (puVar11 + lVar17 + 4)[1] = uVar22;
              puVar11[lVar17 + 6] = uVar8;
              (puVar11 + lVar17 + 6)[1] = uVar9;
              uVar22 = (puVar6 + lVar17 + 8)[1];
              uVar8 = puVar6[lVar17 + 10];
              uVar9 = (puVar6 + lVar17 + 10)[1];
              puVar11[lVar17 + 8] = puVar6[lVar17 + 8];
              (puVar11 + lVar17 + 8)[1] = uVar22;
              puVar11[lVar17 + 10] = uVar8;
              (puVar11 + lVar17 + 10)[1] = uVar9;
              uVar22 = (puVar6 + lVar17 + 0xc)[1];
              uVar8 = puVar6[lVar17 + 0xe];
              uVar9 = (puVar6 + lVar17 + 0xe)[1];
              puVar11[lVar17 + 0xc] = puVar6[lVar17 + 0xc];
              (puVar11 + lVar17 + 0xc)[1] = uVar22;
              puVar11[lVar17 + 0xe] = uVar8;
              (puVar11 + lVar17 + 0xe)[1] = uVar9;
              lVar17 = lVar17 + 0x10;
              uVar15 = uVar15 - 4;
            } while (uVar15 != 0);
          }
          if (uVar19 != 0) {
            lVar16 = 0;
            do {
              puVar13 = (undefined8 *)((long)puVar6 + lVar16 + lVar17 * 8);
              uVar22 = puVar13[1];
              puVar20 = (undefined8 *)((long)puVar6 + lVar16 + lVar17 * 8 + 0x10);
              uVar8 = *puVar20;
              uVar9 = puVar20[1];
              puVar20 = (undefined8 *)((long)puVar11 + lVar16 + lVar17 * 8);
              *puVar20 = *puVar13;
              puVar20[1] = uVar22;
              puVar20 = (undefined8 *)((long)puVar11 + lVar16 + lVar17 * 8 + 0x10);
              *puVar20 = uVar8;
              puVar20[1] = uVar9;
              lVar16 = lVar16 + 0x20;
            } while (uVar19 * 0x20 != lVar16);
          }
          puVar20 = puVar11 + uVar12;
          if (uVar18 == uVar12) goto LAB_001c3bb4;
          puVar13 = puVar6 + uVar12;
        }
        do {
          *puVar20 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar20 = puVar20 + 1;
        } while (puVar13 != puVar5);
      }
    }
    else {
      local_60 = lVar17;
                    /* try { // try from 001c3a45 to 001c3a49 has its CatchHandler @ 001c3d94 */
      puVar11 = operator_new(local_58 * 8);
      puVar11[uVar19] = &local_78;
      lVar17 = local_60;
      if (0 < local_60) goto LAB_001c3a5e;
LAB_001c3abd:
      puVar20 = puVar11 + uVar19;
    }
LAB_001c3bb4:
    if (puVar6 != (undefined8 *)0x0) {
      operator_delete(puVar6);
    }
    *local_50 = puVar11;
    local_50[1] = puVar20 + 1;
    local_50[2] = puVar11 + local_58;
    local_48 = *(undefined8 *)(param_1 + 0x78);
    local_40 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_1 + 0x80);
    this = local_70;
    __mutex = local_68;
  }
  else {
    *puVar5 = &local_78;
    puVar11[1] = puVar11[1] + 8;
    local_48 = *(undefined8 *)(param_1 + 0x78);
    local_40 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_1 + 0x80);
  }
  if (local_40 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    }
  }
  local_38 = (undefined1 *)&local_78;
  piVar10 = &local_78;
  iVar14 = local_74;
  if (local_78 < local_74) {
    do {
      plVar7 = *(long **)(*plVar4 + (long)local_78 * 8);
      if (plVar7 != (long *)0x0) {
                    /* try { // try from 001c3c74 to 001c3c76 has its CatchHandler @ 001c3d99 */
        (**(code **)(*plVar7 + 0x10))
                  (*(undefined4 *)(param_1 + 0x90),plVar7,*(long *)(param_1 + 0x38) + 0x60);
        iVar14 = local_74;
      }
      local_78 = local_78 + 1;
      piVar10 = (int *)local_38;
    } while (local_78 < iVar14);
  }
  local_38 = (undefined1 *)piVar10;
  p_Var1 = local_40;
  ListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>>
  ::
  callCheckedExcluding<juce::AudioProcessorValueTreeState::ParameterAdapter::parameterValueChanged(int,float)::{lambda(juce::AudioProcessorValueTreeState::Listener&)#1},juce::ListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::AudioProcessorValueTreeState::Listener*,juce::ListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::AudioProcessorValueTreeState::ParameterAdapter::parameterValueChanged(int,float)::{lambda(juce::AudioProcessorValueTreeState::Listener&)#1}&&)
  ::{lambda()#1}::operator()((_lambda___1_ *)&local_48);
  if (p_Var1 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*(long *)(p_Var1 + 8) == 0x100000001) {
      *(undefined8 *)(p_Var1 + 8) = 0;
      (**(code **)(*(long *)p_Var1 + 0x10))(p_Var1);
      (**(code **)(*(long *)p_Var1 + 0x18))(p_Var1);
    }
    else {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var2 = p_Var1 + 8;
        iVar14 = *(int *)p_Var2;
        *(int *)p_Var2 = *(int *)p_Var2 + -1;
        UNLOCK();
      }
      else {
        iVar14 = (int)*(long *)(p_Var1 + 8);
        *(int *)(p_Var1 + 8) = iVar14 + -1;
      }
      if (iVar14 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var1);
      }
    }
  }
  if (this != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*(long *)(this + 8) == 0x100000001) {
      *(undefined8 *)(this + 8) = 0;
      (**(code **)(*(long *)this + 0x10))(this);
      (**(code **)(*(long *)this + 0x18))(this);
    }
    else {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var1 = this + 8;
        iVar14 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar14 = (int)*(long *)(this + 8);
        *(int *)(this + 8) = iVar14 + -1;
      }
      if (iVar14 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this);
      }
    }
  }
LAB_001c3d57:
  pthread_mutex_unlock(__mutex);
  LOCK();
  *(undefined1 *)(param_1 + 0x95) = 0;
  UNLOCK();
  LOCK();
  bVar3 = *(byte *)(param_1 + 0x94);
  *(byte *)(param_1 + 0x94) = 1;
  UNLOCK();
  return bVar3;
}


