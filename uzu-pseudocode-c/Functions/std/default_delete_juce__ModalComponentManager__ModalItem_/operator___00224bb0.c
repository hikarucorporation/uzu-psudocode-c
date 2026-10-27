// Function : operator()
// Namespace: std:default_delete_juce__ModalComponentManager__ModalItem_
// Entry    : 00224bb0
// Prototype: undefined operator()(default_delete<juce::ModalComponentManager::ModalItem> * this)
// Body     : 00224bb0 - 00224c68


/* std::default_delete<juce::ModalComponentManager::ModalItem>::TEMPNAMEPLACEHOLDERVALUE(juce::ModalComponentManager::ModalItem*)
   const */

void __thiscall
std::default_delete<juce::ModalComponentManager::ModalItem>::operator()
          (default_delete<juce::ModalComponentManager::ModalItem> *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  
  if (this == (default_delete<juce::ModalComponentManager::ModalItem> *)0x0) {
    return;
  }
  if ((this[0x5d] != (default_delete<juce::ModalComponentManager::ModalItem>)0x0) &&
     (*(long **)(this + 0x40) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x40) + 8))();
  }
  uVar1 = *(uint *)(this + 0x54);
  uVar4 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    iVar7 = -uVar1;
    uVar6 = uVar4;
    while( true ) {
      uVar5 = (ulong)((int)uVar6 - 1);
      lVar2 = *(long *)(this + 0x48);
      plVar3 = *(long **)(lVar2 + uVar5 * 8);
      memmove((void *)(lVar2 + uVar5 * 8),(void *)(lVar2 + uVar5 * 8 + 8),
              (long)((int)uVar4 + iVar7) << 3);
      *(int *)(this + 0x54) = *(int *)(this + 0x54) + -1;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      if (uVar6 < 2) break;
      uVar4 = (ulong)*(uint *)(this + 0x54);
      iVar7 = iVar7 + 1;
      uVar6 = uVar6 - 1;
    }
  }
  *(undefined4 *)(this + 0x54) = 0;
  free(*(void **)(this + 0x48));
  juce::ComponentMovementWatcher::~ComponentMovementWatcher((ComponentMovementWatcher *)this);
  operator_delete(this);
  return;
}


