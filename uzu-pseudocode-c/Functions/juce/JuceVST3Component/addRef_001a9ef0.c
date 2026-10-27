// Function : addRef
// Namespace: juce:JuceVST3Component
// Entry    : 001a9ef0
// Prototype: int addRef(JuceVST3Component * this)
// Body     : 001a9ef0 - 001a9efd


/* non-virtual thunk to juce::JuceVST3Component::addRef() */

int __thiscall juce::JuceVST3Component::addRef(JuceVST3Component *this)

{
  JuceVST3Component *pJVar1;
  int iVar2;
  
  LOCK();
  pJVar1 = this + 0x58;
  iVar2 = *(int *)pJVar1;
  *(int *)pJVar1 = *(int *)pJVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}


