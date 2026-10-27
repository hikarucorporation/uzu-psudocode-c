// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__Array_juce__KeyListener__juce__DummyCriticalSection_0__std__default_delet~9fbd219b
// Entry    : 002202f0
// Prototype: undefined ~unique_ptr(unique_ptr<juce::Array<juce::KeyListener*,juce::DummyCriticalSection,0>,std::default_delete<juce::Array<juce::KeyListener*,juce::DummyCriticalSection,0>>> * this)
// Body     : 002202f0 - 00220324


/* std::unique_ptr<juce::Array<juce::KeyListener*, juce::DummyCriticalSection, 0>,
   std::default_delete<juce::Array<juce::KeyListener*, juce::DummyCriticalSection, 0> >
   >::~unique_ptr() */

void __thiscall
std::
unique_ptr<juce::Array<juce::KeyListener*,juce::DummyCriticalSection,0>,std::default_delete<juce::Array<juce::KeyListener*,juce::DummyCriticalSection,0>>>
::~unique_ptr(unique_ptr<juce::Array<juce::KeyListener*,juce::DummyCriticalSection,0>,std::default_delete<juce::Array<juce::KeyListener*,juce::DummyCriticalSection,0>>>
              *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)this;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0xc) = 0;
    free((void *)*puVar1);
    operator_delete(puVar1);
  }
  *(undefined8 *)this = 0;
  return;
}


