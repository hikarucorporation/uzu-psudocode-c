// Function : updateState
// Namespace: juce:Button
// Entry    : 00230f70
// Prototype: uint updateState(Button * this, byte param_1, char param_2)
// Body     : 00230f70 - 0023114b


/* juce::Button::updateState(bool, bool) */

uint __thiscall juce::Button::updateState(Button *this,byte param_1,char param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  char cVar3;
  Button *pBVar4;
  ulong uVar5;
  Button *pBVar6;
  uint uVar7;
  uint uVar8;
  timespec local_30;
  
  uVar8 = 0;
  pBVar4 = this;
  do {
    if ((*(ushort *)(pBVar4 + 0xe8) & 0x8000) != 0) goto LAB_00231032;
    pBVar4 = *(Button **)(pBVar4 + 0x30);
  } while (pBVar4 != (Button *)0x0);
  if ((*(ushort *)(this + 0xe8) & 2) == 0) goto LAB_00231032;
  if ((ModalComponentManager::singletonHolder != 0) &&
     (0 < (int)*(uint *)(ModalComponentManager::singletonHolder + 0x24))) {
    uVar5 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
    do {
      lVar1 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                       (ulong)((int)uVar5 - 2) * 8);
      if (*(char *)(lVar1 + 0x5c) != '\0') {
        pBVar4 = *(Button **)(lVar1 + 0x40);
        if ((pBVar4 != (Button *)0x0) && (pBVar4 != this)) {
          pBVar6 = this;
          goto LAB_00231120;
        }
        break;
      }
      uVar5 = uVar5 - 1;
    } while (1 < uVar5);
  }
  goto LAB_00230ffb;
  while (pBVar6 = *(Button **)(pBVar6 + 0x30), pBVar6 != pBVar4) {
LAB_00231120:
    if (pBVar6 == (Button *)0x0) {
      cVar3 = (**(code **)(*(long *)pBVar4 + 0x170))();
      if (cVar3 == '\0') goto LAB_00231032;
      break;
    }
  }
LAB_00230ffb:
  uVar8 = 2;
  if (((param_2 == '\0') ||
      ((param_1 == 0 && (*(int *)(this + 0x1b8) != 2 || this[0x1f6] == (Button)0x0)))) &&
     (this[0x1f5] == (Button)0x0)) {
    uVar8 = (uint)param_1;
  }
LAB_00231032:
  if (*(uint *)(this + 0x1b8) != uVar8) {
    *(uint *)(this + 0x1b8) = uVar8;
    Component::internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
    if (*(int *)(this + 0x1b8) == 2) {
      uVar7 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
      if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
        clock_gettime(1,&local_30);
        auVar2 = SEXT816(local_30.tv_nsec / 1000 + local_30.tv_sec * 1000000) *
                 SEXT816(0x20c49ba5e353f7cf);
        uVar7 = (int)(auVar2._8_8_ >> 7) - (auVar2._12_4_ >> 0x1f);
        if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar7) ||
           (uVar7 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
          LOCK();
          UNLOCK();
          _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar7;
        }
      }
      *(uint *)(this + 400) = uVar7;
      *(undefined4 *)(this + 0x194) = 0;
    }
    sendStateMessage(this);
  }
  return uVar8;
}


