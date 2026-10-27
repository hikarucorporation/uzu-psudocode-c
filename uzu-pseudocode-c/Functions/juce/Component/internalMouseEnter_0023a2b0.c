// Function : internalMouseEnter
// Namespace: juce:Component
// Entry    : 0023a2b0
// Prototype: undefined internalMouseEnter(undefined8 param_1, undefined8 param_2, undefined8 param_3, long * param_4, long * param_5, undefined8 param_6)
// Body     : 0023a2b0 - 0023a9f8


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* juce::Component::internalMouseEnter(juce::Component::SafePointer<juce::Component>,
   juce::MouseInputSource, juce::Point<float>, juce::Time) */

void __cdecl
juce::Component::internalMouseEnter
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,long *param_5,
          undefined8 param_6)

{
  long *plVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this;
  vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>
  *this_00;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  Desktop *pDVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 extraout_XMM1_Qa;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 *local_140;
  HierarchyChecker *local_138;
  undefined1 *local_130;
  undefined8 local_128;
  long *local_110;
  long *local_108;
  long *local_100;
  undefined8 local_90;
  undefined8 uStack_88;
  uint local_80;
  undefined1 local_7c [16];
  undefined4 local_6c;
  undefined8 local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  undefined2 local_38;
  
  if (*param_4 == 0) {
    plVar7 = (long *)0x0;
  }
  else {
    plVar7 = *(long **)(*param_4 + 0x10);
  }
  if ((ModalComponentManager::singletonHolder != 0) &&
     (0 < (int)*(uint *)(ModalComponentManager::singletonHolder + 0x24))) {
    uVar6 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
    do {
      lVar12 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                        (ulong)((int)uVar6 - 2) * 8);
      if (*(char *)(lVar12 + 0x5c) != '\0') {
        plVar8 = *(long **)(lVar12 + 0x40);
        if ((plVar8 != (long *)0x0) && (plVar8 != plVar7)) goto LAB_0023a340;
        break;
      }
      uVar6 = uVar6 - 1;
    } while (1 < uVar6);
  }
  goto LAB_0023a36b;
  while (plVar7 = (long *)plVar7[6], plVar7 != plVar8) {
LAB_0023a340:
    if (plVar7 == (long *)0x0) {
      local_128 = param_1;
      cVar3 = (**(code **)(*plVar8 + 0x170))();
      param_1 = local_128;
      if (cVar3 == '\0') {
                    /* try { // try from 0023a6f8 to 0023a700 has its CatchHandler @ 0023a9f9 */
        MouseInputSource::showMouseCursor
                  (local_128,extraout_XMM1_Qa,param_3,(MouseInputSourceImpl *)*param_5,0,
                   (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0);
        return;
      }
      break;
    }
  }
LAB_0023a36b:
  if (*param_4 == 0) {
    local_40 = *param_5;
    local_80 = ModifierKeys::currentModifiers & 0xfffffe0f | *(uint *)(local_40 + 0x3c);
    local_60 = 0;
  }
  else {
    local_60 = *(long *)(*param_4 + 0x10);
    if ((*(ushort *)(local_60 + 0xe8) & 0x4000) == 0) {
      local_40 = *param_5;
      local_80 = ModifierKeys::currentModifiers & 0xfffffe0f | *(uint *)(local_40 + 0x3c);
    }
    else {
      local_128 = param_1;
      internalRepaintUnchecked(local_60,0,*(ulong *)(local_60 + 0x40),'\x01');
      local_40 = *param_5;
      local_80 = ModifierKeys::currentModifiers & 0xfffffe0f | *(uint *)(local_40 + 0x3c);
      if (*param_4 == 0) {
        local_60 = 0;
      }
      else {
        local_60 = *(long *)(*param_4 + 0x10);
      }
      param_1 = local_128;
    }
  }
  uStack_88 = CONCAT44(SUB84((double)(float)((ulong)param_1 >> 0x20) + _UNK_005d9a98,0),
                       SUB84((double)(float)param_1 + _DAT_005d9a90,0));
  local_7c = (undefined1  [16])0x0;
  local_6c = 0;
  local_38 = 0;
                    /* try { // try from 0023a46f to 0023a486 has its CatchHandler @ 0023aa93 */
  local_90 = param_1;
  local_68 = param_1;
  local_58 = local_60;
  local_50 = param_6;
  local_48 = param_6;
  HierarchyChecker::HierarchyChecker((HierarchyChecker *)&local_110,param_4,&local_90);
                    /* try { // try from 0023a492 to 0023a49c has its CatchHandler @ 0023aa9b */
  (**(code **)(**(long **)(*param_4 + 0x10) + 0x18))(*(long **)(*param_4 + 0x10),&local_90);
  plVar7 = local_110;
  for (plVar8 = local_108; plVar8 != local_100; plVar8 = plVar8 + 1) {
    if ((*plVar8 != 0) && (lVar12 = *(long *)(*plVar8 + 0x10), lVar12 != 0)) {
      puVar11 = *(undefined8 **)(lVar12 + 0xd8);
      if (puVar11 == (undefined8 *)0x0) {
        puVar11 = operator_new(0x18);
        *(undefined4 *)(puVar11 + 1) = 0;
        *puVar11 = &PTR__ReferenceCountedObject_00714b80;
        puVar11[2] = lVar12;
        LOCK();
        *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
        UNLOCK();
        plVar8 = *(long **)(lVar12 + 0xd8);
        *(undefined8 **)(lVar12 + 0xd8) = puVar11;
        if (plVar8 != (long *)0x0) {
          LOCK();
          plVar10 = plVar8 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
          puVar11 = *(undefined8 **)(lVar12 + 0xd8);
          if (puVar11 == (undefined8 *)0x0) break;
        }
      }
      LOCK();
      *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
      UNLOCK();
      plVar8 = (long *)*plVar7;
      *plVar7 = (long)puVar11;
      goto joined_r0x0023a4ed;
    }
  }
  plVar8 = (long *)*plVar7;
  *plVar7 = 0;
joined_r0x0023a4ed:
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  plVar8 = local_110;
  plVar7 = local_108;
  if (*local_110 != 0) {
    if (*(long *)(*local_110 + 0x10) != 0) {
      lVar12 = *(long *)(*param_4 + 0x10);
      *(undefined2 *)(lVar12 + 0xe8) = *(undefined2 *)(lVar12 + 0xe8);
      *(byte *)(lVar12 + 0xea) = *(byte *)(lVar12 + 0xea) | 0x40;
      puVar11 = (undefined8 *)0x0;
      for (; plVar7 != local_100; plVar7 = plVar7 + 1) {
        if ((*plVar7 != 0) && (lVar12 = *(long *)(*plVar7 + 0x10), lVar12 != 0)) {
          puVar11 = *(undefined8 **)(lVar12 + 0xd8);
          if (puVar11 == (undefined8 *)0x0) {
                    /* try { // try from 0023a687 to 0023a690 has its CatchHandler @ 0023aa9b */
            puVar11 = operator_new(0x18);
            *(undefined4 *)(puVar11 + 1) = 0;
            *puVar11 = &PTR__ReferenceCountedObject_00714b80;
            puVar11[2] = lVar12;
            LOCK();
            *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
            UNLOCK();
            plVar7 = *(long **)(lVar12 + 0xd8);
            *(undefined8 **)(lVar12 + 0xd8) = puVar11;
            if (plVar7 != (long *)0x0) {
              LOCK();
              plVar10 = plVar7 + 1;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)*plVar10 == 0) {
                (**(code **)(*plVar7 + 8))();
              }
              puVar11 = *(undefined8 **)(lVar12 + 0xd8);
              if (puVar11 == (undefined8 *)0x0) {
                plVar7 = (long *)*plVar8;
                *plVar8 = 0;
                goto joined_r0x0023a6ea;
              }
            }
          }
          LOCK();
          *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
          UNLOCK();
          break;
        }
      }
      plVar7 = (long *)*plVar8;
      *plVar8 = (long)puVar11;
joined_r0x0023a6ea:
      if (plVar7 != (long *)0x0) {
        LOCK();
        plVar8 = plVar7 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
      plVar7 = local_108;
      if (*local_110 != 0) {
        if (*(long *)(*local_110 + 0x10) != 0) {
          if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0023a5cf to 0023a5d8 has its CatchHandler @ 0023aa9b */
            pDVar9 = operator_new(0x1d0);
                    /* try { // try from 0023a5dc to 0023a5e3 has its CatchHandler @ 0023aa12 */
            Desktop::Desktop(pDVar9);
            Desktop::instance = pDVar9;
          }
                    /* try { // try from 0023a5eb to 0023a633 has its CatchHandler @ 0023aa9b */
          pDVar9 = Desktop::instance;
          Desktop::resetTimer(Desktop::instance);
          if (*(int *)(pDVar9 + 0x68) == 2) {
            plVar7 = *(long **)(pDVar9 + 0x48);
            this = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(pDVar9 + 0x50);
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
            local_158 = (ulong)*(uint *)((long)plVar7 + 0xc) << 0x20;
            this_00 = *(vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>
                        **)(pDVar9 + 0x58);
            puVar11 = *(undefined8 **)(this_00 + 8);
            if (puVar11 == *(undefined8 **)(this_00 + 0x10)) {
                    /* try { // try from 0023a73c to 0023a745 has its CatchHandler @ 0023aa0b */
              local_140 = (undefined1 *)&local_158;
              std::
              vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>
              ::
              _M_realloc_insert<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>
                        (this_00,puVar11,&local_140);
            }
            else {
              *puVar11 = &local_158;
              *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 8;
            }
            local_140 = *(undefined1 **)(pDVar9 + 0x58);
            local_138 = *(HierarchyChecker **)(pDVar9 + 0x60);
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
                plVar8 = local_110;
                for (plVar10 = local_108; plVar10 != local_100; plVar10 = plVar10 + 1) {
                  if ((*plVar10 != 0) && (lVar12 = *(long *)(*plVar10 + 0x10), lVar12 != 0)) {
                    puVar11 = *(undefined8 **)(lVar12 + 0xd8);
                    if (puVar11 == (undefined8 *)0x0) {
                    /* try { // try from 0023a853 to 0023a85c has its CatchHandler @ 0023aa10 */
                      puVar11 = operator_new(0x18);
                      *(undefined4 *)(puVar11 + 1) = 0;
                      *puVar11 = &PTR__ReferenceCountedObject_00714b80;
                      puVar11[2] = lVar12;
                      LOCK();
                      *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
                      UNLOCK();
                      plVar10 = *(long **)(lVar12 + 0xd8);
                      *(undefined8 **)(lVar12 + 0xd8) = puVar11;
                      if (plVar10 != (long *)0x0) {
                        LOCK();
                        plVar1 = plVar10 + 1;
                        *(int *)plVar1 = (int)*plVar1 + -1;
                        UNLOCK();
                        if ((int)*plVar1 == 0) {
                          (**(code **)(*plVar10 + 8))();
                        }
                        puVar11 = *(undefined8 **)(lVar12 + 0xd8);
                        if (puVar11 == (undefined8 *)0x0) break;
                      }
                    }
                    LOCK();
                    *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
                    UNLOCK();
                    plVar10 = (long *)*plVar8;
                    *plVar8 = (long)puVar11;
                    goto joined_r0x0023a7eb;
                  }
                }
                plVar10 = (long *)*plVar8;
                *plVar8 = 0;
joined_r0x0023a7eb:
                if (plVar10 != (long *)0x0) {
                  LOCK();
                  plVar8 = plVar10 + 1;
                  *(int *)plVar8 = (int)*plVar8 + -1;
                  UNLOCK();
                  if ((int)*plVar8 == 0) {
                    (**(code **)(*plVar10 + 8))();
                  }
                }
                if ((*local_110 == 0) || (*(long *)(*local_110 + 0x10) == 0)) break;
                plVar8 = *(long **)(*plVar7 + (long)(int)local_158 * 8);
                if (plVar8 != (long *)0x0) {
                    /* try { // try from 0023a845 to 0023a84a has its CatchHandler @ 0023aa23 */
                  (**(code **)(*plVar8 + 0x18))(plVar8,&local_90);
                }
                iVar5 = (int)local_158 + 1;
                local_158 = CONCAT44(local_158._4_4_,iVar5);
              } while (iVar5 < local_158._4_4_);
            }
            ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseEnter(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::$_38,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseEnter(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::$_38&&)::{lambda()#1}>
            ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseEnter(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::__38,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseEnter(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::__38&&)::_lambda()_1_>
                           *)&local_140);
            if (this != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
              uVar6 = *(ulong *)(this + 8);
              if (uVar6 == 0x100000001) {
                *(undefined8 *)(this + 8) = 0;
                (**(code **)(*(long *)this + 0x10))(this);
                (**(code **)(*(long *)this + 0x18))(this);
              }
              else {
                if (*PTR___libc_single_threaded_00715c50 == '\0') {
                  LOCK();
                  p_Var2 = this + 8;
                  uVar6 = (ulong)*(uint *)p_Var2;
                  *(uint *)p_Var2 = *(uint *)p_Var2 - 1;
                  UNLOCK();
                }
                else {
                  *(int *)(this + 8) = (int)uVar6 + -1;
                }
                if ((int)uVar6 == 1) {
                  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this);
                }
              }
            }
          }
          local_158 = _DAT_005dd120;
          uStack_150 = _UNK_005dd128;
          local_140 = (undefined1 *)&local_158;
          local_138 = (HierarchyChecker *)&local_110;
          plVar7 = local_108;
          if (*local_110 != 0) {
            lVar12 = *(long *)(*local_110 + 0x10);
            local_140 = (undefined1 *)&local_158;
            if (lVar12 != 0) {
                    /* try { // try from 0023a947 to 0023a950 has its CatchHandler @ 0023aa1f */
              local_140 = (undefined1 *)&local_158;
              bVar4 = MouseListenerList::
                      sendMouseEvent<void(juce::MouseListener::*)(juce::MouseEvent_const&)>(juce::HierarchyChecker&,void(juce::MouseListener::*&&)(juce::MouseEvent_const&))
                      ::{lambda(auto:1&,auto:2)#1}::operator()((long *)&local_140,lVar12);
              plVar7 = local_108;
              if (((bVar4) && (*local_110 != 0)) &&
                 (lVar12 = *(long *)(*local_110 + 0x10), lVar12 != 0)) {
                do {
                  lVar12 = *(long *)(lVar12 + 0x30);
                  plVar7 = local_108;
                  if (lVar12 == 0) break;
                    /* try { // try from 0023a979 to 0023a983 has its CatchHandler @ 0023aa21 */
                  bVar4 = MouseListenerList::
                          sendMouseEvent<void(juce::MouseListener::*)(juce::MouseEvent_const&)>(juce::HierarchyChecker&,void(juce::MouseListener::*&&)(juce::MouseEvent_const&))
                          ::{lambda(auto:1&,auto:2)#1}::operator()((long *)&local_140,lVar12);
                  plVar7 = local_108;
                } while (bVar4);
              }
            }
          }
        }
      }
    }
  }
  for (; plVar7 != local_100; plVar7 = plVar7 + 1) {
    plVar8 = (long *)*plVar7;
    if (plVar8 != (long *)0x0) {
      LOCK();
      plVar10 = plVar8 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)(*plVar8 + 8))();
      }
    }
  }
  if (local_108 != (long *)0x0) {
    operator_delete(local_108);
  }
  return;
}


