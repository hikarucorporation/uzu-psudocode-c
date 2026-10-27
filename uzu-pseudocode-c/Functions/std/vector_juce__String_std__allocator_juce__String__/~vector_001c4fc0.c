// Function : ~vector
// Namespace: std:vector_juce__String_std__allocator_juce__String__
// Entry    : 001c4fc0
// Prototype: undefined ~vector(vector<juce::String,std::allocator<juce::String>> * this)
// Body     : 001c4fc0 - 001c502f


/* std::vector<juce::String, std::allocator<juce::String> >::~vector() */

void __thiscall
std::vector<juce::String,std::allocator<juce::String>>::~vector
          (vector<juce::String,std::allocator<juce::String>> *this)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  int *piVar4;
  
  plVar3 = *(long **)this;
  plVar2 = *(long **)(this + 8);
  if (plVar3 != plVar2) {
    do {
      piVar4 = (int *)(*plVar3 + -0x10);
      if (piVar4 != &juce::emptyString) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar4);
        }
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2);
    plVar3 = *(long **)this;
  }
  if (plVar3 == (long *)0x0) {
    return;
  }
  operator_delete(plVar3);
  return;
}


