// Function : getTipFor
// Namespace: juce:TooltipWindow
// Entry    : 002e81c0
// Prototype: undefined8 * getTipFor(undefined8 * param_1, undefined8 param_2, long * param_3)
// Body     : 002e81c0 - 002e829b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::TooltipWindow::getTipFor(juce::Component&) */

undefined8 * __cdecl
juce::TooltipWindow::getTipFor(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  if (((LinuxComponentPeer::isActiveApplication != '\x01') ||
      (((ushort)ModifierKeys::currentModifiers & 0x1f0) != 0)) ||
     (plVar4 = (long *)__dynamic_cast(param_3,&Component::typeinfo,&TooltipClient::typeinfo,
                                      0xfffffffffffffffe), plVar4 == (long *)0x0)) {
LAB_002e81df:
    *param_1 = &DAT_0061ac58;
    return param_1;
  }
  if ((ModalComponentManager::singletonHolder != 0) &&
     (0 < (int)*(uint *)(ModalComponentManager::singletonHolder + 0x24))) {
    uVar5 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
    do {
      lVar1 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                       (ulong)((int)uVar5 - 2) * 8);
      if (*(char *)(lVar1 + 0x5c) != '\0') {
        plVar2 = *(long **)(lVar1 + 0x40);
        if ((plVar2 != (long *)0x0) && (plVar2 != param_3)) {
          plVar6 = param_3;
          goto LAB_002e8276;
        }
        break;
      }
      uVar5 = uVar5 - 1;
    } while (1 < uVar5);
  }
  goto LAB_002e8257;
  while (plVar6 = (long *)plVar6[6], plVar6 != plVar2) {
LAB_002e8276:
    if (plVar6 == (long *)0x0) {
      cVar3 = (**(code **)(*plVar2 + 0x170))(plVar2,param_3);
      if (cVar3 == '\0') goto LAB_002e81df;
      break;
    }
  }
LAB_002e8257:
  (**(code **)(*plVar4 + 0x10))(param_1,plVar4);
  return param_1;
}


