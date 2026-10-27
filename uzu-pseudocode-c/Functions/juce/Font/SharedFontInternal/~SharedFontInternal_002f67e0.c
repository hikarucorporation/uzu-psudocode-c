// Function : ~SharedFontInternal
// Namespace: juce:Font:SharedFontInternal
// Entry    : 002f67e0
// Prototype: undefined ~SharedFontInternal(SharedFontInternal * this)
// Body     : 002f67e0 - 002f68ff


/* juce::Font::SharedFontInternal::~SharedFontInternal() */

void __thiscall juce::Font::SharedFontInternal::~SharedFontInternal(SharedFontInternal *this)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  
  *(undefined ***)this = &PTR__SharedFontInternal_00712058;
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x80));
  if (*(void **)(this + 0x48) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x48));
  }
  plVar4 = *(long **)(this + 0x30);
  plVar2 = *(long **)(this + 0x38);
  if (plVar4 != plVar2) {
    do {
      piVar5 = (int *)(*plVar4 + -0x10);
      if (piVar5 != &emptyString) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar5);
        }
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar2);
    plVar4 = *(long **)(this + 0x30);
  }
  if (plVar4 != (long *)0x0) {
    operator_delete(plVar4);
  }
  plVar4 = *(long **)(this + 0x28);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  piVar5 = (int *)(*(long *)(this + 0x20) + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar5);
      lVar3 = *(long *)(this + 0x18);
      goto joined_r0x002f68d2;
    }
  }
  lVar3 = *(long *)(this + 0x18);
joined_r0x002f68d2:
  piVar5 = (int *)(lVar3 + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar5);
    }
  }
  plVar4 = *(long **)(this + 0x10);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  *(undefined ***)this = &PTR__ReferenceCountedObject_00706828;
  return;
}


