// Function : ~ShadowWindow
// Namespace: juce:DropShadower:ShadowWindow
// Entry    : 0028cc60
// Prototype: undefined ~ShadowWindow(ShadowWindow * this)
// Body     : 0028cc60 - 0028cc85


/* juce::DropShadower::ShadowWindow::~ShadowWindow() */

void __thiscall juce::DropShadower::ShadowWindow::~ShadowWindow(ShadowWindow *this)

{
  long *plVar1;
  long *plVar2;
  
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
  return;
}


