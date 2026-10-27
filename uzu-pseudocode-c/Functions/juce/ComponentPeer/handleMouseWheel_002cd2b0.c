// Function : handleMouseWheel
// Namespace: juce:ComponentPeer
// Entry    : 002cd2b0
// Prototype: undefined handleMouseWheel(undefined8 param_1, long * param_2, long param_3, long param_4)
// Body     : 002cd2b0 - 002ce3cd


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* juce::ComponentPeer::handleMouseWheel(juce::MouseInputSource::InputSourceType,
   juce::Point<float>, long long, juce::MouseWheelDetails const&, int) */

void __cdecl
juce::ComponentPeer::handleMouseWheel(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  long *plVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  MouseInputSourceImpl *this;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var3;
  vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>
  *pvVar4;
  long *plVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  Desktop *pDVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  uint uVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  int local_1b8;
  int local_1b4;
  long *local_1b0;
  undefined8 local_1a8;
  undefined8 local_190;
  long local_188;
  int *local_180;
  long *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  float local_158;
  float fStack_154;
  undefined4 local_148;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined1 local_100;
  char local_ff;
  undefined8 local_f0;
  long lStack_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined1 local_98;
  undefined1 local_97;
  float local_90;
  float fStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  undefined1 local_7c [16];
  undefined4 local_6c;
  float local_68;
  float fStack_64;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  MouseInputSourceImpl *local_40;
  undefined2 local_38;
  
  if (Desktop::instance == (Desktop *)0x0) {
    local_1a8 = (long *)param_1;
    pDVar10 = operator_new(0x1d0);
                    /* try { // try from 002cd2f8 to 002cd2ff has its CatchHandler @ 002ce580 */
    Desktop::Desktop(pDVar10);
    lVar9 = *(long *)(pDVar10 + 0x40);
    iVar8 = *(int *)(lVar9 + 0x44);
    Desktop::instance = pDVar10;
    param_1 = local_1a8;
  }
  else {
    lVar9 = *(long *)(Desktop::instance + 0x40);
    iVar8 = *(int *)(lVar9 + 0x44);
  }
  if ((long)iVar8 != 0) {
    lVar17 = 0;
    do {
      this = *(MouseInputSourceImpl **)(*(long *)(lVar9 + 0x38) + lVar17);
      if (*(int *)(this + 0x14) == 0) {
        if (Desktop::instance == (Desktop *)0x0) {
          local_1a8 = (long *)param_1;
          pDVar10 = operator_new(0x1d0);
                    /* try { // try from 002cd384 to 002cd38b has its CatchHandler @ 002ce54b */
          Desktop::Desktop(pDVar10);
          Desktop::instance = pDVar10;
          *(int *)(pDVar10 + 0xf4) = *(int *)(pDVar10 + 0xf4) + 1;
          lVar9 = *(long *)(this + 0x50);
          param_1 = local_1a8;
          if (lVar9 != 0) goto LAB_002cd3aa;
LAB_002cd3cc:
          *(long *)(this + 0xf0) = param_3;
          *(int *)(this + 0x68) = *(int *)(this + 0x68) + 1;
          local_1a8 = (long *)(**(code **)(*param_2 + 0x50))(param_1,param_2);
          uVar13 = *(undefined8 *)(this + 0x2c);
          uStack_170 = (undefined4)*(undefined8 *)(this + 0x28);
          uStack_16c = (undefined4)uVar13;
          local_168 = (undefined4)((ulong)uVar13 >> 0x20);
          uStack_164 = (undefined4)*(undefined8 *)(this + 0x34);
          uStack_160 = (undefined4)((ulong)*(undefined8 *)(this + 0x34) >> 0x20);
          local_178 = local_1a8;
          auVar21 = detail::MouseInputSourceImpl::setPeer
                              (local_1a8,uVar13,*(undefined8 *)(this + 0x20),this,param_2,&local_178
                               ,param_3);
          detail::MouseInputSourceImpl::setPointerState
                    (auVar21._0_8_,auVar21._8_8_,this,(float *)&local_178,param_3,'\0');
          LOCK();
          bVar19 = *(int *)(*(long *)(this + 8) + 0x18) == 0;
          if (bVar19) {
            *(int *)(*(long *)(this + 8) + 0x18) = 1;
          }
          UNLOCK();
          if (bVar19) {
            plVar12 = *(long **)(this + 8);
            if (((MessageManager::instance == 0) || (*(int *)(MessageManager::instance + 8) != 0))
               || (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
              LOCK();
              *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
              UNLOCK();
              LOCK();
              plVar15 = plVar12 + 1;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)*plVar15 == 0) {
                (**(code **)(*plVar12 + 8))(plVar12);
              }
              LOCK();
              *(undefined4 *)(*(long *)(this + 8) + 0x18) = 0;
              UNLOCK();
              goto LAB_002cd473;
            }
            InternalMessageQueue::postMessage
                      ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,
                       (long)plVar12);
            lVar9 = *(long *)(this + 0x48);
            if (lVar9 != 0) goto LAB_002cd480;
LAB_002cd528:
            puVar14 = (undefined8 *)0x0;
            plVar12 = *(long **)(this + 0x50);
            *(undefined8 *)(this + 0x50) = 0;
          }
          else {
LAB_002cd473:
            lVar9 = *(long *)(this + 0x48);
            if (lVar9 == 0) goto LAB_002cd528;
LAB_002cd480:
            lVar9 = *(long *)(lVar9 + 0x10);
            if (lVar9 == 0) goto LAB_002cd528;
            puVar14 = *(undefined8 **)(lVar9 + 0xd8);
            if (puVar14 == (undefined8 *)0x0) {
              puVar14 = operator_new(0x18);
              *(undefined4 *)(puVar14 + 1) = 0;
              *puVar14 = &PTR__ReferenceCountedObject_00714b80;
              puVar14[2] = lVar9;
              LOCK();
              *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
              UNLOCK();
              plVar12 = *(long **)(lVar9 + 0xd8);
              *(undefined8 **)(lVar9 + 0xd8) = puVar14;
              if (plVar12 != (long *)0x0) {
                LOCK();
                plVar15 = plVar12 + 1;
                *(int *)plVar15 = (int)*plVar15 + -1;
                UNLOCK();
                if ((int)*plVar15 == 0) {
                  (**(code **)(*plVar12 + 8))();
                }
                puVar14 = *(undefined8 **)(lVar9 + 0xd8);
                if (puVar14 == (undefined8 *)0x0) goto LAB_002cd528;
              }
            }
            LOCK();
            *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
            UNLOCK();
            plVar12 = *(long **)(this + 0x50);
            *(undefined8 **)(this + 0x50) = puVar14;
          }
          if (plVar12 != (long *)0x0) {
            LOCK();
            plVar15 = plVar12 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
              (**(code **)(*plVar12 + 8))();
            }
            goto LAB_002cd544;
          }
        }
        else {
          *(int *)(Desktop::instance + 0xf4) = *(int *)(Desktop::instance + 0xf4) + 1;
          lVar9 = *(long *)(this + 0x50);
          if (lVar9 == 0) goto LAB_002cd3cc;
LAB_002cd3aa:
          if ((*(long *)(lVar9 + 0x10) == 0) || (*(char *)(param_4 + 10) == '\0'))
          goto LAB_002cd3cc;
          local_1a8 = (long *)(**(code **)(*param_2 + 0x50))(param_2);
LAB_002cd544:
          puVar14 = *(undefined8 **)(this + 0x50);
        }
        if (puVar14 == (undefined8 *)0x0) {
          return;
        }
        plVar12 = (long *)puVar14[2];
        if (plVar12 == (long *)0x0) {
          return;
        }
        local_1b0 = (long *)plVar12[0x1b];
        if (local_1b0 == (long *)0x0) {
          local_1b0 = operator_new(0x18);
          *(undefined4 *)(local_1b0 + 1) = 0;
          *local_1b0 = (long)&PTR__ReferenceCountedObject_00714b80;
          local_1b0[2] = (long)plVar12;
          LOCK();
          *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
          UNLOCK();
          plVar15 = (long *)plVar12[0x1b];
          plVar12[0x1b] = (long)local_1b0;
          if (plVar15 == (long *)0x0) goto LAB_002cd56f;
          LOCK();
          plVar5 = plVar15 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)(*plVar15 + 8))();
          }
          local_1b0 = (long *)plVar12[0x1b];
          if (local_1b0 != (long *)0x0) goto LAB_002cd56f;
        }
        else {
LAB_002cd56f:
          LOCK();
          *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
          UNLOCK();
        }
                    /* try { // try from 002cd574 to 002cd59d has its CatchHandler @ 002ce55e */
        local_1a8 = (long *)detail::ScalingHelpers::screenPosToLocalPos(local_1a8,plVar12);
        if (Desktop::instance == (Desktop *)0x0) {
          pDVar10 = operator_new(0x1d0);
                    /* try { // try from 002cd5a1 to 002cd5a8 has its CatchHandler @ 002ce469 */
          Desktop::Desktop(pDVar10);
          Desktop::instance = pDVar10;
        }
        pDVar10 = Desktop::instance;
        local_80 = ModifierKeys::currentModifiers & 0xfffffe0f | *(uint *)(this + 0x3c);
        if (local_1b0 == (long *)0x0) {
          local_60 = 0;
        }
        else {
          local_60 = local_1b0[2];
        }
        uStack_88 = SUB84((double)(float)local_1a8 + _DAT_005d9a90,0);
        uStack_84 = SUB84((double)local_1a8._4_4_ + _UNK_005d9a98,0);
        local_90 = (float)local_1a8;
        fStack_8c = local_1a8._4_4_;
        local_7c = (undefined1  [16])0x0;
        local_6c = 0;
        local_68 = (float)local_1a8;
        fStack_64 = local_1a8._4_4_;
        local_38 = 0;
                    /* try { // try from 002cd6bc to 002cd6d2 has its CatchHandler @ 002ce54d */
        local_58 = local_60;
        local_50 = param_3;
        local_48 = param_3;
        local_40 = this;
        HierarchyChecker::HierarchyChecker
                  ((HierarchyChecker *)&local_178,(long *)&local_1b0,(undefined8 *)&local_90);
        if (local_1b0 == (long *)0x0) {
          plVar12 = (long *)0x0;
        }
        else {
          plVar12 = (long *)local_1b0[2];
        }
        local_1a8 = (long *)param_4;
        if ((ModalComponentManager::singletonHolder == 0) ||
           ((int)*(uint *)(ModalComponentManager::singletonHolder + 0x24) < 1)) goto LAB_002cd76b;
        uVar11 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
        goto LAB_002cd720;
      }
      lVar17 = lVar17 + 8;
    } while ((long)iVar8 * 8 != lVar17);
  }
  detail::MouseInputSourceList::addSource(lVar9);
  return;
  while (uVar11 = uVar11 - 1, 1 < uVar11) {
LAB_002cd720:
    lVar9 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                     (ulong)((int)uVar11 - 2) * 8);
    if (*(char *)(lVar9 + 0x5c) != '\0') {
      plVar15 = *(long **)(lVar9 + 0x40);
      if ((plVar15 != (long *)0x0) && (plVar15 != plVar12)) goto LAB_002cd74a;
      break;
    }
  }
  goto LAB_002cd76b;
  while( true ) {
    plVar15 = *(long **)(*plVar12 + (long)(int)local_190 * 8);
    if (plVar15 != (long *)0x0) {
                    /* try { // try from 002ce2cf to 002ce2d7 has its CatchHandler @ 002ce3da */
      local_e0 = puVar14;
      (**(code **)(*plVar15 + 0x48))(plVar15,&local_90,lVar9);
      puVar14 = local_e0;
    }
    iVar8 = (int)local_190 + 1;
    local_190 = CONCAT44(local_190._4_4_,iVar8);
    if (local_190._4_4_ <= iVar8) break;
LAB_002ce231:
    plVar5 = local_178;
    for (plVar15 = (long *)CONCAT44(uStack_16c,uStack_170);
        plVar15 != (long *)CONCAT44(uStack_164,local_168); plVar15 = plVar15 + 1) {
      if ((*plVar15 != 0) && (lVar17 = *(long *)(*plVar15 + 0x10), lVar17 != 0)) {
        puVar16 = *(undefined8 **)(lVar17 + 0xd8);
        if (puVar16 == (undefined8 *)0x0) {
          local_e0 = puVar14;
                    /* try { // try from 002ce2e1 to 002ce2ea has its CatchHandler @ 002ce3d3 */
          puVar16 = operator_new(0x18);
          *(undefined4 *)(puVar16 + 1) = 0;
          *puVar16 = &PTR__ReferenceCountedObject_00714b80;
          puVar16[2] = lVar17;
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          plVar15 = *(long **)(lVar17 + 0xd8);
          *(undefined8 **)(lVar17 + 0xd8) = puVar16;
          puVar14 = local_e0;
          if (plVar15 != (long *)0x0) {
            LOCK();
            plVar1 = plVar15 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar15 + 8))();
              puVar14 = local_e0;
            }
            puVar16 = *(undefined8 **)(lVar17 + 0xd8);
            if (puVar16 == (undefined8 *)0x0) break;
          }
        }
        LOCK();
        *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
        UNLOCK();
        plVar15 = (long *)*plVar5;
        *plVar5 = (long)puVar16;
        goto joined_r0x002ce277;
      }
    }
    plVar15 = (long *)*plVar5;
    *plVar5 = 0;
joined_r0x002ce277:
    if (plVar15 != (long *)0x0) {
      LOCK();
      plVar5 = plVar15 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        local_e0 = puVar14;
        (**(code **)(*plVar15 + 8))();
        puVar14 = local_e0;
      }
    }
    if ((*local_178 == 0) || (*(long *)(*local_178 + 0x10) == 0)) break;
  }
LAB_002ce341:
  local_e0 = puVar14;
  ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseWheel(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time,juce::MouseWheelDetails_const&)::$_48,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseWheel(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time,juce::MouseWheelDetails_const&)::$_48&&)::{lambda()#1}>
  ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseWheel(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time,juce::MouseWheelDetails_const&)::__48,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseWheel(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time,juce::MouseWheelDetails_const&)::__48&&)::_lambda()_1_>
                 *)&local_f0);
  if (p_Var3 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    uVar11 = *(ulong *)(p_Var3 + 8);
    if (uVar11 == 0x100000001) {
      *(undefined8 *)(p_Var3 + 8) = 0;
      (**(code **)(*(long *)p_Var3 + 0x10))(p_Var3);
      (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
    }
    else {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var2 = p_Var3 + 8;
        uVar11 = (ulong)*(uint *)p_Var2;
        *(uint *)p_Var2 = *(uint *)p_Var2 - 1;
        UNLOCK();
      }
      else {
        *(int *)(p_Var3 + 8) = (int)uVar11 + -1;
      }
      if ((int)uVar11 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var3);
      }
    }
  }
  goto LAB_002cdee6;
  while (plVar12 = (long *)plVar12[6], plVar12 != plVar15) {
LAB_002cd74a:
    if (plVar12 == (long *)0x0) {
                    /* try { // try from 002cd75d to 002cd784 has its CatchHandler @ 002ce54f */
      cVar7 = (**(code **)(*plVar15 + 0x170))();
      if (cVar7 == '\0') {
        if (*(int *)(pDVar10 + 0x68) != 2) goto LAB_002cdee6;
        plVar12 = *(long **)(pDVar10 + 0x48);
        p_Var3 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(pDVar10 + 0x50);
        if (p_Var3 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (*PTR___libc_single_threaded_00715c50 == '\0') {
            LOCK();
            *(int *)(p_Var3 + 8) = *(int *)(p_Var3 + 8) + 1;
            UNLOCK();
          }
          else {
            *(int *)(p_Var3 + 8) = *(int *)(p_Var3 + 8) + 1;
          }
        }
        local_190 = (ulong)*(uint *)((long)plVar12 + 0xc) << 0x20;
        pvVar4 = *(vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>
                   **)(pDVar10 + 0x58);
        puVar14 = &local_190;
        plVar15 = *(long **)(pvVar4 + 8);
        if (plVar15 == *(long **)(pvVar4 + 0x10)) {
                    /* try { // try from 002ce1ba to 002ce1c6 has its CatchHandler @ 002ce3ce */
          local_f0 = (int *)puVar14;
          std::
          vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>
          ::
          _M_realloc_insert<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>
                    (pvVar4,plVar15,&local_f0);
        }
        else {
          *plVar15 = (long)puVar14;
          *(long *)(pvVar4 + 8) = *(long *)(pvVar4 + 8) + 8;
        }
        lVar9 = (long)local_1a8;
        local_f0 = *(int **)(pDVar10 + 0x58);
        lStack_e8 = *(long *)(pDVar10 + 0x60);
        if (lStack_e8 != 0) {
          if (*PTR___libc_single_threaded_00715c50 == '\0') {
            LOCK();
            *(int *)(lStack_e8 + 8) = *(int *)(lStack_e8 + 8) + 1;
            UNLOCK();
          }
          else {
            *(int *)(lStack_e8 + 8) = *(int *)(lStack_e8 + 8) + 1;
          }
        }
        if (local_190._4_4_ <= (int)local_190) goto LAB_002ce341;
        goto LAB_002ce231;
      }
      break;
    }
  }
LAB_002cd76b:
  (**(code **)(*(long *)local_1b0[2] + 0x48))((long *)local_1b0[2],&local_90,param_4);
  plVar15 = local_178;
  for (plVar12 = (long *)CONCAT44(uStack_16c,uStack_170);
      plVar12 != (long *)CONCAT44(uStack_164,local_168); plVar12 = plVar12 + 1) {
    if ((*plVar12 != 0) && (lVar9 = *(long *)(*plVar12 + 0x10), lVar9 != 0)) {
      puVar14 = *(undefined8 **)(lVar9 + 0xd8);
      if (puVar14 == (undefined8 *)0x0) {
                    /* try { // try from 002cd849 to 002cd852 has its CatchHandler @ 002ce54f */
        puVar14 = operator_new(0x18);
        *(undefined4 *)(puVar14 + 1) = 0;
        *puVar14 = &PTR__ReferenceCountedObject_00714b80;
        puVar14[2] = lVar9;
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        plVar12 = *(long **)(lVar9 + 0xd8);
        *(undefined8 **)(lVar9 + 0xd8) = puVar14;
        if (plVar12 != (long *)0x0) {
          LOCK();
          plVar5 = plVar12 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)(*plVar12 + 8))();
          }
          puVar14 = *(undefined8 **)(lVar9 + 0xd8);
          if (puVar14 == (undefined8 *)0x0) break;
        }
      }
      LOCK();
      *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
      UNLOCK();
      plVar12 = (long *)*plVar15;
      *plVar15 = (long)puVar14;
      goto joined_r0x002cd7d9;
    }
  }
  plVar12 = (long *)*plVar15;
  *plVar15 = 0;
joined_r0x002cd7d9:
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar15 = plVar12 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)(*plVar12 + 8))();
    }
  }
  lVar9 = (long)local_1a8;
  local_e0 = (undefined8 *)CONCAT44(local_e0._4_4_,(undefined4)local_e0);
  if ((*local_178 == 0) ||
     (local_e0 = (undefined8 *)CONCAT44(local_e0._4_4_,(undefined4)local_e0),
     *(long *)(*local_178 + 0x10) == 0)) goto LAB_002cdee6;
  if (*(int *)(pDVar10 + 0x68) == 2) {
    plVar12 = *(long **)(pDVar10 + 0x48);
    p_Var3 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(pDVar10 + 0x50);
    if (p_Var3 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        *(int *)(p_Var3 + 8) = *(int *)(p_Var3 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(p_Var3 + 8) = *(int *)(p_Var3 + 8) + 1;
      }
    }
    local_1b8 = 0;
    local_1b4 = *(int *)((long)plVar12 + 0xc);
    pvVar4 = *(vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>
               **)(pDVar10 + 0x58);
    plVar15 = *(long **)(pvVar4 + 8);
    local_f0 = &local_1b8;
    if (plVar15 == *(long **)(pvVar4 + 0x10)) {
                    /* try { // try from 002cd8e6 to 002cd8f2 has its CatchHandler @ 002ce462 */
      std::
      vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>
      ::
      _M_realloc_insert<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>
                (pvVar4,plVar15,&local_f0);
    }
    else {
      *plVar15 = (long)&local_1b8;
      *(long *)(pvVar4 + 8) = *(long *)(pvVar4 + 8) + 8;
    }
    local_190 = *(long *)(pDVar10 + 0x58);
    local_188 = *(long *)(pDVar10 + 0x60);
    if (local_188 != 0) {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        *(int *)(local_188 + 8) = *(int *)(local_188 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(local_188 + 8) = *(int *)(local_188 + 8) + 1;
      }
    }
    local_180 = &local_1b8;
    if (local_1b8 < local_1b4) {
      do {
        plVar5 = local_178;
        for (plVar15 = (long *)CONCAT44(uStack_16c,uStack_170);
            plVar15 != (long *)CONCAT44(uStack_164,local_168); plVar15 = plVar15 + 1) {
          if ((*plVar15 != 0) && (lVar17 = *(long *)(*plVar15 + 0x10), lVar17 != 0)) {
            puVar14 = *(undefined8 **)(lVar17 + 0xd8);
            if (puVar14 == (undefined8 *)0x0) {
                    /* try { // try from 002cdac2 to 002cdacb has its CatchHandler @ 002ce467 */
              puVar14 = operator_new(0x18);
              *(undefined4 *)(puVar14 + 1) = 0;
              *puVar14 = &PTR__ReferenceCountedObject_00714b80;
              puVar14[2] = lVar17;
              LOCK();
              *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
              UNLOCK();
              plVar15 = *(long **)(lVar17 + 0xd8);
              *(undefined8 **)(lVar17 + 0xd8) = puVar14;
              if (plVar15 != (long *)0x0) {
                LOCK();
                plVar1 = plVar15 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)(*plVar15 + 8))();
                }
                puVar14 = *(undefined8 **)(lVar17 + 0xd8);
                if (puVar14 == (undefined8 *)0x0) break;
              }
            }
            LOCK();
            *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
            UNLOCK();
            plVar15 = (long *)*plVar5;
            *plVar5 = (long)puVar14;
            goto joined_r0x002cd99f;
          }
        }
        plVar15 = (long *)*plVar5;
        *plVar5 = 0;
joined_r0x002cd99f:
        if (plVar15 != (long *)0x0) {
          LOCK();
          plVar5 = plVar15 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)(*plVar15 + 8))();
          }
        }
        if ((*local_178 == 0) || (lVar17 = *(long *)(*local_178 + 0x10), lVar17 == 0)) break;
        plVar15 = *(long **)(*plVar12 + (long)local_1b8 * 8);
        if (plVar15 != (long *)0x0) {
          local_97 = local_ff != '\0';
          local_f0 = (int *)CONCAT44(fStack_154,local_158);
          lStack_e8 = CONCAT44(SUB84((double)fStack_154 + _UNK_005d9a98,0),
                               SUB84((double)local_158 + _DAT_005d9a90,0));
          local_e0._0_4_ = local_148;
          local_e0._4_4_ = (undefined4)local_144;
          uStack_d8 = (undefined4)((ulong)local_144 >> 0x20);
          uStack_d4 = uStack_13c;
          local_cc = local_134;
          local_c8 = local_130;
          local_b0 = local_118;
          uStack_ac = uStack_114;
          uStack_a8 = uStack_110;
          uStack_a4 = uStack_10c;
          local_a0 = local_108;
          local_98 = local_100;
                    /* try { // try from 002cdab4 to 002cdabc has its CatchHandler @ 002ce4a3 */
          local_c0 = lVar17;
          local_b8 = lVar17;
          (**(code **)(*plVar15 + 0x48))((double)local_158 + _DAT_005d9a90,plVar15,&local_f0,lVar9);
        }
        local_1b8 = local_1b8 + 1;
      } while (local_1b8 < local_1b4);
    }
    ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseWheel(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time,juce::MouseWheelDetails_const&)::$_49,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseWheel(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time,juce::MouseWheelDetails_const&)::$_49&&)::{lambda()#1}>
    ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseWheel(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time,juce::MouseWheelDetails_const&)::__49,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseWheel(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time,juce::MouseWheelDetails_const&)::__49&&)::_lambda()_1_>
                   *)&local_190);
    if (p_Var3 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      uVar11 = *(ulong *)(p_Var3 + 8);
      if (uVar11 == 0x100000001) {
        *(undefined8 *)(p_Var3 + 8) = 0;
        (**(code **)(*(long *)p_Var3 + 0x10))(p_Var3);
        (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
      }
      else {
        if (*PTR___libc_single_threaded_00715c50 == '\0') {
          LOCK();
          p_Var2 = p_Var3 + 8;
          uVar11 = (ulong)*(uint *)p_Var2;
          *(uint *)p_Var2 = *(uint *)p_Var2 - 1;
          UNLOCK();
        }
        else {
          *(int *)(p_Var3 + 8) = (int)uVar11 + -1;
        }
        if ((int)uVar11 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var3);
        }
      }
    }
  }
  plVar15 = local_178;
  for (plVar12 = (long *)CONCAT44(uStack_16c,uStack_170);
      plVar12 != (long *)CONCAT44(uStack_164,local_168); plVar12 = plVar12 + 1) {
    if ((*plVar12 != 0) && (lVar9 = *(long *)(*plVar12 + 0x10), lVar9 != 0)) {
      puVar14 = *(undefined8 **)(lVar9 + 0xd8);
      if (puVar14 == (undefined8 *)0x0) {
                    /* try { // try from 002cde43 to 002cde4c has its CatchHandler @ 002ce54f */
        puVar14 = operator_new(0x18);
        *(undefined4 *)(puVar14 + 1) = 0;
        *puVar14 = &PTR__ReferenceCountedObject_00714b80;
        puVar14[2] = lVar9;
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        plVar12 = *(long **)(lVar9 + 0xd8);
        *(undefined8 **)(lVar9 + 0xd8) = puVar14;
        if (plVar12 != (long *)0x0) {
          LOCK();
          plVar5 = plVar12 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)(*plVar12 + 8))();
          }
          puVar14 = *(undefined8 **)(lVar9 + 0xd8);
          if (puVar14 == (undefined8 *)0x0) break;
        }
      }
      LOCK();
      *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
      UNLOCK();
      plVar12 = (long *)*plVar15;
      *plVar15 = (long)puVar14;
      goto joined_r0x002cdc1d;
    }
  }
  plVar12 = (long *)*plVar15;
  *plVar15 = 0;
joined_r0x002cdc1d:
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar15 = plVar12 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)(*plVar12 + 8))();
    }
  }
  local_e0 = (undefined8 *)CONCAT44(local_e0._4_4_,(undefined4)local_e0);
  if (*local_178 == 0) goto LAB_002cdee6;
  lVar9 = *(long *)(*local_178 + 0x10);
  local_e0 = (undefined8 *)CONCAT44(local_e0._4_4_,(undefined4)local_e0);
  if (lVar9 == 0) goto LAB_002cdee6;
  plVar12 = *(long **)(lVar9 + 0x90);
  if (plVar12 != (long *)0x0) {
    plVar15 = *(long **)(lVar9 + 0xd8);
    if (plVar15 == (long *)0x0) {
                    /* try { // try from 002cddcc to 002cddd5 has its CatchHandler @ 002ce3d5 */
      plVar15 = operator_new(0x18);
      *(undefined4 *)(plVar15 + 1) = 0;
      *plVar15 = (long)&PTR__ReferenceCountedObject_00714b80;
      plVar15[2] = lVar9;
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      plVar5 = *(long **)(lVar9 + 0xd8);
      *(long **)(lVar9 + 0xd8) = plVar15;
      if (plVar5 == (long *)0x0) goto LAB_002cdc7e;
      LOCK();
      plVar15 = plVar5 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar15 = *(long **)(lVar9 + 0xd8);
      if (plVar15 != (long *)0x0) goto LAB_002cdc7e;
      plVar15 = (long *)0x0;
      uVar18 = *(uint *)((long)plVar12 + 0xc);
      bVar19 = 0 < (int)uVar18;
      if (0 < (int)uVar18) goto LAB_002cdc96;
LAB_002cde3f:
      bVar6 = false;
LAB_002cdea5:
      if (plVar15 != (long *)0x0) goto LAB_002cdeb4;
    }
    else {
LAB_002cdc7e:
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      uVar18 = *(uint *)((long)plVar12 + 0xc);
      bVar19 = 0 < (int)uVar18;
      if ((int)uVar18 < 1) goto LAB_002cde3f;
LAB_002cdc96:
      do {
        uVar18 = uVar18 - 1;
        if (*local_178 == 0) {
          local_c0 = 0;
        }
        else {
          local_c0 = *(long *)(*local_178 + 0x10);
        }
        plVar5 = *(long **)(*plVar12 + (ulong)uVar18 * 8);
        local_97 = local_ff != '\0';
        local_f0 = (int *)CONCAT44(fStack_154,local_158);
        lStack_e8 = CONCAT44(SUB84((double)fStack_154 + _UNK_005d9a98,0),
                             SUB84((double)local_158 + _DAT_005d9a90,0));
        local_e0._0_4_ = local_148;
        local_e0._4_4_ = (undefined4)local_144;
        uStack_d8 = (undefined4)((ulong)local_144 >> 0x20);
        uStack_d4 = uStack_13c;
        local_cc = local_134;
        local_c8 = local_130;
        local_b0 = local_118;
        uStack_ac = uStack_114;
        uStack_a8 = uStack_110;
        uStack_a4 = uStack_10c;
        local_a0 = local_108;
        local_98 = local_100;
                    /* try { // try from 002cdd7c to 002cdd86 has its CatchHandler @ 002ce47b */
        local_b8 = local_c0;
        (**(code **)(*plVar5 + 0x48))((double)local_158 + _DAT_005d9a90,plVar5,&local_f0,local_1a8);
                    /* try { // try from 002cdd87 to 002cdd90 has its CatchHandler @ 002ce479 */
        uVar13 = HierarchyChecker::shouldBailOut((HierarchyChecker *)&local_178);
        if ((char)uVar13 != '\0') {
          bVar6 = true;
          goto LAB_002cdea5;
        }
        local_e0 = (undefined8 *)CONCAT44(local_e0._4_4_,(undefined4)local_e0);
        if (plVar15 == (long *)0x0) goto LAB_002cdee6;
        bVar20 = plVar15[2] == 0;
        if (bVar20) {
          bVar6 = true;
          bVar19 = bVar20;
          goto LAB_002cdeb4;
        }
        if ((int)*(uint *)((long)plVar12 + 0xc) < (int)uVar18) {
          uVar18 = *(uint *)((long)plVar12 + 0xc);
        }
      } while (0 < (int)uVar18);
      bVar6 = false;
      bVar19 = bVar20;
LAB_002cdeb4:
      LOCK();
      plVar12 = plVar15 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)(*plVar15 + 8))(plVar15);
      }
    }
    if ((bVar19) && (local_e0 = (undefined8 *)CONCAT44(local_e0._4_4_,(undefined4)local_e0), bVar6))
    goto LAB_002cdee6;
  }
  local_e0 = (undefined8 *)CONCAT44(local_e0._4_4_,(undefined4)local_e0);
  if (*local_178 != 0) {
    lVar9 = *(long *)(*local_178 + 0x10);
    local_e0 = (undefined8 *)CONCAT44(local_e0._4_4_,(undefined4)local_e0);
    if (lVar9 != 0) {
      do {
        lVar9 = *(long *)(lVar9 + 0x30);
        if (lVar9 == 0) break;
        plVar12 = *(long **)(lVar9 + 0x90);
        if (plVar12 == (long *)0x0) {
LAB_002cdf5b:
          bVar6 = false;
        }
        else {
          plVar15 = *(long **)(lVar9 + 0xd8);
          if (plVar15 == (long *)0x0) {
                    /* try { // try from 002ce0d6 to 002ce0df has its CatchHandler @ 002ce45d */
            plVar15 = operator_new(0x18);
            *(undefined4 *)(plVar15 + 1) = 0;
            *plVar15 = (long)&PTR__ReferenceCountedObject_00714b80;
            plVar15[2] = lVar9;
            LOCK();
            *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
            UNLOCK();
            plVar5 = *(long **)(lVar9 + 0xd8);
            *(long **)(lVar9 + 0xd8) = plVar15;
            if (plVar5 == (long *)0x0) goto LAB_002cdf8a;
            LOCK();
            plVar15 = plVar5 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
              (**(code **)(*plVar5 + 8))();
            }
            plVar15 = *(long **)(lVar9 + 0xd8);
            if (plVar15 != (long *)0x0) goto LAB_002cdf8a;
            plVar15 = (long *)0x0;
            uVar18 = *(uint *)(plVar12 + 2);
            bVar19 = 0 < (int)uVar18;
            if (0 < (int)uVar18) goto LAB_002cdfa2;
LAB_002ce147:
            bVar6 = false;
LAB_002ce150:
            if (plVar15 != (long *)0x0) goto LAB_002ce162;
          }
          else {
LAB_002cdf8a:
            LOCK();
            *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
            UNLOCK();
            uVar18 = *(uint *)(plVar12 + 2);
            bVar19 = 0 < (int)uVar18;
            if ((int)uVar18 < 1) goto LAB_002ce147;
LAB_002cdfa2:
            do {
              uVar18 = uVar18 - 1;
              if (*local_178 == 0) {
                local_c0 = 0;
              }
              else {
                local_c0 = *(long *)(*local_178 + 0x10);
              }
              plVar5 = *(long **)(*plVar12 + (ulong)uVar18 * 8);
              local_97 = local_ff != '\0';
              local_f0 = (int *)CONCAT44(fStack_154,local_158);
              lStack_e8 = CONCAT44(SUB84((double)fStack_154 + _UNK_005d9a98,0),
                                   SUB84((double)local_158 + _DAT_005d9a90,0));
              local_e0._0_4_ = local_148;
              local_e0._4_4_ = (undefined4)local_144;
              uStack_d8 = (undefined4)((ulong)local_144 >> 0x20);
              uStack_d4 = uStack_13c;
              local_cc = local_134;
              local_c8 = local_130;
              local_b0 = local_118;
              uStack_ac = uStack_114;
              uStack_a8 = uStack_110;
              uStack_a4 = uStack_10c;
              local_a0 = local_108;
              local_98 = local_100;
                    /* try { // try from 002ce083 to 002ce091 has its CatchHandler @ 002ce52e */
              local_b8 = local_c0;
              (**(code **)(*plVar5 + 0x48))
                        ((double)local_158 + _DAT_005d9a90,plVar5,&local_f0,local_1a8);
                    /* try { // try from 002ce092 to 002ce09b has its CatchHandler @ 002ce530 */
              uVar13 = HierarchyChecker::shouldBailOut((HierarchyChecker *)&local_178);
              if ((char)uVar13 != '\0') {
                bVar6 = true;
                goto LAB_002ce150;
              }
              if (plVar15 == (long *)0x0) goto LAB_002cdee6;
              bVar20 = plVar15[2] == 0;
              if (bVar20) {
                bVar6 = true;
                bVar19 = bVar20;
                goto LAB_002ce162;
              }
              if ((int)*(uint *)(plVar12 + 2) < (int)uVar18) {
                uVar18 = *(uint *)(plVar12 + 2);
              }
            } while (0 < (int)uVar18);
            bVar6 = false;
            bVar19 = bVar20;
LAB_002ce162:
            LOCK();
            plVar12 = plVar15 + 1;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)*plVar12 == 0) {
              (**(code **)(*plVar15 + 8))(plVar15);
            }
          }
          if (!bVar19) goto LAB_002cdf5b;
        }
      } while (!bVar6);
    }
  }
LAB_002cdee6:
  plVar12 = (long *)CONCAT44(uStack_16c,uStack_170);
  plVar15 = (long *)CONCAT44(uStack_164,local_168);
  if (plVar12 != plVar15) {
    do {
      plVar5 = (long *)*plVar12;
      if (plVar5 != (long *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar15);
    plVar12 = (long *)CONCAT44(uStack_16c,uStack_170);
  }
  if (plVar12 != (long *)0x0) {
    operator_delete(plVar12);
  }
  if (local_1b0 != (long *)0x0) {
    LOCK();
    plVar12 = local_1b0 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)(*local_1b0 + 8))();
    }
  }
  return;
}


