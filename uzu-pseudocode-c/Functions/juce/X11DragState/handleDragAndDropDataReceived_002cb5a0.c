// Function : handleDragAndDropDataReceived
// Namespace: juce:X11DragState
// Entry    : 002cb5a0
// Prototype: undefined handleDragAndDropDataReceived(X11DragState * this)
// Body     : 002cb5a0 - 002cbd45


/* juce::X11DragState::handleDragAndDropDataReceived() */

void __thiscall juce::X11DragState::handleDragAndDropDataReceived(X11DragState *this)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  char *pcVar4;
  char cVar5;
  int *piVar6;
  XWindowSystem *pXVar7;
  ComponentPeer *this_00;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  pointer_____offset_0x10___ *ppuVar12;
  long lVar13;
  char *pcVar14;
  undefined4 uVar15;
  long *plVar16;
  long *local_148;
  undefined8 uStack_140;
  char *local_138;
  ulong local_130;
  undefined4 local_11c;
  long *local_118;
  undefined8 uStack_110;
  char *local_108;
  ulong local_100;
  long *local_f0;
  long *local_e8;
  undefined8 uStack_e0;
  char *local_d8;
  ulong local_d0;
  long local_c8;
  undefined8 uStack_c0;
  char *local_b8;
  long local_b0;
  long *local_a8;
  long *plStack_a0;
  undefined8 local_98;
  char *pcStack_90;
  ulong local_88;
  long lStack_80;
  undefined8 local_78;
  char *pcStack_70;
  long local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  ulong local_40;
  long *local_38;
  
  local_148 = (long *)0x0;
  uStack_140 = 0;
  ArrayBase<juce::String,juce::DummyCriticalSection>::addArray<juce::String>
            ((ArrayBase<juce::String,juce::DummyCriticalSection> *)&local_148,
             *(long **)(this + 0x50),*(uint *)(this + 0x5c));
  local_138 = *(char **)(this + 0x60);
  piVar6 = (int *)(local_138 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  local_130 = *(ulong *)(this + 0x68);
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  pcStack_70 = (undefined1 *)0x0;
  local_88 = 0;
  lStack_80 = 0;
  local_98 = 0;
  pcStack_90 = (char *)0x0;
  local_a8 = (long *)0x0;
  plStack_a0 = (long *)0x0;
                    /* try { // try from 002cb623 to 002cb62e has its CatchHandler @ 002cbd7c */
  pXVar7 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                     ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                      XWindowSystem::singletonHolder);
  lStack_80 = *(long *)(pXVar7 + 0xa0);
                    /* try { // try from 002cb63e to 002cb64d has its CatchHandler @ 002cbd7a */
  sendDragAndDropMessage(this,(undefined4 *)&local_a8);
  if (0 < *(int *)(this + 0x5c)) {
    lVar13 = 0;
    do {
      piVar6 = (int *)(*(long *)(*(long *)(this + 0x50) + lVar13 * 8) + -0x10);
      if (piVar6 != &emptyString) {
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar6);
        }
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(this + 0x5c));
  }
  *(undefined4 *)(this + 0x5c) = 0;
  if (*(int *)(this + 0x58) != 0) {
    free(*(void **)(this + 0x50));
    *(undefined8 *)(this + 0x50) = 0;
  }
  *(undefined4 *)(this + 0x58) = 0;
  piVar6 = (int *)(*(long *)(this + 0x60) + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar6);
    }
  }
  *(undefined1 **)(this + 0x60) = &DAT_0061ac58;
  *(undefined8 *)(this + 0x68) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  if (*(int *)(this + 0x48) != 0) {
    free(*(void **)(this + 0x40));
    *(undefined8 *)(this + 0x40) = 0;
  }
  *(undefined4 *)(this + 0x48) = 0;
  this[0x20] = (X11DragState)0x0;
                    /* try { // try from 002cb73a to 002cb755 has its CatchHandler @ 002cbd84 */
  if (((uStack_140._4_4_ == 0) && (*local_138 == '\0')) ||
     (this_00 = (ComponentPeer *)getPeerFor(*(long *)this), this_00 == (ComponentPeer *)0x0))
  goto LAB_002cbcbf;
  ComponentPeer::handleDragMove(this_00,(long)&local_148);
  plVar16 = *(long **)(this_00 + 0x90);
  if (plVar16 == (long *)0x0) goto LAB_002cbcbf;
  LOCK();
  *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
  UNLOCK();
  if (plVar16[2] != 0) {
    plVar10 = *(long **)(this_00 + 0x90);
    *(undefined8 *)(this_00 + 0x90) = 0;
    if (plVar10 != (long *)0x0) {
      LOCK();
      plVar3 = plVar10 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)(*plVar10 + 8))();
      }
    }
    *(undefined8 *)(this_00 + 0x98) = 0;
    plVar10 = (long *)plVar16[2];
    if (plVar10 != (long *)0x0) {
      ppuVar12 = &FileDragAndDropTarget::typeinfo;
      if (uStack_140._4_4_ == 0) {
        ppuVar12 = &TextDragAndDropTarget::typeinfo;
      }
      lVar13 = __dynamic_cast(plVar10,&Component::typeinfo,ppuVar12,0xfffffffffffffffe);
      if (lVar13 != 0) {
        if ((ModalComponentManager::singletonHolder != 0) &&
           (0 < (int)*(uint *)(ModalComponentManager::singletonHolder + 0x24))) {
          uVar8 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
          do {
            lVar13 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                              (ulong)((int)uVar8 - 2) * 8);
            if (*(char *)(lVar13 + 0x5c) != '\0') {
              plVar3 = *(long **)(lVar13 + 0x40);
              if ((plVar3 != (long *)0x0) && (plVar3 != plVar10)) {
                plVar9 = plVar10;
                goto LAB_002cb845;
              }
              break;
            }
            uVar8 = uVar8 - 1;
          } while (1 < uVar8);
        }
        goto LAB_002cb91c;
      }
    }
  }
  goto LAB_002cbcae;
  while (plVar9 = (long *)plVar9[6], plVar9 != plVar3) {
LAB_002cb845:
    if (plVar9 == (long *)0x0) {
                    /* try { // try from 002cb85b to 002cb913 has its CatchHandler @ 002cbd46 */
      cVar5 = (**(code **)(*plVar3 + 0x170))(plVar3,plVar10);
      if (cVar5 == '\0') {
        if ((ModalComponentManager::singletonHolder == 0) ||
           ((int)*(uint *)(ModalComponentManager::singletonHolder + 0x24) < 1)) goto LAB_002cb8b2;
        uVar8 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
        goto LAB_002cb887;
      }
      break;
    }
  }
  goto LAB_002cb91c;
  while (uVar8 = uVar8 - 1, 1 < uVar8) {
LAB_002cb887:
    lVar13 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                      (ulong)((int)uVar8 - 2) * 8);
    if (*(char *)(lVar13 + 0x5c) != '\0') {
      plVar10 = *(long **)(lVar13 + 0x40);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x178))();
      }
      break;
    }
  }
LAB_002cb8b2:
  plVar10 = (long *)plVar16[2];
  if ((ModalComponentManager::singletonHolder != 0) &&
     (0 < (int)*(uint *)(ModalComponentManager::singletonHolder + 0x24))) {
    uVar8 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
    do {
      lVar13 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                        (ulong)((int)uVar8 - 2) * 8);
      if (*(char *)(lVar13 + 0x5c) != '\0') {
        plVar3 = *(long **)(lVar13 + 0x40);
        if ((plVar3 != (long *)0x0) && (plVar3 != plVar10)) goto LAB_002cb8fb;
        break;
      }
      uVar8 = uVar8 - 1;
    } while (1 < uVar8);
  }
  goto LAB_002cb91c;
  while (plVar10 = (long *)plVar10[6], plVar10 != plVar3) {
LAB_002cb8fb:
    if (plVar10 == (long *)0x0) {
      cVar5 = (**(code **)(*plVar3 + 0x170))();
      if (cVar5 == '\0') goto LAB_002cbcae;
      break;
    }
  }
LAB_002cb91c:
  local_118 = (long *)0x0;
  uStack_110 = 0;
  ArrayBase<juce::String,juce::DummyCriticalSection>::addArray<juce::String>
            ((ArrayBase<juce::String,juce::DummyCriticalSection> *)&local_118,local_148,
             uStack_140._4_4_);
  local_108 = local_138;
  piVar6 = (int *)(local_138 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  local_100 = local_130;
                    /* try { // try from 002cb95f to 002cb963 has its CatchHandler @ 002cbd5a */
  local_100 = detail::ComponentHelpers::convertCoordinate<juce::Point<int>>
                        ((long *)plVar16[2],*(long **)(this_00 + 8),local_130);
  LOCK();
  *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
  UNLOCK();
  local_e8 = (long *)0x0;
  uStack_e0 = 0;
  local_f0 = plVar16;
  ArrayBase<juce::String,juce::DummyCriticalSection>::addArray<juce::String>
            ((ArrayBase<juce::String,juce::DummyCriticalSection> *)&local_e8,local_148,
             uStack_140._4_4_);
  local_d8 = local_138;
  piVar6 = (int *)(local_138 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  local_d0 = local_130;
  local_c8 = 0;
  uStack_c0 = 0;
  ArrayBase<juce::String,juce::DummyCriticalSection>::addArray<juce::String>
            ((ArrayBase<juce::String,juce::DummyCriticalSection> *)&local_c8,local_118,
             uStack_110._4_4_);
  uVar8 = local_100;
  local_b8 = local_108;
  piVar6 = (int *)(local_108 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  local_b0 = local_100;
                    /* try { // try from 002cb9fa to 002cba03 has its CatchHandler @ 002cbd4b */
  plVar10 = operator_new(0x58);
  local_a8 = local_f0;
  local_f0 = (long *)0x0;
  plStack_a0 = (long *)0x0;
  local_98 = 0;
  ArrayBase<juce::String,juce::DummyCriticalSection>::addArray<juce::String>
            ((ArrayBase<juce::String,juce::DummyCriticalSection> *)&plStack_a0,local_e8,
             uStack_e0._4_4_);
  pcVar14 = local_b8;
  pcVar4 = local_d8;
  pcStack_90 = local_d8;
  piVar6 = (int *)(local_d8 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
    uVar8 = local_b0;
  }
  local_40 = local_d0;
  local_48 = local_c8;
  local_88 = local_d0;
  lStack_80 = local_c8;
  local_c8 = 0;
  local_11c = (undefined4)uStack_c0;
  local_78._0_4_ = (undefined4)uStack_c0;
  uVar15 = uStack_c0._4_4_;
  local_78._4_4_ = uStack_c0._4_4_;
  uStack_c0 = 0;
  pcStack_70 = local_b8;
  local_b8 = "";
  *(undefined4 *)(plVar10 + 1) = 0;
  *plVar10 = (long)&PTR__AsyncCallInvoker_00711620;
  plVar10[2] = (long)local_a8;
  local_a8 = (long *)0x0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  local_68 = uVar8;
  local_38 = plVar16;
  ArrayBase<juce::String,juce::DummyCriticalSection>::addArray<juce::String>
            ((ArrayBase<juce::String,juce::DummyCriticalSection> *)(plVar10 + 3),plStack_a0,
             local_98._4_4_);
  plVar16 = local_38;
  plVar10[5] = (long)pcVar4;
  piVar6 = (int *)(pcVar4 + -0x10);
  uVar11 = local_40;
  lVar13 = local_48;
  uVar2 = local_11c;
  if (piVar6 != &emptyString) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
    uVar11 = local_88;
    lVar13 = lStack_80;
    pcVar14 = pcStack_70;
    uVar8 = local_68;
    uVar15 = local_78._4_4_;
    uVar2 = (undefined4)local_78;
  }
  plVar10[6] = uVar11;
  plVar10[7] = lVar13;
  lStack_80 = 0;
  *(undefined4 *)(plVar10 + 8) = uVar2;
  *(undefined4 *)((long)plVar10 + 0x44) = uVar15;
  local_78 = 0;
  plVar10[9] = (long)pcVar14;
  pcStack_70 = "";
  plVar10[10] = uVar8;
  if (((MessageManager::instance == 0) || (*(int *)(MessageManager::instance + 8) != 0)) ||
     (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    plVar3 = plVar10 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
  }
  else {
    InternalMessageQueue::postMessage
              ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,(long)plVar10);
  }
  ComponentPeer::handleDragDrop(juce::ComponentPeer::DragInfo_const&)::$_157::~__157
            ((__157 *)&local_a8);
  ComponentPeer::handleDragDrop(juce::ComponentPeer::DragInfo_const&)::$_157::~__157
            ((__157 *)&local_f0);
  piVar6 = (int *)(local_108 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar6);
    }
  }
  if (0 < (int)uStack_110._4_4_) {
    lVar13 = 0;
    do {
      piVar6 = (int *)(local_118[lVar13] + -0x10);
      if (piVar6 != &emptyString) {
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar6);
        }
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < (int)uStack_110._4_4_);
  }
  free(local_118);
LAB_002cbcae:
  LOCK();
  plVar10 = plVar16 + 1;
  *(int *)plVar10 = (int)*plVar10 + -1;
  UNLOCK();
  if ((int)*plVar10 == 0) {
    (**(code **)(*plVar16 + 8))(plVar16);
  }
LAB_002cbcbf:
  piVar6 = (int *)(local_138 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar6);
    }
  }
  if (0 < (int)uStack_140._4_4_) {
    lVar13 = 0;
    do {
      piVar6 = (int *)(local_148[lVar13] + -0x10);
      if (piVar6 != &emptyString) {
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar6);
        }
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < (int)uStack_140._4_4_);
  }
  uStack_140 = uStack_140 & 0xffffffff;
  free(local_148);
  return;
}


