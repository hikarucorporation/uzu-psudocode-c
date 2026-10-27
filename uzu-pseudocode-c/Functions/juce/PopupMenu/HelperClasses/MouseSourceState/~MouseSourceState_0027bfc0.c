// Function : ~MouseSourceState
// Namespace: juce:PopupMenu:HelperClasses:MouseSourceState
// Entry    : 0027bfc0
// Prototype: undefined ~MouseSourceState(MouseSourceState * this)
// Body     : 0027bfc0 - 0027bfd1


/* juce::PopupMenu::HelperClasses::MouseSourceState::~MouseSourceState() */

void __thiscall
juce::PopupMenu::HelperClasses::MouseSourceState::~MouseSourceState(MouseSourceState *this)

{
  Timer::stopTimer((Timer *)this);
  Timer::~Timer((Timer *)this);
  return;
}


