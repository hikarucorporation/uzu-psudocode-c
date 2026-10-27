// Function : release
// Namespace: juce:JuceVST3Component
// Entry    : 001a9f00
// Prototype: int release(JuceVST3Component * this)
// Body     : 001a9f00 - 001a9f33


/* non-virtual thunk to juce::JuceVST3Component::release() */

int __thiscall juce::JuceVST3Component::release(JuceVST3Component *this)

{
  JuceVST3Component *pJVar1;
  int iVar2;
  
  LOCK();
  pJVar1 = this + 0x58;
  iVar2 = *(int *)pJVar1;
  *(int *)pJVar1 = *(int *)pJVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 == 0) {
    ~JuceVST3Component(this + -8);
    operator_delete(this + -8);
  }
  return iVar2 + -1;
}


