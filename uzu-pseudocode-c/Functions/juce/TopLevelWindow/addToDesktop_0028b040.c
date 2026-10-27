// Function : addToDesktop
// Namespace: juce:TopLevelWindow
// Entry    : 0028b040
// Prototype: undefined addToDesktop(TopLevelWindow * this, uint param_1, undefined8 param_2)
// Body     : 0028b040 - 0028b071


/* juce::TopLevelWindow::addToDesktop(int, void*) */

void __thiscall
juce::TopLevelWindow::addToDesktop(TopLevelWindow *this,uint param_1,undefined8 param_2)

{
  uint uVar1;
  
  Component::addToDesktop((Component *)this,param_1,param_2);
  uVar1 = (**(code **)(*(long *)this + 0x1a0))(this);
  if (uVar1 == param_1) {
    return;
  }
  Component::sendLookAndFeelChange((Component *)this);
  return;
}


