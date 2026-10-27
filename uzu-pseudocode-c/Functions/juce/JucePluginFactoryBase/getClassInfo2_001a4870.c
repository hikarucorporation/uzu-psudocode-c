// Function : getClassInfo2
// Namespace: juce:JucePluginFactoryBase
// Entry    : 001a4870
// Prototype: undefined8 getClassInfo2(JucePluginFactoryBase * this, int param_1, void * param_2)
// Body     : 001a4870 - 001a4897


/* juce::JucePluginFactoryBase::getClassInfo2(int, Steinberg::PClassInfo2*) */

undefined8 __thiscall
juce::JucePluginFactoryBase::getClassInfo2(JucePluginFactoryBase *this,int param_1,void *param_2)

{
  undefined1 *__src;
  
  if (param_2 == (void *)0x0) {
    return 2;
  }
  __src = getClassEntry(this,param_1);
  memcpy(param_2,__src,0x1b8);
  return 0;
}


