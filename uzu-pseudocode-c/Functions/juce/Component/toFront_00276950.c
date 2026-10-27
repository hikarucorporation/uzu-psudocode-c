// Function : toFront
// Namespace: juce:Component
// Entry    : 00276950
// Prototype: undefined toFront(Component * this, char param_1)
// Body     : 00276950 - 00276b0a


/* juce::Component::toFront(bool) */

void __thiscall juce::Component::toFront(Component *this,char param_1)

{
  int iVar1;
  Component *pCVar2;
  uint uVar3;
  uint uVar4;
  Desktop *this_00;
  ulong uVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  
  if ((*(uint3 *)(this + 0xe8) & 1) != 0) {
    if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002769c1 to 002769ca has its CatchHandler @ 00276b1e */
      this_00 = operator_new(0x1d0);
                    /* try { // try from 002769ce to 002769d5 has its CatchHandler @ 00276b0b */
      Desktop::Desktop(this_00);
      iVar1 = *(int *)(this_00 + 0xdc);
      Desktop::instance = this_00;
    }
    else {
      iVar1 = *(int *)(Desktop::instance + 0xdc);
    }
    if ((long)iVar1 == 0) {
      return;
    }
    lVar10 = 0;
    while (plVar7 = *(long **)(*(long *)(Desktop::instance + 0xd0) + lVar10),
          (Component *)plVar7[1] != this) {
      lVar10 = lVar10 + 8;
      if ((long)iVar1 * 8 == lVar10) {
        return;
      }
    }
    (**(code **)(*plVar7 + 0xd8))(plVar7,param_1);
    pCVar2 = currentlyFocusedComponent;
    if (param_1 == '\0') {
      return;
    }
    while( true ) {
      if (pCVar2 == this) {
        return;
      }
      if (pCVar2 == (Component *)0x0) break;
      pCVar2 = *(Component **)(pCVar2 + 0x30);
    }
    goto LAB_00276aee;
  }
  pCVar2 = *(Component **)(this + 0x30);
  if (pCVar2 == (Component *)0x0) {
    return;
  }
  uVar4 = *(uint *)(pCVar2 + 100);
  uVar5 = (ulong)uVar4;
  if ((int)uVar4 < 1) {
    if (uVar5 != 0) {
      plVar11 = *(long **)(pCVar2 + 0x58);
      plVar7 = plVar11 + (int)uVar4;
      goto LAB_00276a6b;
    }
  }
  else {
    plVar11 = *(long **)(pCVar2 + 0x58);
    if ((Component *)plVar11[uVar4 - 1] != this) {
      plVar7 = plVar11 + uVar5;
LAB_00276a6b:
      uVar9 = 0;
      plVar8 = plVar11;
      do {
        if ((Component *)*plVar8 == this) {
          if (-1 < (int)uVar9) {
            uVar3 = 0xffffffff;
            if ((*(uint3 *)(this + 0xe8) & 0x800) != 0) goto LAB_00276ad0;
            uVar6 = 1;
            if ((int)uVar4 < 1) {
              uVar6 = uVar4;
            }
            goto LAB_00276ab0;
          }
          break;
        }
        plVar8 = plVar8 + 1;
        uVar9 = uVar9 + 1;
      } while (plVar8 != plVar7);
    }
  }
LAB_00276ad5:
  if (param_1 != '\0') {
    internalBroughtToFront(this);
    uVar4 = isShowing(this);
    if ((char)uVar4 != '\0') {
LAB_00276aee:
      grabKeyboardFocusInternal(this,2,'\x01',0);
      return;
    }
  }
  return;
  while( true ) {
    uVar5 = uVar5 - 1;
    uVar3 = (uint)uVar5;
    if ((*(ushort *)(plVar11[uVar5 & 0xffffffff] + 0xe8) & 0x800) == 0) break;
LAB_00276ab0:
    uVar3 = uVar6 - 1;
    if ((int)uVar5 < 2) break;
  }
LAB_00276ad0:
  reorderChildInternal(pCVar2,uVar9,uVar3);
  goto LAB_00276ad5;
}


