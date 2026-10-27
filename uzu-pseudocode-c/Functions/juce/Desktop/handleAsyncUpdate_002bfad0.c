// Function : handleAsyncUpdate
// Namespace: juce:Desktop
// Entry    : 002bfad0
// Prototype: undefined handleAsyncUpdate(Desktop * this)
// Body     : 002bfad0 - 002c029d


/* WARNING: Type propagation algorithm not settling */
/* juce::Desktop::handleAsyncUpdate() */

void __thiscall juce::Desktop::handleAsyncUpdate(Desktop *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  int *piVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  Desktop *this_01;
  LookAndFeel_V4 *pLVar13;
  long lVar14;
  void *__ptr;
  undefined8 *puVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  uint uVar21;
  ulong uVar22;
  FocusOutline *this_02;
  int local_78;
  int local_74;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_70;
  FocusOutline *local_68;
  long local_60;
  undefined1 *local_58;
  long local_50;
  ulong local_48;
  Desktop *local_40;
  undefined8 *local_38;
  
  lVar14 = Component::currentlyFocusedComponent;
  if (Component::currentlyFocusedComponent == 0) {
LAB_002bfb68:
    plVar9 = (long *)0x0;
    iVar16 = *(int *)(this + 0x90);
    p_Var1 = local_70;
    puVar15 = local_38;
  }
  else {
    plVar9 = *(long **)(Component::currentlyFocusedComponent + 0xd8);
    if (plVar9 == (long *)0x0) {
      plVar9 = operator_new(0x18);
      *(undefined4 *)(plVar9 + 1) = 0;
      *plVar9 = (long)&PTR__ReferenceCountedObject_00714b80;
      plVar9[2] = lVar14;
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      plVar2 = *(long **)(lVar14 + 0xd8);
      *(long **)(lVar14 + 0xd8) = plVar9;
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar9 = plVar2 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)(*plVar2 + 8))();
        }
        plVar9 = *(long **)(lVar14 + 0xd8);
        if (plVar9 == (long *)0x0) goto LAB_002bfb68;
      }
    }
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    iVar16 = *(int *)(this + 0x90);
    p_Var1 = local_70;
    puVar15 = local_38;
  }
  local_70 = p_Var1;
  local_38 = puVar15;
  if (iVar16 == 2) {
    plVar2 = *(long **)(this + 0x70);
    local_70 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x78);
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
    local_74 = *(int *)((long)plVar2 + 0xc);
    local_38 = *(undefined8 **)(this + 0x80);
    puVar3 = (undefined8 *)local_38[1];
    if (puVar3 == (undefined8 *)local_38[2]) {
      puVar15 = (undefined8 *)*local_38;
      lVar14 = (long)puVar3 - (long)puVar15;
      if (lVar14 == 0x7ffffffffffffff8) {
                    /* try { // try from 002c0292 to 002c029d has its CatchHandler @ 002c02b9 */
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("vector::_M_realloc_insert");
      }
      uVar19 = lVar14 >> 3;
      uVar11 = 1;
      if (lVar14 != 0) {
        uVar11 = uVar19;
      }
      local_48 = uVar11 + uVar19;
      if (local_48 >> 0x3c != 0) {
        local_48 = 0xfffffffffffffff;
      }
      if (CARRY8(uVar11,uVar19)) {
        local_48 = 0xfffffffffffffff;
      }
      local_40 = this;
      if (local_48 == 0) {
        puVar10 = (undefined8 *)0x0;
        *(int **)(uVar19 * 8) = &local_78;
        if (lVar14 < 1) goto LAB_002bfcd2;
LAB_002bfc73:
        puVar20 = puVar10;
        if (puVar15 != puVar3) {
          puVar12 = puVar15;
          if (0x17 < lVar14 - 8U) {
            uVar22 = (lVar14 - 8U >> 3) + 1;
            uVar11 = uVar22 & 0xfffffffffffffffc;
            uVar17 = (uVar11 - 4 >> 2) + 1;
            uVar19 = (ulong)((uint)uVar17 & 3);
            if (uVar11 - 4 < 0xc) {
              lVar14 = 0;
            }
            else {
              uVar17 = uVar17 & 0x7ffffffffffffffc;
              lVar14 = 0;
              do {
                uVar5 = (puVar15 + lVar14)[1];
                uVar6 = puVar15[lVar14 + 2];
                uVar7 = (puVar15 + lVar14 + 2)[1];
                puVar10[lVar14] = puVar15[lVar14];
                (puVar10 + lVar14)[1] = uVar5;
                puVar10[lVar14 + 2] = uVar6;
                (puVar10 + lVar14 + 2)[1] = uVar7;
                uVar5 = (puVar15 + lVar14 + 4)[1];
                uVar6 = puVar15[lVar14 + 6];
                uVar7 = (puVar15 + lVar14 + 6)[1];
                puVar10[lVar14 + 4] = puVar15[lVar14 + 4];
                (puVar10 + lVar14 + 4)[1] = uVar5;
                puVar10[lVar14 + 6] = uVar6;
                (puVar10 + lVar14 + 6)[1] = uVar7;
                uVar5 = (puVar15 + lVar14 + 8)[1];
                uVar6 = puVar15[lVar14 + 10];
                uVar7 = (puVar15 + lVar14 + 10)[1];
                puVar10[lVar14 + 8] = puVar15[lVar14 + 8];
                (puVar10 + lVar14 + 8)[1] = uVar5;
                puVar10[lVar14 + 10] = uVar6;
                (puVar10 + lVar14 + 10)[1] = uVar7;
                uVar5 = (puVar15 + lVar14 + 0xc)[1];
                uVar6 = puVar15[lVar14 + 0xe];
                uVar7 = (puVar15 + lVar14 + 0xe)[1];
                puVar10[lVar14 + 0xc] = puVar15[lVar14 + 0xc];
                (puVar10 + lVar14 + 0xc)[1] = uVar5;
                puVar10[lVar14 + 0xe] = uVar6;
                (puVar10 + lVar14 + 0xe)[1] = uVar7;
                lVar14 = lVar14 + 0x10;
                uVar17 = uVar17 - 4;
              } while (uVar17 != 0);
            }
            if (uVar19 != 0) {
              lVar18 = 0;
              do {
                puVar12 = (undefined8 *)((long)puVar15 + lVar18 + lVar14 * 8);
                uVar5 = puVar12[1];
                puVar20 = (undefined8 *)((long)puVar15 + lVar18 + lVar14 * 8 + 0x10);
                uVar6 = *puVar20;
                uVar7 = puVar20[1];
                puVar20 = (undefined8 *)((long)puVar10 + lVar18 + lVar14 * 8);
                *puVar20 = *puVar12;
                puVar20[1] = uVar5;
                puVar20 = (undefined8 *)((long)puVar10 + lVar18 + lVar14 * 8 + 0x10);
                *puVar20 = uVar6;
                puVar20[1] = uVar7;
                lVar18 = lVar18 + 0x20;
              } while (uVar19 * 0x20 != lVar18);
            }
            puVar20 = puVar10 + uVar11;
            if (uVar22 == uVar11) goto LAB_002bfdc3;
            puVar12 = puVar15 + uVar11;
          }
          do {
            *puVar20 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar20 = puVar20 + 1;
          } while (puVar12 != puVar3);
        }
      }
      else {
        local_50 = lVar14;
                    /* try { // try from 002bfc5a to 002bfc5e has its CatchHandler @ 002c02b9 */
        puVar10 = operator_new(local_48 * 8);
        puVar10[uVar19] = &local_78;
        lVar14 = local_50;
        if (0 < local_50) goto LAB_002bfc73;
LAB_002bfcd2:
        puVar20 = puVar10 + uVar19;
      }
LAB_002bfdc3:
      if (puVar15 != (undefined8 *)0x0) {
        operator_delete(puVar15);
      }
      *local_38 = puVar10;
      local_38[1] = puVar20 + 1;
      local_38[2] = puVar10 + local_48;
      local_68 = *(FocusOutline **)(local_40 + 0x80);
      local_60 = *(long *)(local_40 + 0x88);
      this_00 = local_70;
      this = local_40;
    }
    else {
      *puVar3 = &local_78;
      local_38[1] = local_38[1] + 8;
      local_68 = *(FocusOutline **)(this + 0x80);
      local_60 = *(long *)(this + 0x88);
      this_00 = local_70;
      local_70 = p_Var1;
      local_38 = puVar15;
    }
    if (local_60 != 0) {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      }
    }
    local_58 = (undefined1 *)&local_78;
    if (local_78 < local_74) {
      local_58 = (undefined1 *)&local_78;
      piVar8 = &local_78;
      iVar16 = local_74;
      if (plVar9 == (long *)0x0) {
        do {
          plVar4 = *(long **)(*plVar2 + (long)local_78 * 8);
          if (plVar4 != (long *)0x0) {
                    /* try { // try from 002bfea4 to 002bfea8 has its CatchHandler @ 002c02be */
            (**(code **)(*plVar4 + 0x10))(plVar4,0);
            iVar16 = local_74;
          }
          local_78 = local_78 + 1;
        } while (local_78 < iVar16);
      }
      else {
        do {
          local_58 = (undefined1 *)piVar8;
          plVar4 = *(long **)(*plVar2 + (long)local_78 * 8);
          if (plVar4 != (long *)0x0) {
                    /* try { // try from 002bfe79 to 002bfe7b has its CatchHandler @ 002c02c0 */
            (**(code **)(*plVar4 + 0x10))(plVar4,plVar9[2]);
            iVar16 = local_74;
          }
          local_78 = local_78 + 1;
          piVar8 = (int *)local_58;
        } while (local_78 < iVar16);
      }
    }
    ScopeGuard<juce::ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Desktop::handleAsyncUpdate()::$_55,juce::ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::FocusChangeListener*,juce::ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::Desktop::handleAsyncUpdate()::$_55&&)::{lambda()#1}>
    ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Desktop::handleAsyncUpdate()::__55,juce::ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::FocusChangeListener*,juce::ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::Desktop::handleAsyncUpdate()::__55&&)::_lambda()_1_>
                   *)&local_68);
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
  }
  if (plVar9 != (long *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*plVar9 + 8))(plVar9);
    }
  }
  lVar14 = Component::currentlyFocusedComponent;
  if ((Component::currentlyFocusedComponent == 0) ||
     ((*(ushort *)(Component::currentlyFocusedComponent + 0xe8) & 0x400) == 0)) {
    plVar9 = *(long **)(this + 0x108);
    *(undefined8 *)(this + 0x108) = 0;
    if (plVar9 == (long *)0x0) {
      return;
    }
    (**(code **)(*plVar9 + 8))();
    return;
  }
  lVar18 = Component::currentlyFocusedComponent;
  do {
    if ((*(long *)(lVar18 + 0x68) != 0) &&
       (pLVar13 = *(LookAndFeel_V4 **)(*(long *)(lVar18 + 0x68) + 0x10),
       pLVar13 != (LookAndFeel_V4 *)0x0)) goto LAB_002bffc0;
    lVar18 = *(long *)(lVar18 + 0x30);
  } while (lVar18 != 0);
  if (instance == (Desktop *)0x0) {
                    /* try { // try from 002bff99 to 002bffa2 has its CatchHandler @ 002c02b1 */
    this_01 = operator_new(0x1d0);
                    /* try { // try from 002bffa6 to 002bffad has its CatchHandler @ 002c029e */
    Desktop(this_01);
    instance = this_01;
  }
  pLVar13 = getDefaultLookAndFeel(instance);
LAB_002bffc0:
  (**(code **)(*(long *)pLVar13 + 0x78))(&local_68,pLVar13,lVar14);
  this_02 = local_68;
  local_68 = (FocusOutline *)0x0;
  plVar9 = *(long **)(this + 0x108);
  *(FocusOutline **)(this + 0x108) = this_02;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
    if (local_68 != (FocusOutline *)0x0) {
      (**(code **)(*(long *)local_68 + 8))();
    }
    this_02 = *(FocusOutline **)(this + 0x108);
  }
  if (this_02 == (FocusOutline *)0x0) {
    return;
  }
  if (*(long *)(this_02 + 0x10) != 0) {
    lVar18 = *(long *)(*(long *)(this_02 + 0x10) + 0x10);
    if (lVar18 == lVar14) {
      return;
    }
    if (lVar18 != 0) {
      ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
      ::remove((ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
                *)(lVar18 + 0xa0),(long)this_02);
    }
  }
  puVar15 = *(undefined8 **)(lVar14 + 0xd8);
  if (puVar15 == (undefined8 *)0x0) {
    puVar15 = operator_new(0x18);
    *(undefined4 *)(puVar15 + 1) = 0;
    *puVar15 = &PTR__ReferenceCountedObject_00714b80;
    puVar15[2] = lVar14;
    LOCK();
    *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
    UNLOCK();
    plVar9 = *(long **)(lVar14 + 0xd8);
    *(undefined8 **)(lVar14 + 0xd8) = puVar15;
    if (plVar9 == (long *)0x0) goto LAB_002c004f;
    LOCK();
    plVar2 = plVar9 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*plVar9 + 8))();
    }
    puVar15 = *(undefined8 **)(lVar14 + 0xd8);
    if (puVar15 != (undefined8 *)0x0) goto LAB_002c004f;
    puVar15 = (undefined8 *)0x0;
    plVar9 = *(long **)(this_02 + 0x10);
    *(undefined8 *)(this_02 + 0x10) = 0;
  }
  else {
LAB_002c004f:
    LOCK();
    *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
    UNLOCK();
    plVar9 = *(long **)(this_02 + 0x10);
    *(undefined8 **)(this_02 + 0x10) = puVar15;
  }
  if (plVar9 != (long *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*plVar9 + 8))();
    }
    puVar15 = *(undefined8 **)(this_02 + 0x10);
  }
  if ((puVar15 != (undefined8 *)0x0) && (lVar14 = puVar15[2], lVar14 != 0)) {
    ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
    ::initialiseIfNeeded
              ((ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
                *)(lVar14 + 0xa0));
    puVar15 = *(undefined8 **)(lVar14 + 0xa0);
    __ptr = (void *)*puVar15;
    iVar16 = *(int *)((long)puVar15 + 0xc);
    lVar14 = (long)iVar16;
    if (lVar14 != 0) {
      lVar18 = 0;
      do {
        if (*(FocusOutline **)((long)__ptr + lVar18) == this_02) goto LAB_002c01d0;
        lVar18 = lVar18 + 8;
      } while (lVar14 * 8 != lVar18);
    }
    if ((int)*(uint *)(puVar15 + 1) <= iVar16) {
      uVar21 = iVar16 + ((iVar16 - (iVar16 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(puVar15 + 1) != uVar21) {
        if ((int)uVar21 < 1) {
          free(__ptr);
          *puVar15 = 0;
          __ptr = (void *)0x0;
        }
        else {
          __ptr = realloc(__ptr,(ulong)uVar21 << 3);
          *puVar15 = __ptr;
        }
      }
      *(uint *)(puVar15 + 1) = uVar21;
      iVar16 = *(int *)((long)puVar15 + 0xc);
      lVar14 = (long)iVar16;
    }
    *(int *)((long)puVar15 + 0xc) = iVar16 + 1;
    *(FocusOutline **)((long)__ptr + lVar14 * 8) = this_02;
  }
LAB_002c01d0:
  if (((*(long *)(this_02 + 0x10) == 0) ||
      (lVar14 = *(long *)(*(long *)(this_02 + 0x10) + 0x10), lVar14 == 0)) ||
     (lVar14 = *(long *)(lVar14 + 0x30), lVar14 == 0)) {
LAB_002c025f:
    plVar9 = *(long **)(this_02 + 0x20);
    *(undefined8 *)(this_02 + 0x20) = 0;
  }
  else {
    puVar15 = *(undefined8 **)(lVar14 + 0xd8);
    if (puVar15 == (undefined8 *)0x0) {
      puVar15 = operator_new(0x18);
      *(undefined4 *)(puVar15 + 1) = 0;
      *puVar15 = &PTR__ReferenceCountedObject_00714b80;
      puVar15[2] = lVar14;
      LOCK();
      *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
      UNLOCK();
      plVar9 = *(long **)(lVar14 + 0xd8);
      *(undefined8 **)(lVar14 + 0xd8) = puVar15;
      if (plVar9 != (long *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)(*plVar9 + 8))();
        }
        puVar15 = *(undefined8 **)(lVar14 + 0xd8);
        if (puVar15 == (undefined8 *)0x0) goto LAB_002c025f;
      }
    }
    LOCK();
    *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
    UNLOCK();
    plVar9 = *(long **)(this_02 + 0x20);
    *(undefined8 **)(this_02 + 0x20) = puVar15;
  }
  if (plVar9 != (long *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*plVar9 + 8))();
    }
  }
  FocusOutline::updateOutlineWindow(this_02);
  return;
}


