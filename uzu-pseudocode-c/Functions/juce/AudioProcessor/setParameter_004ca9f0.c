// Function : setParameter
// Namespace: juce:AudioProcessor
// Entry    : 004ca9f0
// Prototype: undefined setParameter(long param_1, uint param_2)
// Body     : 004ca9f0 - 004caa14


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AudioProcessor::setParameter(int, float) */

void __cdecl juce::AudioProcessor::setParameter(long param_1,uint param_2)

{
  long *plVar1;
  
  if (param_2 < *(uint *)(param_1 + 0x134)) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x128) + (long)(int)param_2 * 8);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004caa12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))();
      return;
    }
  }
  return;
}


