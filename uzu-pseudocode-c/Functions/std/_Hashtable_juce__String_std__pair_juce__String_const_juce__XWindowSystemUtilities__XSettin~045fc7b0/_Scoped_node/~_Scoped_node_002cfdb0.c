// Function : ~_Scoped_node
// Namespace: std:_Hashtable_juce__String_std__pair_juce__String_const_juce__XWindowSystemUtilities__XSettin~045fc7b0:_Scoped_node
// Entry    : 002cfdb0
// Prototype: undefined ~_Scoped_node(_Scoped_node * this)
// Body     : 002cfdb0 - 002cfe2f


/* std::_Hashtable<juce::String, std::pair<juce::String const,
   juce::XWindowSystemUtilities::XSetting>, std::allocator<std::pair<juce::String const,
   juce::XWindowSystemUtilities::XSetting> >, std::__detail::_Select1st,
   std::equal_to<juce::String>, std::hash<juce::String>, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, false, true> >::_Scoped_node::~_Scoped_node() */

void __thiscall
std::
_Hashtable<juce::String,std::pair<juce::String_const,juce::XWindowSystemUtilities::XSetting>,std::allocator<std::pair<juce::String_const,juce::XWindowSystemUtilities::XSetting>>,std::__detail::_Select1st,std::equal_to<juce::String>,std::hash<juce::String>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
::_Scoped_node::~_Scoped_node(_Scoped_node *this)

{
  int iVar1;
  int *piVar2;
  
  if (this == (_Scoped_node *)0x0) {
    return;
  }
  piVar2 = (int *)(*(long *)(this + 0x20) + -0x10);
  if (piVar2 != &juce::emptyString) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar2);
    }
  }
  piVar2 = (int *)(*(long *)(this + 0x10) + -0x10);
  if (piVar2 != &juce::emptyString) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar2);
    }
  }
  piVar2 = (int *)(*(long *)(this + 8) + -0x10);
  if (piVar2 != &juce::emptyString) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar2);
    }
  }
  operator_delete(this);
  return;
}


