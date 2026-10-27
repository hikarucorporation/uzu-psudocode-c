// Function : ~unique_ptr
// Namespace: std:unique_ptr_std__set_juce__File_std__less_juce__File__std__allocator_juce__File___std__defa~5ddf72cc
// Entry    : 004991e0
// Prototype: undefined ~unique_ptr(unique_ptr<std::set<juce::File,std::less<juce::File>,std::allocator<juce::File>>,std::default_delete<std::set<juce::File,std::less<juce::File>,std::allocator<juce::File>>>> * this)
// Body     : 004991e0 - 0049920e


/* std::unique_ptr<std::set<juce::File, std::less<juce::File>, std::allocator<juce::File> >,
   std::default_delete<std::set<juce::File, std::less<juce::File>, std::allocator<juce::File> > >
   >::~unique_ptr() */

void __thiscall
std::
unique_ptr<std::set<juce::File,std::less<juce::File>,std::allocator<juce::File>>,std::default_delete<std::set<juce::File,std::less<juce::File>,std::allocator<juce::File>>>>
::~unique_ptr(unique_ptr<std::set<juce::File,std::less<juce::File>,std::allocator<juce::File>>,std::default_delete<std::set<juce::File,std::less<juce::File>,std::allocator<juce::File>>>>
              *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    _Rb_tree<juce::File,juce::File,std::_Identity<juce::File>,std::less<juce::File>,std::allocator<juce::File>>
    ::_M_erase(*(void **)((long)pvVar1 + 0x10));
    operator_delete(pvVar1);
  }
  *(undefined8 *)this = 0;
  return;
}


