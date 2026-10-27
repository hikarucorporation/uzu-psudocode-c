// Function : getResponseCurve
// Namespace: juce:AudioProcessor
// Entry    : 00171fd0
// Prototype: undefined8 * getResponseCurve(undefined8 * param_1)
// Body     : 00171fd0 - 00171ffb


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AudioProcessor::getResponseCurve(juce::AudioProcessor::CurveData::Type) const */

undefined8 * __cdecl juce::AudioProcessor::getResponseCurve(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  juce::String::String((String *)(param_1 + 6));
  juce::String::String((String *)(param_1 + 7));
  return param_1;
}


