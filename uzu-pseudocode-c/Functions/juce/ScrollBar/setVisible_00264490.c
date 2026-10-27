// Function : setVisible
// Namespace: juce:ScrollBar
// Entry    : 00264490
// Prototype: undefined setVisible(ScrollBar * this, ScrollBar param_2)
// Body     : 00264490 - 002644fb


/* juce::ScrollBar::setVisible(bool) */

void __thiscall juce::ScrollBar::setVisible(ScrollBar *this,ScrollBar param_2)

{
  if (this[0x17f] == param_2) {
    return;
  }
  this[0x17f] = param_2;
  if (param_2 != (ScrollBar)0x0) {
    if (this[0x17e] == (ScrollBar)0x0) {
      Component::setVisible((Component *)this,1);
      return;
    }
    if (*(double *)(this + 0x140) - *(double *)(this + 0x138) <
        *(double *)(this + 0x130) - *(double *)(this + 0x128)) {
      Component::setVisible
                ((Component *)this,0.0 < *(double *)(this + 0x140) - *(double *)(this + 0x138));
      return;
    }
  }
  Component::setVisible((Component *)this,0);
  return;
}


