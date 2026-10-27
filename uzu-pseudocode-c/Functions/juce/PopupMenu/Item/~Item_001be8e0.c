// Function : ~Item
// Namespace: juce:PopupMenu:Item
// Entry    : 001be8e0
// Prototype: undefined ~Item(Item * this)
// Body     : 001be8e0 - 001bea17


/* juce::PopupMenu::Item::~Item() */

void __thiscall juce::PopupMenu::Item::~Item(Item *this)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  
  piVar6 = (int *)(*(long *)(this + 0x58) + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar6);
    }
  }
  plVar3 = *(long **)(this + 0x48);
  if (plVar3 != (long *)0x0) {
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    if ((int)*plVar4 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  plVar3 = *(long **)(this + 0x40);
  if (plVar3 != (long *)0x0) {
    plVar4 = plVar3 + 0x1f;
    *(int *)plVar4 = (int)*plVar4 + -1;
    if ((int)*plVar4 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  if (*(long **)(this + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x38) + 8))();
  }
  *(undefined8 *)(this + 0x38) = 0;
  plVar3 = *(long **)(this + 0x30);
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)plVar3[2];
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    if (0 < *(int *)((long)plVar3 + 0xc)) {
      lVar7 = 0;
      lVar5 = 0;
      do {
        ~Item((Item *)(*plVar3 + lVar7));
        lVar5 = lVar5 + 1;
        lVar7 = lVar7 + 0x70;
      } while (lVar5 < *(int *)((long)plVar3 + 0xc));
    }
    *(undefined4 *)((long)plVar3 + 0xc) = 0;
    free((void *)*plVar3);
    operator_delete(plVar3);
  }
  *(undefined8 *)(this + 0x30) = 0;
  if (*(code **)(this + 0x20) != (code *)0x0) {
                    /* try { // try from 001be9dd to 001be9e6 has its CatchHandler @ 001bea18 */
    (**(code **)(this + 0x20))(this + 0x10,this + 0x10,3);
  }
  piVar6 = (int *)(*(long *)this + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar6);
      return;
    }
  }
  return;
}


