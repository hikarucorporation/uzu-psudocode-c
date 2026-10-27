// Function : setValue
// Namespace: juce:AudioParameterInt
// Entry    : 004d0ac0
// Prototype: undefined setValue(undefined8 param_1, AudioParameterInt * this)
// Body     : 004d0ac0 - 004d0afb


/* juce::AudioParameterInt::setValue(float) */

void __thiscall juce::AudioParameterInt::setValue(undefined8 param_1,AudioParameterInt *this)

{
  ulong uVar1;
  
  uVar1 = RangedAudioParameter::convertFrom0to1(param_1,(RangedAudioParameter *)this);
  LOCK();
  *(int *)(this + 0xf8) = (int)uVar1;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x004d0afa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xa0))(this,(double)*(float *)(this + 0xf8) + DAT_005d9098);
  return;
}


