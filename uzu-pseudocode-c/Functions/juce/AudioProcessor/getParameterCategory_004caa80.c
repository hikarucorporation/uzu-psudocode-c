// Function : getParameterCategory
// Namespace: juce:AudioProcessor
// Entry    : 004caa80
// Prototype: undefined8 getParameterCategory(AudioProcessor * this, uint param_1)
// Body     : 004caa80 - 004caaa3


/* juce::AudioProcessor::getParameterCategory(int) const */

undefined8 __thiscall juce::AudioProcessor::getParameterCategory(AudioProcessor *this,uint param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (param_1 < *(uint *)(this + 0x134)) {
    plVar1 = *(long **)(*(long *)(this + 0x128) + (long)(int)param_1 * 8);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004caa9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x78))();
      return uVar2;
    }
  }
  return 0;
}


