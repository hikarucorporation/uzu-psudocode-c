// Function : isParameterAutomatable
// Namespace: juce:AudioProcessor
// Entry    : 004caa20
// Prototype: undefined8 isParameterAutomatable(AudioProcessor * this, uint param_1)
// Body     : 004caa20 - 004caa43


/* juce::AudioProcessor::isParameterAutomatable(int) const */

undefined8 __thiscall
juce::AudioProcessor::isParameterAutomatable(AudioProcessor *this,uint param_1)

{
  long *plVar1;
  long in_RAX;
  undefined8 uVar2;
  
  if (param_1 < *(uint *)(this + 0x134)) {
    in_RAX = *(long *)(this + 0x128);
    plVar1 = *(long **)(in_RAX + (long)(int)param_1 * 8);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004caa3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x68))();
      return uVar2;
    }
  }
  return CONCAT71((int7)((ulong)in_RAX >> 8),1);
}


