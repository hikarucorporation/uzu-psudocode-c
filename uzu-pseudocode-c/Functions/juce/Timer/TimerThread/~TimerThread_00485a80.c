// Function : ~TimerThread
// Namespace: juce:Timer:TimerThread
// Entry    : 00485a80
// Prototype: undefined ~TimerThread(TimerThread * this)
// Body     : 00485a80 - 00485a9b


/* non-virtual thunk to juce::Timer::TimerThread::~TimerThread() */

void __thiscall juce::Timer::TimerThread::~TimerThread(TimerThread *this)

{
  ~TimerThread(this + -0x198);
  operator_delete(this + -0x198);
  return;
}


