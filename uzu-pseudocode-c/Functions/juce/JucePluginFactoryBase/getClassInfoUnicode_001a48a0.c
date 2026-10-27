// Function : getClassInfoUnicode
// Namespace: juce:JucePluginFactoryBase
// Entry    : 001a48a0
// Prototype: undefined8 getClassInfoUnicode(JucePluginFactoryBase * this, int param_1, void * param_2)
// Body     : 001a48a0 - 001a48cb


/* juce::JucePluginFactoryBase::getClassInfoUnicode(int, Steinberg::PClassInfoW*) */

undefined8 __thiscall
juce::JucePluginFactoryBase::getClassInfoUnicode
          (JucePluginFactoryBase *this,int param_1,void *param_2)

{
  undefined1 *puVar1;
  
  if (param_2 == (void *)0x0) {
    return 2;
  }
  puVar1 = getClassEntry(this,param_1);
  memcpy(param_2,puVar1 + 0x1b8,0x2b8);
  return 0;
}


