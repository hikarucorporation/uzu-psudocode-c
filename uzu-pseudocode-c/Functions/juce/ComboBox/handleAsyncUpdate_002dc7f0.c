// Function : handleAsyncUpdate
// Namespace: juce:ComboBox
// Entry    : 002dc7f0
// Prototype: undefined handleAsyncUpdate(ComboBox * this)
// Body     : 002dc7f0 - 002dcc8b


/* juce::ComboBox::handleAsyncUpdate() */

void __thiscall juce::ComboBox::handleAsyncUpdate(ComboBox *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  long *plVar7;
  int *piVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  int local_78;
  int local_74;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_70;
  long local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  long *local_50;
  undefined8 local_48;
  long local_40;
  undefined1 *local_38;
  
  plVar9 = *(long **)(this + 0xd8);
  if (plVar9 == (long *)0x0) {
    plVar9 = operator_new(0x18);
    *(undefined4 *)(plVar9 + 1) = 0;
    *plVar9 = (long)&PTR__ReferenceCountedObject_00714b80;
    plVar9[2] = (long)this;
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    plVar3 = *(long **)(this + 0xd8);
    *(long **)(this + 0xd8) = plVar9;
    if (plVar3 == (long *)0x0) goto LAB_002dc80d;
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar9 = *(long **)(this + 0xd8);
    if (plVar9 != (long *)0x0) goto LAB_002dc80d;
    plVar9 = (long *)0x0;
    iVar13 = *(int *)(this + 0x1b0);
    p_Var1 = local_70;
    puVar2 = local_58;
    plVar3 = local_50;
  }
  else {
LAB_002dc80d:
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    iVar13 = *(int *)(this + 0x1b0);
    p_Var1 = local_70;
    puVar2 = local_58;
    plVar3 = local_50;
  }
  local_70 = p_Var1;
  local_58 = puVar2;
  local_50 = plVar3;
  if (iVar13 != 2) goto joined_r0x002dcc7c;
  local_50 = *(long **)(this + 400);
  local_70 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x198);
  if (local_70 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    }
  }
  local_78 = 0;
  local_74 = *(int *)((long)local_50 + 0xc);
  local_58 = *(undefined8 **)(this + 0x1a0);
  puVar19 = (undefined8 *)local_58[1];
  if (puVar19 == (undefined8 *)local_58[2]) {
    puVar2 = (undefined8 *)*local_58;
    lVar20 = (long)puVar19 - (long)puVar2;
    if (lVar20 == 0x7ffffffffffffff8) {
                    /* try { // try from 002dcc80 to 002dcc8b has its CatchHandler @ 002dcc96 */
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
    }
    uVar15 = lVar20 >> 3;
    uVar11 = 1;
    if (lVar20 != 0) {
      uVar11 = uVar15;
    }
    uVar17 = uVar11 + uVar15;
    if (uVar17 >> 0x3c != 0) {
      uVar17 = 0xfffffffffffffff;
    }
    if (CARRY8(uVar11,uVar15)) {
      uVar17 = 0xfffffffffffffff;
    }
    if (uVar17 == 0) {
      puVar10 = (undefined8 *)0x0;
      *(int **)(uVar15 * 8) = &local_78;
      if (lVar20 < 1) goto LAB_002dca01;
LAB_002dc9a2:
      puVar16 = puVar10;
      if (puVar2 != puVar19) {
        puVar12 = puVar2;
        if (0x17 < lVar20 - 8U) {
          uVar21 = (lVar20 - 8U >> 3) + 1;
          uVar11 = uVar21 & 0xfffffffffffffffc;
          uVar14 = (uVar11 - 4 >> 2) + 1;
          uVar15 = (ulong)((uint)uVar14 & 3);
          if (uVar11 - 4 < 0xc) {
            lVar20 = 0;
          }
          else {
            uVar14 = uVar14 & 0x7ffffffffffffffc;
            lVar20 = 0;
            do {
              uVar4 = (puVar2 + lVar20)[1];
              uVar5 = puVar2[lVar20 + 2];
              uVar6 = (puVar2 + lVar20 + 2)[1];
              puVar10[lVar20] = puVar2[lVar20];
              (puVar10 + lVar20)[1] = uVar4;
              puVar10[lVar20 + 2] = uVar5;
              (puVar10 + lVar20 + 2)[1] = uVar6;
              uVar4 = (puVar2 + lVar20 + 4)[1];
              uVar5 = puVar2[lVar20 + 6];
              uVar6 = (puVar2 + lVar20 + 6)[1];
              puVar10[lVar20 + 4] = puVar2[lVar20 + 4];
              (puVar10 + lVar20 + 4)[1] = uVar4;
              puVar10[lVar20 + 6] = uVar5;
              (puVar10 + lVar20 + 6)[1] = uVar6;
              uVar4 = (puVar2 + lVar20 + 8)[1];
              uVar5 = puVar2[lVar20 + 10];
              uVar6 = (puVar2 + lVar20 + 10)[1];
              puVar10[lVar20 + 8] = puVar2[lVar20 + 8];
              (puVar10 + lVar20 + 8)[1] = uVar4;
              puVar10[lVar20 + 10] = uVar5;
              (puVar10 + lVar20 + 10)[1] = uVar6;
              uVar4 = (puVar2 + lVar20 + 0xc)[1];
              uVar5 = puVar2[lVar20 + 0xe];
              uVar6 = (puVar2 + lVar20 + 0xe)[1];
              puVar10[lVar20 + 0xc] = puVar2[lVar20 + 0xc];
              (puVar10 + lVar20 + 0xc)[1] = uVar4;
              puVar10[lVar20 + 0xe] = uVar5;
              (puVar10 + lVar20 + 0xe)[1] = uVar6;
              lVar20 = lVar20 + 0x10;
              uVar14 = uVar14 - 4;
            } while (uVar14 != 0);
          }
          if (uVar15 != 0) {
            lVar18 = 0;
            do {
              puVar12 = (undefined8 *)((long)puVar2 + lVar18 + lVar20 * 8);
              uVar4 = puVar12[1];
              puVar16 = (undefined8 *)((long)puVar2 + lVar18 + lVar20 * 8 + 0x10);
              uVar5 = *puVar16;
              uVar6 = puVar16[1];
              puVar16 = (undefined8 *)((long)puVar10 + lVar18 + lVar20 * 8);
              *puVar16 = *puVar12;
              puVar16[1] = uVar4;
              puVar16 = (undefined8 *)((long)puVar10 + lVar18 + lVar20 * 8 + 0x10);
              *puVar16 = uVar5;
              puVar16[1] = uVar6;
              lVar18 = lVar18 + 0x20;
            } while (uVar15 * 0x20 != lVar18);
          }
          puVar16 = puVar10 + uVar11;
          if (uVar21 == uVar11) goto LAB_002dcaf3;
          puVar12 = puVar2 + uVar11;
        }
        do {
          *puVar16 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar16 = puVar16 + 1;
        } while (puVar12 != puVar19);
      }
    }
    else {
      local_68 = lVar20;
      local_60 = puVar19;
                    /* try { // try from 002dc984 to 002dc988 has its CatchHandler @ 002dcc96 */
      puVar10 = operator_new(uVar17 * 8);
      puVar10[uVar15] = &local_78;
      puVar19 = local_60;
      lVar20 = local_68;
      if (0 < local_68) goto LAB_002dc9a2;
LAB_002dca01:
      puVar16 = puVar10 + uVar15;
    }
LAB_002dcaf3:
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete(puVar2);
    }
    *local_58 = puVar10;
    local_58[1] = puVar16 + 1;
    local_58[2] = puVar10 + uVar17;
    local_48 = *(undefined8 *)(this + 0x1a0);
    local_40 = *(long *)(this + 0x1a8);
    this_00 = local_70;
    plVar7 = local_50;
  }
  else {
    *puVar19 = &local_78;
    local_58[1] = local_58[1] + 8;
    local_48 = *(undefined8 *)(this + 0x1a0);
    local_40 = *(long *)(this + 0x1a8);
    this_00 = local_70;
    local_70 = p_Var1;
    local_58 = puVar2;
    plVar7 = local_50;
    local_50 = plVar3;
  }
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
  if ((local_78 < local_74) &&
     (local_38 = (undefined1 *)&local_78, piVar8 = &local_78, iVar13 = local_74,
     plVar9 != (long *)0x0)) {
    do {
      local_38 = (undefined1 *)piVar8;
      if (plVar9[2] == 0) break;
      plVar3 = *(long **)(*plVar7 + (long)local_78 * 8);
      if (plVar3 != (long *)0x0) {
                    /* try { // try from 002dcbec to 002dcbf1 has its CatchHandler @ 002dcc9b */
        (**(code **)(*plVar3 + 0x10))(plVar3,this);
        iVar13 = local_74;
      }
      local_78 = local_78 + 1;
      piVar8 = (int *)local_38;
    } while (local_78 < iVar13);
  }
  ScopeGuard<juce::ListenerList<juce::ComboBox::Listener,juce::Array<juce::ComboBox::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ComboBox::handleAsyncUpdate()::$_130,juce::Component::BailOutChecker>(juce::ComboBox::Listener*,juce::Component::BailOutChecker_const&,juce::ComboBox::handleAsyncUpdate()::$_130&&)::{lambda()#1}>
  ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::ComboBox::Listener,juce::Array<juce::ComboBox::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ComboBox::handleAsyncUpdate()::__130,juce::Component::BailOutChecker>(juce::ComboBox::Listener*,juce::Component::BailOutChecker_const&,juce::ComboBox::handleAsyncUpdate()::__130&&)::_lambda()_1_>
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
        iVar13 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar13 = (int)*(long *)(this_00 + 8);
        *(int *)(this_00 + 8) = iVar13 + -1;
      }
      if (iVar13 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
      }
    }
  }
joined_r0x002dcc7c:
  if (plVar9 != (long *)0x0) {
                    /* try { // try from 002dcc29 to 002dcc2f has its CatchHandler @ 002dcc8c */
    if ((plVar9[2] != 0) &&
       ((*(long *)(this + 0x128) == 0 || ((**(code **)(this + 0x130))(this + 0x118), plVar9[2] != 0)
        ))) {
                    /* try { // try from 002dcc38 to 002dcc3f has its CatchHandler @ 002dcc8e */
      Component::getAccessibilityHandler((Component *)this);
    }
    LOCK();
    plVar3 = plVar9 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)(*plVar9 + 8))(plVar9);
    }
  }
  return;
}


