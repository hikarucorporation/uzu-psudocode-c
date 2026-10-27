// Function : timerCallback
// Namespace: juce:CaretComponent
// Entry    : 002b6fe0
// Prototype: undefined timerCallback(long * param_1, undefined8 param_2, long param_3)
// Body     : 002b6fe0 - 002b7092


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::CaretComponent::timerCallback() */

void __cdecl juce::CaretComponent::timerCallback(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  ulong uVar3;
  long *plVar4;
  long extraout_RDX;
  bool bVar5;
  
  plVar4 = (long *)param_1[0x23];
  if (plVar4 != (long *)0x0) {
    if (Component::currentlyFocusedComponent != plVar4) {
LAB_002b6ff9:
      bVar5 = false;
      goto LAB_002b7043;
    }
    if ((ModalComponentManager::singletonHolder != 0) &&
       (0 < (int)*(uint *)(ModalComponentManager::singletonHolder + 0x24))) {
      uVar3 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
      do {
        param_3 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                           (ulong)((int)uVar3 - 2) * 8);
        if (*(char *)(param_3 + 0x5c) != '\0') {
          plVar1 = *(long **)(param_3 + 0x40);
          if ((plVar1 != (long *)0x0) && (plVar1 != plVar4)) goto LAB_002b7070;
          break;
        }
        uVar3 = uVar3 - 1;
      } while (1 < uVar3);
    }
  }
  goto LAB_002b7037;
  while (plVar4 = (long *)plVar4[6], plVar4 != plVar1) {
LAB_002b7070:
    if (plVar4 == (long *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x170))();
      param_3 = extraout_RDX;
      if (cVar2 == '\0') goto LAB_002b6ff9;
      break;
    }
  }
LAB_002b7037:
  bVar5 = (*(ushort *)(param_1 + 0x1d) & 2) == 0;
LAB_002b7043:
                    /* WARNING: Could not recover jumptable at 0x002b7051. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))(param_1,bVar5,param_3,*(code **)(*param_1 + 0x60));
  return;
}


