// Function : callCheckedExcluding<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::setPositionAndSendChange(double)::{lambda(juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener&)#1},juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>
// Namespace: juce:ListenerList_juce__AnimatedPosition_juce__AnimatedPositionBehaviours__ContinuousWithMoment~d3c5bc11
// Entry    : 00268340
// Prototype: void callCheckedExcluding<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::setPositionAndSendChange(double)::{lambda(juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener&)#1},juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(long * param_1, undefined8 * param_2)
// Body     : 00268340 - 00268756


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void 
   juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,
   juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,
   juce::DummyCriticalSection, 0>
   >::callCheckedExcluding<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::setPositionAndSendChange(double)::{lambda(juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener&)#1},
   juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,
   juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,
   juce::DummyCriticalSection, 0>
   >::DummyBailOutChecker>(juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,
   juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,
   juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,
   juce::DummyCriticalSection, 0> >::DummyBailOutChecker const&,
   juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::setPositionAndSendChange(double)::{lambda(juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener&)#1}&&)
    */

void __cdecl
juce::
ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>
::
callCheckedExcluding<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::setPositionAndSendChange(double)::_lambda(juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener&)_1_,juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>
          (long *param_1,undefined8 *param_2)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long *plVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  int local_78;
  int local_74;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_70;
  long local_68;
  undefined8 *local_60;
  ulong local_58;
  undefined8 *local_50;
  long local_48;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_40;
  undefined1 *local_38;
  
  if ((int)param_1[4] != 2) {
    return;
  }
  plVar2 = (long *)*param_1;
  this = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)param_1[1];
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
  local_74 = *(int *)((long)plVar2 + 0xc);
  puVar9 = (undefined8 *)param_1[2];
  puVar15 = (undefined8 *)puVar9[1];
  if (puVar15 != (undefined8 *)puVar9[2]) {
    *puVar15 = &local_78;
    puVar9[1] = puVar9[1] + 8;
    local_48 = param_1[2];
    p_Var3 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)param_1[3];
    goto joined_r0x002685ee;
  }
  puVar4 = (undefined8 *)*puVar9;
  lVar16 = (long)puVar15 - (long)puVar4;
  local_70 = this;
  local_50 = puVar9;
  if (lVar16 == 0x7ffffffffffffff8) {
                    /* try { // try from 0026874b to 00268756 has its CatchHandler @ 00268757 */
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar18 = lVar16 >> 3;
  uVar10 = 1;
  if (lVar16 != 0) {
    uVar10 = uVar18;
  }
  local_58 = uVar10 + uVar18;
  if (local_58 >> 0x3c != 0) {
    local_58 = 0xfffffffffffffff;
  }
  if (CARRY8(uVar10,uVar18)) {
    local_58 = 0xfffffffffffffff;
  }
  if (local_58 == 0) {
    puVar9 = (undefined8 *)0x0;
    *(int **)(uVar18 * 8) = &local_78;
    if (lVar16 < 1) goto LAB_002684b8;
LAB_00268459:
    puVar19 = puVar9;
    if (puVar4 != puVar15) {
      puVar11 = puVar4;
      if (0x17 < lVar16 - 8U) {
        uVar17 = (lVar16 - 8U >> 3) + 1;
        uVar10 = uVar17 & 0xfffffffffffffffc;
        uVar13 = (uVar10 - 4 >> 2) + 1;
        uVar18 = (ulong)((uint)uVar13 & 3);
        if (uVar10 - 4 < 0xc) {
          lVar16 = 0;
        }
        else {
          uVar13 = uVar13 & 0x7ffffffffffffffc;
          lVar16 = 0;
          do {
            uVar6 = (puVar4 + lVar16)[1];
            uVar7 = puVar4[lVar16 + 2];
            uVar8 = (puVar4 + lVar16 + 2)[1];
            puVar9[lVar16] = puVar4[lVar16];
            (puVar9 + lVar16)[1] = uVar6;
            puVar9[lVar16 + 2] = uVar7;
            (puVar9 + lVar16 + 2)[1] = uVar8;
            uVar6 = (puVar4 + lVar16 + 4)[1];
            uVar7 = puVar4[lVar16 + 6];
            uVar8 = (puVar4 + lVar16 + 6)[1];
            puVar9[lVar16 + 4] = puVar4[lVar16 + 4];
            (puVar9 + lVar16 + 4)[1] = uVar6;
            puVar9[lVar16 + 6] = uVar7;
            (puVar9 + lVar16 + 6)[1] = uVar8;
            uVar6 = (puVar4 + lVar16 + 8)[1];
            uVar7 = puVar4[lVar16 + 10];
            uVar8 = (puVar4 + lVar16 + 10)[1];
            puVar9[lVar16 + 8] = puVar4[lVar16 + 8];
            (puVar9 + lVar16 + 8)[1] = uVar6;
            puVar9[lVar16 + 10] = uVar7;
            (puVar9 + lVar16 + 10)[1] = uVar8;
            uVar6 = (puVar4 + lVar16 + 0xc)[1];
            uVar7 = puVar4[lVar16 + 0xe];
            uVar8 = (puVar4 + lVar16 + 0xe)[1];
            puVar9[lVar16 + 0xc] = puVar4[lVar16 + 0xc];
            (puVar9 + lVar16 + 0xc)[1] = uVar6;
            puVar9[lVar16 + 0xe] = uVar7;
            (puVar9 + lVar16 + 0xe)[1] = uVar8;
            lVar16 = lVar16 + 0x10;
            uVar13 = uVar13 - 4;
          } while (uVar13 != 0);
        }
        if (uVar18 != 0) {
          lVar14 = 0;
          do {
            puVar11 = (undefined8 *)((long)puVar4 + lVar14 + lVar16 * 8);
            uVar6 = puVar11[1];
            puVar19 = (undefined8 *)((long)puVar4 + lVar14 + lVar16 * 8 + 0x10);
            uVar7 = *puVar19;
            uVar8 = puVar19[1];
            puVar19 = (undefined8 *)((long)puVar9 + lVar14 + lVar16 * 8);
            *puVar19 = *puVar11;
            puVar19[1] = uVar6;
            puVar19 = (undefined8 *)((long)puVar9 + lVar14 + lVar16 * 8 + 0x10);
            *puVar19 = uVar7;
            puVar19[1] = uVar8;
            lVar14 = lVar14 + 0x20;
          } while (uVar18 * 0x20 != lVar14);
        }
        puVar19 = puVar9 + uVar10;
        if (uVar17 == uVar10) goto LAB_002685b4;
        puVar11 = puVar4 + uVar10;
      }
      do {
        *puVar19 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar19 = puVar19 + 1;
      } while (puVar11 != puVar15);
    }
  }
  else {
    local_68 = lVar16;
    local_60 = puVar15;
                    /* try { // try from 0026843b to 0026843f has its CatchHandler @ 00268757 */
    puVar9 = operator_new(local_58 * 8);
    puVar9[uVar18] = &local_78;
    puVar15 = local_60;
    lVar16 = local_68;
    if (0 < local_68) goto LAB_00268459;
LAB_002684b8:
    puVar19 = puVar9 + uVar18;
  }
LAB_002685b4:
  if (puVar4 != (undefined8 *)0x0) {
    operator_delete(puVar4);
  }
  *local_50 = puVar9;
  local_50[1] = puVar19 + 1;
  local_50[2] = puVar9 + local_58;
  local_48 = param_1[2];
  p_Var3 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)param_1[3];
  this = local_70;
joined_r0x002685ee:
  if (p_Var3 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      *(int *)(p_Var3 + 8) = *(int *)(p_Var3 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(p_Var3 + 8) = *(int *)(p_Var3 + 8) + 1;
    }
  }
  local_38 = (undefined1 *)&local_78;
  local_40 = p_Var3;
  iVar12 = local_74;
  for (; local_78 < iVar12; local_78 = local_78 + 1) {
    plVar5 = *(long **)(*plVar2 + (long)local_78 * 8);
    if (plVar5 != (long *)0x0) {
                    /* try { // try from 00268655 to 00268657 has its CatchHandler @ 0026875c */
      (**(code **)(*plVar5 + 0x10))((int)param_2[1],plVar5,*param_2);
      iVar12 = local_74;
    }
  }
  callCheckedExcluding<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::setPositionAndSendChange(double)::{lambda(juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener&)#1},juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::setPositionAndSendChange(double)::{lambda(juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener&)#1}&&)
  ::{lambda()#1}::operator()((_lambda___1_ *)&local_48);
  if (p_Var3 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*(long *)(p_Var3 + 8) == 0x100000001) {
      *(undefined8 *)(p_Var3 + 8) = 0;
      (**(code **)(*(long *)p_Var3 + 0x10))(p_Var3);
      (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
    }
    else {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var1 = p_Var3 + 8;
        iVar12 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar12 = (int)*(long *)(p_Var3 + 8);
        *(int *)(p_Var3 + 8) = iVar12 + -1;
      }
      if (iVar12 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var3);
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
        p_Var3 = this + 8;
        iVar12 = *(int *)p_Var3;
        *(int *)p_Var3 = *(int *)p_Var3 + -1;
        UNLOCK();
      }
      else {
        iVar12 = (int)*(long *)(this + 8);
        *(int *)(this + 8) = iVar12 + -1;
      }
      if (iVar12 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this);
      }
    }
  }
  return;
}


