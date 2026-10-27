// Function : ~FontPlaceholderNames
// Namespace: juce:FontPlaceholderNames
// Entry    : 002f8c50
// Prototype: undefined ~FontPlaceholderNames(FontPlaceholderNames * this)
// Body     : 002f8c50 - 002f8d24


/* juce::FontPlaceholderNames::~FontPlaceholderNames() */

void __thiscall juce::FontPlaceholderNames::~FontPlaceholderNames(FontPlaceholderNames *this)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  piVar3 = (int *)(*(long *)(this + 0x20) + -0x10);
  if (piVar3 == &emptyString) {
LAB_002f8c78:
    lVar2 = *(long *)(this + 0x18);
  }
  else {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 != 0) goto LAB_002f8c78;
    operator_delete__(piVar3);
    lVar2 = *(long *)(this + 0x18);
  }
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
  piVar3 = (int *)(*(long *)(this + 0x10) + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
      lVar2 = *(long *)(this + 8);
      goto joined_r0x002f8cd0;
    }
  }
  lVar2 = *(long *)(this + 8);
joined_r0x002f8cd0:
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


