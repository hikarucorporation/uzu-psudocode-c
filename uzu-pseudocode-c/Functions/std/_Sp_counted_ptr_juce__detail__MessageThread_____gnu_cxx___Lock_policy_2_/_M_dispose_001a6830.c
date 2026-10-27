// Function : _M_dispose
// Namespace: std:_Sp_counted_ptr_juce__detail__MessageThread_____gnu_cxx___Lock_policy_2_
// Entry    : 001a6830
// Prototype: undefined _M_dispose(_Sp_counted_ptr<juce::detail::MessageThread*,(__gnu_cxx::_Lock_policy)2> * this)
// Body     : 001a6830 - 001a683f


/* std::_Sp_counted_ptr<juce::detail::MessageThread*, (__gnu_cxx::_Lock_policy)2>::_M_dispose() */

void __thiscall
std::_Sp_counted_ptr<juce::detail::MessageThread*,(__gnu_cxx::_Lock_policy)2>::_M_dispose
          (_Sp_counted_ptr<juce::detail::MessageThread*,(__gnu_cxx::_Lock_policy)2> *this)

{
  if (*(long **)(this + 0x10) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001a683c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x10) + 8))();
  return;
}


