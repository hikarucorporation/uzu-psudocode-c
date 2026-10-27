// Function : internalMouseExit
// Namespace: juce:Component
// Entry    : 002775c0
// Prototype: undefined internalMouseExit(undefined8 param_1, undefined8 param_2, undefined8 param_3, long * param_4, long * param_5, undefined8 param_6)
// Body     : 002775c0 - 00277c4b


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* juce::Component::internalMouseExit(juce::Component::SafePointer<juce::Component>,
   juce::MouseInputSource, juce::Point<float>, juce::Time) */

void __cdecl
juce::Component::internalMouseExit
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,long *param_5,
          undefined8 param_6)

{
  long *plVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this;
  vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>
  *this_00;
  uint3 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  Desktop *pDVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 extraout_XMM1_Qa;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 *local_140;
  HierarchyChecker *local_138;
  undefined1 *local_130;
  undefined8 local_128;
  undefined8 local_110;
  undefined8 uStack_108;
  uint local_100;
  undefined1 local_fc [16];
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  undefined2 local_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  
  if (*param_4 == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = *(long **)(*param_4 + 0x10);
  }
  if ((ModalComponentManager::singletonHolder != 0) &&
     (0 < (int)*(uint *)(ModalComponentManager::singletonHolder + 0x24))) {
    uVar7 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
    do {
      lVar13 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                        (ulong)((int)uVar7 - 2) * 8);
      if (*(char *)(lVar13 + 0x5c) != '\0') {
        plVar9 = *(long **)(lVar13 + 0x40);
        if ((plVar9 != (long *)0x0) && (plVar9 != plVar8)) goto LAB_00277650;
        break;
      }
      uVar7 = uVar7 - 1;
    } while (1 < uVar7);
  }
  goto LAB_0027767b;
  while (plVar8 = (long *)plVar8[6], plVar8 != plVar9) {
LAB_00277650:
    if (plVar8 == (long *)0x0) {
      local_128 = param_1;
      cVar4 = (**(code **)(*plVar9 + 0x170))();
      param_1 = local_128;
      if (cVar4 == '\0') {
                    /* try { // try from 00277b3e to 00277b46 has its CatchHandler @ 00277c4c */
        MouseInputSource::showMouseCursor
                  (local_128,extraout_XMM1_Qa,param_3,(MouseInputSourceImpl *)*param_5,0,
                   (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0);
        return;
      }
      break;
    }
  }
LAB_0027767b:
  lVar13 = *(long *)(*param_4 + 0x10);
  uVar3 = *(uint3 *)(lVar13 + 0xe8);
  if ((uVar3 & 0x4000) != 0) {
    local_128 = param_1;
    internalRepaintUnchecked(lVar13,0,*(ulong *)(lVar13 + 0x40),'\x01');
    lVar13 = *(long *)(*param_4 + 0x10);
    uVar3 = *(uint3 *)(lVar13 + 0xe8);
    param_1 = local_128;
  }
  *(short *)(lVar13 + 0xe8) = (short)uVar3;
  *(byte *)(lVar13 + 0xea) = (byte)(uVar3 >> 0x10) & 0xbf;
  local_c0 = *param_5;
  local_100 = ModifierKeys::currentModifiers & 0xfffffe0f | *(uint *)(local_c0 + 0x3c);
  if (*param_4 == 0) {
    local_e0 = 0;
  }
  else {
    local_e0 = *(undefined8 *)(*param_4 + 0x10);
  }
  uStack_108 = CONCAT44(SUB84((double)(float)((ulong)param_1 >> 0x20) + _UNK_005d9a98,0),
                        SUB84((double)(float)param_1 + _DAT_005d9a90,0));
  local_fc = (undefined1  [16])0x0;
  local_ec = 0;
  local_b8 = 0;
                    /* try { // try from 00277785 to 0027779c has its CatchHandler @ 00277cf2 */
  local_110 = param_1;
  local_e8 = param_1;
  local_d8 = local_e0;
  local_d0 = param_6;
  local_c8 = param_6;
  HierarchyChecker::HierarchyChecker((HierarchyChecker *)&local_b0,param_4,&local_110);
                    /* try { // try from 002777a7 to 002777ae has its CatchHandler @ 00277cfa */
  (**(code **)(**(long **)(*param_4 + 0x10) + 0x20))(*(long **)(*param_4 + 0x10),&local_110);
  plVar8 = local_b0;
  for (plVar9 = local_a8; plVar9 != local_a0; plVar9 = plVar9 + 1) {
    if ((*plVar9 != 0) && (lVar13 = *(long *)(*plVar9 + 0x10), lVar13 != 0)) {
      puVar12 = *(undefined8 **)(lVar13 + 0xd8);
      if (puVar12 == (undefined8 *)0x0) {
        puVar12 = operator_new(0x18);
        *(undefined4 *)(puVar12 + 1) = 0;
        *puVar12 = &PTR__ReferenceCountedObject_00714b80;
        puVar12[2] = lVar13;
        LOCK();
        *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
        UNLOCK();
        plVar9 = *(long **)(lVar13 + 0xd8);
        *(undefined8 **)(lVar13 + 0xd8) = puVar12;
        if (plVar9 != (long *)0x0) {
          LOCK();
          plVar11 = plVar9 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)(*plVar9 + 8))();
          }
          puVar12 = *(undefined8 **)(lVar13 + 0xd8);
          if (puVar12 == (undefined8 *)0x0) break;
        }
      }
      LOCK();
      *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
      UNLOCK();
      plVar9 = (long *)*plVar8;
      *plVar8 = (long)puVar12;
      goto joined_r0x00277810;
    }
  }
  plVar9 = (long *)*plVar8;
  *plVar8 = 0;
joined_r0x00277810:
  if (plVar9 != (long *)0x0) {
    LOCK();
    plVar8 = plVar9 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)(*plVar9 + 8))();
    }
  }
  plVar8 = local_a8;
  if (*local_b0 != 0) {
    if (*(long *)(*local_b0 + 0x10) != 0) {
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00277861 to 0027786a has its CatchHandler @ 00277cfa */
        pDVar10 = operator_new(0x1d0);
                    /* try { // try from 0027786e to 00277875 has its CatchHandler @ 00277c65 */
        Desktop::Desktop(pDVar10);
        Desktop::instance = pDVar10;
      }
                    /* try { // try from 0027787d to 002778bb has its CatchHandler @ 00277cfa */
      pDVar10 = Desktop::instance;
      Desktop::resetTimer(Desktop::instance);
      if (*(int *)(pDVar10 + 0x68) == 2) {
        plVar8 = *(long **)(pDVar10 + 0x48);
        this = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(pDVar10 + 0x50);
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
        local_158 = (ulong)*(uint *)((long)plVar8 + 0xc) << 0x20;
        this_00 = *(vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>
                    **)(pDVar10 + 0x58);
        puVar12 = *(undefined8 **)(this_00 + 8);
        if (puVar12 == *(undefined8 **)(this_00 + 0x10)) {
                    /* try { // try from 00277945 to 0027794e has its CatchHandler @ 00277c5e */
          local_140 = (undefined1 *)&local_158;
          std::
          vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>
          ::
          _M_realloc_insert<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>
                    (this_00,puVar12,&local_140);
        }
        else {
          *puVar12 = &local_158;
          *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 8;
        }
        local_140 = *(undefined1 **)(pDVar10 + 0x58);
        local_138 = *(HierarchyChecker **)(pDVar10 + 0x60);
        if (local_138 != (HierarchyChecker *)0x0) {
          if (*PTR___libc_single_threaded_00715c50 == '\0') {
            LOCK();
            *(int *)((long)local_138 + 8) = *(int *)((long)local_138 + 8) + 1;
            UNLOCK();
          }
          else {
            *(int *)((long)local_138 + 8) = *(int *)((long)local_138 + 8) + 1;
          }
        }
        local_130 = (undefined1 *)&local_158;
        if ((int)local_158 < local_158._4_4_) {
          local_130 = (undefined1 *)&local_158;
          do {
            plVar9 = local_b0;
            for (plVar11 = local_a8; plVar11 != local_a0; plVar11 = plVar11 + 1) {
              if ((*plVar11 != 0) && (lVar13 = *(long *)(*plVar11 + 0x10), lVar13 != 0)) {
                puVar12 = *(undefined8 **)(lVar13 + 0xd8);
                if (puVar12 == (undefined8 *)0x0) {
                    /* try { // try from 00277a86 to 00277a8f has its CatchHandler @ 00277c63 */
                  puVar12 = operator_new(0x18);
                  *(undefined4 *)(puVar12 + 1) = 0;
                  *puVar12 = &PTR__ReferenceCountedObject_00714b80;
                  puVar12[2] = lVar13;
                  LOCK();
                  *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
                  UNLOCK();
                  plVar11 = *(long **)(lVar13 + 0xd8);
                  *(undefined8 **)(lVar13 + 0xd8) = puVar12;
                  if (plVar11 != (long *)0x0) {
                    LOCK();
                    plVar1 = plVar11 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)(*plVar11 + 8))();
                    }
                    puVar12 = *(undefined8 **)(lVar13 + 0xd8);
                    if (puVar12 == (undefined8 *)0x0) break;
                  }
                }
                LOCK();
                *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
                UNLOCK();
                plVar11 = (long *)*plVar9;
                *plVar9 = (long)puVar12;
                goto joined_r0x00277a12;
              }
            }
            plVar11 = (long *)*plVar9;
            *plVar9 = 0;
joined_r0x00277a12:
            if (plVar11 != (long *)0x0) {
              LOCK();
              plVar9 = plVar11 + 1;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)*plVar9 == 0) {
                (**(code **)(*plVar11 + 8))();
              }
            }
            if ((*local_b0 == 0) || (*(long *)(*local_b0 + 0x10) == 0)) break;
            plVar9 = *(long **)(*plVar8 + (long)(int)local_158 * 8);
            if (plVar9 != (long *)0x0) {
                    /* try { // try from 00277a7b to 00277a80 has its CatchHandler @ 00277c7c */
              (**(code **)(*plVar9 + 0x20))(plVar9,&local_110);
            }
            iVar6 = (int)local_158 + 1;
            local_158 = CONCAT44(local_158._4_4_,iVar6);
          } while (iVar6 < local_158._4_4_);
        }
        ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseExit(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::$_39,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseExit(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::$_39&&)::{lambda()#1}>
        ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseExit(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::__39,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseExit(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::__39&&)::_lambda()_1_>
                       *)&local_140);
        if (this != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          uVar7 = *(ulong *)(this + 8);
          if (uVar7 == 0x100000001) {
            *(undefined8 *)(this + 8) = 0;
            (**(code **)(*(long *)this + 0x10))(this);
            (**(code **)(*(long *)this + 0x18))(this);
          }
          else {
            if (*PTR___libc_single_threaded_00715c50 == '\0') {
              LOCK();
              p_Var2 = this + 8;
              uVar7 = (ulong)*(uint *)p_Var2;
              *(uint *)p_Var2 = *(uint *)p_Var2 - 1;
              UNLOCK();
            }
            else {
              *(int *)(this + 8) = (int)uVar7 + -1;
            }
            if ((int)uVar7 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this);
            }
          }
        }
      }
      local_158 = _DAT_005dd160;
      uStack_150 = _UNK_005dd168;
      local_140 = (undefined1 *)&local_158;
      local_138 = (HierarchyChecker *)&local_b0;
      plVar8 = local_a8;
      if (*local_b0 != 0) {
        lVar13 = *(long *)(*local_b0 + 0x10);
        local_140 = (undefined1 *)&local_158;
        if (lVar13 != 0) {
                    /* try { // try from 00277b94 to 00277b9d has its CatchHandler @ 00277c75 */
          local_140 = (undefined1 *)&local_158;
          bVar5 = MouseListenerList::
                  sendMouseEvent<void(juce::MouseListener::*)(juce::MouseEvent_const&)>(juce::HierarchyChecker&,void(juce::MouseListener::*&&)(juce::MouseEvent_const&))
                  ::{lambda(auto:1&,auto:2)#1}::operator()((long *)&local_140,lVar13);
          plVar8 = local_a8;
          if (((bVar5) && (*local_b0 != 0)) && (lVar13 = *(long *)(*local_b0 + 0x10), lVar13 != 0))
          {
            do {
              lVar13 = *(long *)(lVar13 + 0x30);
              plVar8 = local_a8;
              if (lVar13 == 0) break;
                    /* try { // try from 00277bc9 to 00277bd3 has its CatchHandler @ 00277c7a */
              bVar5 = MouseListenerList::
                      sendMouseEvent<void(juce::MouseListener::*)(juce::MouseEvent_const&)>(juce::HierarchyChecker&,void(juce::MouseListener::*&&)(juce::MouseEvent_const&))
                      ::{lambda(auto:1&,auto:2)#1}::operator()((long *)&local_140,lVar13);
              plVar8 = local_a8;
            } while (bVar5);
          }
        }
      }
    }
  }
  for (; plVar8 != local_a0; plVar8 = plVar8 + 1) {
    plVar9 = (long *)*plVar8;
    if (plVar9 != (long *)0x0) {
      LOCK();
      plVar11 = plVar9 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)(*plVar9 + 8))();
      }
    }
  }
  if (local_a8 != (long *)0x0) {
    operator_delete(local_a8);
  }
  return;
}


