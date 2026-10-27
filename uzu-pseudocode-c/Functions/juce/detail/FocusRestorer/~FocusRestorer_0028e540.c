// Function : ~FocusRestorer
// Namespace: juce:detail:FocusRestorer
// Entry    : 0028e540
// Prototype: undefined ~FocusRestorer(FocusRestorer * this)
// Body     : 0028e540 - 0028e638


/* juce::detail::FocusRestorer::~FocusRestorer() */

void __thiscall juce::detail::FocusRestorer::~FocusRestorer(FocusRestorer *this)

{
  Component *this_00;
  long lVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  
  if (*(long *)this == 0) {
    return;
  }
  this_00 = *(Component **)(*(long *)this + 0x10);
                    /* try { // try from 0028e560 to 0028e614 has its CatchHandler @ 0028e639 */
  if ((this_00 == (Component *)0x0) || (uVar4 = Component::isShowing(this_00), (char)uVar4 == '\0'))
  goto LAB_0028e615;
  if (*(long *)this == 0) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = *(long **)(*(long *)this + 0x10);
  }
  if ((ModalComponentManager::singletonHolder != 0) &&
     (0 < (int)*(uint *)(ModalComponentManager::singletonHolder + 0x24))) {
    uVar5 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
    do {
      lVar1 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                       (ulong)((int)uVar5 - 2) * 8);
      if (*(char *)(lVar1 + 0x5c) != '\0') {
        plVar2 = *(long **)(lVar1 + 0x40);
        if ((plVar2 != (long *)0x0) && (plVar2 != plVar6)) goto LAB_0028e5e0;
        break;
      }
      uVar5 = uVar5 - 1;
    } while (1 < uVar5);
  }
  goto LAB_0028e5fd;
  while (plVar6 = (long *)plVar6[6], plVar6 != plVar2) {
LAB_0028e5e0:
    if (plVar6 == (long *)0x0) {
      cVar3 = (**(code **)(*plVar2 + 0x170))();
      if (cVar3 == '\0') goto LAB_0028e615;
      break;
    }
  }
LAB_0028e5fd:
  Component::grabKeyboardFocusInternal(*(Component **)(*(long *)this + 0x10),2,'\x01',0);
LAB_0028e615:
  plVar6 = *(long **)this;
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0028e62e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 8))();
      return;
    }
  }
  return;
}


