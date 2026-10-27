// Function : createLowLevelContext
// Namespace: juce:SubsectionPixelData
// Entry    : 0032c920
// Prototype: undefined8 * createLowLevelContext(undefined8 * param_1, long param_2)
// Body     : 0032c920 - 0032c95a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::SubsectionPixelData::createLowLevelContext() */

undefined8 * __cdecl
juce::SubsectionPixelData::createLowLevelContext(undefined8 *param_1,long param_2)

{
  (**(code **)(**(long **)(param_2 + 0x50) + 0x10))();
                    /* try { // try from 0032c93e to 0032c94f has its CatchHandler @ 0032c95b */
  (**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,(undefined8 *)(param_2 + 0x58));
  (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,*(undefined8 *)(param_2 + 0x58));
  return param_1;
}


