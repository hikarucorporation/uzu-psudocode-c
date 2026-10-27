// Function : _M_dispose
// Namespace: std:_Sp_counted_ptr_juce__DirectoryIterator_____gnu_cxx___Lock_policy_2_
// Entry    : 0049f6f0
// Prototype: undefined _M_dispose(_Sp_counted_ptr<juce::DirectoryIterator*,(__gnu_cxx::_Lock_policy)2> * this)
// Body     : 0049f6f0 - 0049f70c


/* std::_Sp_counted_ptr<juce::DirectoryIterator*, (__gnu_cxx::_Lock_policy)2>::_M_dispose() */

void __thiscall
std::_Sp_counted_ptr<juce::DirectoryIterator*,(__gnu_cxx::_Lock_policy)2>::_M_dispose
          (_Sp_counted_ptr<juce::DirectoryIterator*,(__gnu_cxx::_Lock_policy)2> *this)

{
  DirectoryIterator *this_00;
  
  this_00 = *(DirectoryIterator **)(this + 0x10);
  if (this_00 == (DirectoryIterator *)0x0) {
    return;
  }
  juce::DirectoryIterator::~DirectoryIterator(this_00);
  operator_delete(this_00);
  return;
}


