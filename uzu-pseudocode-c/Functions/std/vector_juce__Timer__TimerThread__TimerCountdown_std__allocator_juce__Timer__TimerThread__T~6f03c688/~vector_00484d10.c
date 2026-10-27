// Function : ~vector
// Namespace: std:vector_juce__Timer__TimerThread__TimerCountdown_std__allocator_juce__Timer__TimerThread__T~6f03c688
// Entry    : 00484d10
// Prototype: undefined ~vector(vector<juce::Timer::TimerThread::TimerCountdown,std::allocator<juce::Timer::TimerThread::TimerCountdown>> * this)
// Body     : 00484d10 - 00484d1a


/* std::vector<juce::Timer::TimerThread::TimerCountdown,
   std::allocator<juce::Timer::TimerThread::TimerCountdown> >::~vector() */

void __thiscall
std::
vector<juce::Timer::TimerThread::TimerCountdown,std::allocator<juce::Timer::TimerThread::TimerCountdown>>
::~vector(vector<juce::Timer::TimerThread::TimerCountdown,std::allocator<juce::Timer::TimerThread::TimerCountdown>>
          *this)

{
  if (this == (vector<juce::Timer::TimerThread::TimerCountdown,std::allocator<juce::Timer::TimerThread::TimerCountdown>>
               *)0x0) {
    return;
  }
  operator_delete(this);
  return;
}


