// Function : ~SimpleShapedText
// Namespace: juce:detail:SimpleShapedText
// Entry    : 00314970
// Prototype: undefined ~SimpleShapedText(SimpleShapedText * this)
// Body     : 00314970 - 00314a4a


/* juce::detail::SimpleShapedText::~SimpleShapedText() */

void __thiscall juce::detail::SimpleShapedText::~SimpleShapedText(SimpleShapedText *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  if (*(void **)(this + 0xb0) != (void *)0x0) {
    operator_delete(*(void **)(this + 0xb0));
  }
  if (*(void **)(this + 0x98) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x98));
  }
  plVar4 = *(long **)(this + 0x80);
  plVar2 = *(long **)(this + 0x88);
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
    plVar4 = *(long **)(this + 0x80);
  }
  if (plVar4 != (long *)0x0) {
    operator_delete(plVar4);
  }
  if (*(void **)(this + 0x68) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x68));
  }
  if (*(void **)(this + 0x50) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x50));
  }
  if (*(void **)(this + 0x38) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x38));
  }
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x20));
  }
  if (*(void **)(this + 8) == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)(this + 8));
  return;
}


