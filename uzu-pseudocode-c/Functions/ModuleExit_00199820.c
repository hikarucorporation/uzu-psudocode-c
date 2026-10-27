// Function : ModuleExit
// Namespace: 
// Entry    : 00199820
// Prototype: undefined1 ModuleExit(void)
// Body     : 00199820 - 00199839


undefined1 ModuleExit(void)

{
  juce::moduleEntryCounter = juce::moduleEntryCounter + -1;
  if (juce::moduleEntryCounter == 0) {
    juce::moduleHandle = 0;
    return 1;
  }
  return 1;
}


