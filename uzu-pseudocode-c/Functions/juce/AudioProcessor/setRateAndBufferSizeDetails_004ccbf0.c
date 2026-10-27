// Function : setRateAndBufferSizeDetails
// Namespace: juce:AudioProcessor
// Entry    : 004ccbf0
// Prototype: undefined setRateAndBufferSizeDetails(undefined8 param_1, AudioProcessor * this, undefined4 param_3)
// Body     : 004ccbf0 - 004ccbf8


/* juce::AudioProcessor::setRateAndBufferSizeDetails(double, int) */

void __thiscall
juce::AudioProcessor::setRateAndBufferSizeDetails
          (undefined8 param_1,AudioProcessor *this,undefined4 param_3)

{
  *(undefined8 *)(this + 0x30) = param_1;
  *(undefined4 *)(this + 0x38) = param_3;
  return;
}


