// Function : ~ShapedTextOptions
// Namespace: juce:detail:ShapedTextOptions
// Entry    : 0023fd40
// Prototype: undefined ~ShapedTextOptions(ShapedTextOptions * this)
// Body     : 0023fd40 - 0023fdda


/* juce::detail::ShapedTextOptions::~ShapedTextOptions() */

void __thiscall juce::detail::ShapedTextOptions::~ShapedTextOptions(ShapedTextOptions *this)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  int *piVar5;
  long *plVar6;
  
  piVar5 = (int *)(*(long *)(this + 0x70) + -0x10);
  if (piVar5 == &emptyString) {
LAB_0023fd69:
    plVar4 = *(long **)(this + 0x40);
    plVar6 = *(long **)(this + 0x48);
    if (plVar4 == plVar6) goto joined_r0x0023fdd7;
  }
  else {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 != 0) goto LAB_0023fd69;
    operator_delete__(piVar5);
    plVar4 = *(long **)(this + 0x40);
    plVar6 = *(long **)(this + 0x48);
    if (plVar4 == plVar6) goto joined_r0x0023fdd7;
  }
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
  } while (plVar4 != plVar6);
  plVar4 = *(long **)(this + 0x40);
joined_r0x0023fdd7:
  if (plVar4 != (long *)0x0) {
    operator_delete(plVar4);
  }
  if (*(void **)(this + 0x28) == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)(this + 0x28));
  return;
}


