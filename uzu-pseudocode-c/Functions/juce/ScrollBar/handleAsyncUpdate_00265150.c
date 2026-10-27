// Function : handleAsyncUpdate
// Namespace: juce:ScrollBar
// Entry    : 00265150
// Prototype: undefined handleAsyncUpdate(ScrollBar * this)
// Body     : 00265150 - 002654fc


/* juce::ScrollBar::handleAsyncUpdate() */

void __thiscall juce::ScrollBar::handleAsyncUpdate(ScrollBar *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long *plVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  undefined8 *puVar3;
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
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  int local_78;
  int local_74;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_70;
  long local_68;
  ulong local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  undefined1 *local_38;
  
  local_50 = *(undefined8 *)(this + 0x138);
  if (*(int *)(this + 0x1b0) != 2) {
    return;
  }
  plVar2 = *(long **)(this + 400);
  this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x198);
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
  local_78 = 0;
  local_74 = *(int *)((long)plVar2 + 0xc);
  puVar9 = *(undefined8 **)(this + 0x1a0);
  puVar3 = (undefined8 *)puVar9[1];
  if (puVar3 != (undefined8 *)puVar9[2]) {
    *puVar3 = &local_78;
    puVar9[1] = puVar9[1] + 8;
    local_48 = *(undefined8 *)(this + 0x1a0);
    local_40 = *(long *)(this + 0x1a8);
    goto joined_r0x0026540b;
  }
  puVar4 = (undefined8 *)*puVar9;
  lVar15 = (long)puVar3 - (long)puVar4;
  local_70 = this_00;
  local_58 = puVar9;
  if (lVar15 == 0x7ffffffffffffff8) {
                    /* try { // try from 002654f1 to 002654fc has its CatchHandler @ 002654fd */
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar17 = lVar15 >> 3;
  uVar10 = 1;
  if (lVar15 != 0) {
    uVar10 = uVar17;
  }
  local_60 = uVar10 + uVar17;
  if (local_60 >> 0x3c != 0) {
    local_60 = 0xfffffffffffffff;
  }
  if (CARRY8(uVar10,uVar17)) {
    local_60 = 0xfffffffffffffff;
  }
  if (local_60 == 0) {
    puVar9 = (undefined8 *)0x0;
    *(int **)(uVar17 * 8) = &local_78;
    if (lVar15 < 1) goto LAB_002652d8;
LAB_00265279:
    puVar18 = puVar9;
    if (puVar4 != puVar3) {
      puVar11 = puVar4;
      if (0x17 < lVar15 - 8U) {
        uVar16 = (lVar15 - 8U >> 3) + 1;
        uVar10 = uVar16 & 0xfffffffffffffffc;
        uVar13 = (uVar10 - 4 >> 2) + 1;
        uVar17 = (ulong)((uint)uVar13 & 3);
        if (uVar10 - 4 < 0xc) {
          lVar15 = 0;
        }
        else {
          uVar13 = uVar13 & 0x7ffffffffffffffc;
          lVar15 = 0;
          do {
            uVar6 = (puVar4 + lVar15)[1];
            uVar7 = puVar4[lVar15 + 2];
            uVar8 = (puVar4 + lVar15 + 2)[1];
            puVar9[lVar15] = puVar4[lVar15];
            (puVar9 + lVar15)[1] = uVar6;
            puVar9[lVar15 + 2] = uVar7;
            (puVar9 + lVar15 + 2)[1] = uVar8;
            uVar6 = (puVar4 + lVar15 + 4)[1];
            uVar7 = puVar4[lVar15 + 6];
            uVar8 = (puVar4 + lVar15 + 6)[1];
            puVar9[lVar15 + 4] = puVar4[lVar15 + 4];
            (puVar9 + lVar15 + 4)[1] = uVar6;
            puVar9[lVar15 + 6] = uVar7;
            (puVar9 + lVar15 + 6)[1] = uVar8;
            uVar6 = (puVar4 + lVar15 + 8)[1];
            uVar7 = puVar4[lVar15 + 10];
            uVar8 = (puVar4 + lVar15 + 10)[1];
            puVar9[lVar15 + 8] = puVar4[lVar15 + 8];
            (puVar9 + lVar15 + 8)[1] = uVar6;
            puVar9[lVar15 + 10] = uVar7;
            (puVar9 + lVar15 + 10)[1] = uVar8;
            uVar6 = (puVar4 + lVar15 + 0xc)[1];
            uVar7 = puVar4[lVar15 + 0xe];
            uVar8 = (puVar4 + lVar15 + 0xe)[1];
            puVar9[lVar15 + 0xc] = puVar4[lVar15 + 0xc];
            (puVar9 + lVar15 + 0xc)[1] = uVar6;
            puVar9[lVar15 + 0xe] = uVar7;
            (puVar9 + lVar15 + 0xe)[1] = uVar8;
            lVar15 = lVar15 + 0x10;
            uVar13 = uVar13 - 4;
          } while (uVar13 != 0);
        }
        if (uVar17 != 0) {
          lVar14 = 0;
          do {
            puVar11 = (undefined8 *)((long)puVar4 + lVar14 + lVar15 * 8);
            uVar6 = puVar11[1];
            puVar18 = (undefined8 *)((long)puVar4 + lVar14 + lVar15 * 8 + 0x10);
            uVar7 = *puVar18;
            uVar8 = puVar18[1];
            puVar18 = (undefined8 *)((long)puVar9 + lVar14 + lVar15 * 8);
            *puVar18 = *puVar11;
            puVar18[1] = uVar6;
            puVar18 = (undefined8 *)((long)puVar9 + lVar14 + lVar15 * 8 + 0x10);
            *puVar18 = uVar7;
            puVar18[1] = uVar8;
            lVar14 = lVar14 + 0x20;
          } while (uVar17 * 0x20 != lVar14);
        }
        puVar18 = puVar9 + uVar10;
        if (uVar16 == uVar10) goto LAB_002653c4;
        puVar11 = puVar4 + uVar10;
      }
      do {
        *puVar18 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar18 = puVar18 + 1;
      } while (puVar11 != puVar3);
    }
  }
  else {
    local_68 = lVar15;
                    /* try { // try from 0026525f to 00265263 has its CatchHandler @ 002654fd */
    puVar9 = operator_new(local_60 * 8);
    puVar9[uVar17] = &local_78;
    lVar15 = local_68;
    if (0 < local_68) goto LAB_00265279;
LAB_002652d8:
    puVar18 = puVar9 + uVar17;
  }
LAB_002653c4:
  if (puVar4 != (undefined8 *)0x0) {
    operator_delete(puVar4);
  }
  *local_58 = puVar9;
  local_58[1] = puVar18 + 1;
  local_58[2] = puVar9 + local_60;
  local_48 = *(undefined8 *)(this + 0x1a0);
  local_40 = *(long *)(this + 0x1a8);
  this_00 = local_70;
joined_r0x0026540b:
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
  local_38 = (undefined1 *)&local_78;
  iVar12 = local_74;
  for (; local_78 < iVar12; local_78 = local_78 + 1) {
    plVar5 = *(long **)(*plVar2 + (long)local_78 * 8);
    if (plVar5 != (long *)0x0) {
                    /* try { // try from 0026545d to 00265468 has its CatchHandler @ 00265502 */
      (**(code **)(*plVar5 + 0x10))((int)local_50,plVar5,this);
      iVar12 = local_74;
    }
  }
  ScopeGuard<juce::ListenerList<juce::ScrollBar::Listener,juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ScrollBar::handleAsyncUpdate()::$_98,juce::ListenerList<juce::ScrollBar::Listener,juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ScrollBar::Listener*,juce::ListenerList<juce::ScrollBar::Listener,juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ScrollBar::handleAsyncUpdate()::$_98&&)::{lambda()#1}>
  ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::ScrollBar::Listener,juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ScrollBar::handleAsyncUpdate()::__98,juce::ListenerList<juce::ScrollBar::Listener,juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ScrollBar::Listener*,juce::ListenerList<juce::ScrollBar::Listener,juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ScrollBar::handleAsyncUpdate()::__98&&)::_lambda()_1_>
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
        iVar12 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar12 = (int)*(long *)(this_00 + 8);
        *(int *)(this_00 + 8) = iVar12 + -1;
      }
      if (iVar12 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
      }
    }
  }
  return;
}


