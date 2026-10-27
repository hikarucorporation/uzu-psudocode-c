// Function : toNormalized
// Namespace: juce:JuceVST3EditController:ProgramChangeParameter
// Entry    : 001b02f0
// Prototype: double toNormalized(double param_1, ProgramChangeParameter * this)
// Body     : 001b02f0 - 001b02fc


/* juce::JuceVST3EditController::ProgramChangeParameter::toNormalized(double) const */

double __thiscall
juce::JuceVST3EditController::ProgramChangeParameter::toNormalized
          (double param_1,ProgramChangeParameter *this)

{
  return param_1 / (double)*(int *)(this + 0x314);
}


