// Function : addRef
// Namespace: juce:JucePluginFactoryBase
// Entry    : 001a4600
// Prototype: int addRef(JucePluginFactoryBase * this)
// Body     : 001a4600 - 001a460d


/* juce::JucePluginFactoryBase::addRef() */

int __thiscall juce::JucePluginFactoryBase::addRef(JucePluginFactoryBase *this)

{
  JucePluginFactoryBase *pJVar1;
  int iVar2;
  
  LOCK();
  pJVar1 = this + 8;
  iVar2 = *(int *)pJVar1;
  *(int *)pJVar1 = *(int *)pJVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}


