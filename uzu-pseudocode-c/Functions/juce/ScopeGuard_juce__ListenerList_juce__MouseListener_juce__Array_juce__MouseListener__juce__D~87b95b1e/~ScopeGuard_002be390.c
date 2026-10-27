// Function : ~ScopeGuard
// Namespace: juce:ScopeGuard_juce__ListenerList_juce__MouseListener_juce__Array_juce__MouseListener__juce__D~87b95b1e
// Entry    : 002be390
// Prototype: undefined ~ScopeGuard(ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseDown(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::$_42,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseDown(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::$_42&&)::{lambda()#1}> * this)
// Body     : 002be390 - 002be733


/* juce::ScopeGuard<juce::ListenerList<juce::MouseListener, juce::Array<juce::MouseListener*,
   juce::DummyCriticalSection, 0>
   >::callCheckedExcluding<juce::Component::internalMouseDown(juce::Component::SafePointer<juce::Component>,
   juce::MouseInputSource, juce::detail::PointerState const&, juce::Time)::$_42,
   juce::HierarchyChecker>(juce::MouseListener*, juce::HierarchyChecker const&,
   juce::Component::internalMouseDown(juce::Component::SafePointer<juce::Component>,
   juce::MouseInputSource, juce::detail::PointerState const&,
   juce::Time)::$_42&&)::{lambda()#1}>::~ScopeGuard() */

void __thiscall
juce::
ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseDown(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::$_42,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseDown(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::$_42&&)::{lambda()#1}>
::~ScopeGuard(ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseDown(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::__42,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseDown(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::__42&&)::_lambda()_1_>
              *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long *plVar5;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  
  plVar5 = *(long **)this;
  lVar22 = *(long *)(this + 0x10);
  plVar12 = (long *)*plVar5;
  plVar16 = (long *)plVar5[1];
  uVar20 = (long)plVar16 - (long)plVar12;
  uVar15 = uVar20;
  plVar14 = plVar12;
  if (0x1f < (long)uVar20) {
    lVar11 = (uVar20 >> 5) + 1;
    plVar21 = plVar12 + 2;
    do {
      plVar14 = plVar21;
      if (plVar14[-2] == lVar22) {
        plVar14 = plVar14 + -2;
        goto joined_r0x002be493;
      }
      if (plVar14[-1] == lVar22) {
        plVar14 = plVar14 + -1;
        goto joined_r0x002be493;
      }
      if (*plVar14 == lVar22) goto joined_r0x002be493;
      if (plVar14[1] == lVar22) {
        plVar14 = plVar14 + 1;
        goto joined_r0x002be493;
      }
      lVar11 = lVar11 + -1;
      uVar15 = uVar15 - 0x20;
      plVar21 = plVar14 + 4;
    } while (1 < lVar11);
    plVar14 = plVar14 + 2;
  }
  lVar11 = (long)uVar15 >> 3;
  plVar21 = plVar16;
  if (lVar11 == 1) {
LAB_002be435:
    if (*plVar14 == lVar22) goto joined_r0x002be493;
  }
  else {
    if (lVar11 == 2) {
LAB_002be42c:
      if (*plVar14 != lVar22) {
        plVar14 = plVar14 + 1;
        goto LAB_002be435;
      }
    }
    else {
      if (lVar11 != 3) goto LAB_002be4ae;
      if (*plVar14 != lVar22) {
        plVar14 = plVar14 + 1;
        goto LAB_002be42c;
      }
    }
joined_r0x002be493:
    plVar21 = plVar14;
    if ((plVar21 != plVar16) && (plVar14 = plVar21 + 1, plVar14 != plVar16)) {
      plVar12 = plVar21;
      if (*plVar14 != lVar22) {
        *plVar21 = *plVar14;
        plVar12 = plVar14;
      }
      plVar14 = plVar21 + 2;
      plVar21 = plVar12;
      for (; plVar14 != plVar16; plVar14 = plVar14 + 1) {
        if (*plVar14 != lVar22) {
          *plVar21 = *plVar14;
          plVar21 = plVar21 + 1;
        }
      }
      plVar12 = (long *)*plVar5;
      uVar20 = *(long *)(*(long *)this + 8) - (long)plVar12;
    }
  }
LAB_002be4ae:
  lVar11 = (long)plVar21 - (long)plVar12 >> 3;
  lVar22 = (long)uVar20 >> 3;
  if (lVar11 == lVar22) goto LAB_002be57c;
  plVar14 = (long *)(((long)plVar21 - (long)plVar12 & 0xfffffffffffffff8U) + (long)plVar12);
  plVar21 = (long *)((uVar20 & 0xfffffffffffffff8) + (long)plVar12);
  plVar16 = (long *)plVar5[1];
  uVar15 = (long)plVar16 - (long)plVar21;
  if (uVar15 == 0) {
    if (plVar21 == plVar14) goto LAB_002be57c;
  }
  else if ((long)uVar15 < 1) {
    plVar14 = (long *)((long)plVar14 + ((long)plVar16 - (long)plVar21));
    if (plVar16 == plVar14) goto LAB_002be57c;
  }
  else {
    uVar20 = uVar15 >> 3;
    uVar18 = uVar20 + (uVar15 < 8);
    if ((uVar18 < 4) ||
       ((plVar14 < plVar12 + ((uVar20 + lVar22) - (ulong)(7 < uVar15)) + 1 &&
        (plVar21 < plVar12 + ((lVar11 + uVar20) - (ulong)(7 < uVar15)) + 1)))) {
      plVar12 = plVar14;
      plVar16 = plVar21;
LAB_002be54a:
      uVar20 = uVar20 + 1;
      lVar22 = 0;
      do {
        *(undefined8 *)((long)plVar12 + lVar22) = *(undefined8 *)((long)plVar16 + lVar22);
        uVar20 = uVar20 - 1;
        lVar22 = lVar22 + 8;
      } while (1 < uVar20);
    }
    else {
      uVar19 = uVar18 & 0xfffffffffffffffc;
      uVar15 = (uVar19 - 4 >> 2) + 1;
      uVar23 = (ulong)((uint)uVar15 & 3);
      if (uVar19 - 4 < 0xc) {
        lVar13 = 0;
      }
      else {
        uVar15 = uVar15 & 0xfffffffffffffffc;
        lVar13 = 0;
        do {
          lVar17 = (plVar12 + lVar22 + lVar13)[1];
          lVar6 = plVar12[lVar22 + lVar13 + 2];
          lVar7 = (plVar12 + lVar22 + lVar13 + 2)[1];
          plVar12[lVar11 + lVar13] = plVar12[lVar22 + lVar13];
          (plVar12 + lVar11 + lVar13)[1] = lVar17;
          plVar12[lVar11 + lVar13 + 2] = lVar6;
          (plVar12 + lVar11 + lVar13 + 2)[1] = lVar7;
          lVar17 = (plVar12 + lVar22 + lVar13 + 4)[1];
          lVar6 = plVar12[lVar22 + lVar13 + 6];
          lVar7 = (plVar12 + lVar22 + lVar13 + 6)[1];
          plVar12[lVar11 + lVar13 + 4] = plVar12[lVar22 + lVar13 + 4];
          (plVar12 + lVar11 + lVar13 + 4)[1] = lVar17;
          plVar12[lVar11 + lVar13 + 6] = lVar6;
          (plVar12 + lVar11 + lVar13 + 6)[1] = lVar7;
          lVar17 = (plVar12 + lVar22 + lVar13 + 8)[1];
          lVar6 = plVar12[lVar22 + lVar13 + 10];
          lVar7 = (plVar12 + lVar22 + lVar13 + 10)[1];
          plVar12[lVar11 + lVar13 + 8] = plVar12[lVar22 + lVar13 + 8];
          (plVar12 + lVar11 + lVar13 + 8)[1] = lVar17;
          plVar12[lVar11 + lVar13 + 10] = lVar6;
          (plVar12 + lVar11 + lVar13 + 10)[1] = lVar7;
          lVar17 = (plVar12 + lVar22 + lVar13 + 0xc)[1];
          lVar6 = plVar12[lVar22 + lVar13 + 0xe];
          lVar7 = (plVar12 + lVar22 + lVar13 + 0xe)[1];
          plVar12[lVar11 + lVar13 + 0xc] = plVar12[lVar22 + lVar13 + 0xc];
          (plVar12 + lVar11 + lVar13 + 0xc)[1] = lVar17;
          plVar12[lVar11 + lVar13 + 0xe] = lVar6;
          (plVar12 + lVar11 + lVar13 + 0xe)[1] = lVar7;
          lVar13 = lVar13 + 0x10;
          uVar15 = uVar15 - 4;
        } while (uVar15 != 0);
      }
      if (uVar23 != 0) {
        lVar17 = 0;
        do {
          puVar3 = (undefined8 *)((long)plVar12 + lVar17 + (lVar22 + lVar13) * 8);
          uVar8 = puVar3[1];
          puVar2 = (undefined8 *)((long)plVar12 + lVar17 + (lVar22 + lVar13) * 8 + 0x10);
          uVar9 = *puVar2;
          uVar10 = puVar2[1];
          puVar2 = (undefined8 *)((long)plVar12 + lVar17 + (lVar11 + lVar13) * 8);
          *puVar2 = *puVar3;
          puVar2[1] = uVar8;
          puVar2 = (undefined8 *)((long)plVar12 + lVar17 + (lVar11 + lVar13) * 8 + 0x10);
          *puVar2 = uVar9;
          puVar2[1] = uVar10;
          lVar17 = lVar17 + 0x20;
        } while (uVar23 * 0x20 != lVar17);
      }
      if (uVar18 != uVar19) {
        uVar20 = uVar20 - uVar19;
        plVar12 = plVar14 + uVar19;
        plVar16 = plVar21 + uVar19;
        goto LAB_002be54a;
      }
    }
    plVar14 = (long *)((long)plVar14 + (plVar5[1] - (long)plVar21));
    if ((long *)plVar5[1] == plVar14) goto LAB_002be57c;
  }
  plVar5[1] = (long)plVar14;
LAB_002be57c:
  this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8);
  if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*(long *)(this_00 + 8) == 0x100000001) {
      *(undefined8 *)(this_00 + 8) = 0;
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
                    /* WARNING: Could not recover jumptable at 0x002be5bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this_00 + 0x18))(this_00);
      return;
    }
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      p_Var1 = this_00 + 8;
      iVar4 = *(int *)p_Var1;
      *(int *)p_Var1 = *(int *)p_Var1 + -1;
      UNLOCK();
    }
    else {
      iVar4 = (int)*(long *)(this_00 + 8);
      *(int *)(this_00 + 8) = iVar4 + -1;
    }
    if (iVar4 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
      return;
    }
  }
  return;
}


