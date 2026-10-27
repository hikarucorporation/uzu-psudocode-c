// Function : ~vector
// Namespace: std:vector_std__unique_ptr_juce__FTTypefaceList__KnownTypeface_std__default_delete_juce__FTTyp~6e364f21
// Entry    : 00301310
// Prototype: undefined ~vector(vector<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>,std::allocator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>>> * this)
// Body     : 00301310 - 0030136a


/* std::vector<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,
   std::default_delete<juce::FTTypefaceList::KnownTypeface> >,
   std::allocator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,
   std::default_delete<juce::FTTypefaceList::KnownTypeface> > > >::~vector() */

void __thiscall
std::
vector<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>,std::allocator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>>>
::~vector(vector<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>,std::allocator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>>>
          *this)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)this;
  plVar1 = *(long **)(this + 8);
  if (plVar2 != plVar1) {
    do {
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
      }
      *plVar2 = 0;
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    plVar2 = *(long **)this;
  }
  if (plVar2 == (long *)0x0) {
    return;
  }
  operator_delete(plVar2);
  return;
}


