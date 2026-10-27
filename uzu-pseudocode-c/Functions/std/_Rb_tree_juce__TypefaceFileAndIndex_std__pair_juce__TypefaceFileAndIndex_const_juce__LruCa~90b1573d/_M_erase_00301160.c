// Function : _M_erase
// Namespace: std:_Rb_tree_juce__TypefaceFileAndIndex_std__pair_juce__TypefaceFileAndIndex_const_juce__LruCa~90b1573d
// Entry    : 00301160
// Prototype: undefined _M_erase(void * param_1)
// Body     : 00301160 - 003011d9


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Rb_tree<juce::TypefaceFileAndIndex, std::pair<juce::TypefaceFileAndIndex const,
   juce::LruCache<juce::TypefaceFileAndIndex, juce::ReferenceCountedObjectPtr<juce::Typeface>,
   128ul>::Pair>, std::_Select1st<std::pair<juce::TypefaceFileAndIndex const,
   juce::LruCache<juce::TypefaceFileAndIndex, juce::ReferenceCountedObjectPtr<juce::Typeface>,
   128ul>::Pair> >, std::less<juce::TypefaceFileAndIndex>,
   std::allocator<std::pair<juce::TypefaceFileAndIndex const,
   juce::LruCache<juce::TypefaceFileAndIndex, juce::ReferenceCountedObjectPtr<juce::Typeface>,
   128ul>::Pair> > >::_M_erase(std::_Rb_tree_node<std::pair<juce::TypefaceFileAndIndex const,
   juce::LruCache<juce::TypefaceFileAndIndex, juce::ReferenceCountedObjectPtr<juce::Typeface>,
   128ul>::Pair> >*) */

void __cdecl
std::
_Rb_tree<juce::TypefaceFileAndIndex,std::pair<juce::TypefaceFileAndIndex_const,juce::LruCache<juce::TypefaceFileAndIndex,juce::ReferenceCountedObjectPtr<juce::Typeface>,128ul>::Pair>,std::_Select1st<std::pair<juce::TypefaceFileAndIndex_const,juce::LruCache<juce::TypefaceFileAndIndex,juce::ReferenceCountedObjectPtr<juce::Typeface>,128ul>::Pair>>,std::less<juce::TypefaceFileAndIndex>,std::allocator<std::pair<juce::TypefaceFileAndIndex_const,juce::LruCache<juce::TypefaceFileAndIndex,juce::ReferenceCountedObjectPtr<juce::Typeface>,128ul>::Pair>>>
::_M_erase(void *param_1)

{
  long *plVar1;
  int iVar2;
  void *pvVar3;
  long *plVar4;
  int *piVar5;
  
  if (param_1 != (void *)0x0) {
    do {
      _M_erase(*(void **)((long)param_1 + 0x18));
      pvVar3 = *(void **)((long)param_1 + 0x10);
      plVar4 = *(long **)((long)param_1 + 0x30);
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
      piVar5 = (int *)(*(long *)((long)param_1 + 0x20) + -0x10);
      if (piVar5 != &juce::emptyString) {
        LOCK();
        iVar2 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          operator_delete__(piVar5);
        }
      }
      operator_delete(param_1);
      param_1 = pvVar3;
    } while (pvVar3 != (void *)0x0);
  }
  return;
}


