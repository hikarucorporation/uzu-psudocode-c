// Function : getParameter
// Namespace: juce:AudioProcessor
// Entry    : 004ca500
// Prototype: undefined8 getParameter(AudioProcessor * this, uint param_2)
// Body     : 004ca500 - 004ca524


/* juce::AudioProcessor::getParameter(int) */

undefined8 __thiscall juce::AudioProcessor::getParameter(AudioProcessor *this,uint param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (param_2 < *(uint *)(this + 0x134)) {
    plVar1 = *(long **)(*(long *)(this + 0x128) + (long)(int)param_2 * 8);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004ca51e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x10))();
      return uVar2;
    }
  }
  return 0;
}


