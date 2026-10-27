// Function : userTriedToCloseWindow
// Namespace: juce:AlertWindow
// Entry    : 0028f250
// Prototype: undefined userTriedToCloseWindow(AlertWindow * this)
// Body     : 0028f250 - 0028f269


/* juce::AlertWindow::userTriedToCloseWindow() */

void __thiscall juce::AlertWindow::userTriedToCloseWindow(AlertWindow *this)

{
  if ((this[0x428] == (AlertWindow)0x0) && (*(int *)(this + 0x39c) < 1)) {
    return;
  }
  Component::exitModalState((Component *)this,0);
  return;
}


