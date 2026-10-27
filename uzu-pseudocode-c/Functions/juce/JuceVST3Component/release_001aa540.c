// Function : release
// Namespace: juce:JuceVST3Component
// Entry    : 001aa540
// Prototype: int release(JuceVST3Component * this)
// Body     : 001aa540 - 001aa573


/* non-virtual thunk to juce::JuceVST3Component::release() */

int __thiscall juce::JuceVST3Component::release(JuceVST3Component *this)

{
  JuceVST3Component *pJVar1;
  int iVar2;
  
  LOCK();
  pJVar1 = this + 0x40;
  iVar2 = *(int *)pJVar1;
  *(int *)pJVar1 = *(int *)pJVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 == 0) {
    ~JuceVST3Component(this + -0x20);
    operator_delete(this + -0x20);
  }
  return iVar2 + -1;
}


