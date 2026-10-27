// Function : ScopedJuceInitialiser_GUI
// Namespace: juce:ScopedJuceInitialiser_GUI
// Entry    : 004823b0
// Prototype: undefined ScopedJuceInitialiser_GUI(void)
// Body     : 004823b0 - 004823c8


/* juce::ScopedJuceInitialiser_GUI::ScopedJuceInitialiser_GUI() */

void __thiscall juce::ScopedJuceInitialiser_GUI::ScopedJuceInitialiser_GUI(void)

{
  int iVar1;
  
  iVar1 = numScopedInitInstances;
  numScopedInitInstances = numScopedInitInstances + 1;
  if (iVar1 == 0) {
    MessageManager::getInstance();
    return;
  }
  return;
}


