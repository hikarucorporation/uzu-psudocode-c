// Function : createInstance
// Namespace: juce:JucePluginFactory
// Entry    : 001a4800
// Prototype: ulong createInstance(JucePluginFactory * this, char * param_1, undefined8 * param_2, undefined8 * param_3)
// Body     : 001a4800 - 001a4852


/* juce::JucePluginFactory::createInstance(char const*, char const*, void**) */

ulong __thiscall
juce::JucePluginFactory::createInstance
          (JucePluginFactory *this,char *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  ScopedRunLoop local_50 [48];
  
  ScopedRunLoop::ScopedRunLoop(local_50,(long *)(this + 0x1d0));
                    /* try { // try from 001a4828 to 001a4838 has its CatchHandler @ 001a4853 */
  uVar1 = JucePluginFactoryBase::createInstance
                    ((JucePluginFactoryBase *)this,param_1,param_2,param_3);
  ScopedRunLoop::~ScopedRunLoop(local_50);
  return uVar1 & 0xffffffff;
}


