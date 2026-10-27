// Function : _M_erase
// Namespace: std:_Rb_tree_juce__String_std__pair_juce__String_const_juce__LruCache_juce__String_juce__Array~8777ff1a
// Entry    : 002eb5a0
// Prototype: undefined _M_erase(void * param_1)
// Body     : 002eb5a0 - 002eb613


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Rb_tree<juce::String, std::pair<juce::String const, juce::LruCache<juce::String,
   juce::Array<juce::Unicode::Codepoint, juce::DummyCriticalSection, 0>, 128ul>::Pair>,
   std::_Select1st<std::pair<juce::String const, juce::LruCache<juce::String,
   juce::Array<juce::Unicode::Codepoint, juce::DummyCriticalSection, 0>, 128ul>::Pair> >,
   std::less<juce::String>, std::allocator<std::pair<juce::String const,
   juce::LruCache<juce::String, juce::Array<juce::Unicode::Codepoint, juce::DummyCriticalSection,
   0>, 128ul>::Pair> > >::_M_erase(std::_Rb_tree_node<std::pair<juce::String const,
   juce::LruCache<juce::String, juce::Array<juce::Unicode::Codepoint, juce::DummyCriticalSection,
   0>, 128ul>::Pair> >*) */

void __cdecl
std::
_Rb_tree<juce::String,std::pair<juce::String_const,juce::LruCache<juce::String,juce::Array<juce::Unicode::Codepoint,juce::DummyCriticalSection,0>,128ul>::Pair>,std::_Select1st<std::pair<juce::String_const,juce::LruCache<juce::String,juce::Array<juce::Unicode::Codepoint,juce::DummyCriticalSection,0>,128ul>::Pair>>,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::LruCache<juce::String,juce::Array<juce::Unicode::Codepoint,juce::DummyCriticalSection,0>,128ul>::Pair>>>
::_M_erase(void *param_1)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  
  if (param_1 != (void *)0x0) {
    do {
      _M_erase(*(void **)((long)param_1 + 0x18));
      pvVar2 = *(void **)((long)param_1 + 0x10);
      *(undefined4 *)((long)param_1 + 0x34) = 0;
      free(*(void **)((long)param_1 + 0x28));
      piVar3 = (int *)(*(long *)((long)param_1 + 0x20) + -0x10);
      if (piVar3 != &juce::emptyString) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar3);
        }
      }
      operator_delete(param_1);
      param_1 = pvVar2;
    } while (pvVar2 != (void *)0x0);
  }
  return;
}


