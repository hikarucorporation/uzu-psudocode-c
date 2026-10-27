// Function : destroy<std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>>
// Namespace: std:allocator_traits_std__allocator_std____detail___Hash_node_std__pair_juce__LinuxComponentPe~a45eae10
// Entry    : 001c5140
// Prototype: void destroy<std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>>(long param_1)
// Body     : 001c5140 - 001c5229


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void 
   std::allocator_traits<std::allocator<std::__detail::_Hash_node<std::pair<juce::LinuxComponentPeer*
   const, juce::X11DragState>, false> > >::destroy<std::pair<juce::LinuxComponentPeer* const,
   juce::X11DragState>
   >(std::allocator<std::__detail::_Hash_node<std::pair<juce::LinuxComponentPeer* const,
   juce::X11DragState>, false> >&, std::pair<juce::LinuxComponentPeer* const, juce::X11DragState>*)
    */

void __cdecl
std::
allocator_traits<std::allocator<std::__detail::_Hash_node<std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>,false>>>
::destroy<std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>>(long param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
                    /* try { // try from 001c515b to 001c5164 has its CatchHandler @ 001c522a */
    (**(code **)(param_1 + 0xa0))(param_1 + 0x90,param_1 + 0x90,3);
  }
  piVar3 = (int *)(*(long *)(param_1 + 0x88) + -0x10);
  if (piVar3 != &juce::emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
    }
  }
  piVar3 = (int *)(*(long *)(param_1 + 0x68) + -0x10);
  if (piVar3 != &juce::emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
    }
  }
  if (0 < *(int *)(param_1 + 100)) {
    lVar2 = 0;
    do {
      piVar3 = (int *)(*(long *)(*(long *)(param_1 + 0x58) + lVar2 * 8) + -0x10);
      if (piVar3 != &juce::emptyString) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar3);
        }
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 100));
  }
  *(undefined4 *)(param_1 + 100) = 0;
  free(*(void **)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x54) = 0;
  free(*(void **)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x44) = 0;
  free(*(void **)(param_1 + 0x38));
  return;
}


