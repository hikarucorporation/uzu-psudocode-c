// Function : isShowing
// Namespace: juce:Component
// Entry    : 001e20c0
// Prototype: uint isShowing(Component * this)
// Body     : 001e20c0 - 001e2179


/* juce::Component::isShowing() const */

uint __thiscall juce::Component::isShowing(Component *this)

{
  int iVar1;
  uint uVar2;
  Desktop *this_00;
  long lVar3;
  Component *pCVar4;
  
  do {
    pCVar4 = this;
    if ((*(uint3 *)(pCVar4 + 0xe8) & 2) == 0) {
      return 0;
    }
    this = *(Component **)(pCVar4 + 0x30);
  } while (*(Component **)(pCVar4 + 0x30) != (Component *)0x0);
  if ((*(uint3 *)(pCVar4 + 0xe8) & 1) != 0) {
    if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 001e2111 to 001e211a has its CatchHandler @ 001e218d */
      this_00 = operator_new(0x1d0);
                    /* try { // try from 001e211e to 001e2125 has its CatchHandler @ 001e217a */
      Desktop::Desktop(this_00);
      iVar1 = *(int *)(this_00 + 0xdc);
      Desktop::instance = this_00;
    }
    else {
      iVar1 = *(int *)(Desktop::instance + 0xdc);
    }
    if ((long)iVar1 != 0) {
      lVar3 = 0;
      do {
        if ((Component *)(*(long **)(*(long *)(Desktop::instance + 0xd0) + lVar3))[1] == pCVar4) {
          uVar2 = (**(code **)(**(long **)(*(long *)(Desktop::instance + 0xd0) + lVar3) + 0x78))();
          return uVar2 ^ 1;
        }
        lVar3 = lVar3 + 8;
      } while ((long)iVar1 * 8 != lVar3);
    }
  }
  return 0;
}


