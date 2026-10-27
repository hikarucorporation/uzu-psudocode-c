// Function : handleModifierKeysChange
// Namespace: juce:ComponentPeer
// Entry    : 002cf2d0
// Prototype: undefined handleModifierKeysChange(ComponentPeer * this)
// Body     : 002cf2d0 - 002cf3d2


/* juce::ComponentPeer::handleModifierKeysChange() */

void __thiscall juce::ComponentPeer::handleModifierKeysChange(ComponentPeer *this)

{
  int *piVar1;
  long *plVar2;
  ushort uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  Desktop *this_00;
  bool bVar7;
  
  if (Desktop::instance == (Desktop *)0x0) {
    this_00 = operator_new(0x1d0);
                    /* try { // try from 002cf2f1 to 002cf2f8 has its CatchHandler @ 002cf3d3 */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  lVar4 = **(long **)(*(long *)(Desktop::instance + 0x40) + 0x28);
  plVar6 = Component::currentlyFocusedComponent;
  if ((*(long *)(lVar4 + 0x48) != 0) &&
     (plVar5 = *(long **)(*(long *)(lVar4 + 0x48) + 0x10), plVar5 != (long *)0x0)) {
    plVar6 = plVar5;
  }
  if (plVar6 == (long *)0x0) {
    plVar6 = *(long **)(this + 8);
    uVar3 = *(ushort *)(plVar6 + 0x1d);
  }
  else {
    uVar3 = *(ushort *)(plVar6 + 0x1d);
  }
  if (((uVar3 & 0x18) != 8) && ((*(ushort *)(lVar4 + 0x3c) & 0x1f0) == 0)) {
    piVar1 = (int *)(*(long *)(lVar4 + 8) + 0x18);
    LOCK();
    bVar7 = *piVar1 == 0;
    if (bVar7) {
      *piVar1 = 1;
    }
    UNLOCK();
    if (bVar7) {
      plVar5 = *(long **)(lVar4 + 8);
      if (((MessageManager::instance == 0) || (*(int *)(MessageManager::instance + 8) != 0)) ||
         (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
        LOCK();
        *(undefined4 *)(*(long *)(lVar4 + 8) + 0x18) = 0;
        UNLOCK();
      }
      else {
        InternalMessageQueue::postMessage
                  ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,(long)plVar5
                  );
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x002cf3be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x118))(plVar6,&ModifierKeys::currentModifiers);
  return;
}


