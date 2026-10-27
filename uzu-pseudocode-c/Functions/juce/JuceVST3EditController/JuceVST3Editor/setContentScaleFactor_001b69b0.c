// Function : setContentScaleFactor
// Namespace: juce:JuceVST3EditController:JuceVST3Editor
// Entry    : 001b69b0
// Prototype: undefined8 setContentScaleFactor(uint param_1, JuceVST3Editor * this)
// Body     : 001b69b0 - 001b69e9


/* juce::JuceVST3EditController::JuceVST3Editor::setContentScaleFactor(float) */

undefined8 __thiscall
juce::JuceVST3EditController::JuceVST3Editor::setContentScaleFactor
          (uint param_1,JuceVST3Editor *this)

{
  applyScaleFactor(*(float *)(this + 0xe8),(long)this,
                   (ulong)param_1 | *(ulong *)(this + 0xe0) & 0xffffff0000000000 | 0x100000000);
  return 0;
}


