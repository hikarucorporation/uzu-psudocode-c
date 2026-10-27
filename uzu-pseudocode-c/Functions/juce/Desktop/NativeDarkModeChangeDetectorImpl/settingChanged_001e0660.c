// Function : settingChanged
// Namespace: juce:Desktop:NativeDarkModeChangeDetectorImpl
// Entry    : 001e0660
// Prototype: undefined settingChanged(NativeDarkModeChangeDetectorImpl * this, undefined8 * param_1)
// Body     : 001e0660 - 001e0af0


/* juce::Desktop::NativeDarkModeChangeDetectorImpl::settingChanged(juce::XWindowSystemUtilities::XSetting
   const&) */

void __thiscall
juce::Desktop::NativeDarkModeChangeDetectorImpl::settingChanged
          (NativeDarkModeChangeDetectorImpl *this,undefined8 *param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  NativeDarkModeChangeDetectorImpl NVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  uint uVar13;
  int *piVar14;
  XWindowSystem *pXVar15;
  ulong uVar16;
  Desktop *this_01;
  long *plVar17;
  long *plVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  bool bVar26;
  int local_70;
  int local_6c;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_68;
  long local_60;
  ulong local_58;
  undefined8 *local_50;
  undefined8 local_48;
  long local_40;
  int *local_38;
  
  piVar14 = operator_new__(0x27);
  LOCK();
  *piVar14 = 0;
  UNLOCK();
  piVar14[2] = 0x10;
  piVar14[3] = 0;
  piVar14[4] = 0x2f74654e;
  piVar14[5] = 0x6d656854;
  piVar14[6] = 0x6d614e65;
  *(undefined2 *)(piVar14 + 7) = 0x65;
  if ((byte *)*param_1 == (byte *)(piVar14 + 4)) {
    bVar26 = true;
    LOCK();
    iVar19 = *piVar14;
    *piVar14 = *piVar14 + -1;
    UNLOCK();
  }
  else {
    uVar13 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                       ((byte *)*param_1,(byte *)(piVar14 + 4));
    bVar26 = uVar13 == 0;
    LOCK();
    iVar19 = *piVar14;
    *piVar14 = *piVar14 + -1;
    UNLOCK();
  }
  if (iVar19 == 0) {
    operator_delete__(piVar14);
  }
  if (!bVar26) {
    return;
  }
  pXVar15 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                      ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                       XWindowSystem::singletonHolder);
  uVar16 = XWindowSystem::isDarkModeActive(*(XWindowSystem **)(pXVar15 + 0x158));
  NVar4 = this[8];
  this[8] = SUB81(uVar16,0);
  if (NVar4 == SUB81(uVar16,0)) {
    return;
  }
  if (instance == (Desktop *)0x0) {
    this_01 = operator_new(0x1d0);
                    /* try { // try from 001e0749 to 001e0750 has its CatchHandler @ 001e0af6 */
    Desktop(this_01);
    iVar19 = *(int *)(this_01 + 0xb8);
    p_Var1 = local_68;
    puVar2 = local_50;
  }
  else {
    iVar19 = *(int *)(instance + 0xb8);
    this_01 = instance;
    p_Var1 = local_68;
    puVar2 = local_50;
  }
  if (iVar19 != 2) {
    instance = this_01;
    return;
  }
  plVar5 = *(long **)(this_01 + 0x98);
  local_68 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this_01 + 0xa0);
  instance = this_01;
  if (local_68 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
    }
  }
  local_70 = 0;
  local_6c = *(int *)((long)plVar5 + 0xc);
  local_50 = *(undefined8 **)(this_01 + 0xa8);
  plVar6 = (long *)local_50[1];
  if (plVar6 != (long *)local_50[2]) {
    *plVar6 = (long)&local_70;
    local_50[1] = local_50[1] + 8;
    local_48 = *(undefined8 *)(this_01 + 0xa8);
    local_40 = *(long *)(this_01 + 0xb0);
    this_00 = local_68;
    local_68 = p_Var1;
    local_50 = puVar2;
    goto joined_r0x001e09fa;
  }
  plVar7 = (long *)*local_50;
  lVar24 = (long)plVar6 - (long)plVar7;
  if (lVar24 == 0x7ffffffffffffff8) {
                    /* try { // try from 001e0ae5 to 001e0af0 has its CatchHandler @ 001e0af1 */
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar21 = lVar24 >> 3;
  uVar16 = 1;
  if (lVar24 != 0) {
    uVar16 = uVar21;
  }
  local_58 = uVar16 + uVar21;
  if (local_58 >> 0x3c != 0) {
    local_58 = 0xfffffffffffffff;
  }
  if (CARRY8(uVar16,uVar21)) {
    local_58 = 0xfffffffffffffff;
  }
  if (local_58 == 0) {
    plVar17 = (long *)0x0;
    *(int **)(uVar21 * 8) = &local_70;
    if (0 < lVar24) goto LAB_001e0868;
LAB_001e08c9:
    plVar22 = plVar17 + uVar21;
  }
  else {
    local_60 = lVar24;
                    /* try { // try from 001e084c to 001e0850 has its CatchHandler @ 001e0af1 */
    plVar17 = operator_new(local_58 * 8);
    plVar17[uVar21] = (long)&local_70;
    lVar24 = local_60;
    if (local_60 < 1) goto LAB_001e08c9;
LAB_001e0868:
    plVar22 = plVar17;
    if (plVar7 != plVar6) {
      plVar18 = plVar7;
      if (0x17 < lVar24 - 8U) {
        uVar25 = (lVar24 - 8U >> 3) + 1;
        uVar16 = uVar25 & 0xfffffffffffffffc;
        uVar20 = (uVar16 - 4 >> 2) + 1;
        uVar21 = (ulong)((uint)uVar20 & 3);
        if (uVar16 - 4 < 0xc) {
          lVar24 = 0;
        }
        else {
          uVar20 = uVar20 & 0x7ffffffffffffffc;
          lVar24 = 0;
          do {
            lVar23 = (plVar7 + lVar24)[1];
            lVar8 = plVar7[lVar24 + 2];
            lVar9 = (plVar7 + lVar24 + 2)[1];
            plVar17[lVar24] = plVar7[lVar24];
            (plVar17 + lVar24)[1] = lVar23;
            plVar17[lVar24 + 2] = lVar8;
            (plVar17 + lVar24 + 2)[1] = lVar9;
            lVar23 = (plVar7 + lVar24 + 4)[1];
            lVar8 = plVar7[lVar24 + 6];
            lVar9 = (plVar7 + lVar24 + 6)[1];
            plVar17[lVar24 + 4] = plVar7[lVar24 + 4];
            (plVar17 + lVar24 + 4)[1] = lVar23;
            plVar17[lVar24 + 6] = lVar8;
            (plVar17 + lVar24 + 6)[1] = lVar9;
            lVar23 = (plVar7 + lVar24 + 8)[1];
            lVar8 = plVar7[lVar24 + 10];
            lVar9 = (plVar7 + lVar24 + 10)[1];
            plVar17[lVar24 + 8] = plVar7[lVar24 + 8];
            (plVar17 + lVar24 + 8)[1] = lVar23;
            plVar17[lVar24 + 10] = lVar8;
            (plVar17 + lVar24 + 10)[1] = lVar9;
            lVar23 = (plVar7 + lVar24 + 0xc)[1];
            lVar8 = plVar7[lVar24 + 0xe];
            lVar9 = (plVar7 + lVar24 + 0xe)[1];
            plVar17[lVar24 + 0xc] = plVar7[lVar24 + 0xc];
            (plVar17 + lVar24 + 0xc)[1] = lVar23;
            plVar17[lVar24 + 0xe] = lVar8;
            (plVar17 + lVar24 + 0xe)[1] = lVar9;
            lVar24 = lVar24 + 0x10;
            uVar20 = uVar20 - 4;
          } while (uVar20 != 0);
        }
        if (uVar21 != 0) {
          lVar23 = 0;
          do {
            puVar3 = (undefined8 *)((long)plVar7 + lVar23 + lVar24 * 8);
            uVar10 = puVar3[1];
            puVar2 = (undefined8 *)((long)plVar7 + lVar23 + lVar24 * 8 + 0x10);
            uVar11 = *puVar2;
            uVar12 = puVar2[1];
            puVar2 = (undefined8 *)((long)plVar17 + lVar23 + lVar24 * 8);
            *puVar2 = *puVar3;
            puVar2[1] = uVar10;
            puVar2 = (undefined8 *)((long)plVar17 + lVar23 + lVar24 * 8 + 0x10);
            *puVar2 = uVar11;
            puVar2[1] = uVar12;
            lVar23 = lVar23 + 0x20;
          } while (uVar21 * 0x20 != lVar23);
        }
        plVar22 = plVar17 + uVar16;
        if (uVar25 == uVar16) goto LAB_001e09b3;
        plVar18 = plVar7 + uVar16;
      }
      do {
        *plVar22 = *plVar18;
        plVar18 = plVar18 + 1;
        plVar22 = plVar22 + 1;
      } while (plVar18 != plVar6);
    }
  }
LAB_001e09b3:
  if (plVar7 != (long *)0x0) {
    operator_delete(plVar7);
  }
  *local_50 = plVar17;
  local_50[1] = plVar22 + 1;
  local_50[2] = plVar17 + local_58;
  local_48 = *(undefined8 *)(this_01 + 0xa8);
  local_40 = *(long *)(this_01 + 0xb0);
  this_00 = local_68;
joined_r0x001e09fa:
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
  iVar19 = local_6c;
  for (; local_70 < iVar19; local_70 = local_70 + 1) {
    plVar6 = *(long **)(*plVar5 + (long)local_70 * 8);
    if (plVar6 != (long *)0x0) {
                    /* try { // try from 001e0a5e to 001e0a60 has its CatchHandler @ 001e0b06 */
      (**(code **)(*plVar6 + 0x10))();
      iVar19 = local_6c;
    }
  }
  ScopeGuard<juce::ListenerList<juce::DarkModeSettingListener,juce::Array<juce::DarkModeSettingListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Desktop::darkModeChanged()::$_56,juce::ListenerList<juce::DarkModeSettingListener,juce::Array<juce::DarkModeSettingListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::DarkModeSettingListener*,juce::ListenerList<juce::DarkModeSettingListener,juce::Array<juce::DarkModeSettingListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::Desktop::darkModeChanged()::$_56&&)::{lambda()#1}>
  ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::DarkModeSettingListener,juce::Array<juce::DarkModeSettingListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Desktop::darkModeChanged()::__56,juce::ListenerList<juce::DarkModeSettingListener,juce::Array<juce::DarkModeSettingListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::DarkModeSettingListener*,juce::ListenerList<juce::DarkModeSettingListener,juce::Array<juce::DarkModeSettingListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::Desktop::darkModeChanged()::__56&&)::_lambda()_1_>
                 *)&local_48);
  if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    uVar16 = *(ulong *)(this_00 + 8);
    if (uVar16 == 0x100000001) {
      *(undefined8 *)(this_00 + 8) = 0;
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      (**(code **)(*(long *)this_00 + 0x18))(this_00);
    }
    else {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var1 = this_00 + 8;
        uVar16 = (ulong)*(uint *)p_Var1;
        *(uint *)p_Var1 = *(uint *)p_Var1 - 1;
        UNLOCK();
      }
      else {
        *(int *)(this_00 + 8) = (int)uVar16 + -1;
      }
      if ((int)uVar16 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
      }
    }
  }
  return;
}


