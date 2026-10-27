// Function : ~AttributedString
// Namespace: juce:AttributedString
// Entry    : 00234a30
// Prototype: undefined ~AttributedString(AttributedString * this)
// Body     : 00234a30 - 00234abd


/* juce::AttributedString::~AttributedString() */

void __thiscall juce::AttributedString::~AttributedString(AttributedString *this)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  
  if (0 < *(int *)(this + 0x24)) {
    lVar6 = 8;
    lVar4 = 0;
    do {
      plVar3 = *(long **)(*(long *)(this + 0x18) + lVar6);
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      lVar4 = lVar4 + 1;
      lVar6 = lVar6 + 0x18;
    } while (lVar4 < *(int *)(this + 0x24));
  }
  *(undefined4 *)(this + 0x24) = 0;
  free(*(void **)(this + 0x18));
  piVar5 = (int *)(*(long *)this + -0x10);
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


