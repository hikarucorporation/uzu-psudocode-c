// Function : ~vector
// Namespace: std:vector_juce__DropShadower__ParentVisibilityChangedListener__ComponentWithWeakReference_std~df5b78cf
// Entry    : 0028e2e0
// Prototype: undefined ~vector(vector<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>> * this)
// Body     : 0028e2e0 - 0028e33b


/* std::vector<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,
   std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>
   >::~vector() */

void __thiscall
std::
vector<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>>
::~vector(vector<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>>
          *this)

{
  long *plVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)this;
  pvVar2 = *(void **)(this + 8);
  if (pvVar4 != pvVar2) {
    do {
      plVar3 = *(long **)((long)pvVar4 + 8);
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      pvVar4 = (void *)((long)pvVar4 + 0x10);
    } while (pvVar4 != pvVar2);
    pvVar4 = *(void **)this;
  }
  if (pvVar4 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar4);
  return;
}


