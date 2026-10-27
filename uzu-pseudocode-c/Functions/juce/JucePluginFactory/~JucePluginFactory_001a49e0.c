// Function : ~JucePluginFactory
// Namespace: juce:JucePluginFactory
// Entry    : 001a49e0
// Prototype: undefined ~JucePluginFactory(JucePluginFactory * this)
// Body     : 001a49e0 - 001a4a10


/* juce::JucePluginFactory::~JucePluginFactory() */

void __thiscall juce::JucePluginFactory::~JucePluginFactory(JucePluginFactory *this)

{
  if (*(long **)(this + 0x1d8) != (long *)0x0) {
                    /* try { // try from 001a49f3 to 001a49f5 has its CatchHandler @ 001a4a19 */
    (**(code **)(**(long **)(this + 0x1d8) + 0x10))();
  }
  if (*(long **)(this + 0x1d0) != (long *)0x0) {
                    /* try { // try from 001a4a05 to 001a4a07 has its CatchHandler @ 001a4a11 */
    (**(code **)(**(long **)(this + 0x1d0) + 0x10))();
  }
  operator_delete(this);
  return;
}


