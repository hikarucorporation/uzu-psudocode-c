// Function : ~FontOptions
// Namespace: juce:FontOptions
// Entry    : 001c4ed0
// Prototype: undefined ~FontOptions(FontOptions * this)
// Body     : 001c4ed0 - 001c4fb6


/* juce::FontOptions::~FontOptions() */

void __thiscall juce::FontOptions::~FontOptions(FontOptions *this)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  
  if (*(void **)(this + 0x30) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x30));
  }
  plVar4 = *(long **)(this + 0x18);
  plVar2 = *(long **)(this + 0x20);
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
    plVar4 = *(long **)(this + 0x18);
  }
  if (plVar4 != (long *)0x0) {
    operator_delete(plVar4);
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
  piVar5 = (int *)(*(long *)(this + 8) + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar5);
      lVar3 = *(long *)this;
      goto joined_r0x001c4fa9;
    }
  }
  lVar3 = *(long *)this;
joined_r0x001c4fa9:
  piVar5 = (int *)(lVar3 + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar5);
      return;
    }
  }
  return;
}


