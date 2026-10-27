// Function : getFactoryInfo
// Namespace: juce:JucePluginFactoryBase
// Entry    : 001a4630
// Prototype: undefined8 getFactoryInfo(JucePluginFactoryBase * this, void * param_1)
// Body     : 001a4630 - 001a4659


/* juce::JucePluginFactoryBase::getFactoryInfo(Steinberg::PFactoryInfo*) */

undefined8 __thiscall
juce::JucePluginFactoryBase::getFactoryInfo(JucePluginFactoryBase *this,void *param_1)

{
  if (param_1 == (void *)0x0) {
    return 2;
  }
  memcpy(param_1,this + 0xc,0x1c4);
  return 0;
}


