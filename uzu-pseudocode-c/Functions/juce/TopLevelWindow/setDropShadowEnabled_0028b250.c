// Function : setDropShadowEnabled
// Namespace: juce:TopLevelWindow
// Entry    : 0028b250
// Prototype: undefined setDropShadowEnabled(TopLevelWindow * this, TopLevelWindow param_2)
// Body     : 0028b250 - 0028baf1


/* juce::TopLevelWindow::setDropShadowEnabled(bool) */

void __thiscall
juce::TopLevelWindow::setDropShadowEnabled(TopLevelWindow *this,TopLevelWindow param_2)

{
  long *plVar1;
  long *plVar2;
  VirtualDesktopWatcher *this_00;
  undefined8 uVar3;
  DropShadower *pDVar4;
  TopLevelWindow *pTVar5;
  Desktop *this_01;
  LookAndFeel_V4 *pLVar6;
  long lVar7;
  ParentVisibilityChangedListener *this_02;
  _Rb_tree_node_base *p_Var8;
  VirtualDesktopWatcher *this_03;
  undefined8 *puVar9;
  void *pvVar10;
  _Rb_tree_node_base *p_Var11;
  _Rb_tree_node_base *p_Var12;
  _Rb_tree_node_base *p_Var13;
  _Rb_tree_node_base *p_Var14;
  int iVar15;
  long lVar16;
  undefined8 uVar17;
  _Rb_tree_node_base *p_Var18;
  uint uVar19;
  DropShadower *this_04;
  bool bVar20;
  undefined8 local_98;
  undefined8 uStack_90;
  code *local_88;
  undefined8 local_80;
  DropShadower *local_70;
  DropShadower *local_68;
  undefined8 uStack_60;
  code *local_58;
  code *pcStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  this[0xed] = param_2;
  if ((*(uint3 *)(this + 0xe8) & 1) != 0) {
    plVar2 = *(long **)(this + 0xf0);
    *(undefined8 *)(this + 0xf0) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    uVar19 = (**(code **)(*(long *)this + 0x1a0))(this);
    Component::addToDesktop((Component *)this,uVar19,0);
    return;
  }
  plVar2 = *(long **)(this + 0xf0);
  if ((param_2 == (TopLevelWindow)0x0) || ((*(uint3 *)(this + 0xe8) & 4) == 0)) {
    *(undefined8 *)(this + 0xf0) = 0;
    if (plVar2 == (long *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0028b32c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  if (plVar2 != (long *)0x0) {
    return;
  }
  pTVar5 = this;
  do {
    if ((*(long *)(pTVar5 + 0x68) != 0) &&
       (pLVar6 = *(LookAndFeel_V4 **)(*(long *)(pTVar5 + 0x68) + 0x10),
       pLVar6 != (LookAndFeel_V4 *)0x0)) goto LAB_0028b362;
    pTVar5 = *(TopLevelWindow **)(pTVar5 + 0x30);
  } while (pTVar5 != (TopLevelWindow *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0028b33b to 0028b344 has its CatchHandler @ 0028bb0d */
    this_01 = operator_new(0x1d0);
                    /* try { // try from 0028b348 to 0028b34f has its CatchHandler @ 0028bafa */
    Desktop::Desktop(this_01);
    Desktop::instance = this_01;
  }
  pLVar6 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_0028b362:
  (**(code **)(*(long *)pLVar6 + 0x70))(&local_98,pLVar6,this);
  this_04 = local_98;
  local_98 = (DropShadower *)0x0;
  plVar2 = *(long **)(this + 0xf0);
  *(DropShadower **)(this + 0xf0) = this_04;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
    if (local_98 != (DropShadower *)0x0) {
      (**(code **)(*(long *)local_98 + 8))();
    }
    this_04 = *(DropShadower **)(this + 0xf0);
  }
  if (this_04 == (DropShadower *)0x0) {
    return;
  }
  if (*(long *)(this_04 + 8) != 0) {
    pTVar5 = *(TopLevelWindow **)(*(long *)(this_04 + 8) + 0x10);
    if (pTVar5 == this) {
      return;
    }
    if (pTVar5 != (TopLevelWindow *)0x0) {
      ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
      ::remove((ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
                *)(pTVar5 + 0xa0),(long)this_04);
    }
  }
  puVar9 = *(undefined8 **)(this + 0xd8);
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = operator_new(0x18);
    *(undefined4 *)(puVar9 + 1) = 0;
    *puVar9 = &PTR__ReferenceCountedObject_00714b80;
    puVar9[2] = this;
    LOCK();
    *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
    UNLOCK();
    plVar2 = *(long **)(this + 0xd8);
    *(undefined8 **)(this + 0xd8) = puVar9;
    if (plVar2 == (long *)0x0) goto LAB_0028b3ed;
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
    puVar9 = *(undefined8 **)(this + 0xd8);
    if (puVar9 != (undefined8 *)0x0) goto LAB_0028b3ed;
    plVar2 = *(long **)(this_04 + 8);
    *(undefined8 *)(this_04 + 8) = 0;
  }
  else {
LAB_0028b3ed:
    LOCK();
    *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
    UNLOCK();
    plVar2 = *(long **)(this_04 + 8);
    *(undefined8 **)(this_04 + 8) = puVar9;
  }
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  DropShadower::updateParent(this_04);
  if (*(long *)(this_04 + 8) == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)(this_04 + 8) + 0x10);
  }
  ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
  ::initialiseIfNeeded
            ((ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
              *)(lVar7 + 0xa0));
  puVar9 = *(undefined8 **)(lVar7 + 0xa0);
  pvVar10 = (void *)*puVar9;
  iVar15 = *(int *)((long)puVar9 + 0xc);
  lVar7 = (long)iVar15;
  if (lVar7 != 0) {
    lVar16 = 0;
    do {
      if (*(DropShadower **)((long)pvVar10 + lVar16) == this_04) goto LAB_0028b52c;
      lVar16 = lVar16 + 8;
    } while (lVar7 * 8 != lVar16);
  }
  if ((int)*(uint *)(puVar9 + 1) <= iVar15) {
    uVar19 = iVar15 + ((iVar15 - (iVar15 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)(puVar9 + 1) != uVar19) {
      if ((int)uVar19 < 1) {
        free(pvVar10);
        *puVar9 = 0;
        pvVar10 = (void *)0x0;
      }
      else {
        pvVar10 = realloc(pvVar10,(ulong)uVar19 << 3);
        *puVar9 = pvVar10;
      }
    }
    *(uint *)(puVar9 + 1) = uVar19;
    iVar15 = *(int *)((long)puVar9 + 0xc);
    lVar7 = (long)iVar15;
  }
  *(int *)((long)puVar9 + 0xc) = iVar15 + 1;
  *(DropShadower **)((long)pvVar10 + lVar7 * 8) = this_04;
LAB_0028b52c:
  if (*(long *)(this_04 + 8) == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = *(undefined8 *)(*(long *)(this_04 + 8) + 0x10);
  }
  this_02 = operator_new(0x48);
  *(undefined ***)this_02 = &PTR__ParentVisibilityChangedListener_0070faa0;
  *(undefined8 *)(this_02 + 8) = uVar17;
  *(DropShadower **)(this_02 + 0x10) = this_04;
  *(undefined4 *)(this_02 + 0x20) = 0;
  *(undefined8 *)(this_02 + 0x28) = 0;
  *(ParentVisibilityChangedListener **)(this_02 + 0x30) = this_02 + 0x20;
  *(ParentVisibilityChangedListener **)(this_02 + 0x38) = this_02 + 0x20;
  *(undefined8 *)(this_02 + 0x40) = 0;
                    /* try { // try from 0028b585 to 0028b58c has its CatchHandler @ 0028bb8b */
  DropShadower::ParentVisibilityChangedListener::updateParentHierarchy(this_02);
  pvVar10 = *(void **)(this_04 + 0x40);
  *(ParentVisibilityChangedListener **)(this_04 + 0x40) = this_02;
  if (pvVar10 != (void *)0x0) {
    for (p_Var8 = *(_Rb_tree_node_base **)((long)pvVar10 + 0x30);
        p_Var8 != (_Rb_tree_node_base *)((long)pvVar10 + 0x20);
        p_Var8 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var8)) {
      if ((*(long *)(p_Var8 + 0x28) != 0) &&
         (lVar7 = *(long *)(*(long *)(p_Var8 + 0x28) + 0x10), lVar7 != 0)) {
        ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
        ::remove((ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
                  *)(lVar7 + 0xa0),(long)pvVar10);
      }
    }
                    /* try { // try from 0028b5b2 to 0028b5b6 has its CatchHandler @ 0028bb1d */
    std::
    _Rb_tree<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,std::_Identity<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,std::less<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>>
    ::_M_erase(*(void **)((long)pvVar10 + 0x28));
    operator_delete(pvVar10);
  }
  if (*(long *)(this_04 + 8) == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)(this_04 + 8) + 0x10);
  }
  this_03 = operator_new(0x78);
  *(undefined ***)this_03 = &PTR__ComponentListener_0070d190;
  Timer::Timer((Timer *)(this_03 + 8));
  *(undefined ***)this_03 = &PTR__VirtualDesktopWatcher_0070fb18;
  *(undefined ***)(this_03 + 8) = &PTR__VirtualDesktopWatcher_0070fb80;
  puVar9 = *(undefined8 **)(lVar7 + 0xd8);
  if (puVar9 == (undefined8 *)0x0) {
                    /* try { // try from 0028b68e to 0028b697 has its CatchHandler @ 0028baf2 */
    puVar9 = operator_new(0x18);
    *(undefined4 *)(puVar9 + 1) = 0;
    *puVar9 = &PTR__ReferenceCountedObject_00714b80;
    puVar9[2] = lVar7;
    LOCK();
    *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
    UNLOCK();
    plVar2 = *(long **)(lVar7 + 0xd8);
    *(undefined8 **)(lVar7 + 0xd8) = puVar9;
    if (plVar2 == (long *)0x0) goto LAB_0028b64b;
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
    puVar9 = *(undefined8 **)(lVar7 + 0xd8);
    *(undefined8 **)(this_03 + 0x30) = puVar9;
    if (puVar9 != (undefined8 *)0x0) goto LAB_0028b64f;
    lVar7 = 0;
  }
  else {
LAB_0028b64b:
    *(undefined8 **)(this_03 + 0x30) = puVar9;
LAB_0028b64f:
    LOCK();
    *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
    UNLOCK();
    lVar7 = *(long *)(this_03 + 0x30);
  }
  *(undefined2 *)(this_03 + 0x38) = 0;
  *(undefined4 *)(this_03 + 0x48) = 0;
  *(undefined8 *)(this_03 + 0x50) = 0;
  *(VirtualDesktopWatcher **)(this_03 + 0x58) = this_03 + 0x48;
  *(VirtualDesktopWatcher **)(this_03 + 0x60) = this_03 + 0x48;
  *(undefined8 *)(this_03 + 0x68) = 0;
  *(undefined8 *)(this_03 + 0x70) = 0;
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x10);
  }
  ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
  ::initialiseIfNeeded
            ((ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
              *)(lVar7 + 0xa0));
  puVar9 = *(undefined8 **)(lVar7 + 0xa0);
  pvVar10 = (void *)*puVar9;
  iVar15 = *(int *)((long)puVar9 + 0xc);
  lVar7 = (long)iVar15;
  if (lVar7 != 0) {
    lVar16 = 0;
    do {
      if (*(VirtualDesktopWatcher **)((long)pvVar10 + lVar16) == this_03) goto LAB_0028b78c;
      lVar16 = lVar16 + 8;
    } while (lVar7 * 8 != lVar16);
  }
  if ((int)*(uint *)(puVar9 + 1) <= iVar15) {
    uVar19 = iVar15 + ((iVar15 - (iVar15 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)(puVar9 + 1) != uVar19) {
      if ((int)uVar19 < 1) {
        free(pvVar10);
        *puVar9 = 0;
        pvVar10 = (void *)0x0;
      }
      else {
        pvVar10 = realloc(pvVar10,(ulong)uVar19 << 3);
        *puVar9 = pvVar10;
      }
    }
    *(uint *)(puVar9 + 1) = uVar19;
    iVar15 = *(int *)((long)puVar9 + 0xc);
    lVar7 = (long)iVar15;
  }
  *(int *)((long)puVar9 + 0xc) = iVar15 + 1;
  *(VirtualDesktopWatcher **)((long)pvVar10 + lVar7 * 8) = this_03;
LAB_0028b78c:
                    /* try { // try from 0028b793 to 0028b79a has its CatchHandler @ 0028bb42 */
  DropShadower::VirtualDesktopWatcher::update(this_03);
  this_00 = *(VirtualDesktopWatcher **)(this_04 + 0x48);
  *(VirtualDesktopWatcher **)(this_04 + 0x48) = this_03;
  if (this_00 != (VirtualDesktopWatcher *)0x0) {
    DropShadower::VirtualDesktopWatcher::~VirtualDesktopWatcher(this_00);
    operator_delete(this_00);
    this_03 = *(VirtualDesktopWatcher **)(this_04 + 0x48);
  }
  uStack_60 = 0;
  pcStack_50 = std::_Function_handler<void(),juce::DropShadower::setOwner(juce::Component*)::$_109>
               ::_M_invoke;
  local_58 = std::_Function_handler<void(),juce::DropShadower::setOwner(juce::Component*)::$_109>::
             _M_manager;
  p_Var11 = *(_Rb_tree_node_base **)(this_03 + 0x50);
  p_Var8 = (_Rb_tree_node_base *)(this_03 + 0x48);
  p_Var14 = p_Var8;
  local_70 = this_04;
  local_68 = this_04;
  if (p_Var11 != (_Rb_tree_node_base *)0x0) {
    do {
      p_Var12 = p_Var11 + 0x18;
      if (this_04 <= *(DropShadower **)(p_Var11 + 0x20)) {
        p_Var12 = p_Var11 + 0x10;
        p_Var14 = p_Var11;
      }
      p_Var11 = *(_Rb_tree_node_base **)p_Var12;
    } while (p_Var11 != (_Rb_tree_node_base *)0x0);
    if (p_Var14 == p_Var8) {
      p_Var14 = p_Var8;
    }
    else if (*(DropShadower **)(p_Var14 + 0x20) <= this_04) goto LAB_0028ba78;
  }
                    /* try { // try from 0028b82f to 0028b840 has its CatchHandler @ 0028bb25 */
  p_Var11 = operator_new(0x48);
  pDVar4 = local_70;
  *(DropShadower **)(p_Var11 + 0x20) = local_70;
  *(undefined8 *)(p_Var11 + 0x28) = 0;
  *(undefined8 *)(p_Var11 + 0x30) = 0;
  *(undefined8 *)(p_Var11 + 0x38) = 0;
  *(undefined8 *)(p_Var11 + 0x40) = 0;
  if (p_Var14 == p_Var8) {
    if ((*(long *)(this_03 + 0x68) == 0) ||
       (p_Var12 = *(_Rb_tree_node_base **)(this_03 + 0x60),
       local_70 <= *(DropShadower **)(p_Var12 + 0x20))) {
      p_Var12 = *(_Rb_tree_node_base **)(this_03 + 0x50);
      if (*(_Rb_tree_node_base **)(this_03 + 0x50) == (_Rb_tree_node_base *)0x0) {
        p_Var12 = p_Var8;
LAB_0028b972:
        if (p_Var12 == *(_Rb_tree_node_base **)(this_03 + 0x58)) goto LAB_0028ba0b;
        p_Var14 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var12);
      }
      else {
        do {
          p_Var14 = p_Var12;
          p_Var12 = *(_Rb_tree_node_base **)
                     (p_Var14 + (ulong)(*(DropShadower **)(p_Var14 + 0x20) <= local_70) * 8 + 0x10);
        } while (*(_Rb_tree_node_base **)
                  (p_Var14 + (ulong)(*(DropShadower **)(p_Var14 + 0x20) <= local_70) * 8 + 0x10) !=
                 (_Rb_tree_node_base *)0x0);
        p_Var12 = p_Var14;
        if (local_70 < *(DropShadower **)(p_Var14 + 0x20)) goto LAB_0028b972;
      }
LAB_0028b9df:
      if (*(DropShadower **)(p_Var14 + 0x20) < pDVar4) {
LAB_0028ba0b:
        p_Var14 = (_Rb_tree_node_base *)0x0;
        if (p_Var12 != (_Rb_tree_node_base *)0x0) goto LAB_0028ba13;
      }
LAB_0028ba31:
      operator_delete(p_Var11);
      goto LAB_0028ba78;
    }
LAB_0028b926:
    p_Var14 = (_Rb_tree_node_base *)0x0;
LAB_0028ba13:
    bVar20 = true;
    if ((p_Var14 == (_Rb_tree_node_base *)0x0) && (p_Var12 != p_Var8)) {
      bVar20 = pDVar4 < *(DropShadower **)(p_Var12 + 0x20);
    }
  }
  else {
    p_Var12 = p_Var14;
    if (*(DropShadower **)(p_Var14 + 0x20) <= local_70) {
      if (*(DropShadower **)(p_Var14 + 0x20) < local_70) {
        if (*(_Rb_tree_node_base **)(this_03 + 0x60) == p_Var14) goto LAB_0028b926;
        p_Var13 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var14);
        if (*(DropShadower **)(p_Var13 + 0x20) <= pDVar4) {
          p_Var12 = *(_Rb_tree_node_base **)(this_03 + 0x50);
          if (*(_Rb_tree_node_base **)(this_03 + 0x50) == (_Rb_tree_node_base *)0x0) {
            p_Var12 = p_Var8;
          }
          else {
            do {
              p_Var14 = p_Var12;
              p_Var12 = *(_Rb_tree_node_base **)
                         (p_Var14 + (ulong)(*(DropShadower **)(p_Var14 + 0x20) <= pDVar4) * 8 + 0x10
                         );
            } while (*(_Rb_tree_node_base **)
                      (p_Var14 + (ulong)(*(DropShadower **)(p_Var14 + 0x20) <= pDVar4) * 8 + 0x10)
                     != (_Rb_tree_node_base *)0x0);
            p_Var12 = p_Var14;
            if (*(DropShadower **)(p_Var14 + 0x20) <= pDVar4) goto LAB_0028b9df;
          }
          if (p_Var12 != *(_Rb_tree_node_base **)(this_03 + 0x58)) {
            p_Var14 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var12);
            goto LAB_0028b9df;
          }
          goto LAB_0028ba0b;
        }
        p_Var18 = p_Var14 + 0x18;
        p_Var14 = (_Rb_tree_node_base *)0x0;
        if (*(long *)p_Var18 != 0) {
          p_Var12 = p_Var13;
          p_Var14 = p_Var13;
        }
        goto LAB_0028ba13;
      }
      goto LAB_0028ba31;
    }
    p_Var13 = *(_Rb_tree_node_base **)(this_03 + 0x58);
    if (p_Var13 != p_Var14) {
      p_Var12 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var14);
      if (*(DropShadower **)(p_Var12 + 0x20) < pDVar4) {
        if (*(long *)(p_Var12 + 0x18) == 0) {
          p_Var14 = (_Rb_tree_node_base *)0x0;
        }
        else {
          p_Var12 = p_Var14;
        }
        goto LAB_0028ba13;
      }
      p_Var12 = *(_Rb_tree_node_base **)(this_03 + 0x50);
      if (*(_Rb_tree_node_base **)(this_03 + 0x50) == (_Rb_tree_node_base *)0x0) {
        p_Var18 = p_Var8;
      }
      else {
        do {
          p_Var14 = p_Var12;
          p_Var12 = *(_Rb_tree_node_base **)
                     (p_Var14 + (ulong)(*(DropShadower **)(p_Var14 + 0x20) <= pDVar4) * 8 + 0x10);
        } while (*(_Rb_tree_node_base **)
                  (p_Var14 + (ulong)(*(DropShadower **)(p_Var14 + 0x20) <= pDVar4) * 8 + 0x10) !=
                 (_Rb_tree_node_base *)0x0);
        p_Var18 = p_Var14;
        p_Var12 = p_Var14;
        if (*(DropShadower **)(p_Var14 + 0x20) <= pDVar4) goto LAB_0028b9df;
      }
      p_Var12 = p_Var13;
      if (p_Var18 != p_Var13) {
        p_Var14 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var18);
        p_Var12 = p_Var18;
        goto LAB_0028b9df;
      }
      goto LAB_0028ba0b;
    }
    bVar20 = true;
  }
  std::_Rb_tree_insert_and_rebalance(bVar20,p_Var11,p_Var12,p_Var8);
  *(long *)(this_03 + 0x68) = *(long *)(this_03 + 0x68) + 1;
  p_Var14 = p_Var11;
LAB_0028ba78:
  local_58 = (code *)0x0;
  pcStack_50 = (code *)0x0;
  local_98._0_4_ = SUB84(local_68,0);
  local_98._4_4_ = (undefined4)((ulong)local_68 >> 0x20);
  uStack_90._0_4_ = (undefined4)uStack_60;
  uStack_90._4_4_ = (undefined4)((ulong)uStack_60 >> 0x20);
  local_48 = (undefined4)local_98;
  uStack_44 = local_98._4_4_;
  uStack_40 = (undefined4)uStack_90;
  uStack_3c = uStack_90._4_4_;
  uVar17 = *(undefined8 *)(p_Var14 + 0x28);
  uVar3 = *(undefined8 *)(p_Var14 + 0x30);
  *(undefined4 *)(p_Var14 + 0x28) = (undefined4)local_98;
  *(undefined4 *)(p_Var14 + 0x2c) = local_98._4_4_;
  *(undefined4 *)(p_Var14 + 0x30) = (undefined4)uStack_90;
  *(undefined4 *)(p_Var14 + 0x34) = uStack_90._4_4_;
  local_88 = *(code **)(p_Var14 + 0x38);
  *(code **)(p_Var14 + 0x38) =
       std::_Function_handler<void(),juce::DropShadower::setOwner(juce::Component*)::$_109>::
       _M_manager;
  local_80 = *(undefined8 *)(p_Var14 + 0x40);
  *(code **)(p_Var14 + 0x40) =
       std::_Function_handler<void(),juce::DropShadower::setOwner(juce::Component*)::$_109>::
       _M_invoke;
  local_98 = (DropShadower *)uVar17;
  uStack_90 = uVar3;
  if (local_88 != (code *)0x0) {
                    /* try { // try from 0028bacc to 0028bada has its CatchHandler @ 0028bb15 */
    (*local_88)(&local_98,&local_98,3);
  }
  DropShadower::updateShadows(this_04);
  return;
}


