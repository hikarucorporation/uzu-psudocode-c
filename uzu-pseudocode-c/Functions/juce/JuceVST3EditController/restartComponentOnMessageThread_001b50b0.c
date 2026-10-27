// Function : restartComponentOnMessageThread
// Namespace: juce:JuceVST3EditController
// Entry    : 001b50b0
// Prototype: undefined restartComponentOnMessageThread(JuceVST3EditController * this, uint param_1)
// Body     : 001b50b0 - 001b50fd


/* non-virtual thunk to juce::JuceVST3EditController::restartComponentOnMessageThread(int) */

void __thiscall
juce::JuceVST3EditController::restartComponentOnMessageThread
          (JuceVST3EditController *this,uint param_1)

{
  long *plVar1;
  
  if (((param_1 & 0x10000) != 0) && (plVar1 = *(long **)(this + -0x68), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
  }
  plVar1 = *(long **)(this + -0x70);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001b50f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,param_1 & 0xfffeffff);
  return;
}


