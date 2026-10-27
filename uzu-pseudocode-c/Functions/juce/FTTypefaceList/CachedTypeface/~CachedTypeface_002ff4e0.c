// Function : ~CachedTypeface
// Namespace: juce:FTTypefaceList:CachedTypeface
// Entry    : 002ff4e0
// Prototype: undefined ~CachedTypeface(CachedTypeface * this)
// Body     : 002ff4e0 - 002ff566


/* juce::FTTypefaceList::CachedTypeface::~CachedTypeface() */

void __thiscall juce::FTTypefaceList::CachedTypeface::~CachedTypeface(CachedTypeface *this)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  *(undefined ***)this = &PTR__CachedTypeface_007122e8;
  ReferenceCountedObjectPtr<juce::FTFaceWrapper>::decIfNotNull(*(void **)(this + 0x20));
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
      goto joined_r0x002ff556;
    }
  }
  lVar2 = *(long *)(this + 8);
joined_r0x002ff556:
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
  operator_delete(this);
  return;
}


