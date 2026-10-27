// Function : _M_erase
// Namespace: std:_Rb_tree_juce__DropShadower__ParentVisibilityChangedListener__ComponentWithWeakReference_j~ae50027c
// Entry    : 0028e170
// Prototype: undefined _M_erase(void * param_1)
// Body     : 0028e170 - 0028e1bc


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Rb_tree<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,
   juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,
   std::_Identity<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,
   std::less<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,
   std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>
   >::_M_erase(std::_Rb_tree_node<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>*)
    */

void __cdecl
std::
_Rb_tree<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,std::_Identity<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,std::less<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>>
::_M_erase(void *param_1)

{
  long *plVar1;
  void *pvVar2;
  long *plVar3;
  
  if (param_1 != (void *)0x0) {
    do {
      _M_erase(*(void **)((long)param_1 + 0x18));
      pvVar2 = *(void **)((long)param_1 + 0x10);
      plVar3 = *(long **)((long)param_1 + 0x28);
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      operator_delete(param_1);
      param_1 = pvVar2;
    } while (pvVar2 != (void *)0x0);
  }
  return;
}


