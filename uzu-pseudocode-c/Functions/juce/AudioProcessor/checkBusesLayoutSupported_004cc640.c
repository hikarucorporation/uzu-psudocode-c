// Function : checkBusesLayoutSupported
// Namespace: juce:AudioProcessor
// Entry    : 004cc640
// Prototype: undefined8 checkBusesLayoutSupported(AudioProcessor * this, long param_1)
// Body     : 004cc640 - 004cc664


/* juce::AudioProcessor::checkBusesLayoutSupported(juce::AudioProcessor::BusesLayout const&) const
    */

undefined8 __thiscall
juce::AudioProcessor::checkBusesLayoutSupported(AudioProcessor *this,long param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0xc) == *(int *)(this + 0xcc)) &&
     (*(int *)(param_1 + 0x1c) == *(int *)(this + 0xdc))) {
                    /* WARNING: Could not recover jumptable at 0x004cc660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(long *)this + 400))();
    return uVar1;
  }
  return 0;
}


