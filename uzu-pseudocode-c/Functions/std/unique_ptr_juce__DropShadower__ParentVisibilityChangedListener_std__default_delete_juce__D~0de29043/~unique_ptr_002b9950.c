// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__DropShadower__ParentVisibilityChangedListener_std__default_delete_juce__D~0de29043
// Entry    : 002b9950
// Prototype: undefined ~unique_ptr(unique_ptr<juce::DropShadower::ParentVisibilityChangedListener,std::default_delete<juce::DropShadower::ParentVisibilityChangedListener>> * this)
// Body     : 002b9950 - 002b99d2


/* std::unique_ptr<juce::DropShadower::ParentVisibilityChangedListener,
   std::default_delete<juce::DropShadower::ParentVisibilityChangedListener> >::~unique_ptr() */

void __thiscall
std::
unique_ptr<juce::DropShadower::ParentVisibilityChangedListener,std::default_delete<juce::DropShadower::ParentVisibilityChangedListener>>
::~unique_ptr(unique_ptr<juce::DropShadower::ParentVisibilityChangedListener,std::default_delete<juce::DropShadower::ParentVisibilityChangedListener>>
              *this)

{
  void *pvVar1;
  long lVar2;
  _Rb_tree_node_base *p_Var3;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    for (p_Var3 = *(_Rb_tree_node_base **)((long)pvVar1 + 0x30);
        p_Var3 != (_Rb_tree_node_base *)((long)pvVar1 + 0x20);
        p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var3)) {
      if ((*(long *)(p_Var3 + 0x28) != 0) &&
         (lVar2 = *(long *)(*(long *)(p_Var3 + 0x28) + 0x10), lVar2 != 0)) {
        juce::
        ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
        ::remove((ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
                  *)(lVar2 + 0xa0),(long)pvVar1);
      }
    }
                    /* try { // try from 002b997a to 002b997e has its CatchHandler @ 002b99d3 */
    _Rb_tree<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,std::_Identity<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,std::less<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>>
    ::_M_erase(*(void **)((long)pvVar1 + 0x28));
    operator_delete(pvVar1);
  }
  *(undefined8 *)this = 0;
  return;
}


