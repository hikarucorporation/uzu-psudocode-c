// Function : ~MouseSourceState
// Namespace: juce:PopupMenu:HelperClasses:MouseSourceState
// Entry    : 0027bfe0
// Prototype: undefined ~MouseSourceState(MouseSourceState * this)
// Body     : 0027bfe0 - 0027bff9


/* juce::PopupMenu::HelperClasses::MouseSourceState::~MouseSourceState() */

void __thiscall
juce::PopupMenu::HelperClasses::MouseSourceState::~MouseSourceState(MouseSourceState *this)

{
  Timer::stopTimer((Timer *)this);
  Timer::~Timer((Timer *)this);
  operator_delete(this);
  return;
}


