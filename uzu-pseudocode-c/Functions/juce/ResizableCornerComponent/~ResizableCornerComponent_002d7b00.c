// Function : ~ResizableCornerComponent
// Namespace: juce:ResizableCornerComponent
// Entry    : 002d7b00
// Prototype: undefined ~ResizableCornerComponent(ResizableCornerComponent * this)
// Body     : 002d7b00 - 002d7b37


/* juce::ResizableCornerComponent::~ResizableCornerComponent() */

void __thiscall
juce::ResizableCornerComponent::~ResizableCornerComponent(ResizableCornerComponent *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__ResizableCornerComponent_00708a18;
  plVar2 = *(long **)(this + 0xf0);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  Component::~Component((Component *)this);
  operator_delete(this);
  return;
}


