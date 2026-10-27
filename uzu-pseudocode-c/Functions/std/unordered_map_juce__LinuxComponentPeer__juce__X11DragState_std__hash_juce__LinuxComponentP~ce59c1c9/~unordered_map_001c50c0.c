// Function : ~unordered_map
// Namespace: std:unordered_map_juce__LinuxComponentPeer__juce__X11DragState_std__hash_juce__LinuxComponentP~ce59c1c9
// Entry    : 001c50c0
// Prototype: undefined ~unordered_map(unordered_map<juce::LinuxComponentPeer*,juce::X11DragState,std::hash<juce::LinuxComponentPeer*>,std::equal_to<juce::LinuxComponentPeer*>,std::allocator<std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>>> * this)
// Body     : 001c50c0 - 001c5138


/* std::unordered_map<juce::LinuxComponentPeer*, juce::X11DragState,
   std::hash<juce::LinuxComponentPeer*>, std::equal_to<juce::LinuxComponentPeer*>,
   std::allocator<std::pair<juce::LinuxComponentPeer* const, juce::X11DragState> >
   >::~unordered_map() */

void __thiscall
std::
unordered_map<juce::LinuxComponentPeer*,juce::X11DragState,std::hash<juce::LinuxComponentPeer*>,std::equal_to<juce::LinuxComponentPeer*>,std::allocator<std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>>>
::~unordered_map(unordered_map<juce::LinuxComponentPeer*,juce::X11DragState,std::hash<juce::LinuxComponentPeer*>,std::equal_to<juce::LinuxComponentPeer*>,std::allocator<std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>>>
                 *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 0x10);
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    allocator_traits<std::allocator<std::__detail::_Hash_node<std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>,false>>>
    ::destroy<std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>>((long)(puVar2 + 1));
    operator_delete(puVar2);
    puVar2 = puVar1;
  }
  memset(*(void **)this,0,*(long *)(this + 8) << 3);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  if (this + 0x30 ==
      *(unordered_map<juce::LinuxComponentPeer*,juce::X11DragState,std::hash<juce::LinuxComponentPeer*>,std::equal_to<juce::LinuxComponentPeer*>,std::allocator<std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>>>
        **)this) {
    return;
  }
  operator_delete(*(unordered_map<juce::LinuxComponentPeer*,juce::X11DragState,std::hash<juce::LinuxComponentPeer*>,std::equal_to<juce::LinuxComponentPeer*>,std::allocator<std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>>>
                    **)this);
  return;
}


