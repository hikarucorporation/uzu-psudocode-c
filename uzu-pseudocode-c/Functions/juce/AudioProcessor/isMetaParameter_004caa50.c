// Function : isMetaParameter
// Namespace: juce:AudioProcessor
// Entry    : 004caa50
// Prototype: undefined8 isMetaParameter(AudioProcessor * this, uint param_1)
// Body     : 004caa50 - 004caa73


/* juce::AudioProcessor::isMetaParameter(int) const */

undefined8 __thiscall juce::AudioProcessor::isMetaParameter(AudioProcessor *this,uint param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (param_1 < *(uint *)(this + 0x134)) {
    plVar1 = *(long **)(*(long *)(this + 0x128) + (long)(int)param_1 * 8);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004caa6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x70))();
      return uVar2;
    }
  }
  return 0;
}


