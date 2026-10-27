// Function : __merge_without_buffer<__gnu_cxx::__normal_iterator<juce::Component**,std::vector<juce::Component*,std::allocator<juce::Component*>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component_const*,std::vector<juce::Component*,std::allocator<juce::Component*>>&,bool(juce::Component::*)()const,juce::FocusTraverser::SkipDisabledComponents)::{lambda(juce::Component_const*,juce::Component_const*)#1}>>
// Namespace: std
// Entry    : 0022b250
// Prototype: void __merge_without_buffer<__gnu_cxx::__normal_iterator<juce::Component**,std::vector<juce::Component*,std::allocator<juce::Component*>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component_const*,std::vector<juce::Component*,std::allocator<juce::Component*>>&,bool(juce::Component::*)()const,juce::FocusTraverser::SkipDisabledComponents)::{lambda(juce::Component_const*,juce::Component_const*)#1}>>(long * param_1, long * param_2, long param_3, long param_4, long param_5)
// Body     : 0022b250 - 0022b42a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void std::__merge_without_buffer<__gnu_cxx::__normal_iterator<juce::Component**,
   std::vector<juce::Component*, std::allocator<juce::Component*> > >, long,
   __gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component
   const*, std::vector<juce::Component*, std::allocator<juce::Component*> >&, bool
   (juce::Component::*)() const,
   juce::FocusTraverser::SkipDisabledComponents)::{lambda(juce::Component const*, juce::Component
   const*)#1}> >(__gnu_cxx::__normal_iterator<juce::Component**, std::vector<juce::Component*,
   std::allocator<juce::Component*> > >, __gnu_cxx::__normal_iterator<juce::Component**,
   std::vector<juce::Component*, std::allocator<juce::Component*> > >,
   __gnu_cxx::__normal_iterator<juce::Component**, std::vector<juce::Component*,
   std::allocator<juce::Component*> > >, long, long,
   __gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component
   const*, std::vector<juce::Component*, std::allocator<juce::Component*> >&, bool
   (juce::Component::*)() const,
   juce::FocusTraverser::SkipDisabledComponents)::{lambda(juce::Component const*, juce::Component
   const*)#1}>) */

void __cdecl
std::
__merge_without_buffer<__gnu_cxx::__normal_iterator<juce::Component**,std::vector<juce::Component*,std::allocator<juce::Component*>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component_const*,std::vector<juce::Component*,std::allocator<juce::Component*>>&,bool(juce::Component::*)()const,juce::FocusTraverser::SkipDisabledComponents)::_lambda(juce::Component_const*,juce::Component_const*)_1_>>
          (long *param_1,long *param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  while( true ) {
    if (param_4 == 0) {
      return;
    }
    if (param_5 == 0) break;
    if (param_5 + param_4 == 2) {
      uVar2 = __gnu_cxx::__ops::
              _Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component_const*,std::vector<juce::Component*,std::allocator<juce::Component*>>&,bool(juce::Component::*)()const,juce::FocusTraverser::SkipDisabledComponents)::{lambda(juce::Component_const*,juce::Component_const*)#1}>
              ::operator()(*param_2,*param_1);
      if ((char)uVar2 != '\0') {
        lVar5 = *param_1;
        *param_1 = *param_2;
        *param_2 = lVar5;
      }
      return;
    }
    if (param_5 < param_4) {
      lVar6 = param_4 / 2;
      plVar7 = param_1 + lVar6;
      plVar8 = param_2;
      if (0 < param_3 - (long)param_2) {
        uVar4 = (ulong)(param_3 - (long)param_2) >> 3;
        do {
          uVar3 = uVar4 >> 1;
          uVar2 = __gnu_cxx::__ops::
                  _Iter_comp_val<juce::detail::FocusHelpers::findAllComponents(juce::Component_const*,std::vector<juce::Component*,std::allocator<juce::Component*>>&,bool(juce::Component::*)()const,juce::FocusTraverser::SkipDisabledComponents)::{lambda(juce::Component_const*,juce::Component_const*)#1}>
                  ::operator()(plVar8[uVar3],*plVar7);
          if ((char)uVar2 != '\0') {
            plVar8 = plVar8 + uVar3 + 1;
            uVar3 = ~uVar3 + uVar4;
          }
          uVar4 = uVar3;
        } while (0 < (long)uVar3);
      }
      lVar5 = (long)plVar8 - (long)param_2 >> 3;
    }
    else {
      lVar5 = param_5 / 2;
      plVar8 = param_2 + lVar5;
      plVar7 = param_1;
      if (0 < (long)param_2 - (long)param_1) {
        uVar4 = (ulong)((long)param_2 - (long)param_1) >> 3;
        do {
          uVar3 = uVar4 >> 1;
          uVar2 = __gnu_cxx::__ops::
                  _Val_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component_const*,std::vector<juce::Component*,std::allocator<juce::Component*>>&,bool(juce::Component::*)()const,juce::FocusTraverser::SkipDisabledComponents)::{lambda(juce::Component_const*,juce::Component_const*)#1}>
                  ::operator()(*plVar8,plVar7[uVar3]);
          if ((char)uVar2 == '\0') {
            plVar7 = plVar7 + uVar3 + 1;
            uVar3 = ~uVar3 + uVar4;
          }
          uVar4 = uVar3;
        } while (0 < (long)uVar3);
      }
      lVar6 = (long)plVar7 - (long)param_1 >> 3;
    }
    plVar1 = _V2::
             __rotate<__gnu_cxx::__normal_iterator<juce::Component**,std::vector<juce::Component*,std::allocator<juce::Component*>>>>
                       (plVar7,param_2,plVar8);
    __merge_without_buffer<__gnu_cxx::__normal_iterator<juce::Component**,std::vector<juce::Component*,std::allocator<juce::Component*>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::FocusHelpers::findAllComponents(juce::Component_const*,std::vector<juce::Component*,std::allocator<juce::Component*>>&,bool(juce::Component::*)()const,juce::FocusTraverser::SkipDisabledComponents)::_lambda(juce::Component_const*,juce::Component_const*)_1_>>
              (param_1,plVar7,(long)plVar1,lVar6,lVar5);
    param_4 = param_4 - lVar6;
    param_5 = param_5 - lVar5;
    param_1 = plVar1;
    param_2 = plVar8;
  }
  return;
}


