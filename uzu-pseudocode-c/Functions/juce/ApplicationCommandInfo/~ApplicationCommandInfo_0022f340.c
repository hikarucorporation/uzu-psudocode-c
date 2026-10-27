// Function : ~ApplicationCommandInfo
// Namespace: juce:ApplicationCommandInfo
// Entry    : 0022f340
// Prototype: undefined ~ApplicationCommandInfo(ApplicationCommandInfo * this)
// Body     : 0022f340 - 0022f3d8


/* juce::ApplicationCommandInfo::~ApplicationCommandInfo() */

void __thiscall juce::ApplicationCommandInfo::~ApplicationCommandInfo(ApplicationCommandInfo *this)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  *(undefined4 *)(this + 0x2c) = 0;
  free(*(void **)(this + 0x20));
  piVar3 = (int *)(*(long *)(this + 0x18) + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
      lVar2 = *(long *)(this + 0x10);
      goto joined_r0x0022f3a9;
    }
  }
  lVar2 = *(long *)(this + 0x10);
joined_r0x0022f3a9:
  piVar3 = (int *)(lVar2 + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
    }
  }
  piVar3 = (int *)(*(long *)(this + 8) + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
      return;
    }
  }
  return;
}


