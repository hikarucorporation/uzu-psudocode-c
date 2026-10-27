// Function : ~LocalisedStrings
// Namespace: juce:LocalisedStrings
// Entry    : 00486bd0
// Prototype: undefined ~LocalisedStrings(LocalisedStrings * this)
// Body     : 00486bd0 - 00486d42


/* juce::LocalisedStrings::~LocalisedStrings() */

void __thiscall juce::LocalisedStrings::~LocalisedStrings(LocalisedStrings *this)

{
  int iVar1;
  LocalisedStrings *this_00;
  long lVar2;
  int *piVar3;
  
  this_00 = *(LocalisedStrings **)(this + 0x40);
  if (this_00 != (LocalisedStrings *)0x0) {
    ~LocalisedStrings(this_00);
    operator_delete(this_00);
  }
  *(undefined8 *)(this + 0x40) = 0;
  if (0 < *(int *)(this + 0x34)) {
    lVar2 = 0;
    do {
      piVar3 = (int *)(*(long *)(*(long *)(this + 0x28) + lVar2 * 8) + -0x10);
      if (piVar3 != &emptyString) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar3);
        }
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 0x34));
  }
  *(undefined4 *)(this + 0x34) = 0;
  free(*(void **)(this + 0x28));
  if (0 < *(int *)(this + 0x24)) {
    lVar2 = 0;
    do {
      piVar3 = (int *)(*(long *)(*(long *)(this + 0x18) + lVar2 * 8) + -0x10);
      if (piVar3 != &emptyString) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar3);
        }
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 0x24));
  }
  *(undefined4 *)(this + 0x24) = 0;
  free(*(void **)(this + 0x18));
  if (0 < *(int *)(this + 0x14)) {
    lVar2 = 0;
    do {
      piVar3 = (int *)(*(long *)(*(long *)(this + 8) + lVar2 * 8) + -0x10);
      if (piVar3 != &emptyString) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar3);
        }
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 0x14));
  }
  *(undefined4 *)(this + 0x14) = 0;
  free(*(void **)(this + 8));
  piVar3 = (int *)(*(long *)this + -0x10);
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


