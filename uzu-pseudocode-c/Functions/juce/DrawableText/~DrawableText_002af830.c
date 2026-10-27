// Function : ~DrawableText
// Namespace: juce:DrawableText
// Entry    : 002af830
// Prototype: undefined ~DrawableText(DrawableText * this)
// Body     : 002af830 - 002af8f1


/* juce::DrawableText::~DrawableText() */

void __thiscall juce::DrawableText::~DrawableText(DrawableText *this)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  int *piVar4;
  
  *(undefined ***)this = &PTR__DrawableText_00708428;
  piVar4 = (int *)(*(long *)(this + 400) + -0x10);
  if (piVar4 != &emptyString) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar4);
    }
  }
  plVar3 = *(long **)(this + 0x188);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  plVar3 = *(long **)(this + 0x180);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  *(undefined ***)this = &PTR__Drawable_00707b28;
  ErasedScopeGuard::~ErasedScopeGuard((ErasedScopeGuard *)(this + 0x140));
  if (*(code **)(this + 0x130) != (code *)0x0) {
                    /* try { // try from 002af8c2 to 002af8cb has its CatchHandler @ 002af8f2 */
    (**(code **)(this + 0x130))(this + 0x120,this + 0x120,3);
  }
  if (*(long **)(this + 0xf8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf8) + 8))();
  }
  *(undefined8 *)(this + 0xf8) = 0;
  Component::~Component((Component *)this);
  return;
}


