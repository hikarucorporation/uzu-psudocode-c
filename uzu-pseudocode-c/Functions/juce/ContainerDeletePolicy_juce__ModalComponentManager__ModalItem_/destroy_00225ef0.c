// Function : destroy
// Namespace: juce:ContainerDeletePolicy_juce__ModalComponentManager__ModalItem_
// Entry    : 00225ef0
// Prototype: undefined destroy(ComponentMovementWatcher * param_1)
// Body     : 00225ef0 - 00225fa8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ContainerDeletePolicy<juce::ModalComponentManager::ModalItem>::destroy(juce::ModalComponentManager::ModalItem*)
    */

void __cdecl
juce::ContainerDeletePolicy<juce::ModalComponentManager::ModalItem>::destroy
          (ComponentMovementWatcher *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  
  if (param_1 == (ComponentMovementWatcher *)0x0) {
    return;
  }
  if ((param_1[0x5d] != (ComponentMovementWatcher)0x0) &&
     (*(long **)(param_1 + 0x40) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x40) + 8))();
  }
  uVar1 = *(uint *)(param_1 + 0x54);
  uVar4 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    iVar7 = -uVar1;
    uVar6 = uVar4;
    while( true ) {
      uVar5 = (ulong)((int)uVar6 - 1);
      lVar2 = *(long *)(param_1 + 0x48);
      plVar3 = *(long **)(lVar2 + uVar5 * 8);
      memmove((void *)(lVar2 + uVar5 * 8),(void *)(lVar2 + uVar5 * 8 + 8),
              (long)((int)uVar4 + iVar7) << 3);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      if (uVar6 < 2) break;
      uVar4 = (ulong)*(uint *)(param_1 + 0x54);
      iVar7 = iVar7 + 1;
      uVar6 = uVar6 - 1;
    }
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  free(*(void **)(param_1 + 0x48));
  ComponentMovementWatcher::~ComponentMovementWatcher(param_1);
  operator_delete(param_1);
  return;
}


