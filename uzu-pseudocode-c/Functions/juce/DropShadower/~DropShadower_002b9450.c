// Function : ~DropShadower
// Namespace: juce:DropShadower
// Entry    : 002b9450
// Prototype: undefined ~DropShadower(DropShadower * this)
// Body     : 002b9450 - 002b97da


/* juce::DropShadower::~DropShadower() */

void __thiscall juce::DropShadower::~DropShadower(DropShadower *this)

{
  long *plVar1;
  DropShadower DVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  VirtualDesktopWatcher *this_00;
  _Rb_tree_node_base *p_Var6;
  ulong uVar7;
  void *pvVar8;
  _Rb_tree_node_base *p_Var9;
  _Rb_tree_node_base *p_Var10;
  _Rb_tree_node_base *p_Var11;
  ulong uVar12;
  _Rb_tree_node_base *p_Var13;
  ulong uVar14;
  _Rb_tree_node_base *p_Var15;
  int iVar16;
  _Rb_tree_node_base *p_Var17;
  
  *(undefined ***)this = &PTR__DropShadower_0070be20;
  lVar4 = *(long *)(this + 0x48);
  if (lVar4 != 0) {
    p_Var9 = *(_Rb_tree_node_base **)(lVar4 + 0x50);
    p_Var17 = (_Rb_tree_node_base *)(lVar4 + 0x48);
    p_Var13 = p_Var17;
    if (p_Var9 == (_Rb_tree_node_base *)0x0) {
      p_Var11 = p_Var17;
    }
    else {
      p_Var10 = p_Var9;
      do {
        if (this <= *(DropShadower **)(p_Var10 + 0x20)) {
          if (this < *(DropShadower **)(p_Var10 + 0x20)) {
            p_Var11 = p_Var10 + 0x10;
            p_Var13 = p_Var10;
            goto LAB_002b9494;
          }
          p_Var6 = *(_Rb_tree_node_base **)(p_Var10 + 0x18);
          p_Var11 = *(_Rb_tree_node_base **)(p_Var10 + 0x10);
          while (p_Var11 != (_Rb_tree_node_base *)0x0) {
            p_Var15 = p_Var11 + 0x18;
            if (this <= *(DropShadower **)(p_Var11 + 0x20)) {
              p_Var15 = p_Var11 + 0x10;
              p_Var10 = p_Var11;
            }
            p_Var11 = *(_Rb_tree_node_base **)p_Var15;
          }
          while( true ) {
            p_Var11 = p_Var10;
            if (p_Var6 == (_Rb_tree_node_base *)0x0) break;
            p_Var11 = p_Var6 + 0x18;
            if (this < *(DropShadower **)(p_Var6 + 0x20)) {
              p_Var11 = p_Var6 + 0x10;
              p_Var13 = p_Var6;
            }
            p_Var6 = *(_Rb_tree_node_base **)p_Var11;
          }
          break;
        }
        p_Var11 = p_Var10 + 0x18;
LAB_002b9494:
        p_Var10 = *(_Rb_tree_node_base **)p_Var11;
        p_Var11 = p_Var13;
      } while (p_Var10 != (_Rb_tree_node_base *)0x0);
    }
    if ((*(_Rb_tree_node_base **)(lVar4 + 0x58) == p_Var11) && (p_Var13 == p_Var17)) {
                    /* try { // try from 002b9517 to 002b951b has its CatchHandler @ 002b97db */
      std::
      _Rb_tree<void*,std::pair<void*const,std::function<void()>>,std::_Select1st<std::pair<void*const,std::function<void()>>>,std::less<void*>,std::allocator<std::pair<void*const,std::function<void()>>>>
      ::_M_erase(p_Var9);
      *(undefined8 *)(lVar4 + 0x50) = 0;
      *(_Rb_tree_node_base **)(lVar4 + 0x58) = p_Var17;
      *(_Rb_tree_node_base **)(lVar4 + 0x60) = p_Var17;
      *(undefined8 *)(lVar4 + 0x68) = 0;
    }
    else {
      while (p_Var11 != p_Var13) {
        p_Var9 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var11);
        pvVar8 = (void *)std::_Rb_tree_rebalance_for_erase(p_Var11,p_Var17);
        if (*(code **)((long)pvVar8 + 0x38) != (code *)0x0) {
                    /* try { // try from 002b963f to 002b9648 has its CatchHandler @ 002b982b */
          (**(code **)((long)pvVar8 + 0x38))((long)pvVar8 + 0x28,(long)pvVar8 + 0x28,3);
        }
        operator_delete(pvVar8);
        *(long *)(lVar4 + 0x68) = *(long *)(lVar4 + 0x68) + -1;
        p_Var11 = p_Var9;
      }
    }
  }
  if ((*(long *)(this + 8) != 0) && (lVar4 = *(long *)(*(long *)(this + 8) + 0x10), lVar4 != 0)) {
    ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
    ::remove((ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
              *)(lVar4 + 0xa0),(long)this);
    plVar5 = *(long **)(this + 8);
    *(undefined8 *)(this + 8) = 0;
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
                    /* try { // try from 002b9582 to 002b9589 has its CatchHandler @ 002b97eb */
  updateParent(this);
  DVar2 = this[0x30];
  this[0x30] = (DropShadower)0x1;
  uVar3 = *(uint *)(this + 0x1c);
  uVar7 = (ulong)uVar3;
  if (0 < (int)uVar3) {
    iVar16 = -uVar3;
    uVar14 = uVar7;
    while( true ) {
      uVar12 = (ulong)((int)uVar14 - 1);
      lVar4 = *(long *)(this + 0x10);
      plVar5 = *(long **)(lVar4 + uVar12 * 8);
      memmove((void *)(lVar4 + uVar12 * 8),(void *)(lVar4 + uVar12 * 8 + 8),
              (long)((int)uVar7 + iVar16) << 3);
      *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + -1;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
      if (uVar14 < 2) break;
      uVar7 = (ulong)*(uint *)(this + 0x1c);
      iVar16 = iVar16 + 1;
      uVar14 = uVar14 - 1;
    }
  }
  if (*(int *)(this + 0x18) != 0) {
    free(*(void **)(this + 0x10));
    *(undefined8 *)(this + 0x10) = 0;
  }
  *(undefined4 *)(this + 0x18) = 0;
  this[0x30] = DVar2;
  plVar5 = *(long **)(this + 0x50);
  if (plVar5 != (long *)0x0) {
    plVar5[2] = 0;
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  this_00 = *(VirtualDesktopWatcher **)(this + 0x48);
  if (this_00 != (VirtualDesktopWatcher *)0x0) {
    VirtualDesktopWatcher::~VirtualDesktopWatcher(this_00);
    operator_delete(this_00);
  }
  *(undefined8 *)(this + 0x48) = 0;
  pvVar8 = *(void **)(this + 0x40);
  if (pvVar8 != (void *)0x0) {
    for (p_Var9 = *(_Rb_tree_node_base **)((long)pvVar8 + 0x30);
        p_Var9 != (_Rb_tree_node_base *)((long)pvVar8 + 0x20);
        p_Var9 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var9)) {
      if ((*(long *)(p_Var9 + 0x28) != 0) &&
         (lVar4 = *(long *)(*(long *)(p_Var9 + 0x28) + 0x10), lVar4 != 0)) {
        ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
        ::remove((ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
                  *)(lVar4 + 0xa0),(long)pvVar8);
      }
    }
                    /* try { // try from 002b96d0 to 002b96d4 has its CatchHandler @ 002b97e3 */
    std::
    _Rb_tree<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,std::_Identity<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,std::less<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>>
    ::_M_erase(*(void **)((long)pvVar8 + 0x28));
    operator_delete(pvVar8);
  }
  *(undefined8 *)(this + 0x40) = 0;
  plVar5 = *(long **)(this + 0x38);
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  uVar3 = *(uint *)(this + 0x1c);
  uVar7 = (ulong)uVar3;
  if (0 < (int)uVar3) {
    iVar16 = -uVar3;
    uVar14 = uVar7;
    while( true ) {
      uVar12 = (ulong)((int)uVar14 - 1);
      lVar4 = *(long *)(this + 0x10);
      plVar5 = *(long **)(lVar4 + uVar12 * 8);
      memmove((void *)(lVar4 + uVar12 * 8),(void *)(lVar4 + uVar12 * 8 + 8),
              (long)((int)uVar7 + iVar16) << 3);
      *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + -1;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
      if (uVar14 < 2) break;
      uVar7 = (ulong)*(uint *)(this + 0x1c);
      iVar16 = iVar16 + 1;
      uVar14 = uVar14 - 1;
    }
  }
  *(undefined4 *)(this + 0x1c) = 0;
  free(*(void **)(this + 0x10));
  plVar5 = *(long **)(this + 8);
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x002b97c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 8))();
      return;
    }
  }
  return;
}


