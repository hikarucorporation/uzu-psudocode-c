// Function : toPlain
// Namespace: juce:JuceVST3EditController:ProgramChangeParameter
// Entry    : 001b02c0
// Prototype: double toPlain(double param_1, ProgramChangeParameter * this)
// Body     : 001b02c0 - 001b02e1


/* juce::JuceVST3EditController::ProgramChangeParameter::toPlain(double) const */

double __thiscall
juce::JuceVST3EditController::ProgramChangeParameter::toPlain
          (double param_1,ProgramChangeParameter *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x314);
  iVar2 = (int)((double)(iVar1 + 1) * param_1);
  if (iVar2 < iVar1) {
    iVar1 = iVar2;
  }
  return (double)iVar1;
}


