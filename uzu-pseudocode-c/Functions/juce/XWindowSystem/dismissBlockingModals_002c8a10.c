// Function : dismissBlockingModals
// Namespace: juce:XWindowSystem
// Entry    : 002c8a10
// Prototype: undefined dismissBlockingModals(long * param_1)
// Body     : 002c8a10 - 002c8b74


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::XWindowSystem::dismissBlockingModals(juce::LinuxComponentPeer*) const */

void __cdecl juce::XWindowSystem::dismissBlockingModals(long *param_1)

{
  long *plVar1;
  char cVar2;
  ulong uVar3;
  Desktop *this;
  long *plVar4;
  long lVar5;
  
  if (ModalComponentManager::singletonHolder == 0) {
    return;
  }
  if ((int)*(uint *)(ModalComponentManager::singletonHolder + 0x24) < 1) {
    return;
  }
  uVar3 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
  while (lVar5 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                          (ulong)((int)uVar3 - 2) * 8), *(char *)(lVar5 + 0x5c) == '\0') {
    uVar3 = uVar3 - 1;
    if (uVar3 < 2) {
      return;
    }
  }
  plVar1 = *(long **)(lVar5 + 0x40);
  if (plVar1 == (long *)0x0) {
    return;
  }
  if (plVar1 == param_1) {
    return;
  }
  while (param_1 != (long *)0x0) {
    param_1 = (long *)param_1[6];
    if (param_1 == plVar1) {
      return;
    }
  }
  cVar2 = (**(code **)(*plVar1 + 0x170))();
  if (cVar2 != '\0') {
    return;
  }
  if (ModalComponentManager::singletonHolder == 0) {
    return;
  }
  if ((int)*(uint *)(ModalComponentManager::singletonHolder + 0x24) < 1) {
    return;
  }
  uVar3 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
  while (lVar5 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                          (ulong)((int)uVar3 - 2) * 8), *(char *)(lVar5 + 0x5c) == '\0') {
    uVar3 = uVar3 - 1;
    if (uVar3 < 2) {
      return;
    }
  }
  plVar1 = *(long **)(lVar5 + 0x40);
  if (plVar1 == (long *)0x0) {
    return;
  }
  plVar4 = plVar1;
  while ((*(ushort *)(plVar4 + 0x1d) & 1) == 0) {
    plVar4 = (long *)plVar4[6];
    if (plVar4 == (long *)0x0) {
      return;
    }
  }
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002c8b0e to 002c8b17 has its CatchHandler @ 002c8b88 */
    this = operator_new(0x1d0);
                    /* try { // try from 002c8b1b to 002c8b22 has its CatchHandler @ 002c8b75 */
    Desktop::Desktop(this);
    Desktop::instance = this;
  }
  if ((long)*(int *)(Desktop::instance + 0xdc) == 0) {
    return;
  }
  lVar5 = 0;
  do {
    if (*(long **)(*(long *)(*(long *)(Desktop::instance + 0xd0) + lVar5) + 8) == plVar4) {
      if ((*(byte *)(*(long *)(*(long *)(Desktop::instance + 0xd0) + lVar5) + 0x10) & 2) == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x002c8b6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x178))(plVar1);
      return;
    }
    lVar5 = lVar5 + 8;
  } while ((long)*(int *)(Desktop::instance + 0xdc) * 8 != lVar5);
  return;
}


