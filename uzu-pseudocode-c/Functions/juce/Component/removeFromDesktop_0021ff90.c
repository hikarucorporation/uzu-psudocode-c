// Function : removeFromDesktop
// Namespace: juce:Component
// Entry    : 0021ff90
// Prototype: undefined removeFromDesktop(Component * this)
// Body     : 0021ff90 - 00220125


/* juce::Component::removeFromDesktop() */

void __thiscall juce::Component::removeFromDesktop(Component *this)

{
  uint uVar1;
  long *plVar2;
  Desktop *this_00;
  void *pvVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  
  if ((*(ushort *)(this + 0xe8) & 1) != 0) {
    getAccessibilityHandler(this);
    detail::ComponentHelpers::releaseAllCachedImageResources((long)this);
    if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0021ffcd to 0021ffd6 has its CatchHandler @ 0022014c */
      this_00 = operator_new(0x1d0);
                    /* try { // try from 0021ffda to 0021ffe1 has its CatchHandler @ 00220126 */
      Desktop::Desktop(this_00);
      iVar7 = *(int *)(this_00 + 0xdc);
    }
    else {
      iVar7 = *(int *)(Desktop::instance + 0xdc);
      this_00 = Desktop::instance;
    }
    Desktop::instance = this_00;
    if ((long)iVar7 != 0) {
      lVar8 = 0;
      do {
        plVar2 = *(long **)(*(long *)(this_00 + 0xd0) + lVar8);
        if ((Component *)plVar2[1] == this) {
          this[0xe8] = (Component)((byte)this[0xe8] & 0xfe);
          (**(code **)(*plVar2 + 8))();
          this_00 = Desktop::instance;
          goto joined_r0x00220059;
        }
        lVar8 = lVar8 + 8;
      } while ((long)iVar7 * 8 != lVar8);
    }
    this[0xe8] = (Component)((byte)this[0xe8] & 0xfe);
joined_r0x00220059:
    if (this_00 == (Desktop *)0x0) {
      this_00 = operator_new(0x1d0);
                    /* try { // try from 00220068 to 0022006f has its CatchHandler @ 00220139 */
      Desktop::Desktop(this_00);
      uVar1 = *(uint *)(this_00 + 0xcc);
      Desktop::instance = this_00;
    }
    else {
      uVar1 = *(uint *)(this_00 + 0xcc);
    }
    if (0 < (int)uVar1) {
      lVar8 = *(long *)(this_00 + 0xc0);
      uVar5 = 0;
      do {
        if (*(Component **)(lVar8 + uVar5 * 8) == this) {
          memmove((void *)(lVar8 + uVar5 * 8),(void *)(lVar8 + uVar5 * 8 + 8),
                  (long)(int)(~(uint)uVar5 + uVar1) << 3);
          iVar7 = *(int *)(this_00 + 0xcc);
          uVar1 = iVar7 - 1;
          *(uint *)(this_00 + 0xcc) = uVar1;
          iVar4 = iVar7 * 2 + -2;
          iVar7 = 0;
          if (-1 < iVar4) {
            iVar7 = iVar4;
          }
          if (*(int *)(this_00 + 200) <= iVar7) {
            return;
          }
          uVar6 = 8;
          if (8 < (int)uVar1) {
            uVar6 = uVar1;
          }
          if ((int)uVar6 < *(int *)(this_00 + 200)) {
            pvVar3 = realloc(*(void **)(this_00 + 0xc0),(ulong)uVar6 << 3);
            *(void **)(this_00 + 0xc0) = pvVar3;
            *(uint *)(this_00 + 200) = uVar6;
            return;
          }
          return;
        }
        uVar5 = uVar5 + 1;
      } while (uVar1 != uVar5);
    }
  }
  return;
}


