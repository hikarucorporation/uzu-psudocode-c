// Function : release
// Namespace: juce:JuceVST3Component
// Entry    : 001a7f10
// Prototype: int release(JuceVST3Component * this)
// Body     : 001a7f10 - 001a7f3c


/* juce::JuceVST3Component::release() */

int __thiscall juce::JuceVST3Component::release(JuceVST3Component *this)

{
  JuceVST3Component *pJVar1;
  int iVar2;
  
  LOCK();
  pJVar1 = this + 0x60;
  iVar2 = *(int *)pJVar1;
  *(int *)pJVar1 = *(int *)pJVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 == 0) {
    ~JuceVST3Component(this);
    operator_delete(this);
  }
  return iVar2 + -1;
}


