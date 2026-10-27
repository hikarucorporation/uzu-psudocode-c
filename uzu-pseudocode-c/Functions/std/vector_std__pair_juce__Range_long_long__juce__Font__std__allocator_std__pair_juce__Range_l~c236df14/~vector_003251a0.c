// Function : ~vector
// Namespace: std:vector_std__pair_juce__Range_long_long__juce__Font__std__allocator_std__pair_juce__Range_l~c236df14
// Entry    : 003251a0
// Prototype: undefined ~vector(vector<std::pair<juce::Range<long_long>,juce::Font>,std::allocator<std::pair<juce::Range<long_long>,juce::Font>>> * this)
// Body     : 003251a0 - 003251fb


/* std::vector<std::pair<juce::Range<long long>, juce::Font>,
   std::allocator<std::pair<juce::Range<long long>, juce::Font> > >::~vector() */

void __thiscall
std::
vector<std::pair<juce::Range<long_long>,juce::Font>,std::allocator<std::pair<juce::Range<long_long>,juce::Font>>>
::~vector(vector<std::pair<juce::Range<long_long>,juce::Font>,std::allocator<std::pair<juce::Range<long_long>,juce::Font>>>
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
      plVar3 = *(long **)((long)pvVar4 + 0x10);
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      pvVar4 = (void *)((long)pvVar4 + 0x18);
    } while (pvVar4 != pvVar2);
    pvVar4 = *(void **)this;
  }
  if (pvVar4 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar4);
  return;
}


