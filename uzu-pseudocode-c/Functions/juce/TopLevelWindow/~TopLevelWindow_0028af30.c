// Function : ~TopLevelWindow
// Namespace: juce:TopLevelWindow
// Entry    : 0028af30
// Prototype: undefined ~TopLevelWindow(TopLevelWindow * this)
// Body     : 0028af30 - 0028af41


/* juce::TopLevelWindow::~TopLevelWindow() */

void __thiscall juce::TopLevelWindow::~TopLevelWindow(TopLevelWindow *this)

{
  ~TopLevelWindow(this);
  operator_delete(this);
  return;
}


