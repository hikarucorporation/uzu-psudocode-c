// Function : _M_dispose
// Namespace: std:_Sp_counted_ptr_juce__EventHandler_____gnu_cxx___Lock_policy_2_
// Entry    : 001a7070
// Prototype: undefined _M_dispose(_Sp_counted_ptr<juce::EventHandler*,(__gnu_cxx::_Lock_policy)2> * this)
// Body     : 001a7070 - 001a708c


/* std::_Sp_counted_ptr<juce::EventHandler*, (__gnu_cxx::_Lock_policy)2>::_M_dispose() */

void __thiscall
std::_Sp_counted_ptr<juce::EventHandler*,(__gnu_cxx::_Lock_policy)2>::_M_dispose
          (_Sp_counted_ptr<juce::EventHandler*,(__gnu_cxx::_Lock_policy)2> *this)

{
  EventHandler *this_00;
  
  this_00 = *(EventHandler **)(this + 0x10);
  if (this_00 == (EventHandler *)0x0) {
    return;
  }
  juce::EventHandler::~EventHandler(this_00);
  operator_delete(this_00);
  return;
}


