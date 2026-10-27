// Function : callListeners
// Namespace: juce:Value
// Entry    : 004bea00
// Prototype: undefined callListeners(Value * this)
// Body     : 004bea00 - 004bee13


/* juce::Value::callListeners() */

void __thiscall juce::Value::callListeners(Value *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined8 *puVar2;
  long *plVar3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  int local_a0;
  int local_9c;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_98;
  long local_90;
  ulong local_88;
  undefined8 *local_80;
  undefined8 local_78;
  long local_70;
  int *local_68;
  long *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  if (*(int *)(this + 0x28) != 2) {
    return;
  }
  if (*(int *)(*(long *)(this + 8) + 0xc) < 1) {
    return;
  }
  local_60 = *(long **)this;
  if (local_60 != (long *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = 0;
  if (*(int *)(this + 0x28) != 2) goto LAB_004bedc1;
  plVar3 = *(long **)(this + 8);
  this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x10);
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
  local_a0 = 0;
  local_9c = *(int *)((long)plVar3 + 0xc);
  puVar4 = *(undefined8 **)(this + 0x18);
  plVar5 = (long *)puVar4[1];
  if (plVar5 == (long *)puVar4[2]) {
    plVar6 = (long *)*puVar4;
    lVar18 = (long)plVar5 - (long)plVar6;
    local_98 = this_00;
    local_80 = puVar4;
    if (lVar18 == 0x7ffffffffffffff8) {
                    /* try { // try from 004bee08 to 004bee13 has its CatchHandler @ 004bee14 */
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
    }
    uVar20 = lVar18 >> 3;
    uVar13 = 1;
    if (lVar18 != 0) {
      uVar13 = uVar20;
    }
    local_88 = uVar13 + uVar20;
    if (local_88 >> 0x3c != 0) {
      local_88 = 0xfffffffffffffff;
    }
    if (CARRY8(uVar13,uVar20)) {
      local_88 = 0xfffffffffffffff;
    }
    if (local_88 == 0) {
      plVar12 = (long *)0x0;
      *(int **)(uVar20 * 8) = &local_a0;
      if (0 < lVar18) goto LAB_004beb4f;
LAB_004bebb0:
      plVar21 = plVar12 + uVar20;
    }
    else {
      local_90 = lVar18;
                    /* try { // try from 004beb33 to 004beb37 has its CatchHandler @ 004bee14 */
      plVar12 = operator_new(local_88 * 8);
      plVar12[uVar20] = (long)&local_a0;
      lVar18 = local_90;
      if (local_90 < 1) goto LAB_004bebb0;
LAB_004beb4f:
      plVar21 = plVar12;
      if (plVar6 != plVar5) {
        plVar14 = plVar6;
        if (0x17 < lVar18 - 8U) {
          uVar19 = (lVar18 - 8U >> 3) + 1;
          uVar13 = uVar19 & 0xfffffffffffffffc;
          uVar16 = (uVar13 - 4 >> 2) + 1;
          uVar20 = (ulong)((uint)uVar16 & 3);
          if (uVar13 - 4 < 0xc) {
            lVar18 = 0;
          }
          else {
            uVar16 = uVar16 & 0x7ffffffffffffffc;
            lVar18 = 0;
            do {
              lVar17 = (plVar6 + lVar18)[1];
              lVar7 = plVar6[lVar18 + 2];
              lVar8 = (plVar6 + lVar18 + 2)[1];
              plVar12[lVar18] = plVar6[lVar18];
              (plVar12 + lVar18)[1] = lVar17;
              plVar12[lVar18 + 2] = lVar7;
              (plVar12 + lVar18 + 2)[1] = lVar8;
              lVar17 = (plVar6 + lVar18 + 4)[1];
              lVar7 = plVar6[lVar18 + 6];
              lVar8 = (plVar6 + lVar18 + 6)[1];
              plVar12[lVar18 + 4] = plVar6[lVar18 + 4];
              (plVar12 + lVar18 + 4)[1] = lVar17;
              plVar12[lVar18 + 6] = lVar7;
              (plVar12 + lVar18 + 6)[1] = lVar8;
              lVar17 = (plVar6 + lVar18 + 8)[1];
              lVar7 = plVar6[lVar18 + 10];
              lVar8 = (plVar6 + lVar18 + 10)[1];
              plVar12[lVar18 + 8] = plVar6[lVar18 + 8];
              (plVar12 + lVar18 + 8)[1] = lVar17;
              plVar12[lVar18 + 10] = lVar7;
              (plVar12 + lVar18 + 10)[1] = lVar8;
              lVar17 = (plVar6 + lVar18 + 0xc)[1];
              lVar7 = plVar6[lVar18 + 0xe];
              lVar8 = (plVar6 + lVar18 + 0xe)[1];
              plVar12[lVar18 + 0xc] = plVar6[lVar18 + 0xc];
              (plVar12 + lVar18 + 0xc)[1] = lVar17;
              plVar12[lVar18 + 0xe] = lVar7;
              (plVar12 + lVar18 + 0xe)[1] = lVar8;
              lVar18 = lVar18 + 0x10;
              uVar16 = uVar16 - 4;
            } while (uVar16 != 0);
          }
          if (uVar20 != 0) {
            lVar17 = 0;
            do {
              puVar2 = (undefined8 *)((long)plVar6 + lVar17 + lVar18 * 8);
              uVar9 = puVar2[1];
              puVar4 = (undefined8 *)((long)plVar6 + lVar17 + lVar18 * 8 + 0x10);
              uVar10 = *puVar4;
              uVar11 = puVar4[1];
              puVar4 = (undefined8 *)((long)plVar12 + lVar17 + lVar18 * 8);
              *puVar4 = *puVar2;
              puVar4[1] = uVar9;
              puVar4 = (undefined8 *)((long)plVar12 + lVar17 + lVar18 * 8 + 0x10);
              *puVar4 = uVar10;
              puVar4[1] = uVar11;
              lVar17 = lVar17 + 0x20;
            } while (uVar20 * 0x20 != lVar17);
          }
          plVar21 = plVar12 + uVar13;
          if (uVar19 == uVar13) goto LAB_004beca4;
          plVar14 = plVar6 + uVar13;
        }
        do {
          *plVar21 = *plVar14;
          plVar14 = plVar14 + 1;
          plVar21 = plVar21 + 1;
        } while (plVar14 != plVar5);
      }
    }
LAB_004beca4:
    if (plVar6 != (long *)0x0) {
      operator_delete(plVar6);
    }
    *local_80 = plVar12;
    local_80[1] = plVar21 + 1;
    local_80[2] = plVar12 + local_88;
    local_78 = *(undefined8 *)(this + 0x18);
    local_70 = *(long *)(this + 0x20);
    this_00 = local_98;
  }
  else {
    *plVar5 = (long)&local_a0;
    puVar4[1] = puVar4[1] + 8;
    local_78 = *(undefined8 *)(this + 0x18);
    local_70 = *(long *)(this + 0x20);
  }
  if (local_70 != 0) {
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    }
  }
  local_68 = &local_a0;
  if (local_a0 < local_9c) {
    iVar15 = local_9c;
    do {
      plVar5 = *(long **)(*plVar3 + (long)local_a0 * 8);
      if (plVar5 != (long *)0x0) {
                    /* try { // try from 004bed4e to 004bed53 has its CatchHandler @ 004bee19 */
        (**(code **)(*plVar5 + 0x10))(plVar5,&local_60);
        iVar15 = local_9c;
      }
      local_a0 = local_a0 + 1;
    } while (local_a0 < iVar15);
  }
  ScopeGuard<juce::ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Value::callListeners()::$_0,juce::ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::Value::Listener*,juce::ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::Value::callListeners()::$_0&&)::{lambda()#1}>
  ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Value::callListeners()::__0,juce::ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::Value::Listener*,juce::ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::Value::callListeners()::__0&&)::_lambda()_1_>
                 *)&local_78);
  if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    uVar13 = *(ulong *)(this_00 + 8);
    if (uVar13 == 0x100000001) {
      *(undefined8 *)(this_00 + 8) = 0;
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      (**(code **)(*(long *)this_00 + 0x18))(this_00);
    }
    else {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var1 = this_00 + 8;
        uVar13 = (ulong)*(uint *)p_Var1;
        *(uint *)p_Var1 = *(uint *)p_Var1 - 1;
        UNLOCK();
      }
      else {
        *(int *)(this_00 + 8) = (int)uVar13 + -1;
      }
      if ((int)uVar13 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
      }
    }
  }
LAB_004bedc1:
  removeFromListenerList((Value *)&local_60);
  ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>
  ::~ListenerList((ListenerList<juce::Value::Listener,juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>>
                   *)&local_58);
  if (local_60 != (long *)0x0) {
    LOCK();
    plVar3 = local_60 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)(*local_60 + 8))();
    }
  }
  return;
}


