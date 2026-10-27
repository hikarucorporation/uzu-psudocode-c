// Function : ~PopupMenu
// Namespace: juce:PopupMenu
// Entry    : 00276340
// Prototype: undefined ~PopupMenu(PopupMenu * this)
// Body     : 00276340 - 002763a0


/* juce::PopupMenu::~PopupMenu() */

void __thiscall juce::PopupMenu::~PopupMenu(PopupMenu *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = *(long **)(this + 0x10);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  if (0 < *(int *)(this + 0xc)) {
    lVar4 = 0;
    lVar3 = 0;
    do {
      Item::~Item((Item *)(*(long *)this + lVar4));
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x70;
    } while (lVar3 < *(int *)(this + 0xc));
  }
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  return;
}


