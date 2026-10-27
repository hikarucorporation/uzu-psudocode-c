// Function : ~LruCache
// Namespace: juce:LruCache_juce__String_juce__Array_juce__Unicode__Codepoint_juce__DummyCriticalSection_0__1~d3c7099d
// Entry    : 002eb170
// Prototype: undefined ~LruCache(LruCache<juce::String,juce::Array<juce::Unicode::Codepoint,juce::DummyCriticalSection,0>,128ul> * this)
// Body     : 002eb170 - 002eb1be


/* juce::LruCache<juce::String, juce::Array<juce::Unicode::Codepoint, juce::DummyCriticalSection,
   0>, 128ul>::~LruCache() */

void __thiscall
juce::
LruCache<juce::String,juce::Array<juce::Unicode::Codepoint,juce::DummyCriticalSection,0>,128ul>::
~LruCache(LruCache<juce::String,juce::Array<juce::Unicode::Codepoint,juce::DummyCriticalSection,0>,128ul>
          *this)

{
  LruCache<juce::String,juce::Array<juce::Unicode::Codepoint,juce::DummyCriticalSection,0>,128ul>
  *pLVar1;
  LruCache<juce::String,juce::Array<juce::Unicode::Codepoint,juce::DummyCriticalSection,0>,128ul>
  *pLVar2;
  
  if (*(void **)(this + 0x50) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x50));
  }
  *(undefined8 *)(this + 0x50) = 0;
  pLVar2 = *(LruCache<juce::String,juce::Array<juce::Unicode::Codepoint,juce::DummyCriticalSection,0>,128ul>
             **)(this + 0x30);
  while (pLVar2 != this + 0x30) {
    pLVar1 = *(LruCache<juce::String,juce::Array<juce::Unicode::Codepoint,juce::DummyCriticalSection,0>,128ul>
               **)pLVar2;
    operator_delete(pLVar2);
    pLVar2 = pLVar1;
  }
  std::
  _Rb_tree<juce::String,std::pair<juce::String_const,juce::LruCache<juce::String,juce::Array<juce::Unicode::Codepoint,juce::DummyCriticalSection,0>,128ul>::Pair>,std::_Select1st<std::pair<juce::String_const,juce::LruCache<juce::String,juce::Array<juce::Unicode::Codepoint,juce::DummyCriticalSection,0>,128ul>::Pair>>,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::LruCache<juce::String,juce::Array<juce::Unicode::Codepoint,juce::DummyCriticalSection,0>,128ul>::Pair>>>
  ::_M_erase(*(void **)(this + 0x10));
  return;
}


