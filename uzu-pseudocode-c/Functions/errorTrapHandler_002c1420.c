// Function : errorTrapHandler
// Namespace: 
// Entry    : 002c1420
// Prototype: undefined8 errorTrapHandler(undefined8 param_1, long param_2)
// Body     : 002c1420 - 002c142c


undefined8 errorTrapHandler(undefined8 param_1,long param_2)

{
  juce::XSHMHelpers::trappedErrorCode = (uint)*(byte *)(param_2 + 0x20);
  return 0;
}


