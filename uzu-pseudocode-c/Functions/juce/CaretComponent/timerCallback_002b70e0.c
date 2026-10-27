// Function : timerCallback
// Namespace: juce:CaretComponent
// Entry    : 002b70e0
// Prototype: undefined timerCallback(CaretComponent * this, undefined8 param_1, long param_2)
// Body     : 002b70e0 - 002b7192


/* non-virtual thunk to juce::CaretComponent::timerCallback() */

void __thiscall
juce::CaretComponent::timerCallback(CaretComponent *this,undefined8 param_1,long param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  char cVar2;
  ulong uVar3;
  long *plVar4;
  long extraout_RDX;
  bool bVar5;
  
  plVar4 = *(long **)(this + 0x28);
  if (plVar4 != (long *)0x0) {
    if (Component::currentlyFocusedComponent != plVar4) {
LAB_002b70fd:
      bVar5 = false;
      goto LAB_002b7143;
    }
    if ((ModalComponentManager::singletonHolder != 0) &&
       (0 < (int)*(uint *)(ModalComponentManager::singletonHolder + 0x24))) {
      uVar3 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
      do {
        param_2 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                           (ulong)((int)uVar3 - 2) * 8);
        if (*(char *)(param_2 + 0x5c) != '\0') {
          plVar1 = *(long **)(param_2 + 0x40);
          if ((plVar1 != (long *)0x0) && (plVar1 != plVar4)) goto LAB_002b7170;
          break;
        }
        uVar3 = uVar3 - 1;
      } while (1 < uVar3);
    }
  }
  goto LAB_002b7137;
  while (plVar4 = (long *)plVar4[6], plVar4 != plVar1) {
LAB_002b7170:
    if (plVar4 == (long *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x170))();
      param_2 = extraout_RDX;
      if (cVar2 == '\0') goto LAB_002b70fd;
      break;
    }
  }
LAB_002b7137:
  bVar5 = (*(ushort *)(this + -8) & 2) == 0;
LAB_002b7143:
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(this + -0xf0) + 0x60);
                    /* WARNING: Could not recover jumptable at 0x002b7151. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this + -0xf0,bVar5,param_2,UNRECOVERED_JUMPTABLE);
  return;
}


