// Function : ~AlertWindow
// Namespace: juce:AlertWindow
// Entry    : 0028f0e0
// Prototype: undefined ~AlertWindow(AlertWindow * this)
// Body     : 0028f0e0 - 0028f0f1


/* juce::AlertWindow::~AlertWindow() */

void __thiscall juce::AlertWindow::~AlertWindow(AlertWindow *this)

{
  ~AlertWindow(this);
  operator_delete(this);
  return;
}


