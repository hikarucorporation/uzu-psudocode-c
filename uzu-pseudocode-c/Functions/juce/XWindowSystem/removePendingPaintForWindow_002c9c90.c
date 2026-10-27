// Function : removePendingPaintForWindow
// Namespace: juce:XWindowSystem
// Entry    : 002c9c90
// Prototype: undefined removePendingPaintForWindow(XWindowSystem * this, ulong param_1)
// Body     : 002c9c90 - 002c9cc9


/* juce::XWindowSystem::removePendingPaintForWindow(unsigned long) */

void __thiscall juce::XWindowSystem::removePendingPaintForWindow(XWindowSystem *this,ulong param_1)

{
  char cVar1;
  _Rb_tree_node_base *p_Var2;
  ulong local_10;
  
  local_10 = param_1;
  cVar1 = XSHMHelpers::isShmAvailable(*(long *)(this + 0x148));
  if (cVar1 != '\0') {
    p_Var2 = std::
             map<unsigned_long,int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>>
             ::operator[]((map<unsigned_long,int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>>
                           *)(this + 0x160),&local_10);
    *(int *)p_Var2 = *(int *)p_Var2 + -1;
  }
  return;
}


