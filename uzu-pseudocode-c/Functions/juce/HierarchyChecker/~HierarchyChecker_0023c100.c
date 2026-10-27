// Function : ~HierarchyChecker
// Namespace: juce:HierarchyChecker
// Entry    : 0023c100
// Prototype: undefined ~HierarchyChecker(HierarchyChecker * this)
// Body     : 0023c100 - 0023c15b


/* juce::HierarchyChecker::~HierarchyChecker() */

void __thiscall juce::HierarchyChecker::~HierarchyChecker(HierarchyChecker *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = *(long **)(this + 8);
  plVar2 = *(long **)(this + 0x10);
  if (plVar4 != plVar2) {
    do {
      plVar3 = (long *)*plVar4;
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar2);
    plVar4 = *(long **)(this + 8);
  }
  if (plVar4 == (long *)0x0) {
    return;
  }
  operator_delete(plVar4);
  return;
}


