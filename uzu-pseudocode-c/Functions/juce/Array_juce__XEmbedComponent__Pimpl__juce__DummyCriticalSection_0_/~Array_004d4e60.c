// Function : ~Array
// Namespace: juce:Array_juce__XEmbedComponent__Pimpl__juce__DummyCriticalSection_0_
// Entry    : 004d4e60
// Prototype: undefined ~Array(Array<juce::XEmbedComponent::Pimpl*,juce::DummyCriticalSection,0> * this)
// Body     : 004d4e60 - 004d4e6e


/* juce::Array<juce::XEmbedComponent::Pimpl*, juce::DummyCriticalSection, 0>::~Array() */

void __thiscall
juce::Array<juce::XEmbedComponent::Pimpl*,juce::DummyCriticalSection,0>::~Array
          (Array<juce::XEmbedComponent::Pimpl*,juce::DummyCriticalSection,0> *this)

{
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  return;
}


