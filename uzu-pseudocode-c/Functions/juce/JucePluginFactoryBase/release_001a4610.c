// Function : release
// Namespace: juce:JucePluginFactoryBase
// Entry    : 001a4610
// Prototype: int release(JucePluginFactoryBase * this)
// Body     : 001a4610 - 001a462d


/* juce::JucePluginFactoryBase::release() */

int __thiscall juce::JucePluginFactoryBase::release(JucePluginFactoryBase *this)

{
  JucePluginFactoryBase *pJVar1;
  int iVar2;
  
  LOCK();
  pJVar1 = this + 8;
  iVar2 = *(int *)pJVar1;
  *(int *)pJVar1 = *(int *)pJVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 == 0) {
    (**(code **)(*(long *)this + 0x58))();
    return 0;
  }
  return iVar2 + -1;
}


