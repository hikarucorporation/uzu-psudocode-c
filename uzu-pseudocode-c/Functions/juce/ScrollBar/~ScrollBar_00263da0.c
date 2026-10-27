// Function : ~ScrollBar
// Namespace: juce:ScrollBar
// Entry    : 00263da0
// Prototype: undefined ~ScrollBar(ScrollBar * this)
// Body     : 00263da0 - 00263db1


/* juce::ScrollBar::~ScrollBar() */

void __thiscall juce::ScrollBar::~ScrollBar(ScrollBar *this)

{
  ~ScrollBar(this);
  operator_delete(this);
  return;
}


