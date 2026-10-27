// Function : setValue
// Namespace: juce:AudioParameterFloat
// Entry    : 004d0200
// Prototype: undefined setValue(undefined8 param_1, AudioParameterFloat * this)
// Body     : 004d0200 - 004d022a


/* juce::AudioParameterFloat::setValue(float) */

void __thiscall juce::AudioParameterFloat::setValue(undefined8 param_1,AudioParameterFloat *this)

{
  ulong uVar1;
  
  uVar1 = RangedAudioParameter::convertFrom0to1(param_1,(RangedAudioParameter *)this);
  LOCK();
  *(int *)(this + 0xf8) = (int)uVar1;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x004d0229. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xa0))(*(undefined4 *)(this + 0xf8),this);
  return;
}


