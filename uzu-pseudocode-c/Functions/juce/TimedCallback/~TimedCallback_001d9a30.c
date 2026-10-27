// Function : ~TimedCallback
// Namespace: juce:TimedCallback
// Entry    : 001d9a30
// Prototype: undefined ~TimedCallback(TimedCallback * this)
// Body     : 001d9a30 - 001d9a58


/* juce::TimedCallback::~TimedCallback() */

void __thiscall juce::TimedCallback::~TimedCallback(TimedCallback *this)

{
  Timer::stopTimer((Timer *)this);
  if (*(code **)(this + 0x38) != (code *)0x0) {
                    /* try { // try from 001d9a46 to 001d9a4f has its CatchHandler @ 001d9a59 */
    (**(code **)(this + 0x38))(this + 0x28,this + 0x28,3);
  }
  Timer::~Timer((Timer *)this);
  return;
}


