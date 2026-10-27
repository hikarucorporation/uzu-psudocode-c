// Function : ~_Scoped_node
// Namespace: std:_Hashtable_juce__LinuxComponentPeer__std__pair_juce__LinuxComponentPeer_const_juce__X11Dra~14b9e9e1:_Scoped_node
// Entry    : 002cc550
// Prototype: undefined ~_Scoped_node(_Scoped_node * this)
// Body     : 002cc550 - 002cc56b


/* std::_Hashtable<juce::LinuxComponentPeer*, std::pair<juce::LinuxComponentPeer* const,
   juce::X11DragState>, std::allocator<std::pair<juce::LinuxComponentPeer* const,
   juce::X11DragState> >, std::__detail::_Select1st, std::equal_to<juce::LinuxComponentPeer*>,
   std::hash<juce::LinuxComponentPeer*>, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, false, true> >::_Scoped_node::~_Scoped_node() */

void __thiscall
std::
_Hashtable<juce::LinuxComponentPeer*,std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>,std::allocator<std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>>,std::__detail::_Select1st,std::equal_to<juce::LinuxComponentPeer*>,std::hash<juce::LinuxComponentPeer*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
::_Scoped_node::~_Scoped_node(_Scoped_node *this)

{
  if (this == (_Scoped_node *)0x0) {
    return;
  }
  allocator_traits<std::allocator<std::__detail::_Hash_node<std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>,false>>>
  ::destroy<std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>>((long)(this + 8));
  operator_delete(this);
  return;
}


