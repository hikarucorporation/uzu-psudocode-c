// Function : setContentScaleFactor
// Namespace: juce:JuceVST3EditController:JuceVST3Editor
// Entry    : 001b7110
// Prototype: undefined8 setContentScaleFactor(uint param_1, JuceVST3Editor * this)
// Body     : 001b7110 - 001b7150


/* non-virtual thunk to juce::JuceVST3EditController::JuceVST3Editor::setContentScaleFactor(float)
    */

undefined8 __thiscall
juce::JuceVST3EditController::JuceVST3Editor::setContentScaleFactor
          (uint param_1,JuceVST3Editor *this)

{
  applyScaleFactor(*(float *)(this + 0xa0),(long)(this + -0x48),
                   (ulong)param_1 | *(ulong *)(this + 0x98) & 0xffffff0000000000 | 0x100000000);
  return 0;
}


