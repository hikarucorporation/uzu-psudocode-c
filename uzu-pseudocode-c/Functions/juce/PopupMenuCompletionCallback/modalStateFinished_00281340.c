// Function : modalStateFinished
// Namespace: juce:PopupMenuCompletionCallback
// Entry    : 00281340
// Prototype: undefined modalStateFinished(PopupMenuCompletionCallback * this, int param_1)
// Body     : 00281340 - 002814d4


/* juce::PopupMenuCompletionCallback::modalStateFinished(int) */

void __thiscall
juce::PopupMenuCompletionCallback::modalStateFinished(PopupMenuCompletionCallback *this,int param_1)

{
  int iVar1;
  long *plVar2;
  Component *this_00;
  char cVar3;
  uint uVar4;
  Desktop *this_01;
  Component *this_02;
  Component *pCVar5;
  long lVar6;
  int local_48;
  undefined8 local_44;
  undefined8 local_38;
  undefined5 uStack_30;
  undefined3 uStack_2b;
  undefined5 uStack_28;
  undefined4 local_20;
  
  if ((param_1 != 0) && (*(long **)(this + 8) != (long *)0x0)) {
    local_44 = 0x200000000;
    local_20 = 0;
    local_38 = 0;
    uStack_30 = 0;
    uStack_2b = 0;
    uStack_28 = 0;
    local_48 = param_1;
    ApplicationCommandManager::invoke(*(long **)(this + 8),&local_48);
  }
  plVar2 = *(long **)(this + 0x10);
  *(undefined8 *)(this + 0x10) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  this_00 = Component::currentlyFocusedComponent;
  if (PopupMenuSettings::menuWasHiddenBecauseOfAppChange != '\0') {
    return;
  }
  if (Component::currentlyFocusedComponent == (Component *)0x0) {
    return;
  }
  pCVar5 = Component::currentlyFocusedComponent;
  while ((*(ushort *)(pCVar5 + 0xe8) & 1) == 0) {
    pCVar5 = *(Component **)(pCVar5 + 0x30);
    if (pCVar5 == (Component *)0x0) {
      return;
    }
  }
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00281406 to 0028140f has its CatchHandler @ 002814e8 */
    this_01 = operator_new(0x1d0);
                    /* try { // try from 00281413 to 0028141a has its CatchHandler @ 002814d5 */
    Desktop::Desktop(this_01);
    iVar1 = *(int *)(this_01 + 0xdc);
    Desktop::instance = this_01;
  }
  else {
    iVar1 = *(int *)(Desktop::instance + 0xdc);
  }
  if ((long)iVar1 == 0) {
    return;
  }
  lVar6 = 0;
  while ((Component *)(*(long **)(*(long *)(Desktop::instance + 0xd0) + lVar6))[1] != pCVar5) {
    lVar6 = lVar6 + 8;
    if ((long)iVar1 * 8 == lVar6) {
      return;
    }
  }
  cVar3 = (**(code **)(**(long **)(*(long *)(Desktop::instance + 0xd0) + lVar6) + 0x78))();
  if (cVar3 != '\0') {
    return;
  }
  pCVar5 = this_00;
  do {
    this_02 = pCVar5;
    pCVar5 = *(Component **)(this_02 + 0x30);
  } while (pCVar5 != (Component *)0x0);
  Component::toFront(this_02,'\x01');
  uVar4 = Component::isShowing(this_00);
  pCVar5 = Component::currentlyFocusedComponent;
  if ((char)uVar4 == '\0') {
    return;
  }
  while( true ) {
    if (pCVar5 == this_00) {
      return;
    }
    if (pCVar5 == (Component *)0x0) break;
    pCVar5 = *(Component **)(pCVar5 + 0x30);
  }
  Component::grabKeyboardFocusInternal(this_00,2,'\x01',0);
  return;
}


