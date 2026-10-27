// Function : setValue
// Namespace: juce:AudioParameterBool
// Entry    : 004d14c0
// Prototype: undefined setValue(undefined4 param_1, AudioParameterBool * this)
// Body     : 004d14c0 - 004d14ea


/* juce::AudioParameterBool::setValue(float) */

void __thiscall juce::AudioParameterBool::setValue(undefined4 param_1,AudioParameterBool *this)

{
  LOCK();
  *(undefined4 *)(this + 0xf8) = param_1;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x004d14e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xa0))(this,DAT_005d9044 <= *(float *)(this + 0xf8));
  return;
}


