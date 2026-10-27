// Function : ~map
// Namespace: std:map_juce__String_juce__LruCache_juce__String_juce__Array_juce__Unicode__Codepoint_juce__Du~b4a63572
// Entry    : 002eb620
// Prototype: undefined8 ~map(void)
// Body     : 002eb620 - 002eb63a


/* std::map<juce::String, juce::LruCache<juce::String, juce::Array<juce::Unicode::Codepoint,
   juce::DummyCriticalSection, 0>, 128ul>::Pair, std::less<juce::String>,
   std::allocator<std::pair<juce::String const, juce::LruCache<juce::String,
   juce::Array<juce::Unicode::Codepoint, juce::DummyCriticalSection, 0>, 128ul>::Pair> > >::~map()
    */

undefined8 __thiscall
std::
map<juce::String,juce::LruCache<juce::String,juce::Array<juce::Unicode::Codepoint,juce::DummyCriticalSection,0>,128ul>::Pair,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::LruCache<juce::String,juce::Array<juce::Unicode::Codepoint,juce::DummyCriticalSection,0>,128ul>::Pair>>>
::~map(void)

{
  undefined8 in_RAX;
  long lVar1;
  
  lVar1 = __tls_get_addr(&PTR_007153d8);
  _Rb_tree<juce::String,std::pair<juce::String_const,juce::LruCache<juce::String,juce::Array<juce::Unicode::Codepoint,juce::DummyCriticalSection,0>,128ul>::Pair>,std::_Select1st<std::pair<juce::String_const,juce::LruCache<juce::String,juce::Array<juce::Unicode::Codepoint,juce::DummyCriticalSection,0>,128ul>::Pair>>,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::LruCache<juce::String,juce::Array<juce::Unicode::Codepoint,juce::DummyCriticalSection,0>,128ul>::Pair>>>
  ::_M_erase(*(void **)(lVar1 + 0x20));
  return in_RAX;
}


