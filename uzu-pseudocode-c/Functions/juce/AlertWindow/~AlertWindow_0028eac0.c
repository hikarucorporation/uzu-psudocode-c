// Function : ~AlertWindow
// Namespace: juce:AlertWindow
// Entry    : 0028eac0
// Prototype: undefined ~AlertWindow(AlertWindow * this)
// Body     : 0028eac0 - 0028f015


/* juce::AlertWindow::~AlertWindow() */

void __thiscall juce::AlertWindow::~AlertWindow(AlertWindow *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  
  *(undefined ***)this = &PTR__AlertWindow_0070c970;
  iVar11 = *(int *)(this + 0x3ac);
  if ((long)iVar11 != 0) {
    lVar8 = *(long *)(this + 0x3a0);
    lVar7 = 0;
    do {
      lVar3 = *(long *)(lVar8 + lVar7);
      *(undefined1 *)(lVar3 + 0xf2) = *(undefined1 *)(lVar3 + 0xf2);
      *(ushort *)(lVar3 + 0xf0) = *(ushort *)(lVar3 + 0xf0) & 0xffdf;
      lVar7 = lVar7 + 8;
    } while ((long)iVar11 * 8 != lVar7);
  }
                    /* try { // try from 0028eb21 to 0028eb2d has its CatchHandler @ 0028f016 */
  Component::giveAwayKeyboardFocusInternal((Component *)this,'\x01');
  while( true ) {
    if (*(int *)(this + 100) == 0) break;
                    /* try { // try from 0028eb3c to 0028eb4d has its CatchHandler @ 0028f018 */
    Component::removeChildComponent((Component *)this,*(int *)(this + 100) - 1,'\x01',1);
  }
  plVar4 = *(long **)(this + 0x420);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (0 < *(int *)(this + 0x41c)) {
    lVar8 = 0;
    do {
      piVar10 = (int *)(*(long *)(*(long *)(this + 0x410) + lVar8 * 8) + -0x10);
      if (piVar10 != &emptyString) {
        LOCK();
        iVar11 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar11 == 0) {
          operator_delete__(piVar10);
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(this + 0x41c));
  }
  *(undefined4 *)(this + 0x41c) = 0;
  free(*(void **)(this + 0x410));
  if (0 < *(int *)(this + 0x40c)) {
    lVar8 = 0;
    do {
      piVar10 = (int *)(*(long *)(*(long *)(this + 0x400) + lVar8 * 8) + -0x10);
      if (piVar10 != &emptyString) {
        LOCK();
        iVar11 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar11 == 0) {
          operator_delete__(piVar10);
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(this + 0x40c));
  }
  *(undefined4 *)(this + 0x40c) = 0;
  free(*(void **)(this + 0x400));
  *(undefined4 *)(this + 0x3fc) = 0;
  free(*(void **)(this + 0x3f0));
  uVar2 = *(uint *)(this + 0x3ec);
  uVar5 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    iVar11 = -uVar2;
    uVar9 = uVar5;
    while( true ) {
      uVar6 = (ulong)((int)uVar9 - 1);
      lVar8 = *(long *)(this + 0x3e0);
      plVar4 = *(long **)(lVar8 + uVar6 * 8);
      memmove((void *)(lVar8 + uVar6 * 8),(void *)(lVar8 + uVar6 * 8 + 8),
              (long)((int)uVar5 + iVar11) << 3);
      *(int *)(this + 0x3ec) = *(int *)(this + 0x3ec) + -1;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
      if (uVar9 < 2) break;
      uVar5 = (ulong)*(uint *)(this + 0x3ec);
      iVar11 = iVar11 + 1;
      uVar9 = uVar9 - 1;
    }
  }
  *(undefined4 *)(this + 0x3ec) = 0;
  free(*(void **)(this + 0x3e0));
  *(undefined4 *)(this + 0x3dc) = 0;
  free(*(void **)(this + 0x3d0));
  uVar2 = *(uint *)(this + 0x3cc);
  uVar5 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    iVar11 = -uVar2;
    uVar9 = uVar5;
    while( true ) {
      uVar6 = (ulong)((int)uVar9 - 1);
      lVar8 = *(long *)(this + 0x3c0);
      plVar4 = *(long **)(lVar8 + uVar6 * 8);
      memmove((void *)(lVar8 + uVar6 * 8),(void *)(lVar8 + uVar6 * 8 + 8),
              (long)((int)uVar5 + iVar11) << 3);
      *(int *)(this + 0x3cc) = *(int *)(this + 0x3cc) + -1;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
      if (uVar9 < 2) break;
      uVar5 = (ulong)*(uint *)(this + 0x3cc);
      iVar11 = iVar11 + 1;
      uVar9 = uVar9 - 1;
    }
  }
  *(undefined4 *)(this + 0x3cc) = 0;
  free(*(void **)(this + 0x3c0));
  uVar2 = *(uint *)(this + 0x3bc);
  uVar5 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    iVar11 = -uVar2;
    uVar9 = uVar5;
    while( true ) {
      uVar6 = (ulong)((int)uVar9 - 1);
      lVar8 = *(long *)(this + 0x3b0);
      plVar4 = *(long **)(lVar8 + uVar6 * 8);
      memmove((void *)(lVar8 + uVar6 * 8),(void *)(lVar8 + uVar6 * 8 + 8),
              (long)((int)uVar5 + iVar11) << 3);
      *(int *)(this + 0x3bc) = *(int *)(this + 0x3bc) + -1;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
      if (uVar9 < 2) break;
      uVar5 = (ulong)*(uint *)(this + 0x3bc);
      iVar11 = iVar11 + 1;
      uVar9 = uVar9 - 1;
    }
  }
  *(undefined4 *)(this + 0x3bc) = 0;
  free(*(void **)(this + 0x3b0));
  uVar2 = *(uint *)(this + 0x3ac);
  uVar5 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    iVar11 = -uVar2;
    uVar9 = uVar5;
    while( true ) {
      uVar6 = (ulong)((int)uVar9 - 1);
      lVar8 = *(long *)(this + 0x3a0);
      plVar4 = *(long **)(lVar8 + uVar6 * 8);
      memmove((void *)(lVar8 + uVar6 * 8),(void *)(lVar8 + uVar6 * 8 + 8),
              (long)((int)uVar5 + iVar11) << 3);
      *(int *)(this + 0x3ac) = *(int *)(this + 0x3ac) + -1;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
      if (uVar9 < 2) break;
      uVar5 = (ulong)*(uint *)(this + 0x3ac);
      iVar11 = iVar11 + 1;
      uVar9 = uVar9 - 1;
    }
  }
  *(undefined4 *)(this + 0x3ac) = 0;
  free(*(void **)(this + 0x3a0));
  uVar2 = *(uint *)(this + 0x39c);
  uVar5 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    iVar11 = -uVar2;
    uVar9 = uVar5;
    while( true ) {
      uVar6 = (ulong)((int)uVar9 - 1);
      lVar8 = *(long *)(this + 0x390);
      plVar4 = *(long **)(lVar8 + uVar6 * 8);
      memmove((void *)(lVar8 + uVar6 * 8),(void *)(lVar8 + uVar6 * 8 + 8),
              (long)((int)uVar5 + iVar11) << 3);
      *(int *)(this + 0x39c) = *(int *)(this + 0x39c) + -1;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
      if (uVar9 < 2) break;
      uVar5 = (ulong)*(uint *)(this + 0x39c);
      iVar11 = iVar11 + 1;
      uVar9 = uVar9 - 1;
    }
  }
  *(undefined4 *)(this + 0x39c) = 0;
  free(*(void **)(this + 0x390));
  Label::~Label((Label *)(this + 0x120));
  uVar2 = *(uint *)(this + 0x10c);
  uVar5 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    iVar11 = -uVar2;
    uVar9 = uVar5;
    while( true ) {
      uVar6 = (ulong)((int)uVar9 - 1);
      lVar8 = *(long *)(this + 0x100);
      plVar4 = *(long **)(lVar8 + uVar6 * 8);
      memmove((void *)(lVar8 + uVar6 * 8),(void *)(lVar8 + uVar6 * 8 + 8),
              (long)((int)uVar5 + iVar11) << 3);
      *(int *)(this + 0x10c) = *(int *)(this + 0x10c) + -1;
      ContainerDeletePolicy<juce::TextLayout::Line>::destroy(plVar4);
      if ((long)uVar9 < 2) break;
      uVar5 = (ulong)*(uint *)(this + 0x10c);
      iVar11 = iVar11 + 1;
      uVar9 = uVar9 - 1;
    }
  }
  *(undefined4 *)(this + 0x10c) = 0;
  free(*(void **)(this + 0x100));
  piVar10 = (int *)(*(long *)(this + 0xf8) + -0x10);
  if (piVar10 != &emptyString) {
    LOCK();
    iVar11 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar11 == 0) {
      operator_delete__(piVar10);
    }
  }
  TopLevelWindow::~TopLevelWindow((TopLevelWindow *)this);
  return;
}


