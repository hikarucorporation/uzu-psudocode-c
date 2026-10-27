// Function : ~FileTypeface
// Namespace: juce:FTTypefaceList:FileTypeface
// Entry    : 003034a0
// Prototype: undefined ~FileTypeface(FileTypeface * this)
// Body     : 003034a0 - 0030353a


/* juce::FTTypefaceList::FileTypeface::~FileTypeface() */

void __thiscall juce::FTTypefaceList::FileTypeface::~FileTypeface(FileTypeface *this)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  *(undefined ***)this = &PTR__FileTypeface_00712460;
  piVar3 = (int *)(*(long *)(this + 0x20) + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
    }
  }
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
      goto joined_r0x00303531;
    }
  }
  lVar2 = *(long *)(this + 8);
joined_r0x00303531:
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


