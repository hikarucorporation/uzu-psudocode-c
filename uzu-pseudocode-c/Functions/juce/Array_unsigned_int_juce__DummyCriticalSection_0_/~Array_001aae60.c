// Function : ~Array
// Namespace: juce:Array_unsigned_int_juce__DummyCriticalSection_0_
// Entry    : 001aae60
// Prototype: undefined ~Array(Array<unsigned_int,juce::DummyCriticalSection,0> * this)
// Body     : 001aae60 - 001aae6e


/* juce::Array<unsigned int, juce::DummyCriticalSection, 0>::~Array() */

void __thiscall
juce::Array<unsigned_int,juce::DummyCriticalSection,0>::~Array
          (Array<unsigned_int,juce::DummyCriticalSection,0> *this)

{
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  return;
}


