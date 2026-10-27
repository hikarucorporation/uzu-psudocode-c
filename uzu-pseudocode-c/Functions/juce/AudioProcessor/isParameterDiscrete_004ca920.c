// Function : isParameterDiscrete
// Namespace: juce:AudioProcessor
// Entry    : 004ca920
// Prototype: undefined8 isParameterDiscrete(AudioProcessor * this, uint param_1)
// Body     : 004ca920 - 004ca943


/* juce::AudioProcessor::isParameterDiscrete(int) const */

undefined8 __thiscall juce::AudioProcessor::isParameterDiscrete(AudioProcessor *this,uint param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (param_1 < *(uint *)(this + 0x134)) {
    plVar1 = *(long **)(*(long *)(this + 0x128) + (long)(int)param_1 * 8);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004ca93e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x40))();
      return uVar2;
    }
  }
  return 0;
}


