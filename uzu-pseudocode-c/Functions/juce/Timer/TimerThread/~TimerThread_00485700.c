// Function : ~TimerThread
// Namespace: juce:Timer:TimerThread
// Entry    : 00485700
// Prototype: undefined ~TimerThread(TimerThread * this)
// Body     : 00485700 - 00485711


/* juce::Timer::TimerThread::~TimerThread() */

void __thiscall juce::Timer::TimerThread::~TimerThread(TimerThread *this)

{
  ~TimerThread(this);
  operator_delete(this);
  return;
}


