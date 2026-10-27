// Function : ~_Tuple_impl
// Namespace: std:_Tuple_impl_0ul_juce__String_juce__String_juce__Typeface__std__vector_juce__String_std__al~e32b3882
// Entry    : 00305ab0
// Prototype: undefined ~_Tuple_impl(_Tuple_impl<0ul,juce::String,juce::String,juce::Typeface*,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool> * this)
// Body     : 00305ab0 - 00305b8b


/* std::_Tuple_impl<0ul, juce::String, juce::String, juce::Typeface*, std::vector<juce::String,
   std::allocator<juce::String> >, std::vector<juce::FontFeatureSetting,
   std::allocator<juce::FontFeatureSetting> >, juce::TypefaceMetricsKind, float, float, float,
   float, float, float, bool, bool>::~_Tuple_impl() */

void __thiscall
std::
_Tuple_impl<0ul,juce::String,juce::String,juce::Typeface*,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool>
::~_Tuple_impl(_Tuple_impl<0ul,juce::String,juce::String,juce::Typeface*,std::vector<juce::String,std::allocator<juce::String>>,std::vector<juce::FontFeatureSetting,std::allocator<juce::FontFeatureSetting>>,juce::TypefaceMetricsKind,float,float,float,float,float,float,bool,bool>
               *this)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  int *piVar5;
  
  piVar5 = (int *)(*(long *)(this + 0x60) + -0x10);
  if (piVar5 != &juce::emptyString) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar5);
      lVar2 = *(long *)(this + 0x58);
      goto joined_r0x00305b0d;
    }
  }
  lVar2 = *(long *)(this + 0x58);
joined_r0x00305b0d:
  piVar5 = (int *)(lVar2 + -0x10);
  if (piVar5 != &juce::emptyString) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar5);
    }
  }
  plVar4 = *(long **)(this + 0x38);
  plVar3 = *(long **)(this + 0x40);
  if (plVar4 != plVar3) {
    do {
      piVar5 = (int *)(*plVar4 + -0x10);
      if (piVar5 != &juce::emptyString) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar5);
        }
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar3);
    plVar4 = *(long **)(this + 0x38);
  }
  if (plVar4 != (long *)0x0) {
    operator_delete(plVar4);
  }
  if (*(void **)(this + 0x20) == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)(this + 0x20));
  return;
}


