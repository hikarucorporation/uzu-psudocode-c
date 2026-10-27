// Function : withInput
// Namespace: juce:AudioProcessor:BusesProperties
// Entry    : 004c77c0
// Prototype: ArrayBase<juce::AudioProcessor::BusProperties,juce::DummyCriticalSection> * withInput(ArrayBase<juce::AudioProcessor::BusProperties,juce::DummyCriticalSection> * param_1, undefined8 * param_2, long * param_3, BigInteger * param_4, undefined1 param_5)
// Body     : 004c77c0 - 004c7820


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AudioProcessor::BusesProperties::withInput(juce::String const&, juce::AudioChannelSet
   const&, bool) const */

ArrayBase<juce::AudioProcessor::BusProperties,juce::DummyCriticalSection> * __cdecl
juce::AudioProcessor::BusesProperties::withInput
          (ArrayBase<juce::AudioProcessor::BusProperties,juce::DummyCriticalSection> *param_1,
          undefined8 *param_2,long *param_3,BigInteger *param_4,undefined1 param_5)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  ArrayBase<juce::AudioProcessor::BusProperties,juce::DummyCriticalSection>::
  addArray<juce::AudioProcessor::BusProperties>
            (param_1,(long *)*param_2,*(int *)((long)param_2 + 0xc));
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  ArrayBase<juce::AudioProcessor::BusProperties,juce::DummyCriticalSection>::
  addArray<juce::AudioProcessor::BusProperties>
            (param_1 + 0x10,(long *)param_2[2],*(int *)((long)param_2 + 0x1c));
                    /* try { // try from 004c77ff to 004c7814 has its CatchHandler @ 004c7821 */
  addBus((BusesProperties *)param_1,'\x01',param_3,param_4,param_5);
  return param_1;
}


