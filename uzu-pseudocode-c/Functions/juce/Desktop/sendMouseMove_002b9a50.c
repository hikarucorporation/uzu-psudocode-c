// Function : sendMouseMove
// Namespace: juce:Desktop
// Entry    : 002b9a50
// Prototype: undefined sendMouseMove(Desktop * this)
// Body     : 002b9a50 - 002b9feb


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Desktop::sendMouseMove() */

void __thiscall juce::Desktop::sendMouseMove(Desktop *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long *plVar2;
  vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>
  *pvVar3;
  undefined8 *puVar4;
  long *plVar5;
  bool bVar6;
  Component *pCVar7;
  Desktop *this_00;
  ulong uVar8;
  Component *pCVar9;
  Component *pCVar10;
  long *plVar11;
  ulong uVar12;
  int iVar13;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_01;
  undefined8 uVar14;
  double dVar15;
  __time_t _Var16;
  double dVar17;
  int local_c8;
  int local_c4;
  undefined1 *local_c0;
  long local_b8;
  undefined1 *local_b0;
  __time_t local_a8;
  undefined8 uStack_a0;
  timeval local_90;
  uint local_80;
  undefined1 local_7c [16];
  undefined4 local_6c;
  __time_t local_68;
  Component *local_60;
  Component *local_58;
  long local_50;
  long local_48;
  undefined8 local_40;
  undefined2 local_38;
  
  if ((*(int *)(this + 0x68) == 2) && (*(int *)(*(long *)(this + 0x48) + 0xc) != 0)) {
    iVar13 = *(int *)(this + 0x18);
    *(undefined4 *)(this + 0x18) = 0x14;
    if (iVar13 == 0) {
                    /* try { // try from 002b9aa0 to 002b9aa4 has its CatchHandler @ 002ba0a6 */
      Timer::TimerThread::addTimer(*(TimerThread **)(this + 0x20),(long)(this + 8));
    }
    else {
      Timer::TimerThread::resetTimerCounter(*(TimerThread **)(this + 0x20),(long)(this + 8));
    }
    if (instance == (Desktop *)0x0) {
      this_00 = operator_new(0x1d0);
                    /* try { // try from 002b9abe to 002b9ac5 has its CatchHandler @ 002ba093 */
      Desktop(this_00);
      instance = this_00;
    }
    uVar14 = detail::MouseInputSourceImpl::getScreenPosition
                       ((MouseInputSourceImpl *)**(undefined8 **)(*(long *)(instance + 0x40) + 0x28)
                       );
    *(undefined8 *)(this + 0xe8) = uVar14;
    if (0 < (int)*(uint *)(this + 0xcc)) {
      dVar17 = (double)(float)uVar14 + DAT_005d9098;
      dVar15 = (double)(float)((ulong)uVar14 >> 0x20) + DAT_005d9098;
      uVar12 = (ulong)*(uint *)(this + 0xcc);
LAB_002b9b66:
      pCVar9 = *(Component **)(*(long *)(this + 0xc0) + (uVar12 - 1 & 0xffffffff) * 8);
      if ((*(ushort *)(pCVar9 + 0xe8) & 2) != 0) {
        pCVar7 = pCVar9;
        do {
          pCVar10 = pCVar7;
          pCVar7 = *(Component **)(pCVar10 + 0x30);
        } while (*(Component **)(pCVar10 + 0x30) != (Component *)0x0);
        uVar8 = detail::ComponentHelpers::convertFromParentSpace<juce::Point<int>>
                          ((long *)pCVar10,(ulong)dVar17 & 0xffffffff | (long)dVar15 << 0x20);
        if (pCVar10 != pCVar9) {
          uVar8 = detail::ComponentHelpers::convertFromDistantParentSpace<juce::Point<int>>
                            ((long)pCVar10,(long *)pCVar9,uVar8);
        }
        uStack_a0 = 0;
        local_a8 = CONCAT44((float)(int)(uVar8 >> 0x20),(float)(int)uVar8);
        uVar8 = Component::contains(local_a8,pCVar9);
        if ((char)uVar8 != '\0') {
          pCVar9 = Component::getComponentAt(local_a8,pCVar9);
          if (pCVar9 == (Component *)0x0) {
            return;
          }
          plVar11 = *(long **)(pCVar9 + 0xd8);
          if (plVar11 == (long *)0x0) {
            plVar11 = operator_new(0x18);
            *(undefined4 *)(plVar11 + 1) = 0;
            *plVar11 = (long)&PTR__ReferenceCountedObject_00714b80;
            plVar11[2] = (long)pCVar9;
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
            plVar2 = *(long **)(pCVar9 + 0xd8);
            *(long **)(pCVar9 + 0xd8) = plVar11;
            if (plVar2 == (long *)0x0) goto LAB_002b9be8;
            LOCK();
            plVar11 = plVar2 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              (**(code **)(*plVar2 + 8))();
            }
            plVar11 = *(long **)(pCVar9 + 0xd8);
            if (plVar11 != (long *)0x0) goto LAB_002b9be8;
            plVar11 = (long *)0x0;
          }
          else {
LAB_002b9be8:
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
          }
          pCVar7 = pCVar9;
          do {
            pCVar10 = pCVar7;
            pCVar7 = *(Component **)(pCVar10 + 0x30);
          } while (*(Component **)(pCVar10 + 0x30) != (Component *)0x0);
                    /* try { // try from 002b9c0c to 002b9c23 has its CatchHandler @ 002ba072 */
          _Var16 = detail::ComponentHelpers::convertFromParentSpace<juce::Point<float>>
                             (*(undefined8 *)(this + 0xe8),(long *)pCVar10);
          if (pCVar10 != pCVar9) {
            _Var16 = detail::ComponentHelpers::convertFromDistantParentSpace<juce::Point<float>>
                               (_Var16,(long)pCVar10,(long *)pCVar9);
          }
          local_a8 = _Var16;
          gettimeofday(&local_90,(__timezone_ptr_t)0x0);
          local_50 = local_90.tv_usec / 1000 + local_90.tv_sec * 1000;
          local_40 = **(undefined8 **)(*(long *)(this + 0x40) + 0x28);
          local_90.tv_usec =
               CONCAT44(SUB84((double)(float)((ulong)local_a8 >> 0x20) + _UNK_005d9a98,0),
                        SUB84((double)(float)local_a8 + _DAT_005d9a90,0));
          local_90.tv_sec = local_a8;
          local_80 = ModifierKeys::currentModifiers;
          local_7c = (undefined1  [16])0x0;
          local_6c = 0;
          local_68 = local_a8;
          local_38 = 0;
          local_60 = pCVar9;
          local_58 = pCVar9;
          local_48 = local_50;
          if ((ModifierKeys::currentModifiers & 0x1f0) == 0) {
            if (*(int *)(this + 0x68) != 2) goto joined_r0x002b9fe8;
            plVar2 = *(long **)(this + 0x48);
            this_01 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x50);
            if (this_01 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
              if (*PTR___libc_single_threaded_00715c50 == '\0') {
                LOCK();
                *(int *)(this_01 + 8) = *(int *)(this_01 + 8) + 1;
                UNLOCK();
              }
              else {
                *(int *)(this_01 + 8) = *(int *)(this_01 + 8) + 1;
              }
            }
            local_c8 = 0;
            local_c4 = *(int *)((long)plVar2 + 0xc);
            pvVar3 = *(vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>
                       **)(this + 0x58);
            puVar4 = *(undefined8 **)(pvVar3 + 8);
            if (puVar4 == *(undefined8 **)(pvVar3 + 0x10)) {
                    /* try { // try from 002b9ec5 to 002b9ece has its CatchHandler @ 002b9fec */
              local_c0 = (undefined1 *)&local_c8;
              std::
              vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>
              ::
              _M_realloc_insert<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>
                        (pvVar3,puVar4,&local_c0);
            }
            else {
              *puVar4 = &local_c8;
              *(long *)(pvVar3 + 8) = *(long *)(pvVar3 + 8) + 8;
            }
            local_c0 = *(undefined1 **)(this + 0x58);
            local_b8 = *(long *)(this + 0x60);
            if (local_b8 != 0) {
              if (*PTR___libc_single_threaded_00715c50 == '\0') {
                LOCK();
                *(int *)(local_b8 + 8) = *(int *)(local_b8 + 8) + 1;
                UNLOCK();
              }
              else {
                *(int *)(local_b8 + 8) = *(int *)(local_b8 + 8) + 1;
              }
            }
            local_b0 = (undefined1 *)&local_c8;
            if ((local_c8 < local_c4) &&
               (local_b0 = (undefined1 *)&local_c8, plVar11 != (long *)0x0)) {
              iVar13 = local_c4;
              local_b0 = (undefined1 *)&local_c8;
              do {
                if (plVar11[2] == 0) break;
                plVar5 = *(long **)(*plVar2 + (long)local_c8 * 8);
                if (plVar5 != (long *)0x0) {
                    /* try { // try from 002b9f3e to 002b9f43 has its CatchHandler @ 002b9ff3 */
                  (**(code **)(*plVar5 + 0x10))(plVar5,&local_90);
                  iVar13 = local_c4;
                }
                local_c8 = local_c8 + 1;
              } while (local_c8 < iVar13);
            }
            ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Desktop::sendMouseMove()::$_58,juce::Component::BailOutChecker>(juce::MouseListener*,juce::Component::BailOutChecker_const&,juce::Desktop::sendMouseMove()::$_58&&)::{lambda()#1}>
            ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Desktop::sendMouseMove()::__58,juce::Component::BailOutChecker>(juce::MouseListener*,juce::Component::BailOutChecker_const&,juce::Desktop::sendMouseMove()::__58&&)::_lambda()_1_>
                           *)&local_c0);
          }
          else {
            if (*(int *)(this + 0x68) != 2) goto joined_r0x002b9fe8;
            plVar2 = *(long **)(this + 0x48);
            this_01 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x50);
            if (this_01 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
              if (*PTR___libc_single_threaded_00715c50 == '\0') {
                LOCK();
                *(int *)(this_01 + 8) = *(int *)(this_01 + 8) + 1;
                UNLOCK();
              }
              else {
                *(int *)(this_01 + 8) = *(int *)(this_01 + 8) + 1;
              }
            }
            local_c8 = 0;
            local_c4 = *(int *)((long)plVar2 + 0xc);
            pvVar3 = *(vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>
                       **)(this + 0x58);
            puVar4 = *(undefined8 **)(pvVar3 + 8);
            if (puVar4 == *(undefined8 **)(pvVar3 + 0x10)) {
                    /* try { // try from 002b9df9 to 002b9e02 has its CatchHandler @ 002b9fee */
              local_c0 = (undefined1 *)&local_c8;
              std::
              vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>
              ::
              _M_realloc_insert<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>
                        (pvVar3,puVar4,&local_c0);
            }
            else {
              *puVar4 = &local_c8;
              *(long *)(pvVar3 + 8) = *(long *)(pvVar3 + 8) + 8;
            }
            local_c0 = *(undefined1 **)(this + 0x58);
            local_b8 = *(long *)(this + 0x60);
            if (local_b8 != 0) {
              if (*PTR___libc_single_threaded_00715c50 == '\0') {
                LOCK();
                *(int *)(local_b8 + 8) = *(int *)(local_b8 + 8) + 1;
                UNLOCK();
              }
              else {
                *(int *)(local_b8 + 8) = *(int *)(local_b8 + 8) + 1;
              }
            }
            local_b0 = (undefined1 *)&local_c8;
            if ((local_c8 < local_c4) &&
               (local_b0 = (undefined1 *)&local_c8, plVar11 != (long *)0x0)) {
              iVar13 = local_c4;
              local_b0 = (undefined1 *)&local_c8;
              do {
                if (plVar11[2] == 0) break;
                plVar5 = *(long **)(*plVar2 + (long)local_c8 * 8);
                if (plVar5 != (long *)0x0) {
                    /* try { // try from 002b9e79 to 002b9e7e has its CatchHandler @ 002ba002 */
                  (**(code **)(*plVar5 + 0x30))(plVar5,&local_90);
                  iVar13 = local_c4;
                }
                local_c8 = local_c8 + 1;
              } while (local_c8 < iVar13);
            }
            ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Desktop::sendMouseMove()::$_57,juce::Component::BailOutChecker>(juce::MouseListener*,juce::Component::BailOutChecker_const&,juce::Desktop::sendMouseMove()::$_57&&)::{lambda()#1}>
            ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Desktop::sendMouseMove()::__57,juce::Component::BailOutChecker>(juce::MouseListener*,juce::Component::BailOutChecker_const&,juce::Desktop::sendMouseMove()::__57&&)::_lambda()_1_>
                           *)&local_c0);
          }
          if (this_01 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            uVar12 = *(ulong *)(this_01 + 8);
            if (uVar12 == 0x100000001) {
              *(undefined8 *)(this_01 + 8) = 0;
              (**(code **)(*(long *)this_01 + 0x10))(this_01);
              (**(code **)(*(long *)this_01 + 0x18))(this_01);
            }
            else {
              if (*PTR___libc_single_threaded_00715c50 == '\0') {
                LOCK();
                p_Var1 = this_01 + 8;
                uVar12 = (ulong)*(uint *)p_Var1;
                *(uint *)p_Var1 = *(uint *)p_Var1 - 1;
                UNLOCK();
              }
              else {
                *(int *)(this_01 + 8) = (int)uVar12 + -1;
              }
              if ((int)uVar12 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_01)
                ;
              }
            }
          }
joined_r0x002b9fe8:
          if (plVar11 == (long *)0x0) {
            return;
          }
          LOCK();
          plVar2 = plVar11 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)(*plVar11 + 8))(plVar11);
            return;
          }
          return;
        }
      }
      bVar6 = (long)uVar12 < 2;
      uVar12 = uVar12 - 1;
      if (bVar6) {
        return;
      }
      goto LAB_002b9b66;
    }
  }
  return;
}


