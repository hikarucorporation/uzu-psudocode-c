// Function : removeChildComponent
// Namespace: juce:Component
// Entry    : 0021fb00
// Prototype: Component * removeChildComponent(Component * this, uint param_1, char param_2, byte param_3)
// Body     : 0021fb00 - 0021fd8f


/* juce::Component::removeChildComponent(int, bool, bool) */

Component * __thiscall
juce::Component::removeChildComponent(Component *this,uint param_1,char param_2,byte param_3)

{
  Component *this_00;
  Component *pCVar1;
  long *plVar2;
  bool bVar3;
  uint uVar4;
  Desktop *this_01;
  void *pvVar5;
  long *plVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  
  if (*(uint *)(this + 100) <= param_1) {
    return (Component *)0x0;
  }
  lVar10 = (long)(int)param_1;
  this_00 = *(Component **)(*(long *)(this + 0x58) + lVar10 * 8);
  if (this_00 == (Component *)0x0) {
    return (Component *)0x0;
  }
  if (param_2 == '\0') {
    bVar3 = false;
LAB_0021fbd6:
    uVar4 = *(uint *)(this + 100);
  }
  else {
    uVar4 = isShowing(this_00);
    if ((char)uVar4 == '\0') {
      bVar3 = false;
      uVar4 = *(uint *)(this + 100);
    }
    else {
      if ((*(ushort *)(this + 0xe8) & 0x18) != 8) {
        if (Desktop::instance == (Desktop *)0x0) {
          this_01 = operator_new(0x1d0);
                    /* try { // try from 0021fb71 to 0021fb78 has its CatchHandler @ 0021fd90 */
          Desktop::Desktop(this_01);
          Desktop::instance = this_01;
        }
        if ((*(ushort *)
              ((AsyncUpdater *)**(undefined8 **)(*(long *)(Desktop::instance + 0x40) + 0x28) + 0x3c)
            & 0x1f0) == 0) {
          AsyncUpdater::triggerAsyncUpdate
                    ((AsyncUpdater *)**(undefined8 **)(*(long *)(Desktop::instance + 0x40) + 0x28));
        }
      }
      bVar3 = true;
      if ((*(ushort *)(this_00 + 0xe8) & 2) == 0) goto LAB_0021fbd6;
      repaintParent(this_00);
      uVar4 = *(uint *)(this + 100);
    }
  }
  if (param_1 < uVar4) {
    memmove((void *)(*(long *)(this + 0x58) + lVar10 * 8),
            (void *)(*(long *)(this + 0x58) + lVar10 * 8 + 8),(long)(int)(uVar4 + ~param_1) << 3);
    iVar9 = *(int *)(this + 100);
    uVar4 = iVar9 - 1;
    *(uint *)(this + 100) = uVar4;
    iVar7 = iVar9 * 2 + -2;
    iVar9 = 0;
    if (-1 < iVar7) {
      iVar9 = iVar7;
    }
    if (iVar9 < *(int *)(this + 0x60)) {
      uVar8 = 8;
      if (8 < (int)uVar4) {
        uVar8 = uVar4;
      }
      if ((int)uVar8 < *(int *)(this + 0x60)) {
        pvVar5 = realloc(*(void **)(this + 0x58),(ulong)uVar8 << 3);
        *(void **)(this + 0x58) = pvVar5;
        *(uint *)(this + 0x60) = uVar8;
      }
    }
  }
  *(undefined8 *)(this_00 + 0x30) = 0;
  detail::ComponentHelpers::releaseAllCachedImageResources((long)this_00);
  for (pCVar1 = currentlyFocusedComponent; pCVar1 != this_00;
      pCVar1 = *(Component **)(pCVar1 + 0x30)) {
    if (pCVar1 == (Component *)0x0) goto LAB_0021fcf0;
  }
  plVar6 = *(long **)(this + 0xd8);
  if (plVar6 == (long *)0x0) {
    plVar6 = operator_new(0x18);
    *(undefined4 *)(plVar6 + 1) = 0;
    *plVar6 = (long)&PTR__ReferenceCountedObject_00714b80;
    plVar6[2] = (long)this;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    plVar2 = *(long **)(this + 0xd8);
    *(long **)(this + 0xd8) = plVar6;
    if (plVar2 == (long *)0x0) goto LAB_0021fc8e;
    LOCK();
    plVar6 = plVar2 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar6 = *(long **)(this + 0xd8);
    if (plVar6 != (long *)0x0) goto LAB_0021fc8e;
    plVar6 = (long *)0x0;
  }
  else {
LAB_0021fc8e:
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
                    /* try { // try from 0021fca3 to 0021fcaa has its CatchHandler @ 0021fda2 */
  giveAwayKeyboardFocusInternal(this_00,currentlyFocusedComponent != this_00 | param_3);
  if (bVar3) {
    if (plVar6 == (long *)0x0) {
      return this_00;
    }
    if (plVar6[2] == 0) {
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
        return this_00;
      }
      return this_00;
    }
                    /* try { // try from 0021fcc4 to 0021fcd7 has its CatchHandler @ 0021fd9d */
    grabKeyboardFocusInternal(this,2,'\x01',0);
  }
  else if (plVar6 == (long *)0x0) goto LAB_0021fcf0;
  LOCK();
  plVar2 = plVar6 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 == 0) {
    (**(code **)(*plVar6 + 8))(plVar6);
  }
LAB_0021fcf0:
  if (param_3 != 0) {
    internalHierarchyChanged(this_00);
  }
  if (bVar3) {
    internalChildrenChanged(this);
    return this_00;
  }
  return this_00;
}


