// Function : updateParentHierarchy
// Namespace: juce:DropShadower:ParentVisibilityChangedListener
// Entry    : 0028bd50
// Prototype: undefined updateParentHierarchy(ParentVisibilityChangedListener * this)
// Body     : 0028bd50 - 0028c20a


/* juce::DropShadower::ParentVisibilityChangedListener::updateParentHierarchy() */

void __thiscall
juce::DropShadower::ParentVisibilityChangedListener::updateParentHierarchy
          (ParentVisibilityChangedListener *this)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  _Rb_tree_node_base *p_Var5;
  undefined8 *puVar6;
  _Rb_tree_node_base *p_Var7;
  void *pvVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  ParentVisibilityChangedListener *pPVar12;
  long lVar13;
  _Rb_tree_node_base *p_Var14;
  void *pvVar15;
  uint uVar16;
  bool bVar17;
  void *local_98;
  void *pvStack_90;
  _Rb_tree_node_base *local_88;
  _Rb_tree_node_base *local_80;
  _Rb_tree_node_base *p_Stack_78;
  long local_70;
  undefined4 local_58 [2];
  void *local_50;
  _Rb_tree_node_base *local_48;
  _Rb_tree_node_base *p_Stack_40;
  undefined8 local_38;
  
  pvStack_90 = (void *)((ulong)pvStack_90 & 0xffffffff00000000);
  local_88 = (_Rb_tree_node_base *)0x0;
  local_70 = 0;
  lVar9 = *(long *)(this + 8);
  local_80 = (_Rb_tree_node_base *)&pvStack_90;
  p_Stack_78 = (_Rb_tree_node_base *)&pvStack_90;
joined_r0x0028bd91:
  if (lVar9 != 0) {
    do {
                    /* try { // try from 0028bdb6 to 0028bdbf has its CatchHandler @ 0028c263 */
      p_Var5 = operator_new(0x30);
      *(long *)(p_Var5 + 0x20) = lVar9;
      puVar6 = *(undefined8 **)(lVar9 + 0xd8);
      if (puVar6 == (undefined8 *)0x0) {
                    /* try { // try from 0028be30 to 0028be39 has its CatchHandler @ 0028c23c */
        puVar6 = operator_new(0x18);
        *(undefined4 *)(puVar6 + 1) = 0;
        *puVar6 = &PTR__ReferenceCountedObject_00714b80;
        puVar6[2] = lVar9;
        LOCK();
        *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
        UNLOCK();
        plVar2 = *(long **)(lVar9 + 0xd8);
        *(undefined8 **)(lVar9 + 0xd8) = puVar6;
        if (plVar2 == (long *)0x0) goto LAB_0028bdd4;
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar2 + 8))();
        }
        puVar6 = *(undefined8 **)(lVar9 + 0xd8);
        *(undefined8 **)(p_Var5 + 0x28) = puVar6;
        if (puVar6 != (undefined8 *)0x0) goto LAB_0028bdd8;
      }
      else {
LAB_0028bdd4:
        *(undefined8 **)(p_Var5 + 0x28) = puVar6;
LAB_0028bdd8:
        LOCK();
        *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
        UNLOCK();
      }
      p_Var14 = (_Rb_tree_node_base *)&pvStack_90;
      if (local_88 == (_Rb_tree_node_base *)0x0) {
joined_r0x0028be98:
        if (p_Var14 != local_80) {
          p_Var7 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var14);
          uVar11 = *(ulong *)(p_Var5 + 0x20);
          goto LAB_0028bea6;
        }
      }
      else {
        uVar11 = *(ulong *)(p_Var5 + 0x20);
        p_Var14 = local_88;
        do {
          p_Var7 = p_Var14;
          p_Var14 = *(_Rb_tree_node_base **)
                     (p_Var7 + (ulong)(*(ulong *)(p_Var7 + 0x20) <= uVar11) * 8 + 0x10);
        } while (*(_Rb_tree_node_base **)
                  (p_Var7 + (ulong)(*(ulong *)(p_Var7 + 0x20) <= uVar11) * 8 + 0x10) !=
                 (_Rb_tree_node_base *)0x0);
        p_Var14 = p_Var7;
        if (uVar11 < *(ulong *)(p_Var7 + 0x20)) goto joined_r0x0028be98;
LAB_0028bea6:
        if (uVar11 <= *(ulong *)(p_Var7 + 0x20)) goto LAB_0028bed0;
      }
      if (p_Var14 == (_Rb_tree_node_base *)0x0) goto LAB_0028bed0;
      if (p_Var14 == (_Rb_tree_node_base *)&pvStack_90) {
        bVar17 = true;
      }
      else {
        bVar17 = *(ulong *)(p_Var5 + 0x20) < *(ulong *)(p_Var14 + 0x20);
      }
      std::_Rb_tree_insert_and_rebalance(bVar17,p_Var5,p_Var14,(_Rb_tree_node_base *)&pvStack_90);
      local_70 = local_70 + 1;
      lVar9 = *(long *)(lVar9 + 0x30);
      if (lVar9 == 0) break;
    } while( true );
  }
  p_Var5 = (_Rb_tree_node_base *)(this + 0x20);
  local_50 = *(void **)(this + 0x28);
  if (local_50 == (void *)0x0) {
    local_50 = (void *)0x0;
    pPVar12 = (ParentVisibilityChangedListener *)&local_38;
    local_58[0] = 0;
    local_48 = (_Rb_tree_node_base *)local_58;
    p_Stack_40 = (_Rb_tree_node_base *)local_58;
  }
  else {
    local_58[0] = *(undefined4 *)(this + 0x20);
    local_48 = *(_Rb_tree_node_base **)(this + 0x30);
    p_Stack_40 = *(_Rb_tree_node_base **)(this + 0x38);
    *(_Rb_tree_node_base **)((long)local_50 + 8) = (_Rb_tree_node_base *)local_58;
    pPVar12 = this + 0x40;
    local_38 = *(undefined8 *)(this + 0x40);
    *(undefined8 *)(this + 0x28) = 0;
    *(_Rb_tree_node_base **)(this + 0x30) = p_Var5;
    *(_Rb_tree_node_base **)(this + 0x38) = p_Var5;
  }
  *(undefined8 *)pPVar12 = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(_Rb_tree_node_base **)(this + 0x30) = p_Var5;
  *(_Rb_tree_node_base **)(this + 0x38) = p_Var5;
  *(undefined8 *)(this + 0x40) = 0;
  if (local_88 != (_Rb_tree_node_base *)0x0) {
    *(undefined4 *)(this + 0x20) = pvStack_90._0_4_;
    *(_Rb_tree_node_base **)(this + 0x28) = local_88;
    *(_Rb_tree_node_base **)(this + 0x30) = local_80;
    *(_Rb_tree_node_base **)(this + 0x38) = p_Stack_78;
    *(_Rb_tree_node_base **)(local_88 + 8) = p_Var5;
    *(long *)(this + 0x40) = local_70;
    local_88 = (_Rb_tree_node_base *)0x0;
    local_70 = 0;
    local_80 = (_Rb_tree_node_base *)&pvStack_90;
    p_Stack_78 = (_Rb_tree_node_base *)&pvStack_90;
  }
                    /* try { // try from 0028bfee to 0028bff2 has its CatchHandler @ 0028c234 */
  std::
  _Rb_tree<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,std::_Identity<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,std::less<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>>
  ::_M_erase(local_88);
  local_98 = (void *)0x0;
  pvStack_90 = (void *)0x0;
  local_88 = (_Rb_tree_node_base *)0x0;
                    /* try { // try from 0028c00c to 0028c01c has its CatchHandler @ 0028c215 */
  std::
  __set_difference<std::_Rb_tree_const_iterator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,std::_Rb_tree_const_iterator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,std::back_insert_iterator<std::vector<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>>>,__gnu_cxx::__ops::_Iter_less_iter>
            (local_48,(_Rb_tree_node_base *)local_58,*(_Rb_tree_node_base **)(this + 0x30),p_Var5,
             (vector<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>>
              *)&local_98);
  pvVar3 = pvStack_90;
  pvVar15 = local_98;
  if (local_98 != pvStack_90) {
    do {
      if ((*(long *)((long)pvVar15 + 8) != 0) &&
         (lVar9 = *(long *)(*(long *)((long)pvVar15 + 8) + 0x10), lVar9 != 0)) {
        ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
        ::remove((ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
                  *)(lVar9 + 0xa0),(long)this);
      }
      pvVar4 = pvStack_90;
      pvVar15 = (void *)((long)pvVar15 + 0x10);
      pvVar8 = local_98;
    } while (pvVar15 != pvVar3);
    for (; pvVar8 != pvVar4; pvVar8 = (void *)((long)pvVar8 + 0x10)) {
      plVar2 = *(long **)((long)pvVar8 + 8);
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar2 + 8))();
        }
      }
    }
  }
  if (local_98 != (void *)0x0) {
    operator_delete(local_98);
  }
  local_98 = (void *)0x0;
  pvStack_90 = (void *)0x0;
  local_88 = (_Rb_tree_node_base *)0x0;
                    /* try { // try from 0028c0bb to 0028c0c8 has its CatchHandler @ 0028c213 */
  std::
  __set_difference<std::_Rb_tree_const_iterator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,std::_Rb_tree_const_iterator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,std::back_insert_iterator<std::vector<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>>>,__gnu_cxx::__ops::_Iter_less_iter>
            (*(_Rb_tree_node_base **)(this + 0x30),p_Var5,local_48,(_Rb_tree_node_base *)local_58,
             (vector<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>>
              *)&local_98);
  pvVar3 = pvStack_90;
  pvVar15 = local_98;
  if (local_98 != pvStack_90) {
    do {
      if ((*(long *)((long)pvVar15 + 8) != 0) &&
         (lVar9 = *(long *)(*(long *)((long)pvVar15 + 8) + 0x10), lVar9 != 0)) {
        ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
        ::initialiseIfNeeded
                  ((ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
                    *)(lVar9 + 0xa0));
        puVar6 = *(undefined8 **)(lVar9 + 0xa0);
        pvVar8 = (void *)*puVar6;
        iVar10 = *(int *)((long)puVar6 + 0xc);
        lVar9 = (long)iVar10;
        if (lVar9 != 0) {
          lVar13 = 0;
          do {
            if (*(ParentVisibilityChangedListener **)((long)pvVar8 + lVar13) == this)
            goto LAB_0028c103;
            lVar13 = lVar13 + 8;
          } while (lVar9 * 8 != lVar13);
        }
        if ((int)*(uint *)(puVar6 + 1) <= iVar10) {
          uVar16 = iVar10 + ((iVar10 - (iVar10 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
          if (*(uint *)(puVar6 + 1) != uVar16) {
            if ((int)uVar16 < 1) {
              free(pvVar8);
              *puVar6 = 0;
              pvVar8 = (void *)0x0;
            }
            else {
              pvVar8 = realloc(pvVar8,(ulong)uVar16 << 3);
              *puVar6 = pvVar8;
            }
          }
          *(uint *)(puVar6 + 1) = uVar16;
          iVar10 = *(int *)((long)puVar6 + 0xc);
          lVar9 = (long)iVar10;
        }
        *(int *)((long)puVar6 + 0xc) = iVar10 + 1;
        *(ParentVisibilityChangedListener **)((long)pvVar8 + lVar9 * 8) = this;
      }
LAB_0028c103:
      pvVar4 = pvStack_90;
      pvVar15 = (void *)((long)pvVar15 + 0x10);
      pvVar8 = local_98;
    } while (pvVar15 != pvVar3);
    for (; pvVar8 != pvVar4; pvVar8 = (void *)((long)pvVar8 + 0x10)) {
      plVar2 = *(long **)((long)pvVar8 + 8);
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar2 + 8))();
        }
      }
    }
  }
  if (local_98 != (void *)0x0) {
    operator_delete(local_98);
  }
                    /* try { // try from 0028c1f7 to 0028c1fb has its CatchHandler @ 0028c20b */
  std::
  _Rb_tree<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,std::_Identity<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,std::less<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>>
  ::_M_erase(local_50);
  return;
LAB_0028bed0:
  plVar2 = *(long **)(p_Var5 + 0x28);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  operator_delete(p_Var5);
  lVar9 = *(long *)(lVar9 + 0x30);
  goto joined_r0x0028bd91;
}


