// Function : ~TypefaceCache
// Namespace: juce:TypefaceCache
// Entry    : 00305670
// Prototype: undefined ~TypefaceCache(TypefaceCache * this)
// Body     : 00305670 - 003057a1


/* juce::TypefaceCache::~TypefaceCache() */

void __thiscall juce::TypefaceCache::~TypefaceCache(TypefaceCache *this)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  
  LOCK();
  if (this == (TypefaceCache *)singletonHolder._40_8_) {
    singletonHolder._40_8_ = 0;
  }
  UNLOCK();
  if (0 < *(int *)(this + 0x114)) {
    lVar5 = 0;
    lVar7 = 0;
    do {
      lVar3 = *(long *)(this + 0x108);
      plVar4 = *(long **)(lVar3 + 0x18 + lVar5);
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
      piVar6 = (int *)(*(long *)(lVar3 + 8 + lVar5) + -0x10);
      if (piVar6 == &emptyString) {
LAB_003056fd:
        piVar6 = (int *)(*(long *)(lVar3 + lVar5) + -0x10);
        if (piVar6 != &emptyString) {
LAB_0030570b:
          LOCK();
          iVar2 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            operator_delete__(piVar6);
          }
        }
      }
      else {
        LOCK();
        iVar2 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar2 != 0) goto LAB_003056fd;
        operator_delete__(piVar6);
        piVar6 = (int *)(*(long *)(lVar3 + lVar5) + -0x10);
        if (piVar6 != &emptyString) goto LAB_0030570b;
      }
      lVar7 = lVar7 + 1;
      lVar5 = lVar5 + 0x20;
    } while (lVar7 < *(int *)(this + 0x114));
  }
  *(undefined4 *)(this + 0x114) = 0;
  free(*(void **)(this + 0x108));
  *(undefined4 *)(this + 0x104) = 0;
  free(*(void **)(this + 0xf8));
  std::condition_variable::~condition_variable((condition_variable *)(this + 0xb0));
  std::condition_variable::~condition_variable((condition_variable *)(this + 0x48));
  plVar4 = *(long **)(this + 8);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  DeletedAtShutdown::~DeletedAtShutdown((DeletedAtShutdown *)this);
  return;
}


