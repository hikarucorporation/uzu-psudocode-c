// Function : setCaretPosition
// Namespace: juce:CaretComponent
// Entry    : 002b6ee0
// Prototype: undefined setCaretPosition(CaretComponent * this, int * param_1)
// Body     : 002b6ee0 - 002b6fd0


/* juce::CaretComponent::setCaretPosition(juce::Rectangle<int> const&) */

void __thiscall juce::CaretComponent::setCaretPosition(CaretComponent *this,int *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined1 uVar4;
  ulong uVar5;
  long *plVar6;
  
  iVar1 = *(int *)(this + 0x100);
  *(undefined4 *)(this + 0x100) = 0x17c;
  if (iVar1 == 0) {
                    /* try { // try from 002b6f12 to 002b6f16 has its CatchHandler @ 002b6fd1 */
    Timer::TimerThread::addTimer(*(TimerThread **)(this + 0x108),(long)(this + 0xf0));
  }
  else {
    Timer::TimerThread::resetTimerCounter(*(TimerThread **)(this + 0x108),(long)(this + 0xf0));
  }
  plVar6 = *(long **)(this + 0x118);
  uVar4 = 1;
  if (plVar6 != (long *)0x0) {
    if (Component::currentlyFocusedComponent == plVar6) {
      if ((ModalComponentManager::singletonHolder != 0) &&
         (0 < (int)*(uint *)(ModalComponentManager::singletonHolder + 0x24))) {
        uVar5 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
        do {
          lVar2 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                           (ulong)((int)uVar5 - 2) * 8);
          if (*(char *)(lVar2 + 0x5c) != '\0') {
            plVar3 = *(long **)(lVar2 + 0x40);
            if ((plVar3 != (long *)0x0) && (plVar3 != plVar6)) goto LAB_002b6fb0;
            break;
          }
          uVar5 = uVar5 - 1;
        } while (1 < uVar5);
      }
    }
    else {
      uVar4 = 0;
    }
  }
  goto LAB_002b6f30;
  while (plVar6 = (long *)plVar6[6], plVar6 != plVar3) {
LAB_002b6fb0:
    if (plVar6 == (long *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x170))();
      break;
    }
  }
LAB_002b6f30:
  (**(code **)(*(long *)this + 0x60))(this,uVar4);
  Component::setBounds((Component *)this,*param_1,param_1[1],2,param_1[3]);
  return;
}


