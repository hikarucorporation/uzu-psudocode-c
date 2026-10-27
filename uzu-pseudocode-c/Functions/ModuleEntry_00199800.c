// Function : ModuleEntry
// Namespace: 
// Entry    : 00199800
// Prototype: undefined8 ModuleEntry(undefined8 param_1)
// Body     : 00199800 - 0019981f


undefined8 ModuleEntry(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = juce::moduleEntryCounter;
  juce::moduleEntryCounter = juce::moduleEntryCounter + 1;
  if (iVar1 == 0) {
    juce::moduleHandle = param_1;
    return 1;
  }
  return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
}


