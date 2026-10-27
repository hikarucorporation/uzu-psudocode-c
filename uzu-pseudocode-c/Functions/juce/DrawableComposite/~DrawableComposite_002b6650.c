// Function : ~DrawableComposite
// Namespace: juce:DrawableComposite
// Entry    : 002b6650
// Prototype: undefined ~DrawableComposite(DrawableComposite * this)
// Body     : 002b6650 - 002b66fa


/* juce::DrawableComposite::~DrawableComposite() */

void __thiscall juce::DrawableComposite::~DrawableComposite(DrawableComposite *this)

{
  Component *pCVar1;
  int iVar2;
  
  *(undefined ***)this = &PTR__DrawableComposite_00707d08;
  iVar2 = *(int *)(this + 100);
  while (iVar2 != 0) {
                    /* try { // try from 002b667a to 002b668b has its CatchHandler @ 002b6703 */
    pCVar1 = Component::removeChildComponent((Component *)this,iVar2 - 1,'\x01',1);
    if (pCVar1 != (Component *)0x0) {
      (**(code **)(*(long *)pCVar1 + 8))(pCVar1);
    }
    iVar2 = *(int *)(this + 100);
  }
  *(undefined ***)this = &PTR__Drawable_00707b28;
  ErasedScopeGuard::~ErasedScopeGuard((ErasedScopeGuard *)(this + 0x140));
  if (*(code **)(this + 0x130) != (code *)0x0) {
                    /* try { // try from 002b66c5 to 002b66ce has its CatchHandler @ 002b66fb */
    (**(code **)(this + 0x130))(this + 0x120,this + 0x120,3);
  }
  if (*(long **)(this + 0xf8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf8) + 8))();
  }
  *(undefined8 *)(this + 0xf8) = 0;
  Component::~Component((Component *)this);
  return;
}


