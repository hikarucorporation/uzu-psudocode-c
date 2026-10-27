// Function : ~KnownTypeface
// Namespace: juce:FTTypefaceList:KnownTypeface
// Entry    : 002ff5a0
// Prototype: undefined ~KnownTypeface(KnownTypeface * this)
// Body     : 002ff5a0 - 002ff611


/* juce::FTTypefaceList::KnownTypeface::~KnownTypeface() */

void __thiscall juce::FTTypefaceList::KnownTypeface::~KnownTypeface(KnownTypeface *this)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  *(undefined ***)this = &PTR__KnownTypeface_00712340;
  piVar3 = (int *)(*(long *)(this + 0x10) + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
      lVar2 = *(long *)(this + 8);
      goto joined_r0x002ff608;
    }
  }
  lVar2 = *(long *)(this + 8);
joined_r0x002ff608:
  piVar3 = (int *)(lVar2 + -0x10);
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


