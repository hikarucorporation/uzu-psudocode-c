// Function : ~TimedCallback
// Namespace: juce:TimedCallback
// Entry    : 002d2960
// Prototype: undefined ~TimedCallback(TimedCallback * this)
// Body     : 002d2960 - 002d2990


/* juce::TimedCallback::~TimedCallback() */

void __thiscall juce::TimedCallback::~TimedCallback(TimedCallback *this)

{
  Timer::stopTimer((Timer *)this);
  if (*(code **)(this + 0x38) != (code *)0x0) {
                    /* try { // try from 002d2976 to 002d297f has its CatchHandler @ 002d2991 */
    (**(code **)(this + 0x38))(this + 0x28,this + 0x28,3);
  }
  Timer::~Timer((Timer *)this);
  operator_delete(this);
  return;
}


