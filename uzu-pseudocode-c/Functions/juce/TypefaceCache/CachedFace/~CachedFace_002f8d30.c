// Function : ~CachedFace
// Namespace: juce:TypefaceCache:CachedFace
// Entry    : 002f8d30
// Prototype: undefined ~CachedFace(CachedFace * this)
// Body     : 002f8d30 - 002f8dab


/* juce::TypefaceCache::CachedFace::~CachedFace() */

void __thiscall juce::TypefaceCache::CachedFace::~CachedFace(CachedFace *this)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  
  plVar3 = *(long **)(this + 0x18);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  piVar5 = (int *)(*(long *)(this + 8) + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar5);
      lVar4 = *(long *)this;
      goto joined_r0x002f8da2;
    }
  }
  lVar4 = *(long *)this;
joined_r0x002f8da2:
  piVar5 = (int *)(lVar4 + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar5);
      return;
    }
  }
  return;
}


