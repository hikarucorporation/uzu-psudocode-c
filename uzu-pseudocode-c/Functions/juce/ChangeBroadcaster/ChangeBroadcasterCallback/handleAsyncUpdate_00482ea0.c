// Function : handleAsyncUpdate
// Namespace: juce:ChangeBroadcaster:ChangeBroadcasterCallback
// Entry    : 00482ea0
// Prototype: undefined handleAsyncUpdate(ChangeBroadcasterCallback * this)
// Body     : 00482ea0 - 00483236


/* juce::ChangeBroadcaster::ChangeBroadcasterCallback::handleAsyncUpdate() */

void __thiscall
juce::ChangeBroadcaster::ChangeBroadcasterCallback::handleAsyncUpdate
          (ChangeBroadcasterCallback *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  int local_70;
  int local_6c;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_68;
  long local_60;
  ulong local_58;
  undefined8 *local_50;
  undefined8 local_48;
  long local_40;
  int *local_38;
  
  lVar3 = *(long *)(this + 0x10);
  if (*(int *)(lVar3 + 0x40) != 2) {
    return;
  }
  plVar4 = *(long **)(lVar3 + 0x20);
  this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(lVar3 + 0x28);
  if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
    }
  }
  local_70 = 0;
  local_6c = *(int *)((long)plVar4 + 0xc);
  puVar5 = *(undefined8 **)(lVar3 + 0x30);
  plVar6 = (long *)puVar5[1];
  if (plVar6 != (long *)puVar5[2]) {
    *plVar6 = (long)&local_70;
    puVar5[1] = puVar5[1] + 8;
    local_48 = *(undefined8 *)(lVar3 + 0x30);
    local_40 = *(long *)(lVar3 + 0x38);
    goto joined_r0x00483146;
  }
  plVar7 = (long *)*puVar5;
  lVar21 = (long)plVar6 - (long)plVar7;
  local_68 = this_00;
  if (lVar21 == 0x7ffffffffffffff8) {
                    /* try { // try from 0048322b to 00483236 has its CatchHandler @ 00483237 */
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar18 = lVar21 >> 3;
  uVar14 = 1;
  if (lVar21 != 0) {
    uVar14 = uVar18;
  }
  local_58 = uVar14 + uVar18;
  if (local_58 >> 0x3c != 0) {
    local_58 = 0xfffffffffffffff;
  }
  if (CARRY8(uVar14,uVar18)) {
    local_58 = 0xfffffffffffffff;
  }
  local_50 = puVar5;
  if (local_58 == 0) {
    plVar13 = (long *)0x0;
    *(int **)(uVar18 * 8) = &local_70;
    if (lVar21 < 1) goto LAB_00483017;
LAB_00482fb6:
    plVar19 = plVar13;
    if (plVar7 != plVar6) {
      plVar15 = plVar7;
      if (0x17 < lVar21 - 8U) {
        uVar22 = (lVar21 - 8U >> 3) + 1;
        uVar14 = uVar22 & 0xfffffffffffffffc;
        uVar17 = (uVar14 - 4 >> 2) + 1;
        uVar18 = (ulong)((uint)uVar17 & 3);
        if (uVar14 - 4 < 0xc) {
          lVar21 = 0;
        }
        else {
          uVar17 = uVar17 & 0x7ffffffffffffffc;
          lVar21 = 0;
          do {
            lVar20 = (plVar7 + lVar21)[1];
            lVar8 = plVar7[lVar21 + 2];
            lVar9 = (plVar7 + lVar21 + 2)[1];
            plVar13[lVar21] = plVar7[lVar21];
            (plVar13 + lVar21)[1] = lVar20;
            plVar13[lVar21 + 2] = lVar8;
            (plVar13 + lVar21 + 2)[1] = lVar9;
            lVar20 = (plVar7 + lVar21 + 4)[1];
            lVar8 = plVar7[lVar21 + 6];
            lVar9 = (plVar7 + lVar21 + 6)[1];
            plVar13[lVar21 + 4] = plVar7[lVar21 + 4];
            (plVar13 + lVar21 + 4)[1] = lVar20;
            plVar13[lVar21 + 6] = lVar8;
            (plVar13 + lVar21 + 6)[1] = lVar9;
            lVar20 = (plVar7 + lVar21 + 8)[1];
            lVar8 = plVar7[lVar21 + 10];
            lVar9 = (plVar7 + lVar21 + 10)[1];
            plVar13[lVar21 + 8] = plVar7[lVar21 + 8];
            (plVar13 + lVar21 + 8)[1] = lVar20;
            plVar13[lVar21 + 10] = lVar8;
            (plVar13 + lVar21 + 10)[1] = lVar9;
            lVar20 = (plVar7 + lVar21 + 0xc)[1];
            lVar8 = plVar7[lVar21 + 0xe];
            lVar9 = (plVar7 + lVar21 + 0xe)[1];
            plVar13[lVar21 + 0xc] = plVar7[lVar21 + 0xc];
            (plVar13 + lVar21 + 0xc)[1] = lVar20;
            plVar13[lVar21 + 0xe] = lVar8;
            (plVar13 + lVar21 + 0xe)[1] = lVar9;
            lVar21 = lVar21 + 0x10;
            uVar17 = uVar17 - 4;
          } while (uVar17 != 0);
        }
        if (uVar18 != 0) {
          lVar20 = 0;
          do {
            puVar2 = (undefined8 *)((long)plVar7 + lVar20 + lVar21 * 8);
            uVar10 = puVar2[1];
            puVar5 = (undefined8 *)((long)plVar7 + lVar20 + lVar21 * 8 + 0x10);
            uVar11 = *puVar5;
            uVar12 = puVar5[1];
            puVar5 = (undefined8 *)((long)plVar13 + lVar20 + lVar21 * 8);
            *puVar5 = *puVar2;
            puVar5[1] = uVar10;
            puVar5 = (undefined8 *)((long)plVar13 + lVar20 + lVar21 * 8 + 0x10);
            *puVar5 = uVar11;
            puVar5[1] = uVar12;
            lVar20 = lVar20 + 0x20;
          } while (uVar18 * 0x20 != lVar20);
        }
        plVar19 = plVar13 + uVar14;
        if (uVar22 == uVar14) goto LAB_00483103;
        plVar15 = plVar7 + uVar14;
      }
      do {
        *plVar19 = *plVar15;
        plVar15 = plVar15 + 1;
        plVar19 = plVar19 + 1;
      } while (plVar15 != plVar6);
    }
  }
  else {
    local_60 = lVar21;
                    /* try { // try from 00482f9a to 00482f9e has its CatchHandler @ 00483237 */
    plVar13 = operator_new(local_58 * 8);
    plVar13[uVar18] = (long)&local_70;
    lVar21 = local_60;
    if (0 < local_60) goto LAB_00482fb6;
LAB_00483017:
    plVar19 = plVar13 + uVar18;
  }
LAB_00483103:
  if (plVar7 != (long *)0x0) {
    operator_delete(plVar7);
  }
  *local_50 = plVar13;
  local_50[1] = plVar19 + 1;
  local_50[2] = plVar13 + local_58;
  local_48 = *(undefined8 *)(lVar3 + 0x30);
  local_40 = *(long *)(lVar3 + 0x38);
  this_00 = local_68;
joined_r0x00483146:
  if (local_40 != 0) {
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    }
  }
  local_38 = &local_70;
  iVar16 = local_6c;
  for (; local_70 < iVar16; local_70 = local_70 + 1) {
    plVar6 = *(long **)(*plVar4 + (long)local_70 * 8);
    if (plVar6 != (long *)0x0) {
                    /* try { // try from 0048319e to 004831a3 has its CatchHandler @ 0048323c */
      (**(code **)(*plVar6 + 0x10))(plVar6,lVar3);
      iVar16 = local_6c;
    }
  }
  ScopeGuard<juce::ListenerList<juce::ChangeListener,juce::Array<juce::ChangeListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ChangeBroadcaster::callListeners()::$_6,juce::ListenerList<juce::ChangeListener,juce::Array<juce::ChangeListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ChangeListener*,juce::ListenerList<juce::ChangeListener,juce::Array<juce::ChangeListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ChangeBroadcaster::callListeners()::$_6&&)::{lambda()#1}>
  ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::ChangeListener,juce::Array<juce::ChangeListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ChangeBroadcaster::callListeners()::__6,juce::ListenerList<juce::ChangeListener,juce::Array<juce::ChangeListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ChangeListener*,juce::ListenerList<juce::ChangeListener,juce::Array<juce::ChangeListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ChangeBroadcaster::callListeners()::__6&&)::_lambda()_1_>
                 *)&local_48);
  if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*(long *)(this_00 + 8) == 0x100000001) {
      *(undefined8 *)(this_00 + 8) = 0;
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      (**(code **)(*(long *)this_00 + 0x18))(this_00);
    }
    else {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var1 = this_00 + 8;
        iVar16 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar16 = (int)*(long *)(this_00 + 8);
        *(int *)(this_00 + 8) = iVar16 + -1;
      }
      if (iVar16 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
      }
    }
  }
  return;
}


