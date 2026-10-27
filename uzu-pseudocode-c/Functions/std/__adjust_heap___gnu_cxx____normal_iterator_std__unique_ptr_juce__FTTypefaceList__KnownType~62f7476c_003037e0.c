// Function : __adjust_heap<__gnu_cxx::__normal_iterator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>*,std::vector<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>,std::allocator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>>>>,long,std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>,__gnu_cxx::__ops::_Iter_comp_iter<juce::FTTypefaceList::scanFontPaths(juce::StringArray_const&)::{lambda(auto:1_const&,auto:2_const&)#1}>>
// Namespace: std
// Entry    : 003037e0
// Prototype: void __adjust_heap<__gnu_cxx::__normal_iterator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>*,std::vector<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>,std::allocator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>>>>,long,std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>,__gnu_cxx::__ops::_Iter_comp_iter<juce::FTTypefaceList::scanFontPaths(juce::StringArray_const&)::{lambda(auto:1_const&,auto:2_const&)#1}>>(long param_1, long param_2, ulong param_3, long * param_4)
// Body     : 003037e0 - 0030397f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void 
   std::__adjust_heap<__gnu_cxx::__normal_iterator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,
   std::default_delete<juce::FTTypefaceList::KnownTypeface> >*,
   std::vector<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,
   std::default_delete<juce::FTTypefaceList::KnownTypeface> >,
   std::allocator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,
   std::default_delete<juce::FTTypefaceList::KnownTypeface> > > > >, long,
   std::unique_ptr<juce::FTTypefaceList::KnownTypeface,
   std::default_delete<juce::FTTypefaceList::KnownTypeface> >,
   __gnu_cxx::__ops::_Iter_comp_iter<juce::FTTypefaceList::scanFontPaths(juce::StringArray
   const&)::{lambda(auto:1 const&, auto:2 const&)#1}>
   >(__gnu_cxx::__normal_iterator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,
   std::default_delete<juce::FTTypefaceList::KnownTypeface> >*,
   std::vector<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,
   std::default_delete<juce::FTTypefaceList::KnownTypeface> >,
   std::allocator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,
   std::default_delete<juce::FTTypefaceList::KnownTypeface> > > > >, long, long,
   std::unique_ptr<juce::FTTypefaceList::KnownTypeface,
   std::default_delete<juce::FTTypefaceList::KnownTypeface> >,
   __gnu_cxx::__ops::_Iter_comp_iter<juce::FTTypefaceList::scanFontPaths(juce::StringArray
   const&)::{lambda(auto:1 const&, auto:2 const&)#1}>) */

void __cdecl
std::
__adjust_heap<__gnu_cxx::__normal_iterator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>*,std::vector<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>,std::allocator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>>>>,long,std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>,__gnu_cxx::__ops::_Iter_comp_iter<juce::FTTypefaceList::scanFontPaths(juce::StringArray_const&)::_lambda(auto:1_const&,auto:2_const&)_1_>>
          (long param_1,long param_2,ulong param_3,long *param_4)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_38;
  
  lVar5 = (long)((param_3 - ((long)(param_3 - 1) >> 0x3f)) + -1) >> 1;
  lVar6 = param_2;
  if (param_2 < lVar5) {
    lVar4 = param_2;
    do {
      uVar3 = juce::FTTypefaceList::scanFontPaths(juce::StringArray_const&)::
              {lambda(auto:1_const&,auto:2_const&)#1}::operator()
                        (*(long *)(param_1 + 0x10 + lVar4 * 0x10),
                         (long *)(lVar4 * 0x10 + 8 + param_1));
      if ((char)uVar3 == '\0') {
        lVar6 = lVar4 * 2 + 2;
      }
      else {
        lVar6 = lVar4 * 2 + 1;
      }
      uVar1 = *(undefined8 *)(param_1 + lVar6 * 8);
      *(undefined8 *)(param_1 + lVar6 * 8) = 0;
      plVar2 = *(long **)(param_1 + lVar4 * 8);
      *(undefined8 *)(param_1 + lVar4 * 8) = uVar1;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      lVar4 = lVar6;
    } while (lVar6 < lVar5);
  }
  if (((param_3 & 1) == 0) && (lVar6 == (long)((param_3 - ((long)(param_3 - 2) >> 0x3f)) + -2) >> 1)
     ) {
    lVar5 = lVar6 * 2 + 1;
    uVar1 = *(undefined8 *)(param_1 + 8 + lVar6 * 0x10);
    *(undefined8 *)(param_1 + 8 + lVar6 * 0x10) = 0;
    plVar2 = *(long **)(param_1 + lVar6 * 8);
    *(undefined8 *)(param_1 + lVar6 * 8) = uVar1;
    lVar6 = lVar5;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  lVar5 = *param_4;
  *param_4 = 0;
  if (param_2 < lVar6) {
    local_38 = lVar5;
    do {
      lVar4 = (lVar6 - (lVar6 + -1 >> 0x3f)) + -1 >> 1;
      uVar3 = juce::FTTypefaceList::scanFontPaths(juce::StringArray_const&)::
              {lambda(auto:1_const&,auto:2_const&)#1}::operator()
                        (*(long *)(param_1 + lVar4 * 8),&local_38);
      if ((char)uVar3 == '\0') goto LAB_00303942;
      uVar1 = *(undefined8 *)(param_1 + lVar4 * 8);
      *(undefined8 *)(param_1 + lVar4 * 8) = 0;
      plVar2 = *(long **)(param_1 + lVar6 * 8);
      *(undefined8 *)(param_1 + lVar6 * 8) = uVar1;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      lVar6 = lVar4;
    } while (param_2 < lVar4);
  }
  else {
LAB_00303942:
    lVar4 = lVar6;
  }
  local_38 = 0;
  plVar2 = *(long **)(param_1 + lVar4 * 8);
  *(long *)(param_1 + lVar4 * 8) = lVar5;
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0030396e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 8))();
  return;
}


