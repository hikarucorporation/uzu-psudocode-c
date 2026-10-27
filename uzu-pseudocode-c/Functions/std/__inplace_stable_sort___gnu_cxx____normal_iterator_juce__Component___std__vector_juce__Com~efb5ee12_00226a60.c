// Function : __inplace_stable_sort<__gnu_cxx::__normal_iterator<juce::Component**,std::vector<juce::Component*,std::allocator<juce::Component*>>>,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component_const*,std::vector<juce::Component*,std::allocator<juce::Component*>>&,bool(juce::Component::*)()const,juce::FocusTraverser::SkipDisabledComponents)::{lambda(juce::Component_const*,juce::Component_const*)#1}>>
// Namespace: std
// Entry    : 00226a60
// Prototype: void __inplace_stable_sort<__gnu_cxx::__normal_iterator<juce::Component**,std::vector<juce::Component*,std::allocator<juce::Component*>>>,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component_const*,std::vector<juce::Component*,std::allocator<juce::Component*>>&,bool(juce::Component::*)()const,juce::FocusTraverser::SkipDisabledComponents)::{lambda(juce::Component_const*,juce::Component_const*)#1}>>(long * param_1, long * param_2)
// Body     : 00226a60 - 00226ad3


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void std::__inplace_stable_sort<__gnu_cxx::__normal_iterator<juce::Component**,
   std::vector<juce::Component*, std::allocator<juce::Component*> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component
   const*, std::vector<juce::Component*, std::allocator<juce::Component*> >&, bool
   (juce::Component::*)() const,
   juce::FocusTraverser::SkipDisabledComponents)::{lambda(juce::Component const*, juce::Component
   const*)#1}> >(__gnu_cxx::__normal_iterator<juce::Component**, std::vector<juce::Component*,
   std::allocator<juce::Component*> > >, __gnu_cxx::__normal_iterator<juce::Component**,
   std::vector<juce::Component*, std::allocator<juce::Component*> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component
   const*, std::vector<juce::Component*, std::allocator<juce::Component*> >&, bool
   (juce::Component::*)() const,
   juce::FocusTraverser::SkipDisabledComponents)::{lambda(juce::Component const*, juce::Component
   const*)#1}>) */

void __cdecl
std::
__inplace_stable_sort<__gnu_cxx::__normal_iterator<juce::Component**,std::vector<juce::Component*,std::allocator<juce::Component*>>>,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component_const*,std::vector<juce::Component*,std::allocator<juce::Component*>>&,bool(juce::Component::*)()const,juce::FocusTraverser::SkipDisabledComponents)::_lambda(juce::Component_const*,juce::Component_const*)_1_>>
          (long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  
  if ((long)param_2 - (long)param_1 < 0x78) {
    __insertion_sort<__gnu_cxx::__normal_iterator<juce::Component**,std::vector<juce::Component*,std::allocator<juce::Component*>>>,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component_const*,std::vector<juce::Component*,std::allocator<juce::Component*>>&,bool(juce::Component::*)()const,juce::FocusTraverser::SkipDisabledComponents)::_lambda(juce::Component_const*,juce::Component_const*)_1_>>
              (param_1,param_2);
    return;
  }
  uVar2 = (ulong)((long)param_2 - (long)param_1) >> 4;
  plVar1 = param_1 + uVar2;
  __inplace_stable_sort<__gnu_cxx::__normal_iterator<juce::Component**,std::vector<juce::Component*,std::allocator<juce::Component*>>>,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component_const*,std::vector<juce::Component*,std::allocator<juce::Component*>>&,bool(juce::Component::*)()const,juce::FocusTraverser::SkipDisabledComponents)::_lambda(juce::Component_const*,juce::Component_const*)_1_>>
            (param_1,plVar1);
  __inplace_stable_sort<__gnu_cxx::__normal_iterator<juce::Component**,std::vector<juce::Component*,std::allocator<juce::Component*>>>,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component_const*,std::vector<juce::Component*,std::allocator<juce::Component*>>&,bool(juce::Component::*)()const,juce::FocusTraverser::SkipDisabledComponents)::_lambda(juce::Component_const*,juce::Component_const*)_1_>>
            (plVar1,param_2);
  __merge_without_buffer<__gnu_cxx::__normal_iterator<juce::Component**,std::vector<juce::Component*,std::allocator<juce::Component*>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component_const*,std::vector<juce::Component*,std::allocator<juce::Component*>>&,bool(juce::Component::*)()const,juce::FocusTraverser::SkipDisabledComponents)::_lambda(juce::Component_const*,juce::Component_const*)_1_>>
            (param_1,plVar1,(long)param_2,uVar2,(long)param_2 - (long)plVar1 >> 3);
  return;
}


