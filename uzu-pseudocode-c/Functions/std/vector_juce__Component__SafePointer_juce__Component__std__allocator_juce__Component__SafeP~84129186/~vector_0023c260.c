// Function : ~vector
// Namespace: std:vector_juce__Component__SafePointer_juce__Component__std__allocator_juce__Component__SafeP~84129186
// Entry    : 0023c260
// Prototype: undefined ~vector(vector<juce::Component::SafePointer<juce::Component>,std::allocator<juce::Component::SafePointer<juce::Component>>> * this)
// Body     : 0023c260 - 0023c2ba


/* std::vector<juce::Component::SafePointer<juce::Component>,
   std::allocator<juce::Component::SafePointer<juce::Component> > >::~vector() */

void __thiscall
std::
vector<juce::Component::SafePointer<juce::Component>,std::allocator<juce::Component::SafePointer<juce::Component>>>
::~vector(vector<juce::Component::SafePointer<juce::Component>,std::allocator<juce::Component::SafePointer<juce::Component>>>
          *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  plVar2 = *(long **)(this + 8);
  if (plVar4 != plVar2) {
    do {
      plVar3 = (long *)*plVar4;
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar2);
    plVar4 = *(long **)this;
  }
  if (plVar4 == (long *)0x0) {
    return;
  }
  operator_delete(plVar4);
  return;
}


