// Function : ~ImageButton
// Namespace: juce:ImageButton
// Entry    : 002d6500
// Prototype: undefined ~ImageButton(ImageButton * this)
// Body     : 002d6500 - 002d6573


/* non-virtual thunk to juce::ImageButton::~ImageButton() */

void __thiscall juce::ImageButton::~ImageButton(ImageButton *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)(this + -0xf0) = &PTR__ImageButton_00707458;
  *(undefined ***)this = &PTR__ImageButton_00707638;
  plVar2 = *(long **)(this + 0x130);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  plVar2 = *(long **)(this + 0x128);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  plVar2 = *(long **)(this + 0x120);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  Button::~Button((Button *)(this + -0xf0));
  return;
}


