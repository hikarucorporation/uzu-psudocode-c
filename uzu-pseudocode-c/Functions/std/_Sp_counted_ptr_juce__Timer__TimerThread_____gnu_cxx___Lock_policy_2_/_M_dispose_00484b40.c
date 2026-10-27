// Function : _M_dispose
// Namespace: std:_Sp_counted_ptr_juce__Timer__TimerThread_____gnu_cxx___Lock_policy_2_
// Entry    : 00484b40
// Prototype: undefined _M_dispose(_Sp_counted_ptr<juce::Timer::TimerThread*,(__gnu_cxx::_Lock_policy)2> * this)
// Body     : 00484b40 - 00484b5c


/* std::_Sp_counted_ptr<juce::Timer::TimerThread*, (__gnu_cxx::_Lock_policy)2>::_M_dispose() */

void __thiscall
std::_Sp_counted_ptr<juce::Timer::TimerThread*,(__gnu_cxx::_Lock_policy)2>::_M_dispose
          (_Sp_counted_ptr<juce::Timer::TimerThread*,(__gnu_cxx::_Lock_policy)2> *this)

{
  TimerThread *this_00;
  
  this_00 = *(TimerThread **)(this + 0x10);
  if (this_00 == (TimerThread *)0x0) {
    return;
  }
  juce::Timer::TimerThread::~TimerThread(this_00);
  operator_delete(this_00);
  return;
}


