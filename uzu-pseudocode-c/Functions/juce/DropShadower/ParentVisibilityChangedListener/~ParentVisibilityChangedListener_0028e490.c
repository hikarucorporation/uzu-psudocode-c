// Function : ~ParentVisibilityChangedListener
// Namespace: juce:DropShadower:ParentVisibilityChangedListener
// Entry    : 0028e490
// Prototype: undefined ~ParentVisibilityChangedListener(ParentVisibilityChangedListener * this)
// Body     : 0028e490 - 0028e502


/* juce::DropShadower::ParentVisibilityChangedListener::~ParentVisibilityChangedListener() */

void __thiscall
juce::DropShadower::ParentVisibilityChangedListener::~ParentVisibilityChangedListener
          (ParentVisibilityChangedListener *this)

{
  long lVar1;
  _Rb_tree_node_base *p_Var2;
  
  for (p_Var2 = *(_Rb_tree_node_base **)(this + 0x30); p_Var2 != (_Rb_tree_node_base *)(this + 0x20)
      ; p_Var2 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var2)) {
    if ((*(long *)(p_Var2 + 0x28) != 0) &&
       (lVar1 = *(long *)(*(long *)(p_Var2 + 0x28) + 0x10), lVar1 != 0)) {
      ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
      ::remove((ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
                *)(lVar1 + 0xa0),(long)this);
    }
  }
                    /* try { // try from 0028e4b0 to 0028e4b4 has its CatchHandler @ 0028e503 */
  std::
  _Rb_tree<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,std::_Identity<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,std::less<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>>
  ::_M_erase(*(void **)(this + 0x28));
  operator_delete(this);
  return;
}


