// Function : ~JucePluginFactory
// Namespace: juce:JucePluginFactory
// Entry    : 001a49a0
// Prototype: undefined ~JucePluginFactory(JucePluginFactory * this)
// Body     : 001a49a0 - 001a49c9


/* juce::JucePluginFactory::~JucePluginFactory() */

void __thiscall juce::JucePluginFactory::~JucePluginFactory(JucePluginFactory *this)

{
  if (*(long **)(this + 0x1d8) != (long *)0x0) {
                    /* try { // try from 001a49b3 to 001a49b5 has its CatchHandler @ 001a49d2 */
    (**(code **)(**(long **)(this + 0x1d8) + 0x10))();
  }
  if (*(long **)(this + 0x1d0) != (long *)0x0) {
                    /* try { // try from 001a49c5 to 001a49c7 has its CatchHandler @ 001a49ca */
    (**(code **)(**(long **)(this + 0x1d0) + 0x10))();
  }
  return;
}


