// Function : parameterGestureChanged
// Namespace: juce:JuceVST3EditController:OwnedParameterListener
// Entry    : 001af9f0
// Prototype: undefined parameterGestureChanged(OwnedParameterListener * this, undefined8 param_1, int param_2)
// Body     : 001af9f0 - 001afa63


/* juce::JuceVST3EditController::OwnedParameterListener::parameterGestureChanged(int, bool) */

void __thiscall
juce::JuceVST3EditController::OwnedParameterListener::parameterGestureChanged
          (OwnedParameterListener *this,undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  long *plVar2;
  MessageManager *pMVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)(this + 8);
  uVar1 = *(undefined4 *)(this + 0x10);
  if (param_2 == 0) {
    if (*(char *)(lVar5 + 0x62b0) != '\0') {
      return;
    }
    pMVar3 = (MessageManager *)MessageManager::getInstance();
    uVar4 = MessageManager::isThisTheMessageThread(pMVar3);
    if ((char)uVar4 == '\0') {
      return;
    }
    plVar2 = *(long **)(lVar5 + 0x40);
    lVar5 = 5;
  }
  else {
    if (*(char *)(lVar5 + 0x62b0) != '\0') {
      return;
    }
    pMVar3 = (MessageManager *)MessageManager::getInstance();
    uVar4 = MessageManager::isThisTheMessageThread(pMVar3);
    if ((char)uVar4 == '\0') {
      return;
    }
    plVar2 = *(long **)(lVar5 + 0x40);
    lVar5 = 3;
  }
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001afa5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar5 * 8))(plVar2,uVar1);
  return;
}


