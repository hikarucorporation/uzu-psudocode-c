// Function : ~DrawableImage
// Namespace: juce:DrawableImage
// Entry    : 002ace60
// Prototype: undefined ~DrawableImage(DrawableImage * this)
// Body     : 002ace60 - 002acee7


/* juce::DrawableImage::~DrawableImage() */

void __thiscall juce::DrawableImage::~DrawableImage(DrawableImage *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__DrawableImage_00707ed0;
  plVar2 = *(long **)(this + 0x160);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  *(undefined ***)this = &PTR__Drawable_00707b28;
  ErasedScopeGuard::~ErasedScopeGuard((ErasedScopeGuard *)(this + 0x140));
  if (*(code **)(this + 0x130) != (code *)0x0) {
                    /* try { // try from 002aceb0 to 002aceb9 has its CatchHandler @ 002acee8 */
    (**(code **)(this + 0x130))(this + 0x120,this + 0x120,3);
  }
  if (*(long **)(this + 0xf8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf8) + 8))();
  }
  *(undefined8 *)(this + 0xf8) = 0;
  Component::~Component((Component *)this);
  operator_delete(this);
  return;
}


