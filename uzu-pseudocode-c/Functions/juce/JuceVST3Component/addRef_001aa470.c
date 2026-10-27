// Function : addRef
// Namespace: juce:JuceVST3Component
// Entry    : 001aa470
// Prototype: int addRef(JuceVST3Component * this)
// Body     : 001aa470 - 001aa47d


/* non-virtual thunk to juce::JuceVST3Component::addRef() */

int __thiscall juce::JuceVST3Component::addRef(JuceVST3Component *this)

{
  JuceVST3Component *pJVar1;
  int iVar2;
  
  LOCK();
  pJVar1 = this + 0x48;
  iVar2 = *(int *)pJVar1;
  *(int *)pJVar1 = *(int *)pJVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}


